# 포인트 클라우드 & 메쉬화

1. 포인트 클라우드: 사진을 바탕으로 포인트 클라우드 ply 파일을 생성
2. 메쉬화: ply 파일을 바탕으로 점들을 이어 면이 생성된 obj 메쉬 파일을 생성

## 포인트 클라우드

### 사용법

1. 깃 클론을 통해 내려받는다.   
> git clone https://github.com/Profrog/2022competition -b white

2. 해당 폴더에 들어가 sfm.py를 열어 30번 라인에 있는 img_dir을 본인의 사진이 있는 디렉토리로 바꿔준다.
3. 디렉토리 경로를 수정했으면 파일을 저장한 뒤, 터미널 창을 열고 ```python sfm.py```을 실행  

> python sfm.py  

5. 성공적으로 실행됐다면 Point_Cloud 폴더 안에 ```sparse.ply```가 생성되어 있을 것이다.
6. 이를 Mesh Lab으로 불러오면 포인트 클라우드 파일을 열어볼 수 있다.
7. 메쉬화를 하고 싶다면 그 후에 gen_3d_mesh.ipynp를 주피터 노트북으로 열어 셀 단위로 모두 실행한다.
8. 모두 실행되었다면 output 폴더에 크기별로 메쉬화된 obj 파일이 생성된다.
9. 이를 블렌더나 Mesh Lab으로 불러와서 볼 수 있다.

### 데이터셋

http://www.maths.lth.se/matematiklth/personal/calle/dataset/dataset.html
이 곳에 들어가면 다양한 어라운드 뷰 사진을 받아볼 수 있다. 크롬으로 들어갈 경우 파일 다운이 안 될 수 있으니, 엣지 브라우저를 통해 들어가자.

