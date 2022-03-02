import rospy
from time import time
from std_msgs.msg import Int16

class Final:
    def __init__(self):
        rospy.init_node('final', anonymous = False)
        rospy.Subscriber('/msg1', Int16, self.Camera_Callback)
        rospy.Subscriber('/msg2', Int16, self.LiDAR_Callback)
        self.camera_input = 1
        self.LiDAR_input = 1
        self.camera_count = time()
        self.LiDAR_count = time()

    def Camera_Callback(self, msg):
        self.camera_input = msg.data
        self.camera_count = time()

    def LiDAR_Callback(self, msg):
        self.LiDAR_input = msg.data
        self.LiDAR_count = time()

    def run(self):
        print("===============")
        if time() - self.camera_count < 1:
            print("camera : ok")
        else:
            print("camera : error")
        
        if time() - self.LiDAR_count < 1:
            print("LiDAR : ok")
        else:
            print("LiDAR : error")
        print("==============")

if __name__ == "__main__":
    mm = Final()
    rate = rospy.Rate(20)
    while not rospy.is_shutdown():
        mm.run()
        rate.sleep