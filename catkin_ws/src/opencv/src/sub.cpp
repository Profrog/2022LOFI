#include <ros/ros.h>
#include <opencv2/opencv.hpp>
#include <image_transport/image_transport.h>
#include <opencv2/highgui/highgui.hpp>
#include <cv_bridge/cv_bridge.h>
#include <vector>
#include <std_msgs/UInt8MultiArray.h>
#include <iostream>
#include <string>

using namespace std;

int idx = 0;
char buf[256];
int frame_per_skip = 10;
string adr = "/home/kjjgo35/imagesave/image.jpg";

void imageCallback(const std_msgs::UInt8MultiArray::ConstPtr& array)
{
  try
  {
    cv::Mat frame = cv::imdecode(array->data, 1);
    cv::imshow("view", frame);
    //cv::imwrite("~/lofi/image.jpg",frame);
    cv::imwrite("/home/mingyu/lofi/image.jpg",frame);
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
