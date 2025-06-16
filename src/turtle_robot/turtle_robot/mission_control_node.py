#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32
from geometry_msgs.msg import Point
from first_custom_interface.srv import ReturnToBase


class MissionControlNode(Node):
    def __init__(self):
        super().__init__('Status_checker_node')
        self.turtle_battery_status_subscriber_ = self.create_subscription(Float32,'/battery_level',self.battery_callback)
        self.turtle_pose_subscriber_ = self.create_subscription(Point,'/robot_position',self.position_callback)
        self.client_  = self.create_client(ReturnToBase,'/return_to_base')

        while not self.client_.wait_for_service(1.0):
            pass

        self.request = ReturnToBase.Request()
    
    def battery_callback(self, msg:Float32):
        self.battery = msg.data

    def position_callback(self, msg:Point):
        self.position = msg


    def status_checker(self):

        if self.battery.data < 30 and (self.position.x != 0 or self.position.y != 0):
            self.request.x = 0.0
            self.request.y = 0.0
            future = self.client_.call_async(self.request)
            future.add_done_callback(self.check_response)

    def check_response(self,response):
        try:
            self.get_logger().info(response.result())
        except Exception as e:
            self.get_logger().error(e)


    
        





def main(args=None):
    rclpy.init(args=args)
    node = MissionControlNode()

    try:
        rclpy.spin(node)

    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ =='__main__':
    main()
