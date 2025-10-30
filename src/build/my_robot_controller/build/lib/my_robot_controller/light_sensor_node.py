#!/usr/bin/env python3


import rclpy
from rclpy.node import Node
from std_msgs.msg import Int32
from random import randint


class LightSensorNode(Node):

    def __init__(self):
        super().__init__('light_sensor_node')
        self.light_data_publisher_ = self.create_publisher(Int32,'std_msgs/msg/Int32',10)
        self.create_timer(2, self.light_sensor_data_)

    def light_sensor_data_(self):
        msg = Int32()
        msg.data = randint(0,100)
        

        self.light_data_publisher_.publish(msg)


def main(args=None):

    rclpy.init(args=args)
    node = LightSensorNode()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == '__main__':
    main()