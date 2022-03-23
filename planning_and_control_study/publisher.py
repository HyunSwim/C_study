import rospy
from std_msgs.msg import String

class publish:
    def __init__(self):
        rospy.init_node("A")
        self.A = rospy.Publisher('/info', String, queue_size = 1)

    def run(self):
        inin = input()
        self.A.publish(inin)

if __name__ == "__main__":
    AA = publish()
    while not rospy.is_shutdown():
        AA.run()