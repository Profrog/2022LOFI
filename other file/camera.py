from pyzbar import pyzbar
from datetime import datetime
import argparse
import cv2
import sys
import time
import os
import subprocess as sp
import numpy as np


#test0
start2 = 0


#vc0 = cv2.VideoCapture(0)
vc = cv2.VideoCapture(2) # 0은 노트북 웹캠 2는 usb로 연결된 웹캠

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


        while True:

            #ret0, frame0 = vc0.read()
            #cv2.imshow("Video Window0", frame0)  
            
            ret, frame = vc.read()
            #frame = cv2.cvtColor(frame0, cv2.COLOR_BGR2GRAY)
            
            cv2.imshow('Video Window', frame)   
            cv2.imwrite('image.jpg',frame)     

            image = cv2.imread('image.jpg')
            barcodes = pyzbar.decode(image)
                                
            if cv2.waitKey(1) & 0xFF == ord('q'):
                break

            
        vc.release()
        cv2.destroyAllWindows()

        if chk == 1:
            print("access success")

        else:
            print("access failed")


      

     
      
