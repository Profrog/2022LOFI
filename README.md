# 2022competition


a1. 노트북-라즈베리파이4 이미지 송수신

1. sudo ifconfig  

![image](https://user-images.githubusercontent.com/26535065/189612367-c2f06c83-b915-4bd9-b3c1-fcd5cdd3093c.png)  
wlo1 : inet 확인  


gedit ~/.bashrc  



![image](https://user-images.githubusercontent.com/26535065/189612950-8d33f381-0557-4466-b257-29c5eb0a5b96.png)

라즈베리파이 : host랑 master모두 라즈베리파이의 inet 주소 기입    
노트북: master -> 라즈베리파이, host -> 노트북 것 기입  

source ~/.bashrc

노트북 쪽    
rosrun opencv opencv_sub  
  

라즈베리파이 쪽 
roscore  
(다른 터미널) rosrun opencv opencv_pub    

------------------------------------------------------------

메인서버 구축 관련















