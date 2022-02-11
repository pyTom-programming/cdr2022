import rclpy
from rclpy.node import Node

from robot_interfaces.msg import Position

from .robot import *

import time

class Hal(Node):

    def __init__(self):
        super().__init__('hal')
        self.publisher_ = self.create_publisher(Position, 'positionTopic', 10)
        timer_period = 0.005  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback) #The timer callback function will be executed every timer_period seconds
        
        self.m1 = Motor(wheelDiameter=60) #These two lines creates the two motor objects
        self.m2 = Motor(wheelDiameter=60)
        self.wheelbase = 280 #The wheelbase is the length between the two wheels

        #This bloc of lines set the initial position and rotation of the robot to the origin
        self.x0 = 0
        self.y0 = 0
        self.theta0 = 0

        self.x = 0
        self.y = 0
        self.theta = 0
        initialization(self, self.m1, self.m2, self.wheelbase, 0, 0, 0) #This line initializes the robot positioning program

        self.msg = Position() #This line creates the message structure

    def timer_callback(self):
        (self.x, self.y, self.theta) = updatePosition(self.x, self.y) #This line updates the variables with the position and the rotation of the robot
        self.msg.x = self.x
        self.msg.y = self.y
        self.msg.theta = self.theta
        self.publisher_.publish(self.msg) #This line publishes the position and the rotation of the robot on the topic positionTopic
        self.get_logger().info("Publishing: x={} y={} theta={}".format(self.msg.x, self.msg.y, self.msg.theta)) #This line shows the robot position and orientation



def main(args=None):
    rclpy.init(args=args)

    myHal = Hal()

    #Run the myHal node
    rclpy.spin(myHal)

    # Destroy the node explicitly
    myHal.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()