import os
import sys
import shutil

if os.path.isfile('end.txt'):
 os.remove('end.txt')
a = open('start.txt','a+')
a.close()

dir00 = 'images'

if os.path.exists(dir00):
 shutil.rmtree(dir00) 

os.makedirs(dir00)

print("making start.file")
