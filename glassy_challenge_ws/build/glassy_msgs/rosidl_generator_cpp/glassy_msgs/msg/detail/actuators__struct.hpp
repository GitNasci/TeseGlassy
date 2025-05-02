// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from glassy_msgs:msg/Actuators.idl
// generated code does not contain a copyright notice

#ifndef GLASSY_MSGS__MSG__DETAIL__ACTUATORS__STRUCT_HPP_
#define GLASSY_MSGS__MSG__DETAIL__ACTUATORS__STRUCT_HPP_

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
# define DEPRECATED__glassy_msgs__msg__Actuators __attribute__((deprecated))
#else
# define DEPRECATED__glassy_msgs__msg__Actuators __declspec(deprecated)
#endif

namespace glassy_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Actuators_
{
  using Type = Actuators_<ContainerAllocator>;

  explicit Actuators_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rudder = 0.0;
      this->thrust = 0.0;
    }
  }

  explicit Actuators_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rudder = 0.0;
      this->thrust = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _rudder_type =
    double;
  _rudder_type rudder;
  using _thrust_type =
    double;
  _thrust_type thrust;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__rudder(
    const double & _arg)
  {
    this->rudder = _arg;
    return *this;
  }
  Type & set__thrust(
    const double & _arg)
  {
    this->thrust = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    glassy_msgs::msg::Actuators_<ContainerAllocator> *;
  using ConstRawPtr =
    const glassy_msgs::msg::Actuators_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<glassy_msgs::msg::Actuators_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<glassy_msgs::msg::Actuators_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      glassy_msgs::msg::Actuators_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<glassy_msgs::msg::Actuators_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      glassy_msgs::msg::Actuators_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<glassy_msgs::msg::Actuators_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<glassy_msgs::msg::Actuators_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<glassy_msgs::msg::Actuators_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__glassy_msgs__msg__Actuators
    std::shared_ptr<glassy_msgs::msg::Actuators_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__glassy_msgs__msg__Actuators
    std::shared_ptr<glassy_msgs::msg::Actuators_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Actuators_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->rudder != other.rudder) {
      return false;
    }
    if (this->thrust != other.thrust) {
      return false;
    }
    return true;
  }
  bool operator!=(const Actuators_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Actuators_

// alias to use template instance with default allocator
using Actuators =
  glassy_msgs::msg::Actuators_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace glassy_msgs

#endif  // GLASSY_MSGS__MSG__DETAIL__ACTUATORS__STRUCT_HPP_
