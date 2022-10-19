# 2022competition


a1. 노트북-라즈베리파이4 이미지 송수신

1. sudo ifconfig  

![image](https://user-images.githubusercontent.com/26535065/189612367-c2f06c83-b915-4bd9-b3c1-fcd5cdd3093c.png)  
wlo1 : inet 확인  


> gedit ~/.bashrc  



![image](https://user-images.githubusercontent.com/26535065/189612950-8d33f381-0557-4466-b257-29c5eb0a5b96.png)

라즈베리파이 : host랑 master모두 라즈베리파이의 inet 주소 기입    
노트북: master -> 라즈베리파이, host -> 노트북 것 기입  

> source ~/.bashrc

노트북 쪽    
> rosrun opencv opencv_sub  
  

라즈베리파이 쪽 
> roscore  
> (다른 터미널) rosrun opencv opencv_pub    

------------------------------------------------------------

메인서버 구축 관련 

[폴더명] 을 만들고 그 안에 
> git clone https://github.com/Profrog/2022competition -b mingyu

-----------------------------------------

![image](https://user-images.githubusercontent.com/26535065/190570719-21efb3c7-a2b3-4595-9967-7e21b45f94ca.png)


1. build, devel, install, log 폴더 삭제

![image](https://user-images.githubusercontent.com/26535065/190570857-2211a141-2a57-4a1b-ab09-f27b20c1bd3b.png)


2. catkin_ws 폴더에서 build, devel 폴더 삭제


![image](https://user-images.githubusercontent.com/26535065/190571109-790ee559-9ba1-41e3-babe-2488c4fc8baf.png)

3. catkin_ws/src/opencv/src/sub.cpp 에서 파일 경로 수정 ( home/[user]/[폴더명]/image.jpg)


4. catkin_ws의 src폴더를 [폴더명]안으로 옯기고

> catkin_make

5. build 폴더 삭제 후

> source /opt/ros/noetic/setup.bash
> colcon build

6. catkin_ws 폴더 안으로 들어가서

> catkin_make


[폴더 명] -> terminal에서 

> ./rosyolo

--------------------------------------------------------------------
디스플레이 없이 자동화 하는 방법

1. sd카드를 pc에 연결
2. system-boot -> usercfg.txt
3. '#' 제거시 디스플레이 없는 자동화
   '#' 있으면 디스플레이 필요 (코딩


