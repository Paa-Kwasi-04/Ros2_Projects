#!/usr/bin/env python3


import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from std_msgs.msg import Int32


class SmartLightNode(Node):

    def __init__(self):
        super().__init__('smart_light_node')
        self.light_data_subscriber_ = self.create_subscription(Int32,'std_msgs/msg/Int32',self.light_data_,10)
        self.smart_light_publisher_ = self.create_publisher(String,'std_msgs/msg/String',10)

    def light_data_(self,temp_reading:Int32):
        msg = String()

        if 0 <=  temp_reading.data <=30:
            msg.data  = 'Light on  it\'s too dark'
        elif 31<= temp_reading.data <=70:
            msg.data = 'No action it\'s comfortable'
        else:
            msg.data = 'Light off it\'s too bright'

        self.smart_light_publisher_.publish(msg)
        self.get_logger().info(f'smart light status: {msg}')


def main(args=None):

    rclpy.init(args=args)
    node = SmartLightNode()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == '__main__':
    main()