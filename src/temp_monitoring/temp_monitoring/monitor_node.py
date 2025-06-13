#!/usr/bin/env python3



import rclpy
from rclpy.node  import Node
from std_msgs.msg import Int32
from std_srvs.srv import Trigger


class MonitorTemperatureNode(Node):

    def __init__(self):
        super().__init__('monitor_node')
        self.temp_subscriber_ = self.create_subscription(Int32,'/temperature',self.monitor,10)
        self.cooling_client = self.create_client(Trigger,'/active_cooler') 

        while not self.cooling_client.wait_for_service(1.0):
            self.get_logger().info('Waiting for Service')


    def monitor(self,temp:Int32):
        request = Trigger.Request()
        if temp.data > 60:
            self.get_logger().info('Temperature above 60')
            self.cooling_client.call_async(request)
            





def main(args=None):

    rclpy.init(args=args)
    node = MonitorTemperatureNode()

    try:
        rclpy.spin(node)
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
