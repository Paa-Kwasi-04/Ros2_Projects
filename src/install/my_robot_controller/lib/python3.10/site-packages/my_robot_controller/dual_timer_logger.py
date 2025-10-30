#!/usr/bin/env python3

import rclpy
from rclpy.node import Node

class MyNode(Node):
    def __init__(self):
        super().__init__('Second_Node')
        self.create_timer(1,self.slow_timer)
        self.create_timer(5,self.fast_timer)

    def fast_timer(self):
        self.get_logger().info('Fast timer tick')

    def slow_timer(self):
        self.get_logger().info('Slow timer tick')




def main(args=None):
    rclpy.init(args=args)
    node = MyNode()
    rclpy.spin(node)
    rclpy.shutdown()
    

if __name__ == '__main__':
    main()




























































