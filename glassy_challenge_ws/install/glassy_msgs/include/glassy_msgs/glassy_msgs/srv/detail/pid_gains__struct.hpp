// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from glassy_msgs:srv/PidGains.idl
// generated code does not contain a copyright notice

#ifndef GLASSY_MSGS__SRV__DETAIL__PID_GAINS__STRUCT_HPP_
#define GLASSY_MSGS__SRV__DETAIL__PID_GAINS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__glassy_msgs__srv__PidGains_Request __attribute__((deprecated))
#else
# define DEPRECATED__glassy_msgs__srv__PidGains_Request __declspec(deprecated)
#endif

namespace glassy_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PidGains_Request_
{
  using Type = PidGains_Request_<ContainerAllocator>;

  explicit PidGains_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->kp = 0.0;
      this->ki = 0.0;
      this->kd = 0.0;
    }
  }

  explicit PidGains_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->kp = 0.0;
      this->ki = 0.0;
      this->kd = 0.0;
    }
  }

  // field types and members
  using _kp_type =
    double;
  _kp_type kp;
  using _ki_type =
    double;
  _ki_type ki;
  using _kd_type =
    double;
  _kd_type kd;

  // setters for named parameter idiom
  Type & set__kp(
    const double & _arg)
  {
    this->kp = _arg;
    return *this;
  }
  Type & set__ki(
    const double & _arg)
  {
    this->ki = _arg;
    return *this;
  }
  Type & set__kd(
    const double & _arg)
  {
    this->kd = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    glassy_msgs::srv::PidGains_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const glassy_msgs::srv::PidGains_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<glassy_msgs::srv::PidGains_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<glassy_msgs::srv::PidGains_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      glassy_msgs::srv::PidGains_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<glassy_msgs::srv::PidGains_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      glassy_msgs::srv::PidGains_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<glassy_msgs::srv::PidGains_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<glassy_msgs::srv::PidGains_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<glassy_msgs::srv::PidGains_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__glassy_msgs__srv__PidGains_Request
    std::shared_ptr<glassy_msgs::srv::PidGains_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__glassy_msgs__srv__PidGains_Request
    std::shared_ptr<glassy_msgs::srv::PidGains_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PidGains_Request_ & other) const
  {
    if (this->kp != other.kp) {
      return false;
    }
    if (this->ki != other.ki) {
      return false;
    }
    if (this->kd != other.kd) {
      return false;
    }
    return true;
  }
  bool operator!=(const PidGains_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PidGains_Request_

// alias to use template instance with default allocator
using PidGains_Request =
  glassy_msgs::srv::PidGains_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace glassy_msgs


#ifndef _WIN32
# define DEPRECATED__glassy_msgs__srv__PidGains_Response __attribute__((deprecated))
#else
# define DEPRECATED__glassy_msgs__srv__PidGains_Response __declspec(deprecated)
#endif

namespace glassy_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PidGains_Response_
{
  using Type = PidGains_Response_<ContainerAllocator>;

  explicit PidGains_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0ll;
    }
  }

  explicit PidGains_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0ll;
    }
  }

  // field types and members
  using _result_type =
    int64_t;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const int64_t & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    glassy_msgs::srv::PidGains_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const glassy_msgs::srv::PidGains_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<glassy_msgs::srv::PidGains_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<glassy_msgs::srv::PidGains_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      glassy_msgs::srv::PidGains_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<glassy_msgs::srv::PidGains_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      glassy_msgs::srv::PidGains_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<glassy_msgs::srv::PidGains_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<glassy_msgs::srv::PidGains_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<glassy_msgs::srv::PidGains_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__glassy_msgs__srv__PidGains_Response
    std::shared_ptr<glassy_msgs::srv::PidGains_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__glassy_msgs__srv__PidGains_Response
    std::shared_ptr<glassy_msgs::srv::PidGains_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PidGains_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const PidGains_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PidGains_Response_

// alias to use template instance with default allocator
using PidGains_Response =
  glassy_msgs::srv::PidGains_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace glassy_msgs

namespace glassy_msgs
{

namespace srv
{

struct PidGains
{
  using Request = glassy_msgs::srv::PidGains_Request;
  using Response = glassy_msgs::srv::PidGains_Response;
};

}  // namespace srv

}  // namespace glassy_msgs

#endif  // GLASSY_MSGS__SRV__DETAIL__PID_GAINS__STRUCT_HPP_
