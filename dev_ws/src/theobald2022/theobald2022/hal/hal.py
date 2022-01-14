import rclpy
from rclpy.node import Node

from robot_interfaces.msg import Position


class Hal(Node):

    def __init__(self):
        super().__init__('hal')
        self.publisher_ = self.create_publisher(Position, 'positionTopic', 10)
        timer_period = 0.5  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback) #The timer callback function will be executed every timer_period seconds
        self.i = 0

    def timer_callback(self):
        msg = Position()
        msg.x = float(self.i%100)
        msg.y = float(100-(self.i%100))
        msg.theta = float((273+self.i)%360)
        self.publisher_.publish(msg)
        self.get_logger().info("Publishing: x={} y={} theta={}".format(msg.x, msg.y, msg.theta))
        self.i += 1


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