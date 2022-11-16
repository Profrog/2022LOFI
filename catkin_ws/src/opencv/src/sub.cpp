#include <ros/ros.h>
#include <opencv2/opencv.hpp>
#include <image_transport/image_transport.h>
#include <opencv2/highgui/highgui.hpp>
#include <cv_bridge/cv_bridge.h>
#include <vector>
#include <std_msgs/UInt8MultiArray.h>
#include <iostream>
#include <string>
#include "opencv2/imgproc.hpp"
#include "opencv2/imgcodecs.hpp"
#include <unistd.h>

using namespace std;

int idx = 0;
int blur_idx = 1;
int clear_idx = 1;
char buf[256];
int frame_per_skip = 10;
string adr = "/home/kjjgo35/imagesave/image.jpg";

void calculate_focal_measure(cv::Mat frame) {
  idx++;
  if(idx == 999999) idx = 0;
  if(idx % 10 != 0) return; 
  cv::Mat gray, dst;
  int kernel_size = 3;
  int scale = 1;
  int delta = 0;
  int ddepth =CV_64F;
  cv::cvtColor(frame,gray,cv::COLOR_BGR2GRAY);
  cv::Laplacian(gray,dst,ddepth,kernel_size,scale,delta,cv::BORDER_DEFAULT);
  cv::Scalar mean, stddev;
  cv::meanStdDev(dst,mean,stddev,cv::Mat());
  double variance = stddev.val[0] * stddev.val[0];
  double threshold = 150;
  if(variance <= threshold) {
    //sprintf(buf,"/home/kjjgo35/imagesave/blur/image_%06d.jpg",blur_idx);
    //cv::imwrite(buf,frame);
    blur_idx++;
  }else {
    //sprintf(buf,"/home/mingyu/lofi/images/image_%06d.jpg",clear_idx);
    sprintf(buf,"/home/mingyu/lofi/image.jpg");
    cv::imwrite(buf,frame);
    //clear_idx++;
  }
  return;
}

void imageCallback(const std_msgs::UInt8MultiArray::ConstPtr& array)
{
  try
  {
    cv::Mat frame = cv::imdecode(array->data, 1);
    cv::imshow("view", frame);
    //cv::imwrite("~/lofi/image.jpg",frame);
    //cv::imwrite("/home/kjjgo35/imagesave/image.jpg",frame);
    calculate_focal_measure(frame);
    cv::waitKey(1);
  }
  catch (cv_bridge::Exception& e)
  {
    ROS_ERROR("cannot decode image");
  }
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "opencv_sub");

  cv::namedWindow("view");
  cv::startWindowThread();

  ros::NodeHandle nh;
  ros::Subscriber sub = nh.subscribe("camera/image", 5, imageCallback);

  ros::spin();
  cv::destroyWindow("view");
}
