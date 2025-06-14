#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32
from geometry_msgs.msg import Point
from first_custom_interface.srv import ReturnToBase


class MissionControlNode(Node):
    def __init__(self):
        super().__init__('Status_checker_node')
        self.turtle_battery_status_subscriber_ = self.create_subscription(Float32,'/battery_level')
        self.turtle_pose_subscriber_ = self.create_subscription(Point,'/robot_position')
        self.client_  = self.create_client(ReturnToBase,'',)

        while self.client_.wait_for_service(1.0):
            pass

        self.request = ReturnToBase.Request()


    def status_checker(self,battery:Float32,pose:Point):

        if battery.data < 30 and pose.x != 0 and pose.y != 0:
            pass


    
        





def main(args=None):
    rclpy.init(args=args)


    try:
        rclpy.spin()

    finally:
        rclpy.shutdown()


if __name__ =='__main__':
    main()
