#!/usr/bin/env python3



import rclpy
from rclpy.node  import Node
from std_srvs.srv import Trigger


class CoolingServiceNode(Node):

    def __init__(self):
        super().__init__('cooling_service_node')
        self.srv = self.create_service(Trigger,'/active_cooler',self.active_cooler_callback)
        self.get_logger().info('Cooling Service Ready at /active_cooler')


    def active_cooler_callback(self,request,response):
  
        self.get_logger().info('Cooler Activated')
        response.success = True
        response.message = 'Cooler has been successfully activated'
        return response

        






def main(args=None):

    rclpy.init(args=args)
    node = CoolingServiceNode()

    try:
        rclpy.spin(node)
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
