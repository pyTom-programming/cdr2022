from setuptools import setup

package_name = 'theobald2022'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Mousset Tom',
    maintainer_email='tom.mousset.gamer@gmail.com',
    description='This package is the Hardware Abstraction Layer (HAL) of the robot',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'hal = theobald2022.hal.hal:main',
        ],
    },
)