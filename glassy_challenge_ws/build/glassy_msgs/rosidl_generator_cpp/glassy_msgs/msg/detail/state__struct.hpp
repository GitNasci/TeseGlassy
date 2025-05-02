// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from glassy_msgs:msg/State.idl
// generated code does not contain a copyright notice

#ifndef GLASSY_MSGS__MSG__DETAIL__STATE__STRUCT_HPP_
#define GLASSY_MSGS__MSG__DETAIL__STATE__STRUCT_HPP_

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
# define DEPRECATED__glassy_msgs__msg__State __attribute__((deprecated))
#else
# define DEPRECATED__glassy_msgs__msg__State __declspec(deprecated)
#endif

namespace glassy_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct State_
{
  using Type = State_<ContainerAllocator>;

  explicit State_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lon = 0.0;
      this->lat = 0.0;
      this->altitude = 0.0;
      std::fill<typename std::array<double, 3>::iterator, double>(this->p_ned.begin(), this->p_ned.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->v_body.begin(), this->v_body.end(), 0.0);
      this->pitch = 0.0;
      this->roll = 0.0;
      this->yaw = 0.0;
      this->pitch_rate = 0.0;
      this->yaw_rate = 0.0;
      this->roll_rate = 0.0;
    }
  }

  explicit State_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    p_ned(_alloc),
    v_body(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lon = 0.0;
      this->lat = 0.0;
      this->altitude = 0.0;
      std::fill<typename std::array<double, 3>::iterator, double>(this->p_ned.begin(), this->p_ned.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->v_body.begin(), this->v_body.end(), 0.0);
      this->pitch = 0.0;
      this->roll = 0.0;
      this->yaw = 0.0;
      this->pitch_rate = 0.0;
      this->yaw_rate = 0.0;
      this->roll_rate = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _lon_type =
    double;
  _lon_type lon;
  using _lat_type =
    double;
  _lat_type lat;
  using _altitude_type =
    double;
  _altitude_type altitude;
  using _p_ned_type =
    std::array<double, 3>;
  _p_ned_type p_ned;
  using _v_body_type =
    std::array<double, 3>;
  _v_body_type v_body;
  using _pitch_type =
    double;
  _pitch_type pitch;
  using _roll_type =
    double;
  _roll_type roll;
  using _yaw_type =
    double;
  _yaw_type yaw;
  using _pitch_rate_type =
    double;
  _pitch_rate_type pitch_rate;
  using _yaw_rate_type =
    double;
  _yaw_rate_type yaw_rate;
  using _roll_rate_type =
    double;
  _roll_rate_type roll_rate;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__lon(
    const double & _arg)
  {
    this->lon = _arg;
    return *this;
  }
  Type & set__lat(
    const double & _arg)
  {
    this->lat = _arg;
    return *this;
  }
  Type & set__altitude(
    const double & _arg)
  {
    this->altitude = _arg;
    return *this;
  }
  Type & set__p_ned(
    const std::array<double, 3> & _arg)
  {
    this->p_ned = _arg;
    return *this;
  }
  Type & set__v_body(
    const std::array<double, 3> & _arg)
  {
    this->v_body = _arg;
    return *this;
  }
  Type & set__pitch(
    const double & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__roll(
    const double & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__yaw(
    const double & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__pitch_rate(
    const double & _arg)
  {
    this->pitch_rate = _arg;
    return *this;
  }
  Type & set__yaw_rate(
    const double & _arg)
  {
    this->yaw_rate = _arg;
    return *this;
  }
  Type & set__roll_rate(
    const double & _arg)
  {
    this->roll_rate = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    glassy_msgs::msg::State_<ContainerAllocator> *;
  using ConstRawPtr =
    const glassy_msgs::msg::State_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<glassy_msgs::msg::State_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<glassy_msgs::msg::State_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      glassy_msgs::msg::State_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<glassy_msgs::msg::State_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      glassy_msgs::msg::State_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<glassy_msgs::msg::State_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<glassy_msgs::msg::State_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<glassy_msgs::msg::State_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__glassy_msgs__msg__State
    std::shared_ptr<glassy_msgs::msg::State_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__glassy_msgs__msg__State
    std::shared_ptr<glassy_msgs::msg::State_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const State_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->lon != other.lon) {
      return false;
    }
    if (this->lat != other.lat) {
      return false;
    }
    if (this->altitude != other.altitude) {
      return false;
    }
    if (this->p_ned != other.p_ned) {
      return false;
    }
    if (this->v_body != other.v_body) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->roll != other.roll) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->pitch_rate != other.pitch_rate) {
      return false;
    }
    if (this->yaw_rate != other.yaw_rate) {
      return false;
    }
    if (this->roll_rate != other.roll_rate) {
      return false;
    }
    return true;
  }
  bool operator!=(const State_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct State_

// alias to use template instance with default allocator
using State =
  glassy_msgs::msg::State_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace glassy_msgs

#endif  // GLASSY_MSGS__MSG__DETAIL__STATE__STRUCT_HPP_
