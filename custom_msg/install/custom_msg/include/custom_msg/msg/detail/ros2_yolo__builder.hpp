// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msg:msg/Ros2Yolo.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSG__MSG__DETAIL__ROS2_YOLO__BUILDER_HPP_
#define CUSTOM_MSG__MSG__DETAIL__ROS2_YOLO__BUILDER_HPP_

#include "custom_msg/msg/detail/ros2_yolo__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msg
{

namespace msg
{

namespace builder
{

class Init_Ros2Yolo_detect_info
{
public:
  explicit Init_Ros2Yolo_detect_info(::custom_msg::msg::Ros2Yolo & msg)
  : msg_(msg)
  {}
  ::custom_msg::msg::Ros2Yolo detect_info(::custom_msg::msg::Ros2Yolo::_detect_info_type arg)
  {
    msg_.detect_info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msg::msg::Ros2Yolo msg_;
};

class Init_Ros2Yolo_o_image
{
public:
  Init_Ros2Yolo_o_image()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Ros2Yolo_detect_info o_image(::custom_msg::msg::Ros2Yolo::_o_image_type arg)
  {
    msg_.o_image = std::move(arg);
    return Init_Ros2Yolo_detect_info(msg_);
  }

private:
  ::custom_msg::msg::Ros2Yolo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msg::msg::Ros2Yolo>()
{
  return custom_msg::msg::builder::Init_Ros2Yolo_o_image();
}

}  // namespace custom_msg

#endif  // CUSTOM_MSG__MSG__DETAIL__ROS2_YOLO__BUILDER_HPP_
