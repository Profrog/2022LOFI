#export ROS_HOSTNAME=192.168.0.26
#export ROS_MASTER_URI=http://192.168.0.26:11311

import netifaces as ni
import os
ip = ni.ifaddresses('wlan0')[ni.AF_INET][0]['addr']




with open('.bashrc', 'r+') as file:

    file.seek(0, os.SEEK_END)

    pos = file.tell() -1
    while pos > 0 and file.read(1) != "\n":
        pos -= 1
        file.seek(pos, os.SEEK_SET)

    if pos > 0:
        file.seek(pos, os.SEEK_SET)
        file.truncate()
        
    file.seek(0, os.SEEK_END)

    pos = file.tell() -1
    while pos > 0 and file.read(1) != "\n":
        pos -= 1
        file.seek(pos, os.SEEK_SET)

    if pos > 0:
        file.seek(pos, os.SEEK_SET)
        file.truncate()    
        
        
       
content = open('.bashrc', 'a')
content.write("\nexport ROS_HOSTNAME=" + str(ip) + "\n")
content.write("export ROS_MASTER_URI=http://" + str(ip) + ":11311")
#print(fileContent)

content.close()
