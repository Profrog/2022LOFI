// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msg:msg/Ros2Yolo.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSG__MSG__DETAIL__ROS2_YOLO__STRUCT_H_
#define CUSTOM_MSG__MSG__DETAIL__ROS2_YOLO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'o_image'
// Member 'detect_info'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/Ros2Yolo in the package custom_msg.
typedef struct custom_msg__msg__Ros2Yolo
{
  rosidl_runtime_c__String o_image;
  rosidl_runtime_c__String detect_info;
} custom_msg__msg__Ros2Yolo;

// Struct for a sequence of custom_msg__msg__Ros2Yolo.
typedef struct custom_msg__msg__Ros2Yolo__Sequence
{
  custom_msg__msg__Ros2Yolo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msg__msg__Ros2Yolo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSG__MSG__DETAIL__ROS2_YOLO__STRUCT_H_
