#!/usr/bin/env python3


import rclpy
from rclpy.node import Node
import serial
from std_msgs.msg import String
from sensor_msgs.msg import Temperature
from sensor_msgs.msg import RelativeHumidity
from rclpy.qos import QoSProfile, ReliabilityPolicy, HistoryPolicy


qos_profile = QoSProfile(
            reliability=ReliabilityPolicy.RELIABLE,
            history=HistoryPolicy.KEEP_LAST,
            depth=10
        )



class ATH10TempReadings(Node):
    def __init__(self):
        super().__init__('Temperature_node')
        self.temperature_publisher_ = self.create_publisher(Temperature,'/ATH10_temperature_reading',qos_profile=qos_profile)
        self.humidity_publisher_ = self.create_publisher(RelativeHumidity,'/ATH10_humidty_reading',qos_profile=qos_profile)
        self.temp_reading = Temperature()
        self.humdity_reading = RelativeHumidity()
        self.create_timer(0.1,self.read_port)
        self.get_logger().info('Starting Node')


    def read_port(self):
        temp = Temperature()
        humidty = RelativeHumidity()

        with serial.Serial(port='/dev/ttyACM0', baudrate=9600, timeout=1) as ser:
            data = ser.readline().decode('utf-8').strip()
            self.get_logger().info(data)
            """
            Data format
            sensor0,temperature_reading,humdity_reading|sensor0,temperature_reading,humdity_reading ...
            """
            sensor_data = {}
            try:
                sensor_list =  data.strip().split('|')

                for x in range(len(sensor_list)):
                    sensor_data[f'sensor{x+1}'] = sensor_list[x]
                    self.get_logger().info('Read data: ')
                    self.get_logger().info(sensor_data[f'sensor{x+1}'])





            except ValueError as e:
                self.get_logger().error(f'Error parsing data: {e}')  



def main(args=None):
    rclpy.init(args=args)
    node = ATH10TempReadings()    
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
   