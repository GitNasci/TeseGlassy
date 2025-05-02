// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from glassy_msgs:msg/PathReferences.idl
// generated code does not contain a copyright notice

#ifndef GLASSY_MSGS__MSG__DETAIL__PATH_REFERENCES__STRUCT_HPP_
#define GLASSY_MSGS__MSG__DETAIL__PATH_REFERENCES__STRUCT_HPP_

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
# define DEPRECATED__glassy_msgs__msg__PathReferences __attribute__((deprecated))
#else
# define DEPRECATED__glassy_msgs__msg__PathReferences __declspec(deprecated)
#endif

namespace glassy_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PathReferences_
{
  using Type = PathReferences_<ContainerAllocator>;

  explicit PathReferences_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x_ref = 0.0;
      this->y_ref = 0.0;
      this->is_active = 0ll;
      this->path_segment_index = 0ll;
      this->path_vel = 0.0;
      this->tangent_heading = 0.0;
    }
  }

  explicit PathReferences_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x_ref = 0.0;
      this->y_ref = 0.0;
      this->is_active = 0ll;
      this->path_segment_index = 0ll;
      this->path_vel = 0.0;
      this->tangent_heading = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _x_ref_type =
    double;
  _x_ref_type x_ref;
  using _y_ref_type =
    double;
  _y_ref_type y_ref;
  using _is_active_type =
    int64_t;
  _is_active_type is_active;
  using _path_segment_index_type =
    int64_t;
  _path_segment_index_type path_segment_index;
  using _path_vel_type =
    double;
  _path_vel_type path_vel;
  using _tangent_heading_type =
    double;
  _tangent_heading_type tangent_heading;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__x_ref(
    const double & _arg)
  {
    this->x_ref = _arg;
    return *this;
  }
  Type & set__y_ref(
    const double & _arg)
  {
    this->y_ref = _arg;
    return *this;
  }
  Type & set__is_active(
    const int64_t & _arg)
  {
    this->is_active = _arg;
    return *this;
  }
  Type & set__path_segment_index(
    const int64_t & _arg)
  {
    this->path_segment_index = _arg;
    return *this;
  }
  Type & set__path_vel(
    const double & _arg)
  {
    this->path_vel = _arg;
    return *this;
  }
  Type & set__tangent_heading(
    const double & _arg)
  {
    this->tangent_heading = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    glassy_msgs::msg::PathReferences_<ContainerAllocator> *;
  using ConstRawPtr =
    const glassy_msgs::msg::PathReferences_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<glassy_msgs::msg::PathReferences_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<glassy_msgs::msg::PathReferences_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      glassy_msgs::msg::PathReferences_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<glassy_msgs::msg::PathReferences_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      glassy_msgs::msg::PathReferences_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<glassy_msgs::msg::PathReferences_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<glassy_msgs::msg::PathReferences_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<glassy_msgs::msg::PathReferences_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__glassy_msgs__msg__PathReferences
    std::shared_ptr<glassy_msgs::msg::PathReferences_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__glassy_msgs__msg__PathReferences
    std::shared_ptr<glassy_msgs::msg::PathReferences_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PathReferences_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->x_ref != other.x_ref) {
      return false;
    }
    if (this->y_ref != other.y_ref) {
      return false;
    }
    if (this->is_active != other.is_active) {
      return false;
    }
    if (this->path_segment_index != other.path_segment_index) {
      return false;
    }
    if (this->path_vel != other.path_vel) {
      return false;
    }
    if (this->tangent_heading != other.tangent_heading) {
      return false;
    }
    return true;
  }
  bool operator!=(const PathReferences_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PathReferences_

// alias to use template instance with default allocator
using PathReferences =
  glassy_msgs::msg::PathReferences_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace glassy_msgs

#endif  // GLASSY_MSGS__MSG__DETAIL__PATH_REFERENCES__STRUCT_HPP_
