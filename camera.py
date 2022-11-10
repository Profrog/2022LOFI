from datetime import datetime
import argparse
import cv2
import sys
import time
import os
import subprocess as sp
import numpy as np
import shutil
from PIL import Image,ImageEnhance


#test0
start2 = 0

#ffmpeg -f image2 -r 30 -i web_yolo/%04d.jpg -vcodec libx264 output.mp4

#vc0 = cv2.VideoCapture(0)
vc = cv2.VideoCapture(2) # 0은 노트북 웹캠 2는 usb로 연결된 웹캠

dir0 = 'images/image'
i = 0


dir00 = 'images'
siginal00 ='start.txt'


if os.path.exists(dir00):
 shutil.rmtree(dir00) 

os.makedirs(dir00)

if os.path.isfile(siginal00):
 os.remove(siginal00) 

a = open(siginal00,'a+')
a.close()


while True :
    #time.sleep(0.1)
    print("waiting...")
    

    if cv2.waitKey(1) & 0xFF == ord('q'):
        break


    if True:

        print("webcam start!")
        start = time.time()
        chk = 0         
        vc.set(10,0.5)
        colar0 = 0


        while True:

            #ret0, frame0 = vc0.read()
            #cv2.imshow("Video Window0", frame0)  
            
            if cv2.waitKey(1) & 0xFF == ord('q'):
             print("camera end")
             detect0 = open('end.txt', 'a+')
             detect0.close()
             break
                            
            ret, frame = vc.read()
            #frame = cv2.resize(frame, (1100, 700))   
            cv2.imshow('Video Window', frame)
            img_name = dir0 + str(i) + '.jpg'
            cv2.imwrite('image.jpg',frame)
            test_img = Image.open('image.jpg')
            change_color = ImageEnhance.Color(test_img)
            color_output = change_color.enhance(1.5)
            color_output.save(img_name)
            colar0 = colar0 + 0.05
            
            #dir1 = dir0 + str(i) + '.jpg'
            #dir1 = 'image.jpg'
            
             
            #if True:
             #cv2.imwrite(dir1,frame)
            i = i+1
            time.sleep(0.5)       

            #image = cv2.imread('image.jpg')
            
                  
          

            
        vc.release()
        cv2.destroyAllWindows()

        if chk == 1:
            print("access success")

        else:
            print("access failed")


      

     
      
