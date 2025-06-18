#!/usr/bin/env python3

import rclpy
import time
from rclpy.node import Node
from rclpy.duration import Duration
from geometry_msgs.msg import Twist
from sensor_msgs.msg import  Joy
from std_srvs.srv import Empty
from turtlesim.srv import Spawn , Kill
import math



class TurtleControl(Node):
    def __init__(self):
        super().__init__('turtle_control')
        self.joy_stick_subscriber_ = self.create_subscription(Joy,'/joy',self.joy_stick_data,10) 
        self.turtle_control_publisher_ = self.create_publisher(Twist,'/turtle1/cmd_vel',10)
        self.rotation_timer = None
        self.rotation_time = 0.0
        self.rotation_duration = 0.0
        self.rotation_twist = Twist()

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
         
        


    def joy_stick_data(self,msg:Joy):
        twist = Twist()
 
        # mapping the movement       
        twist.linear.x = -msg.axes[1]
        twist.angular.z = -msg.axes[2]


        #functionalities for buttons
        if len(msg.buttons) > 3 and msg.buttons[3]:  # for resetting turtle to start position
            self.get_logger().info('Turtle Resetting')
            self.reset_position()

        if len(msg.buttons) > 1 and  msg.buttons[1]:  # for respawn to set position and orientation
            self.get_logger().info('Turtle Respawning')
            self.respawn(1.0,1.0,0.0)

        # D-pad up for 180-degree rotation
        if len(msg.axes) > 6 and msg.axes[6]:
            self.get_logger().info('D-pad up pressed: Rotating turtle 180 degrees')
            self.rotate_180(msg.axes[6])

        self.turtle_control_publisher_.publish(twist)



    def rotate_180(self,dpad_value):
        angular_speed = 1.0 
        duration = Duration(seconds=math.pi)

        if dpad_value == -1:
            self.get_logger().info('Rotating turtle 180 degrees')         
            self.rotation_twist.angular.z = angular_speed

        else:
            self.get_logger().info('Rotating turtle -180 degrees')         
            self.rotation_twist.angular.z = -angular_speed


        self.rotation_time = 0.0
        if self.rotation_timer is not None:
            self.rotation_timer.cancel()
        self.rotation_timer = self.create_timer(0.05, self._rotation_timer_callback)

    def _rotation_timer_callback(self):
        self.turtle_control_publisher_.publish(self.rotation_twist)
        self.rotation_time += 0.05
        if self.rotation_time >= self.rotation_duration:
            # Stop rotation
            stop_twist = Twist()
            self.turtle_control_publisher_.publish(stop_twist)
            self.rotation_timer.cancel()
            self.rotation_timer = None



    def reset_position(self):
        request = Empty.Request()
        future = self.reset_client.call_async(request)

        def after_reset(future):
            if future.result() is not None:
                self.get_logger().info('Turtle position reset successfully')
            else:
                self.get_logger().error('Failed to reset turtle position')
        future.add_done_callback(after_reset)
     


    def respawn(self, x, y, theta):
        # Try to kill turtle1 (ignore error if it doesn't exist)
        kill_req = Kill.Request()
        kill_req.name = 'turtle1'
        future_kill = self.kill_service.call_async(kill_req)

        def after_kill(future):
            # Now spawn turtle1
            spawn_req = Spawn.Request()
            spawn_req.x = x
            spawn_req.y = y
            spawn_req.theta = theta
            spawn_req.name = 'turtle1'
            self.respawn_client.call_async(spawn_req)

        future_kill.add_done_callback(after_kill)
       
               



def main(args=None):

    rclpy.init(args=args)
    node = TurtleControl()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info('Turtle Control Node stopped by user')
    finally:
        node.destroy_node()
        rclpy.shutdown()
        


if __name__ == '__main__':
    main()



