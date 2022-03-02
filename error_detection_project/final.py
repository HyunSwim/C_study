import rospy
from std_msgs.msg import Int16

class Final:
    def __init__(self):
        rospy.init_node('final', anonymous = False)
        rospy.Subscriber('/msg1', Int16, self.Camera_Callback)
        rospy.Subscriber('/msg2', Int16, self.LiDAR_Callback)
        self.camera_input = 1
        self.LiDAR_input = 1


    def Camera_Callback(self, msg):
        self.camera_input = msg

    def LiDAR_Callback(self, msg):
        self.LiDAR_input = msg

    def run(self):
        if self.camera_input == 1:
            print("camera : ok")
        else:
            print("camera : error")
        
        if self.LiDAR_input == 1:
            print("LiDAR : ok")
        else:
            print("LiDAR : error")

if __name__ == "__main__":
    mm = Final()
    while not rospy.is_shutdown():
        mm.run()