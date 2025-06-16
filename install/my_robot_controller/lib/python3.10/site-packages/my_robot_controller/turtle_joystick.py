#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from rclpy.duration import Duration
from geometry_msgs.msg import Twist
from sensor_msgs.msg import  Joy
from std_srvs.srv import Empty
from turtlesim.srv import Spawn , Kill
import math

duration = Duration(seconds=math.pi)

class TurtleControl(Node):
    def __init__(self):
        super().__init__('turtle_control')
        self.joy_stick_subscriber_ = self.create_subscription(Joy,'/joy',self.joy_stick_data,10) 
        self.turtle_control_publisher_ = self.create_publisher(Twist,'/turtle1/cmd_vel',10)

        # service to reset 
        self.reset_client = self.create_client(Empty,'/reset')

        while not self.reset_client.wait_for_service(1.0):
            self.get_logger().info('Waiting reset server')

        # service to respawn
        self.respawn_client = self.create_client(Spawn,'/spawn')

        while not self.respawn_client.wait_for_service(1.0):
            self.get_logger().info('Waiting respawn server')



        # the service to kill turtle
        self.kill_service = self.create_client(Kill,'/kill')
        while not self.kill_service.wait_for_service(1.0):
            pass
        self.kill_request = Kill.Request()
        


    def joy_stick_data(self,msg:Joy):
        twist = Twist()

        # mapping the movement       
        twist.linear.x = -msg.axes[1]
        twist.angular.z = -msg.axes[3]

        #mapping the dpad for rotations
        if len(msg.buttons) > 6 and len(msg.axes) > 6  and msg.axes[6] != 0:
            # start = self.get_clock().now()
            # elapsed = self.get_clock().now()-start
            # while elapsed < duration:
            #     twist.angular.z  = msg.axes[6]
            twist.angular.z = msg.axes[6]
        else:
            twist.angular.z = 0.0
            


        #functionalities for buttons
        if len(msg.buttons) > 2 and msg.buttons[2]:  # for resetting turtle to start position
            self.get_logger().info('Turtle Resetting')
            self.reset_position()

        if len(msg.buttons) > 1 and  msg.buttons[1]:  # for respawn to set position and orientation
            self.get_logger().info('Turtle Respawning')
            self.respawn(0,0,0)

        self.turtle_control_publisher_.publish(twist)

    def reset_position(self):
        request = Empty()
        future = self.reset_client.call_async(request)
        future.add_done_callback(self.check_response)


    def respawn(self,x,y,theta):
        request = Spawn().Request()
        request.x = x
        request.y = y
        request.theta = theta 
        request.name = 'turtle1'

        self.kill_request.name = 'turtle1'
        self.kill_service.call_async(self.kill_request)
        future = self.respawn_client.call_async(request)
        future.add_done_callback(self.check_response)
       
        
        
    def check_response(self,response):
        try:
            r = response.result()
            self.get_logger().info(r)
        except Exception as e:
            self.get_logger().error(e)

        



def main(args=None):

    rclpy.init(args=args)
    node = TurtleControl()
    rclpy.spin(node)
    rclpy.shutdown()



if __name__ == '__main__':
    main()



