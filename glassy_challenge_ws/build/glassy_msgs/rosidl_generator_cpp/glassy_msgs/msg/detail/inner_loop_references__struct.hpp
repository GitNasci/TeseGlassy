// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from glassy_msgs:msg/InnerLoopReferences.idl
// generated code does not contain a copyright notice

#ifndef GLASSY_MSGS__MSG__DETAIL__INNER_LOOP_REFERENCES__STRUCT_HPP_
#define GLASSY_MSGS__MSG__DETAIL__INNER_LOOP_REFERENCES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__glassy_msgs__msg__InnerLoopReferences __attribute__((deprecated))
#else
# define DEPRECATED__glassy_msgs__msg__InnerLoopReferences __declspec(deprecated)
#endif

namespace glassy_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct InnerLoopReferences_
{
  using Type = InnerLoopReferences_<ContainerAllocator>;

  explicit InnerLoopReferences_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yaw_rate_ref = 0.0;
      this->surge_ref = 0.0;
      this->yaw_ref = 0.0;
    }
  }

  explicit InnerLoopReferences_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yaw_rate_ref = 0.0;
      this->surge_ref = 0.0;
      this->yaw_ref = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _yaw_rate_ref_type =
    double;
  _yaw_rate_ref_type yaw_rate_ref;
  using _surge_ref_type =
    double;
  _surge_ref_type surge_ref;
  using _yaw_ref_type =
    double;
  _yaw_ref_type yaw_ref;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__yaw_rate_ref(
    const double & _arg)
  {
    this->yaw_rate_ref = _arg;
    return *this;
  }
  Type & set__surge_ref(
    const double & _arg)
  {
    this->surge_ref = _arg;
    return *this;
  }
  Type & set__yaw_ref(
    const double & _arg)
  {
    this->yaw_ref = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    glassy_msgs::msg::InnerLoopReferences_<ContainerAllocator> *;
  using ConstRawPtr =
    const glassy_msgs::msg::InnerLoopReferences_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<glassy_msgs::msg::InnerLoopReferences_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<glassy_msgs::msg::InnerLoopReferences_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      glassy_msgs::msg::InnerLoopReferences_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<glassy_msgs::msg::InnerLoopReferences_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      glassy_msgs::msg::InnerLoopReferences_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<glassy_msgs::msg::InnerLoopReferences_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<glassy_msgs::msg::InnerLoopReferences_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<glassy_msgs::msg::InnerLoopReferences_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__glassy_msgs__msg__InnerLoopReferences
    std::shared_ptr<glassy_msgs::msg::InnerLoopReferences_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__glassy_msgs__msg__InnerLoopReferences
    std::shared_ptr<glassy_msgs::msg::InnerLoopReferences_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InnerLoopReferences_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->yaw_rate_ref != other.yaw_rate_ref) {
      return false;
    }
    if (this->surge_ref != other.surge_ref) {
      return false;
    }
    if (this->yaw_ref != other.yaw_ref) {
      return false;
    }
    return true;
  }
  bool operator!=(const InnerLoopReferences_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InnerLoopReferences_

// alias to use template instance with default allocator
using InnerLoopReferences =
  glassy_msgs::msg::InnerLoopReferences_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace glassy_msgs

#endif  // GLASSY_MSGS__MSG__DETAIL__INNER_LOOP_REFERENCES__STRUCT_HPP_
