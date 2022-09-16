// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_msg:msg/Ros2Yolo.idl
// generated code does not contain a copyright notice
#include "custom_msg/msg/detail/ros2_yolo__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `o_image`
// Member `detect_info`
#include "rosidl_runtime_c/string_functions.h"

bool
custom_msg__msg__Ros2Yolo__init(custom_msg__msg__Ros2Yolo * msg)
{
  if (!msg) {
    return false;
  }
  // o_image
  if (!rosidl_runtime_c__String__init(&msg->o_image)) {
    custom_msg__msg__Ros2Yolo__fini(msg);
    return false;
  }
  // detect_info
  if (!rosidl_runtime_c__String__init(&msg->detect_info)) {
    custom_msg__msg__Ros2Yolo__fini(msg);
    return false;
  }
  return true;
}

void
custom_msg__msg__Ros2Yolo__fini(custom_msg__msg__Ros2Yolo * msg)
{
  if (!msg) {
    return;
  }
  // o_image
  rosidl_runtime_c__String__fini(&msg->o_image);
  // detect_info
  rosidl_runtime_c__String__fini(&msg->detect_info);
}

custom_msg__msg__Ros2Yolo *
custom_msg__msg__Ros2Yolo__create()
{
  custom_msg__msg__Ros2Yolo * msg = (custom_msg__msg__Ros2Yolo *)malloc(sizeof(custom_msg__msg__Ros2Yolo));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_msg__msg__Ros2Yolo));
  bool success = custom_msg__msg__Ros2Yolo__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
custom_msg__msg__Ros2Yolo__destroy(custom_msg__msg__Ros2Yolo * msg)
{
  if (msg) {
    custom_msg__msg__Ros2Yolo__fini(msg);
  }
  free(msg);
}


bool
custom_msg__msg__Ros2Yolo__Sequence__init(custom_msg__msg__Ros2Yolo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  custom_msg__msg__Ros2Yolo * data = NULL;
  if (size) {
    data = (custom_msg__msg__Ros2Yolo *)calloc(size, sizeof(custom_msg__msg__Ros2Yolo));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_msg__msg__Ros2Yolo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_msg__msg__Ros2Yolo__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
custom_msg__msg__Ros2Yolo__Sequence__fini(custom_msg__msg__Ros2Yolo__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_msg__msg__Ros2Yolo__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

custom_msg__msg__Ros2Yolo__Sequence *
custom_msg__msg__Ros2Yolo__Sequence__create(size_t size)
{
  custom_msg__msg__Ros2Yolo__Sequence * array = (custom_msg__msg__Ros2Yolo__Sequence *)malloc(sizeof(custom_msg__msg__Ros2Yolo__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = custom_msg__msg__Ros2Yolo__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
custom_msg__msg__Ros2Yolo__Sequence__destroy(custom_msg__msg__Ros2Yolo__Sequence * array)
{
  if (array) {
    custom_msg__msg__Ros2Yolo__Sequence__fini(array);
  }
  free(array);
}
