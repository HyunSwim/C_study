import rospy
from geometry_msgs.msg import Point

class Receiver:
    def __init__(self, data):
        self.data = data
        rospy.Publish('/point', Point, self.Callback)

    def Callback(self, msg):
        self.data.new_point = msg.x
        print("Msg recevived : {self.data.new_point}")

# Msg recevived : 