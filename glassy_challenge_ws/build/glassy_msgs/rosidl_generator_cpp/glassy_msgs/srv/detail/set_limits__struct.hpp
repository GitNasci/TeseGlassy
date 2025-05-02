// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from glassy_msgs:srv/SetLimits.idl
// generated code does not contain a copyright notice

#ifndef GLASSY_MSGS__SRV__DETAIL__SET_LIMITS__STRUCT_HPP_
#define GLASSY_MSGS__SRV__DETAIL__SET_LIMITS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__glassy_msgs__srv__SetLimits_Request __attribute__((deprecated))
#else
# define DEPRECATED__glassy_msgs__srv__SetLimits_Request __declspec(deprecated)
#endif

namespace glassy_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetLimits_Request_
{
  using Type = SetLimits_Request_<ContainerAllocator>;

  explicit SetLimits_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->max_value = 0.0;
      this->min_value = 0.0;
    }
  }

  explicit SetLimits_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->max_value = 0.0;
      this->min_value = 0.0;
    }
  }

  // field types and members
  using _max_value_type =
    double;
  _max_value_type max_value;
  using _min_value_type =
    double;
  _min_value_type min_value;

  // setters for named parameter idiom
  Type & set__max_value(
    const double & _arg)
  {
    this->max_value = _arg;
    return *this;
  }
  Type & set__min_value(
    const double & _arg)
  {
    this->min_value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    glassy_msgs::srv::SetLimits_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const glassy_msgs::srv::SetLimits_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<glassy_msgs::srv::SetLimits_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<glassy_msgs::srv::SetLimits_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      glassy_msgs::srv::SetLimits_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<glassy_msgs::srv::SetLimits_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      glassy_msgs::srv::SetLimits_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<glassy_msgs::srv::SetLimits_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<glassy_msgs::srv::SetLimits_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<glassy_msgs::srv::SetLimits_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__glassy_msgs__srv__SetLimits_Request
    std::shared_ptr<glassy_msgs::srv::SetLimits_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__glassy_msgs__srv__SetLimits_Request
    std::shared_ptr<glassy_msgs::srv::SetLimits_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetLimits_Request_ & other) const
  {
    if (this->max_value != other.max_value) {
      return false;
    }
    if (this->min_value != other.min_value) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetLimits_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetLimits_Request_

// alias to use template instance with default allocator
using SetLimits_Request =
  glassy_msgs::srv::SetLimits_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace glassy_msgs


#ifndef _WIN32
# define DEPRECATED__glassy_msgs__srv__SetLimits_Response __attribute__((deprecated))
#else
# define DEPRECATED__glassy_msgs__srv__SetLimits_Response __declspec(deprecated)
#endif

namespace glassy_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetLimits_Response_
{
  using Type = SetLimits_Response_<ContainerAllocator>;

  explicit SetLimits_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  explicit SetLimits_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  // field types and members
  using _result_type =
    bool;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const bool & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    glassy_msgs::srv::SetLimits_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const glassy_msgs::srv::SetLimits_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<glassy_msgs::srv::SetLimits_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<glassy_msgs::srv::SetLimits_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      glassy_msgs::srv::SetLimits_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<glassy_msgs::srv::SetLimits_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      glassy_msgs::srv::SetLimits_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<glassy_msgs::srv::SetLimits_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<glassy_msgs::srv::SetLimits_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<glassy_msgs::srv::SetLimits_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__glassy_msgs__srv__SetLimits_Response
    std::shared_ptr<glassy_msgs::srv::SetLimits_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__glassy_msgs__srv__SetLimits_Response
    std::shared_ptr<glassy_msgs::srv::SetLimits_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetLimits_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetLimits_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetLimits_Response_

// alias to use template instance with default allocator
using SetLimits_Response =
  glassy_msgs::srv::SetLimits_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace glassy_msgs

namespace glassy_msgs
{

namespace srv
{

struct SetLimits
{
  using Request = glassy_msgs::srv::SetLimits_Request;
  using Response = glassy_msgs::srv::SetLimits_Response;
};

}  // namespace srv

}  // namespace glassy_msgs

#endif  // GLASSY_MSGS__SRV__DETAIL__SET_LIMITS__STRUCT_HPP_
