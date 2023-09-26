from pros_library.pros_node import *
import std_msgs.msg

class LifecycleTalker(ProsNode):
    def __init__(self, node_name, **kwargs):
        super().__init__(node_name, **kwargs)
        self._count: int = 0
        self._pub: Optional[Publisher] = None
        self._timer: Optional[Timer] = None
        super().trigger_configure()
        super().trigger_activate()
        
    def publish(self):
        msg = std_msgs.msg.String()
        msg.data = "Lifecycle HelloWorld #" + str(self._count);
        self._count += 1

        if self._pub is None or not self._pub.is_activated:
            self.get_logger().info('Lifecycle publisher is currently inactive. Messages are not published.');
        else:
            self.get_logger().info(f'Lifecycle publisher is active. Publishing: [{msg.data}]');

        if self._pub is not None:
            self._pub.publish(msg)

    def on_configure(self, state: State):
        self._pub = self.create_lifecycle_publisher(std_msgs.msg.String, "lifecycle_chatter", 10);
        self._timer_ = self.create_timer(1.0, self.publish)
        self.get_logger().info("on_configure() is called.")
        return TransitionCallbackReturn.SUCCESS

    def on_activate(self, state: State):
        self.get_logger().info("on_activate() is called.")
        return super().on_activate(state)

    def on_deactivate(self, state: State):
        self.get_logger().info("on_deactivate() is called.")
        return super().on_deactivate(state)

    def on_cleanup(self, state: State):
        self.destroy_timer(self._timer)
        self.destroy_publisher(self._pub)   

        self.get_logger().info('on_cleanup() is called.')
        return TransitionCallbackReturn.SUCCESS 

    def on_shutdown(self, state: State):
        self.destroy_timer(self._timer)
        self.destroy_publisher(self._pub)
        self.get_logger().info('on_shutdown() is called.')
        return TransitionCallbackReturn.SUCCESS 

def main():
    rclpy.init()
    lc_node = LifecycleTalker('test_talker')
    run(lc_node)


if __name__ == '__main__':
    main()
