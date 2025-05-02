// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from glassy_msgs:srv/SetPath.idl
// generated code does not contain a copyright notice

#ifndef GLASSY_MSGS__SRV__DETAIL__SET_PATH__STRUCT_HPP_
#define GLASSY_MSGS__SRV__DETAIL__SET_PATH__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__glassy_msgs__srv__SetPath_Request __attribute__((deprecated))
#else
# define DEPRECATED__glassy_msgs__srv__SetPath_Request __declspec(deprecated)
#endif

namespace glassy_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetPath_Request_
{
  using Type = SetPath_Request_<ContainerAllocator>;

  explicit SetPath_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->path_file = "";
    }
  }

  explicit SetPath_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : path_file(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->path_file = "";
    }
  }

  // field types and members
  using _path_file_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _path_file_type path_file;

  // setters for named parameter idiom
  Type & set__path_file(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->path_file = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    glassy_msgs::srv::SetPath_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const glassy_msgs::srv::SetPath_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<glassy_msgs::srv::SetPath_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<glassy_msgs::srv::SetPath_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      glassy_msgs::srv::SetPath_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<glassy_msgs::srv::SetPath_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      glassy_msgs::srv::SetPath_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<glassy_msgs::srv::SetPath_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<glassy_msgs::srv::SetPath_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<glassy_msgs::srv::SetPath_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__glassy_msgs__srv__SetPath_Request
    std::shared_ptr<glassy_msgs::srv::SetPath_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__glassy_msgs__srv__SetPath_Request
    std::shared_ptr<glassy_msgs::srv::SetPath_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetPath_Request_ & other) const
  {
    if (this->path_file != other.path_file) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetPath_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetPath_Request_

// alias to use template instance with default allocator
using SetPath_Request =
  glassy_msgs::srv::SetPath_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace glassy_msgs


#ifndef _WIN32
# define DEPRECATED__glassy_msgs__srv__SetPath_Response __attribute__((deprecated))
#else
# define DEPRECATED__glassy_msgs__srv__SetPath_Response __declspec(deprecated)
#endif

namespace glassy_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetPath_Response_
{
  using Type = SetPath_Response_<ContainerAllocator>;

  explicit SetPath_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0ll;
    }
  }

  explicit SetPath_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    glassy_msgs::srv::SetPath_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const glassy_msgs::srv::SetPath_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<glassy_msgs::srv::SetPath_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<glassy_msgs::srv::SetPath_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      glassy_msgs::srv::SetPath_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<glassy_msgs::srv::SetPath_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      glassy_msgs::srv::SetPath_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<glassy_msgs::srv::SetPath_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<glassy_msgs::srv::SetPath_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<glassy_msgs::srv::SetPath_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__glassy_msgs__srv__SetPath_Response
    std::shared_ptr<glassy_msgs::srv::SetPath_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__glassy_msgs__srv__SetPath_Response
    std::shared_ptr<glassy_msgs::srv::SetPath_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetPath_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetPath_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetPath_Response_

// alias to use template instance with default allocator
using SetPath_Response =
  glassy_msgs::srv::SetPath_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace glassy_msgs

namespace glassy_msgs
{

namespace srv
{

struct SetPath
{
  using Request = glassy_msgs::srv::SetPath_Request;
  using Response = glassy_msgs::srv::SetPath_Response;
};

}  // namespace srv

}  // namespace glassy_msgs

#endif  // GLASSY_MSGS__SRV__DETAIL__SET_PATH__STRUCT_HPP_
