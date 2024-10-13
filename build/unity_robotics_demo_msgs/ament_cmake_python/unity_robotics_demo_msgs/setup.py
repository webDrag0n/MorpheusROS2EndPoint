from setuptools import find_packages
from setuptools import setup

setup(
    name='unity_robotics_demo_msgs',
    version='0.0.1',
    packages=find_packages(
        include=('unity_robotics_demo_msgs', 'unity_robotics_demo_msgs.*')),
)
