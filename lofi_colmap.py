import os
import time
import numpy as np
import open3d as o3d
import shutil

def colmap0():
	start0 = time.time()
	
	#dense, sparse, result, database.b를 만들어둔다.
	dir00 = 'dense'
	if os.path.exists(dir00):
	 shutil.rmtree(dir00)
	os.makedirs(dir00)
    
	dir00 = 'sparse'
	if os.path.exists(dir00):
	 shutil.rmtree(dir00)
	os.makedirs(dir00)
	 
	dir00 = 'result'
	if os.path.exists(dir00):
	 shutil.rmtree(dir00) 
	os.makedirs(dir00)
	
	
	dir00 = 'database.db'
	if os.path.isfile(dir00):	
	 os.remove(dir00)
	
	#time.sleep(0.5)는 왜 걸어둔 거지?
	time.sleep(0.5)
	
	
	
	start0 = time.time()
	str0 = "/home/white/Desktop/git/Webcam_Algorithm/lofi"
	
	#feature extraction
	str1 = "colmap feature_extractor \
   --database_path " + str0 + "/database.db \
   --image_path " + str0 + "/images"
	os.system(str1) #cli command

	str1 = "colmap exhaustive_matcher \
   --database_path " + str0 + "/database.db"
	os.system(str1)

	str1 = "colmap mapper \
    --database_path " + str0 + "/database.db \
    --image_path " + str0 + "/images \
    --output_path " + str0 + "/sparse"
	os.system(str1)

	str1 = "colmap image_undistorter \
    --image_path " + str0 + "/images \
    --input_path " + str0 + "/sparse/0 \
    --output_path " + str0 + "/dense \
    --output_type COLMAP \
    --max_image_size 300"
	os.system(str1)


	str1 = "colmap patch_match_stereo \
    --workspace_path " + str0 + "/dense \
    --workspace_format COLMAP \
    --PatchMatchStereo.geom_consistency true"
	os.system(str1)


	str1 = "colmap stereo_fusion \
    --workspace_path " + str0 + "/dense \
    --workspace_format COLMAP \
    --input_type geometric \
    --output_path " + str0 + "/result/fused0.ply"
	os.system(str1)
	
	str1 = "colmap poisson_mesher \
    --input_path " + str0 + "/result/fused0.ply \
    --output_path " + str0 + "/result/meshed-poisson.ply"
	os.system(str1)

	print("time used : + " +  str(time.time() - start0))

def vis():
    input_file = "result/fused0.ply"
    pcd = o3d.io.read_point_cloud(input_file)
    mesh = o3d.io.read_triangle_mesh("result/meshed-poisson.ply")

    vis = o3d.visualization.VisualizerWithEditing()
    vis.create_window(window_name='TopLeft', width=600, height=540, left=0, top=0)
    vis.add_geometry(pcd)
    # vis.add_geometry(point_mesh_sphere)

    vis_result = o3d.visualization.VisualizerWithEditing()
    vis_result.create_window(window_name='TopRight', width=600, height=540, left=800, top=0)
    vis_result.add_geometry(mesh)

    while True:
        vis.update_geometry(pcd)
        if not vis.poll_events():
            break
        vis.update_renderer()

        vis_result.update_geometry(pcd)
        if not vis_result.poll_events():
            break
        vis_result.update_renderer()

    vis.destroy_window()
    vis_result.destroy_window()

colmap0()
vis()
