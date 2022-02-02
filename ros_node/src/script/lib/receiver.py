import rospy
from geometry_msgs.msg import Point

class Receiver:
    def __init__(self, data):
        self.data = data
        rospy.Subscriber('/point', Point, self.Callback)

    def Callback(self, msg):
        self.data.next_point = msg.x
        # print("Msg recevived : {self.data.next_point}")

# Msg recevived : 