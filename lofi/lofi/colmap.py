import rclpy
from rclpy.node import Node
from custom_msg.msg import Ros2Yolo    # CHANGE
import numpy as np
import matplotlib.pyplot as plt
import os
import open3d as o3d
import time
import shutil 

global map_x
map_x = 500

global map_y
map_y = 500


global yolomap0
yolomap0 = np.zeros((map_x,map_y))

global image_name
image_name = 'map_data/yolomap1.png'

global image_dir
image_dir = 'map_data/'

global seq
seq = 0

global graham_list
graham_list = []

###graham_scan

global outline
outline = 2

global inline
inline = 1

global notarget
notarget = 3

global dir000
dir000 = 'start.txt'

class Yolomap(Node):
     
    def __init__(self,Hz):
        super().__init__('yolomap')
        self.frame_id = 'lofi000'
        self.subscription = self.create_subscription(Ros2Yolo, self.frame_id ,self.listener_callback, 1)
        timer_period = 1/Hz  # seconds , how frequency pub data
        msg = Ros2Yolo()
    
    def colmap0(self):
     if os.path.isfile(dir000):
        os.remove(dir000)
    
    
     dir00 = 'dense'
     if os.path.exists(dir00):
      shutil.rmtree(dir00) 

     os.makedirs(dir00)
    
     dir00 = 'sparse'
     if os.path.exists(dir00):
      shutil.rmtree(dir00) 

     os.makedirs(dir00)
      
     start0 = time.time()
     str0 = "/home/mingyu/lofi"
     str1 = "colmap feature_extractor \
	   --database_path " + str0 + "/database.db \
	   --image_path " + str0 + "/images"
     os.system(str1)   

     str1 = "colmap exhaustive_matcher \
	   --database_path " + str0 + "/database.db"
     os.system(str1)

     str1 = "colmap mapper \
	    --database_path " + str0 + "/database.db \
	    --image_path " + str0 + "/images \
	    --output_path " + str0 + "/sparse"
     os.system(str1)

     str1 = "colmap image_undistorter \
	    --image_path " + str0 + "/images \
	    --input_path " + str0 + "/sparse/0 \
	    --output_path " + str0 + "/dense \
	    --output_type COLMAP \
	    --max_image_size 200"
     os.system(str1)


     str1 = "colmap patch_match_stereo \
	    --workspace_path " + str0 + "/dense \
	    --workspace_format COLMAP \
	    --PatchMatchStereo.geom_consistency true"
     os.system(str1)


     str1 = "colmap stereo_fusion \
	    --workspace_path " + str0 + "/dense \
	    --workspace_format COLMAP \
	    --input_type geometric \
	    --output_path " + str0 + "/fused0.ply"
     os.system(str1)

     print("time used : + " +  str(time.time() - start0))


	# Read .ply file
     input_file = "fused0.ply"
     pcd = o3d.io.read_point_cloud(input_file) # Read the point cloud

	# Visualize the point cloud within open3d
     o3d.visualization.draw_geometries([pcd]) 

	# Convert open3d format to numpy array
	# Here, you have the point cloud in numpy format. 
     point_cloud_in_numpy = np.asarray(pcd.points)    
	
        
        
    def listener_callback(self,msg):
     if True:
       if os.path.isfile(dir000):
        a = 5
       
       else:
        detect0 = open(dir000, 'a+')
        detect0.close()     
     
             
       if msg.o_label == "zero" and os.path.isfile('end.txt'):
        #self.colmap0()
        os.remove('start.txt') 
        os.system('python3 colmap0.py')
        a = open('start.txt','a+')
        a.close()
        os.remove('end.txt') 
       

       else:
        print("colmap waiting")
        
     #except:
      #print("colmap error")  





def main(args=None):
    rclpy.init(args=args)
    yolo_map = Yolomap(2)
    rclpy.spin(yolo_map)

    yolo_map.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
