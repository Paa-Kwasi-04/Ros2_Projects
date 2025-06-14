#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from random import randint
from std_msgs.msg import Int32


class NumberPublisherNode(Node):
    def __init__(self):
        super().__init__('number_analyzer_node')
        self.number_publisher_ = self.create_publisher(Int32,'/number',10)
        self.create_timer(2,self.get_numbers)


    def get_numbers(self):
        msg = Int32()
        number = randint(-100,100)
        msg.data = number
        self.get_logger().info(f'Published: {msg.data}')
        self.number_publisher_.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = NumberPublisherNode()

    try:
        rclpy.spin(node)
    finally:
        node.destroy_node()
        rclpy.shutdown()
    


if __name__ =='__main__':
    main()