#!/usr/bin/env python3


import rclpy
from rclpy.node import Node
from sensor_msgs.msg import  Joy
import sdl2
import sdl2.ext 





class JoyStickController(Node):
    def __init__(self):
        super().__init__('Joy_stick')
        self.joy_publish = self.create_publisher(Joy,'/joy',10)

        sdl2.ext.init(joystick=True,events=True)
        self.num_joysticks_ = sdl2.SDL_NumJoysticks()

        if self.num_joysticks_ == 0:
            self.get_logger().info('No joystick found')
            sdl2.ext.quit()
        else:
            self.get_logger().info(f'Number of joysticks: {self.num_joysticks_ }')

        self.joystick = sdl2.SDL_JoystickOpen(0)

        if not self.joystick:
            self.get_logger().info(f'Couldn\'t open joystick: {sdl2.SDL_GetError().decode() }')
            sdl2.ext.quit()
        else:
            self.joy_stick_name = sdl2.SDL_JoystickName(self.joystick).decode()
            self.get_logger().info(f'Opened joystick: {self.joy_stick_name}')

        self.create_timer(0.02,self.joy_stick_control)


    def joy_stick_control(self):

        msg = Joy()

        # Update joystick state
        sdl2.SDL_JoystickUpdate()

        
        num_axes = sdl2.SDL_JoystickNumAxes(self.joystick)
        num_buttons = sdl2.SDL_JoystickNumButtons(self.joystick)

        # Read axes
        msg.axes = []
        for i in range(num_axes):
            value = sdl2.SDL_JoystickGetAxis(self.joystick, i)
            msg.axes.append(float(value) / 32767.0)  # Normalize

        # Read buttons
        msg.buttons = []
        for i in range(num_buttons):
            msg.buttons.append(sdl2.SDL_JoystickGetButton(self.joystick, i))

        self.joy_publish.publish(msg)

    def destroy_node(self):
        if self.joystick:
            sdl2.SDL_JoystickClose(self.joystick)
        sdl2.ext.quit()
        super().destroy_node()





        

def main(args=None):
    rclpy.init(args=args)
    node = JoyStickController()
    try:
       rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info('JoyStick Controller stopped by user')
    finally: 
        node.destroy_node()   
        rclpy.shutdown()


if __name__ == '__main__':
    main()