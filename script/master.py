from lib.data import Data
from lib.receiver import Receiver
from lib.spliner import Spliner
import rospy
from std_msgs.msg import String

class Master:
    def __init__(self):
        rospy.init_node('Master', anonymous = False)
        self.data = Data()
        self.recevier = Receiver(self.data)
        self.spliner = Spliner(self.data)

    def run(self):
        self.recevier.run()

if __name__ == "__main__":
    mm = Master()
    if not rospy_is_shutdown():
        mm.run()