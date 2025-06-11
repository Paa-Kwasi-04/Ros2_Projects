#!/usr/bin/env python3


import rclpy
from rclpy.node import Node
from turtlesim.msg import Pose


class MySubscriber(Node):
    def __init__(self):
        super().__init__('First_Subscriber')
        self.pos_subscriber = self.create_subscription(Pose,'/turtle1/pose',self.pose_receiver,10)
        

    def pose_receiver(self,msg:Pose):
        self.get_logger().info(f"turle's position: ({str(msg.x)},{str(msg.y)})")




def main(args=None):
    rclpy.init(args=args)
    node = MySubscriber()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == '__main__':
    main()