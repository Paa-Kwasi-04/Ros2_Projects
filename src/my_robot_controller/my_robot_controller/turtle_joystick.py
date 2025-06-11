#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from sensor_msgs.msg import  Joy


class TurtleControl(Node):
    def __init__(self):
        super().__init__(self)
        self.joy_stick_subscriber_ = self.create_subscription(Joy,'/joy',self.joy_stick_data,10) 
        self.turtle_control_publisher_ = self.create_publisher(Twist,'/turtle1/cmd_vel',10)


    def joy_stick_data(self,msg:Joy):
        twist = Twist()

        # joystick configuration
        twist.linear.x = msg.axes[0]
        twist.angular.z = msg.axes[1]

        self.turtle_control_publisher_.publish(twist)



def main(args=None):

    rclpy.init(args=args)
    node = TurtleControl()
    rclpy.spin()
    rclpy.shutdown()



if __name__ == '__main__':
    main()



