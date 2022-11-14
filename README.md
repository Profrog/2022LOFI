# lofi_colmap.py 사용법
COLMAP이 설치된 로컬에서 실행해야 합니다.  
lofi_colmap.py가 다운로드 된 폴더에는 images라는 폴더가 있어야 합니다.  
images 안에 원하는 사진들을 넣으세요.
lofi_colmap.py 파일의 37번째 라인의 해당 코드  
```str0 = "/home/white/Desktop/git/Webcam_Algorithm/lofi"```
를 본인의 디렉토리에 맞게 바꿔줍니다.  
그 후 터미널 창에서 ```python lofi_colmap.py```를 실행합니다.  
해당 파일을 컴파일 하면 콜맵이 자동으로 동작하고, 포인트 클라우드와 메쉬 파일이 팝업 창으로 뜹니다.  

# 포인트 클라우드 & 메쉬화

1. 포인트 클라우드: 사진을 바탕으로 포인트 클라우드 ply 파일을 생성
2. 메쉬화: ply 파일을 바탕으로 점들을 이어 면이 생성된 obj 메쉬 파일을 생성

## 포인트 클라우드

### 사용법

1. 깃 클론을 통해 내려받는다.   
> git clone https://github.com/Profrog/2022competition -b white

2. 해당 폴더에 들어가 sfm.py를 열어 30번 라인에 있는 img_dir을 본인의 사진이 있는 디렉토리로 바꿔준다.
3. 디렉토리 경로를 수정했으면 파일을 저장한 뒤, 터미널 창을 열고 ```python sfm.py```을 실행  

> pip3 install open3d  
> pip3 install opencv-contrib-python
> pip3 install --upgrade requests    
> python sfm.py  

5. 성공적으로 실행됐다면 Point_Cloud 폴더 안에 ```sparse.ply```가 생성되어 있을 것이다.
6. 이를 Mesh Lab으로 불러오면 포인트 클라우드 파일을 열어볼 수 있다.
7. 메쉬화를 하고 싶다면 그 후에 gen_3d_mesh.ipynp를 주피터 노트북으로 열어 셀 단위로 모두 실행한다.
8. 모두 실행되었다면 output 폴더에 크기별로 메쉬화된 obj 파일이 생성된다.
9. 이를 블렌더나 Mesh Lab으로 불러와서 볼 수 있다.

### 데이터셋

http://www.maths.lth.se/matematiklth/personal/calle/dataset/dataset.html
이 곳에 들어가면 다양한 어라운드 뷰 사진을 받아볼 수 있다. 크롬으로 들어갈 경우 파일 다운이 안 될 수 있으니, 엣지 브라우저를 통해 들어가자.

# CUDA, COLMAP 설치하기
## CUDA, CUDA Toolkit 설치하기
1. 우분투 화면 하단의 옵션을 클릭한 뒤, Software & Update를 클릭한다. 그 후 5번째 탭인 Additional Driver에 들어가 현재 본인이 nvidia 드라이버를 쓰고 있는지 확인한다.
2. 터미널 창에 ```nvidia-smi```를 출력했을 때 상단의 Driver Vesrion에 본인이 쓰고 있는 드라이브가 확인되어야 한다.
3. https://developer.nvidia.com/cuda-toolkit-archive 해당 링크에 들어가 CUDA 11.7 이상의 CUDA Toolkit을 내려받는다.
4. Select Target Platform에서 Installer Type은 runfile(local)로 해준다. 그리고 터미널 창에 웹페에지에서 주어지는 명령어를 적어 파일을 다운받는다.
5. 터미널 창에서 Continue, accept를 차례로 입력한다.
6. CUDA Installer 화면에선, 우리는 이미 드라이버를 설치했으므로 엔터를 눌러 X 박스를 해제하고, 나머지는 그대로 둔 뒤 Install을 누른다.
7. CUDA Toolkit 관련 설정을 환경 변수에 추가해준다.(하단 링크 참조)
8. nvcc -V와 nvidia-smi 명령어를 쳤을 때 각각 드라이버에 대한 설명이 나온다면 설치가 완료된 것이다.

CUDA를 설치하는 방법은 하단의 링크를 참조하여 step by step으로 진행하면 된다. 리눅스에 CUDA를 설치하는 법은 구글에 검색하면 정말 많이 나오므로 다른 자료를 참조해도 좋다.
https://webnautes.tistory.com/1428
https://nirsa.tistory.com/332

## COLMAP 설치하기
콜맵 공식 홈페이지에서 설치법을 알 수 있다. https://colmap.github.io/install.html
1. ```sudo apt-get install \
    git \
    cmake \
    build-essential \
    libboost-program-options-dev \
    libboost-filesystem-dev \
    libboost-graph-dev \
    libboost-system-dev \
    libboost-test-dev \
    libeigen3-dev \
    libsuitesparse-dev \
    libfreeimage-dev \
    libmetis-dev \
    libgoogle-glog-dev \
    libgflags-dev \
    libglew-dev \
    qtbase5-dev \
    libqt5opengl5-dev \
    libcgal-dev```
    를 입력하여 필요한 라이브러리를 모두 다운받는다.
    
2. ceres solver 홈페이지 들어가서 해당 파일을 다운받는다. http://ceres-solver.org/installation.html

3. COLMAP 홈페이지에 들어가서 해당 파일을 다운받는다. https://colmap.github.io/install.html

4. CUDA를 성공적으로 설치했다면, ceres solver와 COLMAP을 설치할 때, 'cuda found'등의 메시지가 설치 도중에 터미널 창에 보일 것이다. 이 모든 과정이 성공적으로 진행되었다면, colmap을 bash상에서 제어 가능하다.

5. colmap -h를 눌러 bash에서 필요한 커맨드를 입력해 입체화된 파일을 만들어낼 수 있다. CLI 기반 제어에 대한 튜토리얼 링크: https://colmap.github.io/cli.html

## 현재 상황에 대한 정리
COLMAP은 CUDA GPU를 사용해야만 point cloud를 생성해 내고, CUDA가 깔려있지 않은 PC에선 돌릴 수 없다. 그러나 CUDA를 설치하고 COLMAP을 설치하면 빌드 오류가 발생해서 이틀동안 헤매다 일단 잠깐 내려놓은 상태이다. CUDA 베이스로 COLMAP을 설치해서 성공하면 배쉬에서 모든 것을 컨트롤할 수 있기 때문에 실시간 입체화에 성공할 수 있다. 그러나 그게 안 되면... 발표 때 가라를 쳐서 영상 편집을 해서라도 Dense Cloud를 만들어내는 걸 보여줘야 할 것이다. 콜맵을 설치함에 있어서 어려운 부분이 있다면 언제든 단톡에 연락을 달라.
