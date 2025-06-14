#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from random import uniform



class TurtleMovement(Node):
    def __init__(self):
        super().__init__('Circle_Node')
        self.cmd_vel_pub_ = self.create_publisher(Twist,'/turtle1/cmd_vel',10) # the 10 stands for the queue length of the message
        self.create_timer(0.5,self.send_velocity_command)
        self.get_logger().info('Done drwaing the circle')

    def send_velocity_command(self):
        msg = Twist()
        msg.angular.z = uniform(0.5,2)
        msg.linear.x = uniform(0.5,2)
        self.cmd_vel_pub_.publish(msg)


def main(args=None):

    rclpy.init(args=args)
    node = TurtleMovement()
    try:
        rclpy.spin(node)

    finally:
       node.destroy_node()
       rclpy.shutdown()


if __name__ == '__main__':
    main()