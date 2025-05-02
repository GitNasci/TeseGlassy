// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from glassy_msgs:srv/LosParams.idl
// generated code does not contain a copyright notice

#ifndef GLASSY_MSGS__SRV__DETAIL__LOS_PARAMS__STRUCT_HPP_
#define GLASSY_MSGS__SRV__DETAIL__LOS_PARAMS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__glassy_msgs__srv__LosParams_Request __attribute__((deprecated))
#else
# define DEPRECATED__glassy_msgs__srv__LosParams_Request __declspec(deprecated)
#endif

namespace glassy_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LosParams_Request_
{
  using Type = LosParams_Request_<ContainerAllocator>;

  explicit LosParams_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->look_ahead_dist = 0.0;
      this->sigma = 0.0;
    }
  }

  explicit LosParams_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->look_ahead_dist = 0.0;
      this->sigma = 0.0;
    }
  }

  // field types and members
  using _look_ahead_dist_type =
    double;
  _look_ahead_dist_type look_ahead_dist;
  using _sigma_type =
    double;
  _sigma_type sigma;

  // setters for named parameter idiom
  Type & set__look_ahead_dist(
    const double & _arg)
  {
    this->look_ahead_dist = _arg;
    return *this;
  }
  Type & set__sigma(
    const double & _arg)
  {
    this->sigma = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    glassy_msgs::srv::LosParams_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const glassy_msgs::srv::LosParams_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<glassy_msgs::srv::LosParams_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<glassy_msgs::srv::LosParams_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      glassy_msgs::srv::LosParams_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<glassy_msgs::srv::LosParams_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      glassy_msgs::srv::LosParams_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<glassy_msgs::srv::LosParams_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<glassy_msgs::srv::LosParams_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<glassy_msgs::srv::LosParams_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__glassy_msgs__srv__LosParams_Request
    std::shared_ptr<glassy_msgs::srv::LosParams_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__glassy_msgs__srv__LosParams_Request
    std::shared_ptr<glassy_msgs::srv::LosParams_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LosParams_Request_ & other) const
  {
    if (this->look_ahead_dist != other.look_ahead_dist) {
      return false;
    }
    if (this->sigma != other.sigma) {
      return false;
    }
    return true;
  }
  bool operator!=(const LosParams_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LosParams_Request_

// alias to use template instance with default allocator
using LosParams_Request =
  glassy_msgs::srv::LosParams_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace glassy_msgs


#ifndef _WIN32
# define DEPRECATED__glassy_msgs__srv__LosParams_Response __attribute__((deprecated))
#else
# define DEPRECATED__glassy_msgs__srv__LosParams_Response __declspec(deprecated)
#endif

namespace glassy_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LosParams_Response_
{
  using Type = LosParams_Response_<ContainerAllocator>;

  explicit LosParams_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  explicit LosParams_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    glassy_msgs::srv::LosParams_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const glassy_msgs::srv::LosParams_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<glassy_msgs::srv::LosParams_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<glassy_msgs::srv::LosParams_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      glassy_msgs::srv::LosParams_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<glassy_msgs::srv::LosParams_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      glassy_msgs::srv::LosParams_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<glassy_msgs::srv::LosParams_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<glassy_msgs::srv::LosParams_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<glassy_msgs::srv::LosParams_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__glassy_msgs__srv__LosParams_Response
    std::shared_ptr<glassy_msgs::srv::LosParams_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__glassy_msgs__srv__LosParams_Response
    std::shared_ptr<glassy_msgs::srv::LosParams_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LosParams_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const LosParams_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LosParams_Response_

// alias to use template instance with default allocator
using LosParams_Response =
  glassy_msgs::srv::LosParams_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace glassy_msgs

namespace glassy_msgs
{

namespace srv
{

struct LosParams
{
  using Request = glassy_msgs::srv::LosParams_Request;
  using Response = glassy_msgs::srv::LosParams_Response;
};

}  // namespace srv

}  // namespace glassy_msgs

#endif  // GLASSY_MSGS__SRV__DETAIL__LOS_PARAMS__STRUCT_HPP_
