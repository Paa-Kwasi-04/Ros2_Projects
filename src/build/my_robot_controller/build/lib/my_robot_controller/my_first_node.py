#!/usr/bin/env python3

import rclpy  # always import, Contains python libraries for ros2 nodes
from rclpy.node import Node

class MyNode(Node):
    def __init__(self):
        super().__init__('first_node')
        self.counter_ = 0
        self.create_timer(5,self.timer_callback)

    def timer_callback(self):
        self.get_logger().info(f'Hello  {self.counter_}') # justs prints or logs text unto the terminal
        self.counter_ +=1 
        

def main(args=None):
    rclpy.init(args=args)  # initialises ros2 communication, it is the first line of code in the main function

    node = MyNode()


    rclpy.spin(node) # this keeps the node alive to continue communication with ros2 functionalities untill we kill it and ensures we execute all call back
    rclpy.shutdown()  # is the last line of code in the main function


if __name__ == '__main__':
    main()







