#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_msgs.msg import Int32
from first_custom_interface.srv import AnalyzeNumber



class NumberAnalyzerNode(Node):
    def __init__(self):
        super().__init__('number_analyzer_node')
        self.number_subscriber_ = self.create_subscription(Int32,'/number',self.number_analyzer,10)
        self.client_ = self.create_client(AnalyzeNumber,'/analyze_number')

        while not self.client_.wait_for_service(1.0):
            self.get_logger().info('Waiting for Server...')

    def number_analyzer(self,num:Int32):
        self.get_logger().info('Number Received')
        request = AnalyzeNumber.Request()
        request.number = num.data

        future = self.client_.call_async(request)
        future.add_done_callback(self.handle_response)

    def handle_response(self,future):

        
    
        try:
            response = future.result()
            self.get_logger().info(f'Parity: {response.parity}, Sign:{response.sign}') 
            # self.get_logger().info('Successful response')
        except Exception as e:
            self.get_logger().error(e)



def main(args=None):
    rclpy.init(args=args)
    node = NumberAnalyzerNode()

    try:
        rclpy.spin(node)
    finally:
        node.destroy_node()
        rclpy.shutdown()
    


if __name__ =='__main__':
    main()