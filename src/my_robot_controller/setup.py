from setuptools import find_packages, setup

package_name = 'my_robot_controller'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='paakwasi',
    maintainer_email='paakwasi@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'test_node = my_robot_controller.my_first_node:main',  # this is the executable name for ros2 run
            'dual_timer = my_robot_controller.dual_timer_logger:main',
            'circle = my_robot_controller.draw_circle:main',
            'turtle_pos = my_robot_controller.turtle_position:main',
            'turtle_control = my_robot_controller.Sub_Pub_Loop:main',
            'light_sensor = my_robot_controller.light_sensor_node:main',
            'smart_light = my_robot_controller.smart_light_node:main',
            'joy_stick = my_robot_controller.joy_stick:main',
            'turtle_joystick = my_robot_controller.turtle_joystick:main'


        ],
    },
)
