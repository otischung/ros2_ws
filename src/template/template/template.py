#!/usr/bin/env python3
from pros_library.pros_node import *
# from geometry_msgs.msg import PoseStamped
from std_msgs.msg import Float32MultiArray
"""
  Make sure you have built all the packages that are dpenedent.
  e.g. "system_interfaces"
  If you want to use other packages, you need to include them by yourself.
  After include the packages, you have to follow the steps provided by ROS2 to add dependencies in "setup.py" and "package.xml"
  Wish you have a good coding experience!!
"""


class robotCar(ProsNode):
    def __init__(self, node_name, **kwargs):
        super().__init__(node_name, **kwargs)
        """
        TODO: your variables
        """
        super().trigger_configure()
        super().trigger_activate()
        self.publisher_ = self.create_publisher(
            Float32MultiArray, "robot_news1", 10)
        # self.pose = PoseStamped()
        self.get_logger().info("Hello")
        self.front_right = 0
        self.front_left = 0
        self.back_right = 0
        self.back_left = 0
        data = [self.front_right, self.front_left,
                self.back_right, self.back_left]

        while rclpy.ok():
            key = str(input("Press a key and press Enter: "))

            if key == "w":
                self.back_right = 2000
                self.back_left = 2000
                self.front_right = 2000
                self.front_left = 2000
            elif key == "s":
                self.back_right = -2000
                self.back_left = -2000
                self.front_right = -2000
                self.front_left = -2000
            elif key == "a":
                self.front_right = -2000
                self.front_left = 2000
                self.back_right = -2000
                self.back_left = 2000
            elif key == "d":
                self.front_right = 2000
                self.front_left = -2000
                self.back_right = 2000
                self.back_left = -2000
            else:
                self.back_right = 0
                self.back_left = 0
                self.front_right = 0
                self.front_left = 0

            data = [float(self.front_right), float(self.front_left),
                    float(self.back_right), float(self.back_left)]

            self.publisher_.publish(Float32MultiArray(data=data))
            # self.get_logger().info('Published: %s' % 'hello')

    def on_configure(self, state: State):
        self.get_logger().info("on_configure() is called.!!!!!!!!!!!!!!!")
        """
        TODO: configure
        """
        return TransitionCallbackReturn.SUCCESS

    def on_activate(self, state: State):
        self.get_logger().info("on_activate() is called.")
        """
        TODO: What will be executed when node activating.
        """
        return super().on_activate(state)

    def on_deactivate(self, state: State):
        self.get_logger().info("on_deactivate() is called.")
        """
        TODO: Turn off/Reset the operations when activating.
        """
        return super().on_deactivate(state)

    def on_cleanup(self, state: State):
        self.get_logger().info('on_cleanup() is called.')
        """
        TODO: Clean all the variables.
        """
        return TransitionCallbackReturn.SUCCESS


def main():
    rclpy.init()
    node = robotCar("robotcar")
    run(node)
    rclpy.shutdown()


if __name__ == '__main__':
    main()
