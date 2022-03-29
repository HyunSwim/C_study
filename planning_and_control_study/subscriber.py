import rospy
from std_msgs.msg import String

class Subscriber:
    def __init__(self):
        rospy.init_node("B")
        rospy.Subscriber('/info', String, self.callback)

    def callback(self,msg):
        print(msg.data)


if __name__ == "__main__":
    A = Subscriber()
    while not rospy.is_shutdown():
        pass