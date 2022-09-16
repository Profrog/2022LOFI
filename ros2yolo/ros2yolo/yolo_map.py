import rclpy
from rclpy.node import Node
from custom_msg.msg import Ros2Yolo     # CHANGE
import numpy as np
import matplotlib.pyplot as plt
import os
from bresenham import bresenham

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

global detect0
detect0 = open('detect.txt', 'r') #about size
string0 = detect0.readline()


class Yolomap(Node):
     
    def __init__(self,Hz):
        super().__init__('yolomap')
        self.frame_id = 'ros2yolo'
        self.subscription = self.create_subscription(Ros2Yolo, self.frame_id ,self.listener_callback, 1)
        timer_period = 1/Hz  # seconds , how frequency pub data
        msg = Ros2Yolo
        
        
    def point_mark(self,x1,x2,y1,y2,data):    
     for x0 in range(x1,x2 +1,1):
       for y0 in range(y1,y2 +1,1):
         yolomap0[x0,y0] = int(data) #after using other way  
        
    def inclination(self,p1, p2):
     return p2[0] - p1[0], p2[1] - p1[1]
 
    def ccw(self,p1, p2, p3):
     v, u = self.inclination(p1, p2), self.inclination(p2, p3)
     if v[0] * u[1] > v[1] * u[0]:
        return True
     return False

    def convex_hull(self,graham_list):
     convex = list()
     for p3 in graham_list:
         while len(convex) >= 2:
             p1, p2 = convex[-2], convex[-1]
             if self.ccw(p1, p2, p3):
                 break
             convex.pop()
         convex.append(p3)
     
     dot1 = []
     dot2 = []
      
     for x1 in range(0,len(convex)):
      yolomap0[convex[x1][0],convex[x1][1]] = outline #data
          
      if x1 < (len(convex) -1):
       x2 = x1 + 1
       dot1.append([convex[x1][0], convex[x1][1]])
       dot2.append([convex[x2][0], convex[x2][1]])
       
          
     for x3 in range(0,len(dot1)):    
      bresenham1 = list(bresenham(dot1[x3][0], dot1[x3][1], dot2[x3][0], dot2[x3][1])) 
      for x4 in range(0,len(bresenham1)):
        yolomap0[bresenham1[x4][0],bresenham1[x4][1]] = outline #data
       
     for y0 in range(0,map_y,1):    
      mode = 0
      last_index = map_x
             
      for x0 in range(0,map_x,1):
    
       if mode == 0 and yolomap0[x0,y0] > inline:
        mode = 2
        last_index = x0 + 1

       elif mode == 2 and yolomap0[x0,y0] > inline:
        last_index = x0 + 1


       elif mode == 2 and yolomap0[x0,y0] < outline:       
        yolomap0[x0,y0] = inline
        mode = 3
             
       if mode == 3 and yolomap0[x0,y0] > inline:
        last_index = x0 + 1
      
       elif mode == 3 and yolomap0[x0,y0] < outline:
        yolomap0[x0,y0] = inline

         
      for x1 in range(last_index,map_x,1):
       if yolomap0[x1,y0] < outline:   
        yolomap0[x1,y0] = 0

                 
     return len(convex)
    

    def listener_callback(self,msg):
     try:        
      
       global graham_list   
       camera_x = int(map_x/2)
       camera_y = int(0)
       x_s = string0.find(msg.o_label)

       if msg.o_label == "zero":
        graham_list = []
        global yolomap0
        yolomap0 = np.zeros((map_x,map_y))
        return

       
       #yolomap0 = np.zeros((map_x,map_y))    
       #self.point_mark(int(camera_x - map_x/100) ,int(camera_x + map_x/100) , int(camera_y) , int(camera_y + map_y/50) , 2)
      
      
       o_map_xl = int((msg.o_x - msg.o_size_x)*100) + camera_x
       o_map_xr = int((msg.o_x + msg.o_size_x)*100) + camera_x
       o_map_yf = int(msg.o_y * 100) + camera_y
       o_map_yb = int((msg.o_y + msg.o_size_z)*100) + camera_y
       
       if o_map_xl < 0: o_map_xl = 0
       if o_map_xl >= map_x: o_map_xl = map_x - 1
       if o_map_xr < 0: o_map_xr = 0
       if o_map_xr >= map_x: o_map_xr = map_x - 1
       
       if o_map_yf < 0: o_map_yf = 0
       if o_map_yf >= map_y: o_map_yf = map_y - 1
       if o_map_yb < 0: o_map_yb = 0
       if o_map_yb >= map_y: o_map_yb = map_y - 1
       
       print(msg.o_label + ":" + str(o_map_xl) + "," + str(o_map_xr) + "^" + str(o_map_yf) + "," + str(o_map_yb)+ "+" + str(x_s) + "\n")
       
       
         
       graham_list.append([o_map_xl, o_map_yf])
       graham_list.append([o_map_xr, o_map_yf])
       graham_list.append([o_map_xl, o_map_yb])
       graham_list.append([o_map_xr, o_map_yb])
       self.point_mark(o_map_xl,o_map_xr,o_map_yf,o_map_yb,msg.target_num)
           
       answer = -2
       #graham_list = sorted(graham_list, key=lambda pos:(pos[0], pos[1]))
       #answer += self.convex_hull(graham_list)

       #graham_list.reverse()
       #answer += self.convex_hull(graham_list)
        
       
       #self.point_mark(o_map_xl,o_map_xr,o_map_yf,o_map_yb,outline)
                
       plt.matshow(yolomap0)
       
       global seq
      
       if seq < 100:
        seq +=1
       
       else:
        seq = 1
        
        
       yolomap_image =  image_dir + "yolomap" + str(seq) + ".png"
        
       
       if os.path.isfile(yolomap_image):
        os.remove(yolomap_image) 


       plt.savefig( yolomap_image,dpi = 300)
                
     except BaseException as e:
      print(e)  
      
     

         
       

def main(args=None):
    rclpy.init(args=args)
    yolo_map = Yolomap(2)
    rclpy.spin(yolo_map)

    yolo_map.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
