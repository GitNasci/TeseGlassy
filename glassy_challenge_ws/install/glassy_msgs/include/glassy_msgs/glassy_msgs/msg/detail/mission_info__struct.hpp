// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from glassy_msgs:msg/MissionInfo.idl
// generated code does not contain a copyright notice

#ifndef GLASSY_MSGS__MSG__DETAIL__MISSION_INFO__STRUCT_HPP_
#define GLASSY_MSGS__MSG__DETAIL__MISSION_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__glassy_msgs__msg__MissionInfo __attribute__((deprecated))
#else
# define DEPRECATED__glassy_msgs__msg__MissionInfo __declspec(deprecated)
#endif

namespace glassy_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MissionInfo_
{
  using Type = MissionInfo_<ContainerAllocator>;

  explicit MissionInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->mission_mode = 0;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->mission_mode = 0;
    }
  }

  explicit MissionInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->mission_mode = 0;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->mission_mode = 0;
    }
  }

  // field types and members
  using _mission_mode_type =
    uint8_t;
  _mission_mode_type mission_mode;

  // setters for named parameter idiom
  Type & set__mission_mode(
    const uint8_t & _arg)
  {
    this->mission_mode = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t MISSION_OFF =
    0u;
  static constexpr uint8_t PATH_FOLLOWING =
    1u;
  static constexpr uint8_t SUMMER_CHALLENGE =
    2u;
  static constexpr uint8_t TRAJECTORY_TRACKING =
    3u;

  // pointer types
  using RawPtr =
    glassy_msgs::msg::MissionInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const glassy_msgs::msg::MissionInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<glassy_msgs::msg::MissionInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<glassy_msgs::msg::MissionInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      glassy_msgs::msg::MissionInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<glassy_msgs::msg::MissionInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      glassy_msgs::msg::MissionInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<glassy_msgs::msg::MissionInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<glassy_msgs::msg::MissionInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<glassy_msgs::msg::MissionInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__glassy_msgs__msg__MissionInfo
    std::shared_ptr<glassy_msgs::msg::MissionInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__glassy_msgs__msg__MissionInfo
    std::shared_ptr<glassy_msgs::msg::MissionInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MissionInfo_ & other) const
  {
    if (this->mission_mode != other.mission_mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const MissionInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MissionInfo_

// alias to use template instance with default allocator
using MissionInfo =
  glassy_msgs::msg::MissionInfo_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MissionInfo_<ContainerAllocator>::MISSION_OFF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MissionInfo_<ContainerAllocator>::PATH_FOLLOWING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MissionInfo_<ContainerAllocator>::SUMMER_CHALLENGE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MissionInfo_<ContainerAllocator>::TRAJECTORY_TRACKING;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace glassy_msgs

#endif  // GLASSY_MSGS__MSG__DETAIL__MISSION_INFO__STRUCT_HPP_
