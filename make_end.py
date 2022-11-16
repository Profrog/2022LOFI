import os
import sys

if os.path.isfile('start.txt'):
 os.remove('start.txt')
a = open('end.txt','a+')
a.close()

print("making end.file")
