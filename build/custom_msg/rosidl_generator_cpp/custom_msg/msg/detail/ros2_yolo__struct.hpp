// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msg:msg/Ros2Yolo.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSG__MSG__DETAIL__ROS2_YOLO__STRUCT_HPP_
#define CUSTOM_MSG__MSG__DETAIL__ROS2_YOLO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_msg__msg__Ros2Yolo __attribute__((deprecated))
#else
# define DEPRECATED__custom_msg__msg__Ros2Yolo __declspec(deprecated)
#endif

namespace custom_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Ros2Yolo_
{
  using Type = Ros2Yolo_<ContainerAllocator>;

  explicit Ros2Yolo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->o_image = "";
      this->detect_info = "";
      this->o_label = "";
      this->o_x = 0.0;
      this->o_y = 0.0;
      this->o_size_x = 0.0;
      this->o_size_z = 0.0;
      this->target_num = 0l;
    }
  }

  explicit Ros2Yolo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : o_image(_alloc),
    detect_info(_alloc),
    o_label(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->o_image = "";
      this->detect_info = "";
      this->o_label = "";
      this->o_x = 0.0;
      this->o_y = 0.0;
      this->o_size_x = 0.0;
      this->o_size_z = 0.0;
      this->target_num = 0l;
    }
  }

  // field types and members
  using _o_image_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _o_image_type o_image;
  using _detect_info_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _detect_info_type detect_info;
  using _o_label_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _o_label_type o_label;
  using _o_x_type =
    double;
  _o_x_type o_x;
  using _o_y_type =
    double;
  _o_y_type o_y;
  using _o_size_x_type =
    double;
  _o_size_x_type o_size_x;
  using _o_size_z_type =
    double;
  _o_size_z_type o_size_z;
  using _target_num_type =
    int32_t;
  _target_num_type target_num;

  // setters for named parameter idiom
  Type & set__o_image(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->o_image = _arg;
    return *this;
  }
  Type & set__detect_info(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->detect_info = _arg;
    return *this;
  }
  Type & set__o_label(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->o_label = _arg;
    return *this;
  }
  Type & set__o_x(
    const double & _arg)
  {
    this->o_x = _arg;
    return *this;
  }
  Type & set__o_y(
    const double & _arg)
  {
    this->o_y = _arg;
    return *this;
  }
  Type & set__o_size_x(
    const double & _arg)
  {
    this->o_size_x = _arg;
    return *this;
  }
  Type & set__o_size_z(
    const double & _arg)
  {
    this->o_size_z = _arg;
    return *this;
  }
  Type & set__target_num(
    const int32_t & _arg)
  {
    this->target_num = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msg::msg::Ros2Yolo_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msg::msg::Ros2Yolo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msg::msg::Ros2Yolo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msg::msg::Ros2Yolo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msg::msg::Ros2Yolo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msg::msg::Ros2Yolo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msg::msg::Ros2Yolo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msg::msg::Ros2Yolo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msg::msg::Ros2Yolo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msg::msg::Ros2Yolo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msg__msg__Ros2Yolo
    std::shared_ptr<custom_msg::msg::Ros2Yolo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msg__msg__Ros2Yolo
    std::shared_ptr<custom_msg::msg::Ros2Yolo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Ros2Yolo_ & other) const
  {
    if (this->o_image != other.o_image) {
      return false;
    }
    if (this->detect_info != other.detect_info) {
      return false;
    }
    if (this->o_label != other.o_label) {
      return false;
    }
    if (this->o_x != other.o_x) {
      return false;
    }
    if (this->o_y != other.o_y) {
      return false;
    }
    if (this->o_size_x != other.o_size_x) {
      return false;
    }
    if (this->o_size_z != other.o_size_z) {
      return false;
    }
    if (this->target_num != other.target_num) {
      return false;
    }
    return true;
  }
  bool operator!=(const Ros2Yolo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Ros2Yolo_

// alias to use template instance with default allocator
using Ros2Yolo =
  custom_msg::msg::Ros2Yolo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msg

#endif  // CUSTOM_MSG__MSG__DETAIL__ROS2_YOLO__STRUCT_HPP_
