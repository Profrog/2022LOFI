// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from custom_msg:msg/Ros2Yolo.idl
// generated code does not contain a copyright notice
#include "custom_msg/msg/detail/ros2_yolo__rosidl_typesupport_fastrtps_cpp.hpp"
#include "custom_msg/msg/detail/ros2_yolo__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace custom_msg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msg
cdr_serialize(
  const custom_msg::msg::Ros2Yolo & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: o_image
  cdr << ros_message.o_image;
  // Member: detect_info
  cdr << ros_message.detect_info;
  // Member: o_label
  cdr << ros_message.o_label;
  // Member: o_x
  cdr << ros_message.o_x;
  // Member: o_y
  cdr << ros_message.o_y;
  // Member: o_size_x
  cdr << ros_message.o_size_x;
  // Member: o_size_z
  cdr << ros_message.o_size_z;
  // Member: target_num
  cdr << ros_message.target_num;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  custom_msg::msg::Ros2Yolo & ros_message)
{
  // Member: o_image
  cdr >> ros_message.o_image;

  // Member: detect_info
  cdr >> ros_message.detect_info;

  // Member: o_label
  cdr >> ros_message.o_label;

  // Member: o_x
  cdr >> ros_message.o_x;

  // Member: o_y
  cdr >> ros_message.o_y;

  // Member: o_size_x
  cdr >> ros_message.o_size_x;

  // Member: o_size_z
  cdr >> ros_message.o_size_z;

  // Member: target_num
  cdr >> ros_message.target_num;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msg
get_serialized_size(
  const custom_msg::msg::Ros2Yolo & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: o_image
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.o_image.size() + 1);
  // Member: detect_info
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.detect_info.size() + 1);
  // Member: o_label
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.o_label.size() + 1);
  // Member: o_x
  {
    size_t item_size = sizeof(ros_message.o_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: o_y
  {
    size_t item_size = sizeof(ros_message.o_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: o_size_x
  {
    size_t item_size = sizeof(ros_message.o_size_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: o_size_z
  {
    size_t item_size = sizeof(ros_message.o_size_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: target_num
  {
    size_t item_size = sizeof(ros_message.target_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msg
max_serialized_size_Ros2Yolo(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: o_image
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: detect_info
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: o_label
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: o_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: o_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: o_size_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: o_size_z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: target_num
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Ros2Yolo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const custom_msg::msg::Ros2Yolo *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Ros2Yolo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<custom_msg::msg::Ros2Yolo *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Ros2Yolo__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const custom_msg::msg::Ros2Yolo *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Ros2Yolo__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Ros2Yolo(full_bounded, 0);
}

static message_type_support_callbacks_t _Ros2Yolo__callbacks = {
  "custom_msg::msg",
  "Ros2Yolo",
  _Ros2Yolo__cdr_serialize,
  _Ros2Yolo__cdr_deserialize,
  _Ros2Yolo__get_serialized_size,
  _Ros2Yolo__max_serialized_size
};

static rosidl_message_type_support_t _Ros2Yolo__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Ros2Yolo__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace custom_msg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_custom_msg
const rosidl_message_type_support_t *
get_message_type_support_handle<custom_msg::msg::Ros2Yolo>()
{
  return &custom_msg::msg::typesupport_fastrtps_cpp::_Ros2Yolo__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, custom_msg, msg, Ros2Yolo)() {
  return &custom_msg::msg::typesupport_fastrtps_cpp::_Ros2Yolo__handle;
}

#ifdef __cplusplus
}
#endif
