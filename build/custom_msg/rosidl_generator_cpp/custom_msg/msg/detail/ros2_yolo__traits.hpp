// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_msg:msg/Ros2Yolo.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSG__MSG__DETAIL__ROS2_YOLO__TRAITS_HPP_
#define CUSTOM_MSG__MSG__DETAIL__ROS2_YOLO__TRAITS_HPP_

#include "custom_msg/msg/detail/ros2_yolo__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_msg::msg::Ros2Yolo>()
{
  return "custom_msg::msg::Ros2Yolo";
}

template<>
inline const char * name<custom_msg::msg::Ros2Yolo>()
{
  return "custom_msg/msg/Ros2Yolo";
}

template<>
struct has_fixed_size<custom_msg::msg::Ros2Yolo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_msg::msg::Ros2Yolo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custom_msg::msg::Ros2Yolo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_MSG__MSG__DETAIL__ROS2_YOLO__TRAITS_HPP_
