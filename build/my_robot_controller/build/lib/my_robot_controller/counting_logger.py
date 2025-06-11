#!/usr/bin/env python3

import rclpy
from rclpy.node import Node


class MyNode(Node):
    def __init__(self):
        super().__init__('third_node')
        self.counter_ = 0
        self.create_timer(2,self.count_timer)

    def count_timer(self):
        self.get_logger().info(f'Count: {self.counter_}')

        if self.counter_== 10:
            self.get_logger().info('Finished Counting')
            self.destroy_node()
            rclpy.shutdown()

        self.counter_ += 1



def main(args =None):

    rclpy.init(args=args)
    node = MyNode()
    rclpy.spin(node)
    # rclpy.shutdown() it is redundant in this case


if __name__ == '__main__':
    main()
