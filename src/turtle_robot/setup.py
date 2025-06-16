from setuptools import find_packages, setup

package_name = 'turtle_robot'

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
    maintainer_email='paakwasi.owusu2023@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'status = turtle_robot.status_publisher_node:main',
            'movement = turtle_robot.turtle_moving:main',
            'service = turtle_robot.navigation_service_node:main',
            'controller = turtle_robot.mission_control_node:main'
        ],
    },
)
