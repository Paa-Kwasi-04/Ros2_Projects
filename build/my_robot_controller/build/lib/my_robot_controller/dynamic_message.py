#!/usr/bin/env python3

import rclpy
from rclpy.node import Node



class MyNode(Node):
    def __init__(self):
        super().__init__('Sixth_node')
        self.index_ = 0
        self.list_ = [
            'Good Morning',
            'Good Afternoon',
            'Good Evening',
            'Merry Christmas',
            'Happy New Year'
        ]
    
        self.create_timer(2,self.greeting)

    def greeting(self):
        self.get_logger().info(self.list_[self.index_])

        if self.index_ == len(self.list_):
            self.destroy_node()
            rclpy.shutdown()

        self.index_ += 1







def main(args=None):
    rclpy.init(args=args)
    node = MyNode()
    rclpy.spin(node)
    # rclpy.shutdown()




if __name__ =='__main__':
    main()















