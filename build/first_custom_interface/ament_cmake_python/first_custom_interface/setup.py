from setuptools import find_packages
from setuptools import setup

setup(
    name='first_custom_interface',
    version='0.0.0',
    packages=find_packages(
        include=('first_custom_interface', 'first_custom_interface.*')),
)
