# 2022competition

## systemconfig
* notebook : MSI GL63 8RE
* raspberry : Raspberry Pi 4 Model B
* opencv : 4.4.0
* python : 3.8.5
* os(notebook) : Ubuntu 20.04.2 LTS x86_64
* os(raspberry) : Ubuntu 20.04.2 LTS x86_64

## need condition
* raspberry에 opencv 설치 : https://jjeongil.tistory.com/1631
  
## usage
1. 노트북, 라즈베리파이 각각 터미널에서 ifconfig 명령어로 ip 주소 확인
  * 아래 스크린샷에서 inet 이후 부분 (172.30.1.40)
  * 이후 예시 사진 속 172.301.40이 노트북의 ip 주소, 172.30.1.37이 라즈베리파이 ip주소

![Screenshot from 2022-09-12 17-45-14](https://user-images.githubusercontent.com/52230120/189611200-3ce63097-04f4-44eb-8d5a-1e6ba4b1f258.png)

2. gedit ~/.bashrc 명령어로 ROS_HOSTNAME과 ROS_MASTER_URI를 수정
  * zsh 사용시 gedit ~/.zshrc 명령어
  * subscriber인 노트북은 다음 2줄을 맨 아래에 추가
  * export ROS_MASTER_URI=http://라즈베리파이ip주소:11311
  * export ROS_HOSTNAME=노트북ip주소
  
![Screenshot from 2022-09-12 17-54-49](https://user-images.githubusercontent.com/52230120/189613222-004482e1-9530-465f-9834-9b55d1205bf3.png)

  * publisher인 라즈베리파이는 다음 2줄을 맨 아래에 추가
  * export ROS_MASTER_URI=http://라즈베리파이ip주소:11311
  * export ROS_HOSTNAME=라즈베리파이ip주소
   
![Screenshot from 2022-09-12 17-56-40](https://user-images.githubusercontent.com/52230120/189613599-ca9642d9-e130-4d62-91ef-2ab242a373a1.png)
  
  * bash파일에 다음 두 줄이 없다면 추가
  
    ![Screenshot from 2022-09-12 17-58-19](https://user-images.githubusercontent.com/52230120/189613983-b4ee9f6a-fbb8-4ae2-98cf-82e7d8451a36.png)

  * save

3. source ~/.bashrc 명령어로 적용
  * zsh 사용시 source ~/.zshrc 명령어
 
4. 라즈베리파이 터미널에서 roscore 실행

5. 라즈베리파이 터미널에서 rosrun opencv opencv_pub 실행

6. 노트북 터미널에서 rosrun opencv opencv_sub 실행


automatic startup terminal  
https://www.addictivetips.com/ubuntu-linux-tips/autostart-programs-on-gnome-shell/

service enroll  
https://nasanx2001.tistory.com/entry/%EC%9A%B0%EB%B6%84%ED%88%AC-1804-%EC%9E%90%EB%8F%99%EC%8B%A4%ED%96%89-%EC%84%9C%EB%B9%84%EC%8A%A4%EB%93%B1%EB%A1%9D  

-------------------------------------------------------------------
# 현재 까지의 수정사항

1. pub.cpp에서 imshow를 통해 이미지 확인하는 과정 생략

2. 
