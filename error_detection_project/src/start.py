import rospy
from std_msgs.msg import Int16

class Start:
    def __init__(self):
        rospy.init_node('start', anonymous = False)
        self.pub1 = rospy.Publisher('camera_error', Int16, queue_size = 0)
        self.pub2 = rospy.Publisher('LiDAR_error', Int16, queue_size = 0)
        self.camera_input = 1
        self.LiDAR_input = 1

    def run(self):
        camera_input = input("camera_input(1:ok, 0:error) : ")
        LiDAR_input = input("LiDAR_input(1:ok, 0:error) : ")
        print("Input Complete")

        self.pub1.publish(int(camera_input))
        self.pub2.publish(int(LiDAR_input))

if __name__ == "__main__":
    ss = Start()
    while not rospy.is_shutdown():
        ss.run()