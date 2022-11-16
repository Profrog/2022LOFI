import rclpy
from rclpy.node import Node

from std_msgs.msg import String
from custom_msg.msg import Ros2Yolo
import time
import os
import sys, time
import numpy as np
from scipy.ndimage import filters
import base64
import cv2
import io

from PIL import Image,ImageEnhance
from datetime import datetime
import argparse
import time
import subprocess
import signal
import numpy as np
import re
import math
from PyQt5.QtWidgets import QApplication, QLabel
import shutil 

######about image###########

global yolo_image  #after yolo detecting image
yolo_image = 'image2.jpg'

global y_image_dir
y_image_dir = 'images/image0'


global original_image #before yolo detecting image
original_image = 'image.jpg'

global path1
path1 = os.path.abspath('/home/mingyu/git_yolo/darknet/rosyolo2/ros2-vn300/dew_ws/image.jpg') 


global image_d
global where_obj 

  
global d_info
global d_info0
 
global seq
seq = 0 

alpha = 1.0
 
#### about data #####
  
  
####image <-> string####  
  
def encode_img(img_fn):#encoding for img to string
 try:
  img = img_fn
  bmp_img = cv2.imencode('.jpg', img)
  b64_string = base64.b64encode(bmp_img[1]).decode('utf-8') #utf-8, .jpg
  return b64_string
 except BaseException as b:
  print("image에서 string 변환 중 오류")
  
def decode_img(): #decoding for string to img
 try: 
  global seq #detection된 100개의 사진 까지만 capture(저장 용량 문제) 
  if seq < 100:
   seq +=1
       
  else:
   seq = 1
   
  yolo_image = y_image_dir + str(seq) + ".jpg"
  
  frame = cv2.imread('image.jpg')
  #frame = np.clip((1 + alpha) * frame - 128 * alpha, 0, 255).astype(np.uint8)
  cv2.imwrite(yolo_image,frame)  
  print(yolo_image + " saving")  
 except BaseException as c:
  print("string에서 image 변환 중 오류")  
  

####image <-> string####  


###ros2###        
class LOFIPUB(Node):

    def __init__(self, Hz):
        super().__init__('lofi_node')
        self.frame_id = 'lofi000'
        self.publisher_ = self.create_publisher(Ros2Yolo, self.frame_id , 100)
        timer_period = 1/Hz  # seconds , how frequency pub data
        self.timer = self.create_timer(timer_period, self.image_define0)
    
    def image_define0(self):
     try:
      image = cv2.imread(original_image)
      image0 = encode_img(image)
      msg = Ros2Yolo()
      #msg.target_num = 5
      msg.o_image = image0
      msg.detect_info = "0"
      msg.o_label = "one"
       
      if os.path.isfile('end.txt'):
       msg.o_label = "zero"
       print("giving colmap siginal")
      
      if os.path.isfile('start.txt'):     
       decode_img()
       
      self.publisher_.publish(msg)              
     except:
      print("lofi0 error") 
    
               
                          
def main(args=None):

    rclpy.init(args=args)
    lofi_node = LOFIPUB(1.2) # sensor frequerency is here
    rclpy.spin(lofi_node)
   
    lofi_node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
