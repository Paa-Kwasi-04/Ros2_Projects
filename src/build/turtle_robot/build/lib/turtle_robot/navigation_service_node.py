#!/usr/bin/env python3


import rclpy
from rclpy.node import Node
from Custom_interface.srv import ReturnToBase
from turtlesim.srv import TeleportAbsolute



class NavigationServiceNode(Node):

    def __init__(self):
        super().__init__('Navigation_server_node')
        self.navigation_server_ = self.create_service(ReturnToBase,'/return_to_base',self.navigation)
        self.turtle_absolute_client_ = self.create_client(TeleportAbsolute,'/turtle1/teleport_absolute')
        while not self.turtle_absolute_client_.wait_for_service(1):
            self.get_logger().info('Navigation Service Loading ...')

        self.client = TeleportAbsolute.Request()

        self.get_logger().info('Navigation Service Ready at /return_to_base')

    def navigation(self,request):
        self.client.x = request.x
        self.client.y = request.y

        future = self.turtle_absolute_client_.call_async(self.client)
        future.add_done_callback(self.check_response)
        self.get_logger().info(f'Request to return to base at x: {request.x}, y: {request.y}')

    def check_response(self,response):
        try:
            self.get_logger().info(response.result())
            response.accepted = True
        except Exception as e:
            self.get_logger().error(e)
            response.accepted = False

        self.navigation_server_.send_response(response)
            


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