from .roboclaw_3 import Roboclaw
from math import *

class Motor():
    def __init__(self, wheelDiameter=60, encoderResolution=48, gearReduction=34.014):
        self.wheelDiameter = wheelDiameter #Length in millimeter
        self.wheelPerimeter = wheelDiameter*pi #Length in millimeter

        self.encoderResolution = encoderResolution
        self.gearReduction = gearReduction
        self.qppr = self.encoderResolution * self.gearReduction #qppr: Quadrature Pulse Per Rotation
        self.qpLength = self.wheelPerimeter / self.qppr 

    def qpToMm(self, qpValue): #Convert a quadrature pulse value to a millimeter value. It can be length, speed or acceleration
        return qpValue * self.qpLength

    def mmToQp(self, mmValue): #Convert a millimeter value to a quadrature pulse. It can be length, speed or acceleration
        return mmValue / self.qpLength

def initialization(_node, _m1, _m2, _wheelbase=280, _theta0=0, _x0=0, _y0=0):
    global node, rc, address, m1, m2, wheelbase, wheelbasePerimeter, oldL, theta0, x, y

    node = _node

    rc = Roboclaw("/dev/ttyAMA0",38400) #rc is our Roboclaw object
    rc.Open() #The serial port is opened
    address = 0x80 #The address represents the address of our Roboclaw if we want to communicate withy many Roboclaw

    m1 = _m1 #These two lines creates the two motor objects
    m2 = _m2

    wheelbase = _wheelbase #The wheelbase is the length between the two wheels
    wheelbasePerimeter = wheelbase*pi #The wheelbase perimeter is the perimeter of the circle with the wheelbase as diameter
    
    oldL = 0
    
    theta0 = _theta0 #theta0 is the initial orientation of the robot
    x = _x0 #These btwo lines set the initial position of the robot to the origin
    y = _y0

def updatePosition(x, y):
    global oldL

    #These two lines store the value in qp (quadrature pulse) of the two encoders
    enc1 = rc.ReadEncM1(address)
    enc2 = rc.ReadEncM2(address)

    #These two lines convert the values in qp of the encoders into values in millimeters
    pos1 = m1.qpToMm(enc1[1])
    pos2 = m2.qpToMm(enc2[1])

    #This bloc of lines display the values in qp and mm of the encoders
    node.get_logger().debug("--------------")
    node.get_logger().debug("Encoder1:"),
    if(enc1[0]==1):
        node.get_logger().debug("{}qp  <=>  {}mm".format(enc1[1], pos1)),
    else:
        node.get_logger().error("Encoder1 position failed"),
    node.get_logger().debug("Encoder2:"),
    if(enc2[0]==1):
        node.get_logger().debug("{}qp  <=>  {}mm".format(enc2[1], pos2)),
    else:
        node.get_logger().error("Encoder2 position failed"),
    print("")
        
    L = (1/2) * (pos1 + pos2) #L is the mean distance in mm between the distance of the two encoders 
    deltaL = L - oldL #deltaL is the difference between the previous value of L and the current value of L
    theta = theta0 + (((pos1 - pos2) % wheelbasePerimeter) / wheelbasePerimeter) * 360 #This line calculate the orientation of the robot in degree
    deltaX = -deltaL*sin(radians(theta)) #These two lines use formulas to calculate the difference on the x and y axis between the previous position and the current one 
    deltaY = deltaL*cos(radians(theta)) 
    x += deltaX #These two lines increment the differences
    y += deltaY
    oldL = L 

    return x, y, theta