import sys
import os
from PyQt5.QtWidgets import *
from PyQt5 import uic
	 
UI = 'lofi.ui'
class Dialog(QDialog):

    
    def delete_file(self):
     print('delete start/end file')
     if os.path.isfile('start.txt'):
      os.remove('start.txt')
 
     if os.path.isfile('end.txt'):
      os.remove('end.txt')


    def __init__(self):
        super().__init__()
        uic.loadUi(UI, self)
        self.setting()
         
    def setting(self):
        self.camera.clicked.connect(self.camera0)
        self.ros.clicked.connect(self.ros0)
        self.camera_r1.clicked.connect(self.camera_r10)
        self.camera_r2.clicked.connect(self.camera_r20)
        self.local.clicked.connect(self.local0)
        self.fly.clicked.connect(self.fly0)
        self.obj.clicked.connect(self.obj0)
 
    def camera0(self):
    	os.system("python3 camera.py")
        
 
    def ros0(self):
        os.system("python3 colmap0.py")
		 
		 
    def camera_r10(self):
        self.delete_file()
        a = open('start.txt','a+')
        a.close()
        
           		 
    def camera_r20(self):
        self.delete_file()
        a = open('end.txt','a+')
        a.close()	 
        
           
    def local0(self):
        os.system("./local")	
        
        
    def fly0(self):
        os.system("meshlab result/fused0.ply")
    
    def obj0(self):
        os.system("meshlab result/fused0.ply")	           	        
	 
	 
app = QApplication(sys.argv)
ex = Dialog()
ex.show()
sys.exit(app.exec_())
