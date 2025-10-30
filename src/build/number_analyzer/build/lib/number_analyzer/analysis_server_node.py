#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from Custom_interface.srv import AnalyzeNumber



class AnalyzerNode(Node):
    def __init__(self):
        super().__init__('Analyzer_server_node')
        self.create_service(AnalyzeNumber,'/analyze_number',self.analyze_number)
        self.get_logger().info('Ready to analyze numbers')

    def analyze_number(self,request,response):

        if request:   
            if request.number % 2 == 0:  # determine parity
                response.parity = 'even'
            else:
                response.parity = 'odd'

            if request.number > 0:
                response.sign = 'positive'
            elif request.number < 0:
                response.sign = 'negative'
            else:
                response.sign = 'zero'

            
        return response













def main(args=None):
    rclpy.init(args=args)
    node = AnalyzerNode()

    try:
        rclpy.spin(node)
    finally:
        node.destroy_node()
        rclpy.shutdown()
    


if __name__ =='__main__':
    main()
