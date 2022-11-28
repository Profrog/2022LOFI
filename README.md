# 2022competition

## LOFI 모듈 세팅 

앱 쪽의 코드는 다른 브랜치를 참조

a1. 기본 패키지 세팅 https://github.com/Profrog/2022competition/tree/mingyu 참조  

4가지 패키지의 연합 패키지로 되어있으며 catkin_ws 폴더에는 ros 기반의 웹캠과 lofi모듈간의 무선통신 제어 관련 패키지가, ROS_2_ANDROID 폴더에는 ros2 기반의 리모콘 앱과 lofi 모듈간의 무선통신 제어 관련 패키지가 있으며 lofi 모듈은 해당 모듈을 통합적으로 관리함  

각각의 패키지 안에는 ros2 기준 build, install, log 폴더가 있어야 하고, ros 기준 build, devel 폴더가 있어야 함



a2. 작동모드

시연영상 : https://www.youtube.com/watch?v=yYNCbWS6Buk
./local : webcam + lofi + colmap 노드 실행
./lofi0 : lofi + colmap 노드 실행

a3 통합계획
1차 유선 통합 (최적화된 colmap 노드 포함)
2차 무선 통합
3차 드론 통합
