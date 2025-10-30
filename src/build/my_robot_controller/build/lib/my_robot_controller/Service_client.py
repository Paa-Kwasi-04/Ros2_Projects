#!/usr/bin/env python3


import rclpy
from rclpy.node import Node
from turtlesim.msg import Pose
from geometry_msgs.msg import Twist
from turtlesim.srv import SetPen


class TurtleControlNode(Node):
    def __init__(self):
        super().__init__('Turtle_Control')
        self.prev_x = 0
        self.turtle_publisher = self.create_publisher(Twist,'/turtle1/cmd_vel',10)
        self.turtle_subscriber = self.create_subscription(Pose,'/turtle1/pose',self.turtle_subscriber_callback,10)
        self.client = self.create_client(SetPen,'/turtle1/set_pen')

        while not self.client.wait_for_service(1):
            self.get_logger().info('Waiting for service...')
        


    def turtle_subscriber_callback(self,pose:Pose):
        msg = Twist()

        if pose.x > 9 or pose.x < 2 or pose.y > 9 or pose.y < 2 :
            msg.linear.x = 1.0
            msg.angular.z = 0.9
        else:
            msg.angular.z = 0.0
            msg.linear.x = 5.0

        self.turtle_publisher.publish(msg)

        if pose.x >= 5.5 and self.prev_x <5.5:  # so as not to call the server always, it wastes time
            self.prev_x = pose.x
            self.client_request(255,0,0,5,0)
        elif pose.x < 5.5 and self.prev_x >=5.5:
            self.prev_x = pose.x
            self.client_request(0,255,0,1,0)
    

    def client_request(self,r,g,b,width,off):
        request = SetPen.Request()
        request.r = r
        request.g  = g
        request.b = b
        request.width = width
        request.off = off

        future = self.client.call_async(request)
        # self.check_response(self.future), a better way is to
        future.add_done_callback(self.check_response)

    def check_response(self,response):
        try:
            response.result()
            self.get_logger().info('Service call completed')
        except Exception as e:
            self.get_logger().error(f'Error: {e}')




def main(args=None):
    rclpy.init(args=args)
    node  =  TurtleControlNode()
    rclpy.spin(node)
    node.destroy_node() # destroys the node after you are done using it
    rclpy.shutdown()


if __name__ == '__main__':
    main()           
