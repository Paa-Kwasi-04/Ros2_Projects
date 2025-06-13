from setuptools import find_packages, setup

package_name = 'temp_monitoring'

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
            'temp_sensor = temp_monitoring.temp_sensor_node:main',
            'cooling_node = temp_monitoring.cooling_node_service:main',
            'monitor_node = temp_monitoring.monitor_node:main'

        ],
    },
)
