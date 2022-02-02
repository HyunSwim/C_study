import rospy
from geometry_msgs.msg import Point
from lib.signal_interrupt_hander import Activate_Signal_Interrupt_Handler

class Sender:
    def __init__(self):
        rospy.init_node('Sender', anonymous = False)
        self.pub = rospy.Publisher('/point', Point, queue_size = 1)
        self.msg = Point()

    def run(self):
        inin = input("Input new point : ")
        self.msg.x = int(inin)
        self.pub.publish(self.msg)

if __name__ == "__main__":
    Activate_Signal_Interrupt_Handler()
    ss = Sender()
    while not rospy.is_shutdown():
        ss.run()
        
# "Input new point : "