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
        self.spliner.run()

if __name__ == "__main__":
    mm = Master()
    while not rospy.is_shutdown():
        mm.run()