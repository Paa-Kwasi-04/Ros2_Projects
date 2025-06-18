from launch import LaunchDescription  # The first lines import  modules to launch ROS2 nodes.
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='turtlesim',
            executable='turtlesim_node',
            name='my_turtlesim_node',
            output='screen',
        ),
       Node(
            package='turtle_robot',  
            executable='status',  
            name='status',        
            output='screen',
        ),
               Node(
            package='turtle_robot',  
            executable='movement',
            name='movement',     
            output='screen',
        ),
               Node(
            package='turtle_robot',  
            executable='service', 
            name='service',    
            output='screen',
        ),
               Node(
            package='turtle_robot',  
            executable='controller', 
            name='controller',    
            output='screen',
        )
    ])