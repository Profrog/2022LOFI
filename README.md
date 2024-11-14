# 2022competition
영상시연 : https://www.youtube.com/watch?v=zBPwgLPdnxA  
보고서 : https://url.kr/e8artp  
상장 : https://url.kr/tmwfjx  

## LOFI 모듈 세팅 

앱 쪽의 코드는 다른 브랜치를 참조

a1. 기본 패키지 세팅 https://github.com/Profrog/2022competition/tree/mingyu 참조  

4가지 패키지의 연합 패키지로 되어있으며 catkin_ws 폴더에는 ros 기반의 웹캠과 lofi모듈간의 무선통신 제어 관련 패키지가, ROS_2_ANDROID 폴더에는 ros2 기반의 리모콘 앱과 lofi 모듈간의 무선통신 제어 관련 패키지가 있으며 lofi 모듈은 해당 모듈을 통합적으로 관리함  

각각의 패키지 안에는 ros2 기준 build, install, log 폴더가 있어야 하고, ros 기준 build, devel 폴더가 있어야 함


------------------------------------------------------

a2. 작동모드

시연영상 : https://www.youtube.com/watch?v=yYNCbWS6Buk

> python3 lofi_program.py

를 통해서 gui 프로그램 실행 가능
![Screenshot from 2022-11-28 19-11-45](https://user-images.githubusercontent.com/26535065/204251626-bf683145-2bc1-4160-8edb-72e7be2e97c1.png)


local 버튼을 누를 시에는 노트북에 연결된 웹캠을 기준으로 시스템이 돌아가고
network 버튼을 누를 시에는 ros로 송신 가능한 무선 이미지 데이터를 기준으로 시스템이 돌아감  


./local : webcam + lofi + colmap 노드 실행
./network : network 모드 바로 실행

------------------------------------------------------


#!/usr/bin/env bash
# generated from catkin/cmake/templates/setup.bash.in

CATKIN_SHELL=bash

# source setup.sh from same directory as this file
_CATKIN_SETUP_DIR=$(builtin cd "`dirname "${BASH_SOURCE[0]}"`" > /dev/null && pwd)
. "$_CATKIN_SETUP_DIR/setup.sh"


a3 작동순서
휴대폰 작동방법 :  
lofi gui의 network를 누른 후, 웹캠의 사진들을 기본 start 모드로 사진 취득을 시작한다. 휴대폰의 end 버튼을 누르면 lofi 모듈 안에 end 시그널이 형성이 되는 데, 그것을 lofi 모듈이 인식하면 취득된 사진 데이터를 바탕으로 colmap을 돌려 모델링 제작을




