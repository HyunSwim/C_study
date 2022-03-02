import rospy
from std_msgs.msg import Int16

class Middle:
    def __init__(self):
        rospy.init_node('middle', anonymous = False)
        rospy.Subscriber('camera_error', Int16, self.Camera_Callback)
        rospy.Subscriber('LiDAR_error', Int16, self.LiDAR_Callback)
        self.pub1 = rospy.Publisher('/msg1', Int16, queue_size = 1)
        self.pub2 = rospy.Publisher('/msg2', Int16, queue_size = 1)
        self.camera_input = 1
        self.LiDAR_input = 1


    def Camera_Callback(self, msg):
        self.camera_input = msg

    def LiDAR_Callback(self, msg):
        self.LiDAR_input = msg

    def run(self):
        if self.camera_input == 1:
            self.pub1.publish(self.camera_input)
        
        if self.LiDAR_input == 1:
            self.pub2.publish(self.LiDAR_input)

if __name__ == "__main__":
    mm = Middle()
    while not rospy.is_shutdown():
        mm.run()