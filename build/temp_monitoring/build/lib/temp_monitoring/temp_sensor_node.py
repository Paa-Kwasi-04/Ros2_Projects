#!/usr/bin/env python3


import rclpy
from rclpy.node import Node
from random import randint
from std_msgs.msg import Int32




class TemperatureSensorNode(Node):
    def __init__(self):
        super().__init__('temp_sensor_node')
        self.temp_publisher_ = self.create_publisher(Int32,'/temperature',10)
        self.create_timer(1,self.temp_reading)

    def temp_reading(self):
        temp = Int32()
        temp.data = randint(20,100)

        self.get_logger().info(f'Temp Reading: {temp.data}')

        self.temp_publisher_.publish(temp)






def main(args=None):

    rclpy.init(args=args)
    node = TemperatureSensorNode()

    try:
        rclpy.spin(node)
    finally:
        node.destroy_node()
        rclpy.shutdown()



if __name__ == '__main__':
    main()
