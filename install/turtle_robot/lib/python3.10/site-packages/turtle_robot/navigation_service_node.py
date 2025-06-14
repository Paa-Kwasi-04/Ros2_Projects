#!/usr/bin/env python3


import rclpy
from rclpy.node import Node
from first_custom_interface.srv import ReturnToBase



class NavigationServiceNode(Node):

    def __init__(self):
        super().__init__('Navigation_server_node')
        self.navigation_server_ = self.create_service(ReturnToBase,'/return_to_base')

    def navigation(self,request,response):
        


















def main(args=None):
    rclpy.init(args=args)
    node = NavigationServiceNode()

    try:
        rclpy.spin(node)

    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()