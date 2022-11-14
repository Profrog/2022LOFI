// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_msg:msg/Ros2Yolo.idl
// generated code does not contain a copyright notice
#include "custom_msg/msg/detail/ros2_yolo__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `o_image`
// Member `detect_info`
// Member `o_label`
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
  // o_label
  if (!rosidl_runtime_c__String__init(&msg->o_label)) {
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
  // o_label
  rosidl_runtime_c__String__fini(&msg->o_label);
}

bool
custom_msg__msg__Ros2Yolo__are_equal(const custom_msg__msg__Ros2Yolo * lhs, const custom_msg__msg__Ros2Yolo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // o_image
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->o_image), &(rhs->o_image)))
  {
    return false;
  }
  // detect_info
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->detect_info), &(rhs->detect_info)))
  {
    return false;
  }
  // o_label
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->o_label), &(rhs->o_label)))
  {
    return false;
  }
  return true;
}

bool
custom_msg__msg__Ros2Yolo__copy(
  const custom_msg__msg__Ros2Yolo * input,
  custom_msg__msg__Ros2Yolo * output)
{
  if (!input || !output) {
    return false;
  }
  // o_image
  if (!rosidl_runtime_c__String__copy(
      &(input->o_image), &(output->o_image)))
  {
    return false;
  }
  // detect_info
  if (!rosidl_runtime_c__String__copy(
      &(input->detect_info), &(output->detect_info)))
  {
    return false;
  }
  // o_label
  if (!rosidl_runtime_c__String__copy(
      &(input->o_label), &(output->o_label)))
  {
    return false;
  }
  return true;
}

custom_msg__msg__Ros2Yolo *
custom_msg__msg__Ros2Yolo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msg__msg__Ros2Yolo * msg = (custom_msg__msg__Ros2Yolo *)allocator.allocate(sizeof(custom_msg__msg__Ros2Yolo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_msg__msg__Ros2Yolo));
  bool success = custom_msg__msg__Ros2Yolo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_msg__msg__Ros2Yolo__destroy(custom_msg__msg__Ros2Yolo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_msg__msg__Ros2Yolo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_msg__msg__Ros2Yolo__Sequence__init(custom_msg__msg__Ros2Yolo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msg__msg__Ros2Yolo * data = NULL;

  if (size) {
    data = (custom_msg__msg__Ros2Yolo *)allocator.zero_allocate(size, sizeof(custom_msg__msg__Ros2Yolo), allocator.state);
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
      allocator.deallocate(data, allocator.state);
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
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_msg__msg__Ros2Yolo__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
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
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msg__msg__Ros2Yolo__Sequence * array = (custom_msg__msg__Ros2Yolo__Sequence *)allocator.allocate(sizeof(custom_msg__msg__Ros2Yolo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_msg__msg__Ros2Yolo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_msg__msg__Ros2Yolo__Sequence__destroy(custom_msg__msg__Ros2Yolo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_msg__msg__Ros2Yolo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_msg__msg__Ros2Yolo__Sequence__are_equal(const custom_msg__msg__Ros2Yolo__Sequence * lhs, const custom_msg__msg__Ros2Yolo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_msg__msg__Ros2Yolo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_msg__msg__Ros2Yolo__Sequence__copy(
  const custom_msg__msg__Ros2Yolo__Sequence * input,
  custom_msg__msg__Ros2Yolo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_msg__msg__Ros2Yolo);
    custom_msg__msg__Ros2Yolo * data =
      (custom_msg__msg__Ros2Yolo *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_msg__msg__Ros2Yolo__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          custom_msg__msg__Ros2Yolo__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_msg__msg__Ros2Yolo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
