// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from custom_msg:msg/Ros2Yolo.idl
// generated code does not contain a copyright notice
#include "custom_msg/msg/detail/ros2_yolo__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "custom_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "custom_msg/msg/detail/ros2_yolo__struct.h"
#include "custom_msg/msg/detail/ros2_yolo__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // detect_info, o_image, o_label
#include "rosidl_runtime_c/string_functions.h"  // detect_info, o_image, o_label

// forward declare type support functions


using _Ros2Yolo__ros_msg_type = custom_msg__msg__Ros2Yolo;

static bool _Ros2Yolo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Ros2Yolo__ros_msg_type * ros_message = static_cast<const _Ros2Yolo__ros_msg_type *>(untyped_ros_message);
  // Field name: o_image
  {
    const rosidl_runtime_c__String * str = &ros_message->o_image;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: detect_info
  {
    const rosidl_runtime_c__String * str = &ros_message->detect_info;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: o_label
  {
    const rosidl_runtime_c__String * str = &ros_message->o_label;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: o_x
  {
    cdr << ros_message->o_x;
  }

  // Field name: o_y
  {
    cdr << ros_message->o_y;
  }

  // Field name: o_size_x
  {
    cdr << ros_message->o_size_x;
  }

  // Field name: o_size_z
  {
    cdr << ros_message->o_size_z;
  }

  // Field name: target_num
  {
    cdr << ros_message->target_num;
  }

  return true;
}

static bool _Ros2Yolo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Ros2Yolo__ros_msg_type * ros_message = static_cast<_Ros2Yolo__ros_msg_type *>(untyped_ros_message);
  // Field name: o_image
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->o_image.data) {
      rosidl_runtime_c__String__init(&ros_message->o_image);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->o_image,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'o_image'\n");
      return false;
    }
  }

  // Field name: detect_info
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->detect_info.data) {
      rosidl_runtime_c__String__init(&ros_message->detect_info);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->detect_info,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'detect_info'\n");
      return false;
    }
  }

  // Field name: o_label
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->o_label.data) {
      rosidl_runtime_c__String__init(&ros_message->o_label);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->o_label,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'o_label'\n");
      return false;
    }
  }

  // Field name: o_x
  {
    cdr >> ros_message->o_x;
  }

  // Field name: o_y
  {
    cdr >> ros_message->o_y;
  }

  // Field name: o_size_x
  {
    cdr >> ros_message->o_size_x;
  }

  // Field name: o_size_z
  {
    cdr >> ros_message->o_size_z;
  }

  // Field name: target_num
  {
    cdr >> ros_message->target_num;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msg
size_t get_serialized_size_custom_msg__msg__Ros2Yolo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Ros2Yolo__ros_msg_type * ros_message = static_cast<const _Ros2Yolo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name o_image
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->o_image.size + 1);
  // field.name detect_info
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->detect_info.size + 1);
  // field.name o_label
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->o_label.size + 1);
  // field.name o_x
  {
    size_t item_size = sizeof(ros_message->o_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name o_y
  {
    size_t item_size = sizeof(ros_message->o_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name o_size_x
  {
    size_t item_size = sizeof(ros_message->o_size_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name o_size_z
  {
    size_t item_size = sizeof(ros_message->o_size_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name target_num
  {
    size_t item_size = sizeof(ros_message->target_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Ros2Yolo__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_custom_msg__msg__Ros2Yolo(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msg
size_t max_serialized_size_custom_msg__msg__Ros2Yolo(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: o_image
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: detect_info
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: o_label
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: o_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: o_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: o_size_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: o_size_z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: target_num
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Ros2Yolo__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_custom_msg__msg__Ros2Yolo(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Ros2Yolo = {
  "custom_msg::msg",
  "Ros2Yolo",
  _Ros2Yolo__cdr_serialize,
  _Ros2Yolo__cdr_deserialize,
  _Ros2Yolo__get_serialized_size,
  _Ros2Yolo__max_serialized_size
};

static rosidl_message_type_support_t _Ros2Yolo__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Ros2Yolo,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msg, msg, Ros2Yolo)() {
  return &_Ros2Yolo__type_support;
}

#if defined(__cplusplus)
}
#endif
