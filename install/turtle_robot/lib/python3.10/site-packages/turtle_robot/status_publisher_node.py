#!/usr/bin/env python3


import rclpy
from rclpy.node import Node
from turtlesim.msg import Pose
from std_msgs.msg import Float32
from geometry_msgs.msg import Point



class StatusPublisherNode(Node):
    def __init__(self):
        super().__init('Status_publisher_node')
        self.battery_level_init_ = 100.0
        self.turtle_status_subscriber_ = self.create_subscription(Pose,'/turtle1/pose',self.turtle_pose)
        self.turtle_battery_publisher_ = self.create_publisher(Float32,'/battery_level',10)
        self.turtle_pose_publisher_ = self.create_publisher(Point,'/robot_position',10)
        self.create_timer(1,self.battery_level)
        
        


    def turtle_pose(self,pose_data:Pose):
        position = Point()
        position.x = pose_data.x
        position.y = pose_data.y

        self.turtle_pose_publisher_.publish(position)

    def battery_level(self):
        battery_level = Float32()
        

        self.battery_level_init_ -= 10.0
        battery_level.data = self.battery_level_init_

        self.turtle_battery_publisher_.publish(battery_level)

        
        

def main(args=None):
    rclpy.init(args=args)
    node = StatusPublisherNode()

    try:
        rclpy.spin(node)

    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
