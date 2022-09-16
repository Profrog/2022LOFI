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

class Init_Ros2Yolo_target_num
{
public:
  explicit Init_Ros2Yolo_target_num(::custom_msg::msg::Ros2Yolo & msg)
  : msg_(msg)
  {}
  ::custom_msg::msg::Ros2Yolo target_num(::custom_msg::msg::Ros2Yolo::_target_num_type arg)
  {
    msg_.target_num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msg::msg::Ros2Yolo msg_;
};

class Init_Ros2Yolo_o_size_z
{
public:
  explicit Init_Ros2Yolo_o_size_z(::custom_msg::msg::Ros2Yolo & msg)
  : msg_(msg)
  {}
  Init_Ros2Yolo_target_num o_size_z(::custom_msg::msg::Ros2Yolo::_o_size_z_type arg)
  {
    msg_.o_size_z = std::move(arg);
    return Init_Ros2Yolo_target_num(msg_);
  }

private:
  ::custom_msg::msg::Ros2Yolo msg_;
};

class Init_Ros2Yolo_o_size_x
{
public:
  explicit Init_Ros2Yolo_o_size_x(::custom_msg::msg::Ros2Yolo & msg)
  : msg_(msg)
  {}
  Init_Ros2Yolo_o_size_z o_size_x(::custom_msg::msg::Ros2Yolo::_o_size_x_type arg)
  {
    msg_.o_size_x = std::move(arg);
    return Init_Ros2Yolo_o_size_z(msg_);
  }

private:
  ::custom_msg::msg::Ros2Yolo msg_;
};

class Init_Ros2Yolo_o_y
{
public:
  explicit Init_Ros2Yolo_o_y(::custom_msg::msg::Ros2Yolo & msg)
  : msg_(msg)
  {}
  Init_Ros2Yolo_o_size_x o_y(::custom_msg::msg::Ros2Yolo::_o_y_type arg)
  {
    msg_.o_y = std::move(arg);
    return Init_Ros2Yolo_o_size_x(msg_);
  }

private:
  ::custom_msg::msg::Ros2Yolo msg_;
};

class Init_Ros2Yolo_o_x
{
public:
  explicit Init_Ros2Yolo_o_x(::custom_msg::msg::Ros2Yolo & msg)
  : msg_(msg)
  {}
  Init_Ros2Yolo_o_y o_x(::custom_msg::msg::Ros2Yolo::_o_x_type arg)
  {
    msg_.o_x = std::move(arg);
    return Init_Ros2Yolo_o_y(msg_);
  }

private:
  ::custom_msg::msg::Ros2Yolo msg_;
};

class Init_Ros2Yolo_o_label
{
public:
  explicit Init_Ros2Yolo_o_label(::custom_msg::msg::Ros2Yolo & msg)
  : msg_(msg)
  {}
  Init_Ros2Yolo_o_x o_label(::custom_msg::msg::Ros2Yolo::_o_label_type arg)
  {
    msg_.o_label = std::move(arg);
    return Init_Ros2Yolo_o_x(msg_);
  }

private:
  ::custom_msg::msg::Ros2Yolo msg_;
};

class Init_Ros2Yolo_detect_info
{
public:
  explicit Init_Ros2Yolo_detect_info(::custom_msg::msg::Ros2Yolo & msg)
  : msg_(msg)
  {}
  Init_Ros2Yolo_o_label detect_info(::custom_msg::msg::Ros2Yolo::_detect_info_type arg)
  {
    msg_.detect_info = std::move(arg);
    return Init_Ros2Yolo_o_label(msg_);
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
