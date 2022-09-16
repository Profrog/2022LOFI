// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from custom_msg:msg/Ros2Yolo.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSG__MSG__DETAIL__ROS2_YOLO__FUNCTIONS_H_
#define CUSTOM_MSG__MSG__DETAIL__ROS2_YOLO__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "custom_msg/msg/rosidl_generator_c__visibility_control.h"

#include "custom_msg/msg/detail/ros2_yolo__struct.h"

/// Initialize msg/Ros2Yolo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * custom_msg__msg__Ros2Yolo
 * )) before or use
 * custom_msg__msg__Ros2Yolo__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msg
bool
custom_msg__msg__Ros2Yolo__init(custom_msg__msg__Ros2Yolo * msg);

/// Finalize msg/Ros2Yolo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msg
void
custom_msg__msg__Ros2Yolo__fini(custom_msg__msg__Ros2Yolo * msg);

/// Create msg/Ros2Yolo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * custom_msg__msg__Ros2Yolo__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msg
custom_msg__msg__Ros2Yolo *
custom_msg__msg__Ros2Yolo__create();

/// Destroy msg/Ros2Yolo message.
/**
 * It calls
 * custom_msg__msg__Ros2Yolo__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msg
void
custom_msg__msg__Ros2Yolo__destroy(custom_msg__msg__Ros2Yolo * msg);


/// Initialize array of msg/Ros2Yolo messages.
/**
 * It allocates the memory for the number of elements and calls
 * custom_msg__msg__Ros2Yolo__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msg
bool
custom_msg__msg__Ros2Yolo__Sequence__init(custom_msg__msg__Ros2Yolo__Sequence * array, size_t size);

/// Finalize array of msg/Ros2Yolo messages.
/**
 * It calls
 * custom_msg__msg__Ros2Yolo__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msg
void
custom_msg__msg__Ros2Yolo__Sequence__fini(custom_msg__msg__Ros2Yolo__Sequence * array);

/// Create array of msg/Ros2Yolo messages.
/**
 * It allocates the memory for the array and calls
 * custom_msg__msg__Ros2Yolo__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msg
custom_msg__msg__Ros2Yolo__Sequence *
custom_msg__msg__Ros2Yolo__Sequence__create(size_t size);

/// Destroy array of msg/Ros2Yolo messages.
/**
 * It calls
 * custom_msg__msg__Ros2Yolo__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msg
void
custom_msg__msg__Ros2Yolo__Sequence__destroy(custom_msg__msg__Ros2Yolo__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSG__MSG__DETAIL__ROS2_YOLO__FUNCTIONS_H_
