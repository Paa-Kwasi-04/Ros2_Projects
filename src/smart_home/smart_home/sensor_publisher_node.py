#!/usr/bin/env python3

import rclpy
from rclpy.node import Node


class SensorPublisherNode(Node):
    def __init__(self):
        super().__init__('sensor_publisher_node')
        self.get_logger().info('Sensor Publisher Node has been started.')





def main(args=None):
    rclpy.init(args=args)
    node = SensorPublisherNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()
if __name__ == '__main__':
    main()