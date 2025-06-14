from setuptools import find_packages
from setuptools import setup

setup(
    name='firt_custom_interface',
    version='0.0.0',
    packages=find_packages(
        include=('firt_custom_interface', 'firt_custom_interface.*')),
)
