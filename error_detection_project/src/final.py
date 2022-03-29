import rospy
from time import time
from std_msgs.msg import Int16

class Final:
    def __init__(self):
        rospy.init_node('sensor_check', anonymous = False)

        rospy.Subscriber('/gmsl_camera/dev/video0/compressed', Int16, self.video0_Callback)
        rospy.Subscriber('/gmsl_camera/dev/video1/compressed', Int16, self.video1_Callback)
        rospy.Subscriber('/gmsl_camera/dev/video2/compressed', Int16, self.video2_Callback)
        rospy.Subscriber('/gmsl_camera/dev/video3/compressed', Int16, self.video3_Callback)

        rospy.Subscriber('/Camera/Front60/od_bbox', Int16, self.od_bbox_Callback)
        rospy.Subscriber('/Camera/Front60/ob_result', Int16, self.ob_result_Callback)

        rospy.Subscriber('/os1_node/lidar_packets', Int16, self.LiDAR_packet_Callback)
        rospy.Subscriber('/os_cloud_node/points', Int16, self.LiDAR_points_Callback)

        rospy.Subscriber('/lidar/lidar/track_pillar_text', Int16, self.LiDAR_tpt_Callback)
        rospy.Subscriber('/pillar_marker_array', Int16, self.LiDAR_pma_Callback)

        rospy.Subscriber('/imu/data', Int16, self.IMU_data_Callback)
        rospy.Subscriber('/imu/temp', Int16, self.IMU_temp_Callback)
        rospy.Subscriber('/imu/velocity', Int16, self.IMU_vel_Callback)

        rospy.Subscriber('/sbg/ekf_euler', Int16, self.INS_euler_Callback)
        rospy.Subscriber('/sbg/ekf_nav', Int16, self.INS_nav_Callback)
        rospy.Subscriber('/sbg/gps_hdt', Int16, self.INS_hdt_Callback)

        self.video0_count = time()
        self.video1_count = time()
        self.video2_count = time()
        self.video3_count = time()
        self.od_bbox_count = time()
        self.ob_result_count = time()
        self.LiDAR_packet_count = time()
        self.LiDAR_points_count = time()
        self.LiDAR_tpt_count = time()
        self.LiDAR_pma_count = time()
        self.IMU_data_count = time()
        self.IMU_temp_count = time()
        self.IMU_vel_count = time()
        self.INS_euler_count = time()
        self.INS_nav_count = time()
        self.INS_hdt_count = time()

    def video0_Callback(self):
        self.video0_count = time()

    def video1_Callback(self, msg):
        self.video1_count = time()
        
    def video2_Callback(self, msg):
        self.video2_count = time()
        
    def video3_Callback(self, msg):
        self.video3_count = time()
        
    def od_bbox_Callback(self, msg):
        self.od_bbox_count = time()
        
    def ob_result_Callback(self, msg):
        self.ob_result_count = time()
        
    def LiDAR_packet_Callback(self, msg):
        self.LiDAR_packet_count = time()
        
    def LiDAR_points_Callback(self, msg):
        self.LiDAR_points_count = time()
        
    def LiDAR_tpt_Callback(self, msg):
        self.LiDAR_tpt_count = time()
        
    def LiDAR_pma_Callback(self, msg):
        self.LiDAR_pma_count = time()
        
    def IMU_data_Callback(self, msg):
        self.IMU_data_count = time()
        
    def IMU_temp_Callback(self, msg):
        self.IMU_temp_count = time()
        
    def IMU_vel_Callback(self, msg):
        self.IMU_vel_count = time()
        
    def INS_euler_Callback(self, msg):
        self.INS_euler_count = time()
        
    def INS_nav_Callback(self, msg):
        self.INS_nav_count = time()
        
    def INS_hdt_Callback(self, msg):
        self.INS_hdt_count = time()

    def run(self):
        state = []
        print("===============")
        if time() - self.video0_count < 1:
            state.append(True)
        else:
            state.append(False)
        
        if time() - self.video1_count < 1:
            state.append(True)
        else:
            state.append(False)
        
        if time() - self.video2_count < 1:
            state.append(True)
        else:
            state.append(False)
            
        if time() - self.od_bbox_count < 1:
            state.append(True)
        else:
            state.append(False)
            
        if time() - self.ob_result_count < 1:
            state.append(True)
        else:
            state.append(False)
        
        if time() - self.LiDAR_packet_count < 1:
            state.append(True)
        else:
            state.append(False)
        
        if time() - self.LiDAR_points_count < 1:
            state.append(True)
        else:
            state.append(False)
            
        if time() - self.LiDAR_tpt_count < 1:
            state.append(True)
        else:
            state.append(False)
            
        if time() - self.LiDAR_pma_count < 1:
            state.append(True)
        else:
            state.append(False)
            
        if time() - self.IMU_data_count < 1:
            state.append(True)
        else:
            state.append(False)
            
        if time() - self.IMU_temp_count < 1:
            state.append(True)
        else:
            state.append(False)
            
        if time() - self.IMU_vel_count < 1:
            state.append(True)
        else:
            state.append(False)
            
        if time() - self.INS_euler_count < 1:
            state.append(True)
        else:
            state.append(False)
            
        if time() - self.INS_nav_count < 1:
            state.append(True)
        else:
            state.append(False)
            
        if time() - self.INS_hdt_count < 1:
            state.append(True)
        else:
            state.append(False)
            
 
if __name__ == "__main__":
    mm = Final()
    rate = rospy.Rate(20)
    while not rospy.is_shutdown():
        mm.run()
        rate.sleep