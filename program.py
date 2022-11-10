import sys
import os
from PyQt5.QtWidgets import *
from PyQt5 import uic
	 
UI = 'lofi.ui'
class Dialog(QDialog):
    def __init__(self):
        super().__init__()
        uic.loadUi(UI, self)
        self.setting()
 
    def setting(self):
        self.camera.clicked.connect(self.camera0)
        self.ros.clicked.connect(self.ros0)
 
    def camera0(self):
    	os.system("./cam1")
        
 
    def ros0(self):
        os.system("./ros1")
	 
app = QApplication(sys.argv)
ex = Dialog()
ex.show()
sys.exit(app.exec_())
