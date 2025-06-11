#!/usr/bin/env python3

import rclpy
from rclpy.node import Node


class MyNode(Node):
    def __init__(self):
        super().__init__('fifth_node')
        self.get_logger().info(f'Node\'s name: {self.get_name()}')
        self.create_timer(4,self.node_state)


    def node_state(self):
        self.get_logger().info(f'Node {self.get_name()} is alive')





def main(args=None):
    rclpy.init(args=args)
    node=MyNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()