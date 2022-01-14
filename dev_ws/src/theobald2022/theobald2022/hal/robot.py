from cgi import print_environ
from roboclaw_3 import Roboclaw
from math import *
import time

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

wheelbase = 280 #The wheelbase is the length between the two wheels
wheelbasePerimeter = wheelbase*pi #The wheelbase perimeter is the perimeter of the circle with the wheelbase as diameter  
theta0 = 0 #theta0 is the initial orientation of the robot
oldL = 0
def updatePosition(x, y, oldL):
    #These two lines store the value in qp (quadrature pulse) of the two encoders
    enc1 = rc.ReadEncM1(address)
    enc2 = rc.ReadEncM2(address)

    #These two lines convert the values in qp of the encoders into values in millimeters
    pos1 = m1.qpToMm(enc1[1])
    pos2 = m2.qpToMm(enc2[1])

    #This bloc of lines display the values in qp and mm of the encoders
    print("--------------")
    print("Encoder1:"),
    if(enc1[0]==1):
        print("{}qp  <=>  {}mm".format(enc1[1], pos1)),
    else:
        print("failed"),
    print("Encoder2:"),
    if(enc2[0]==1):
       print("{}qp  <=>  {}mm".format(enc2[1], pos2)),
    else:
        print("failed "),
    print("")
        
    L = (1/2) * (pos1 + pos2) #L is the mean distance in mm between the distance of the two encoders 
    deltaL = L - oldL #deltaL is the difference between the previous value of L and the current value of L
    theta = theta0 + (((pos1 - pos2) % wheelbasePerimeter) / wheelbasePerimeter) * 360 #This line calculate the orientation of the robot in degree
    deltaX = -deltaL*sin(radians(theta)) #These two lines use formulas to calculate the difference on the x and y axis between the previous position and the current one 
    deltaY = deltaL*cos(radians(theta)) 
    x += deltaX #These two lines increment the differences
    y += deltaY
    oldL = L

    #This bloc of line shows the robot position and orientation
    print("x: {}".format(x))
    print("y: {}".format(y))
    print("Theta: {}".format(theta))

    return x, y, oldL



rc = Roboclaw("/dev/ttyAMA0",38400) #rc is our Roboclaw object
rc.Open() #The serial port is opened
address = 0x80 #The address represents the address of our Roboclaw if we want to communicate withy many Roboclaw 

#m1 and m2 are the objects which represent our two motors
m1 = Motor(wheelDiameter=60)
m2 = Motor(wheelDiameter=60)

#The x and y value are set to the origin
x = 0
y = 0

#This loop updates the postion of the robot at each time
while(1):
    (x, y, oldL) = updatePosition(x, y, oldL)