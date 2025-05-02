// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from glassy_msgs:srv/SetMission.idl
// generated code does not contain a copyright notice

#ifndef GLASSY_MSGS__SRV__DETAIL__SET_MISSION__STRUCT_HPP_
#define GLASSY_MSGS__SRV__DETAIL__SET_MISSION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'mission_info'
#include "glassy_msgs/msg/detail/mission_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__glassy_msgs__srv__SetMission_Request __attribute__((deprecated))
#else
# define DEPRECATED__glassy_msgs__srv__SetMission_Request __declspec(deprecated)
#endif

namespace glassy_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetMission_Request_
{
  using Type = SetMission_Request_<ContainerAllocator>;

  explicit SetMission_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mission_info(_init)
  {
    (void)_init;
  }

  explicit SetMission_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mission_info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _mission_info_type =
    glassy_msgs::msg::MissionInfo_<ContainerAllocator>;
  _mission_info_type mission_info;

  // setters for named parameter idiom
  Type & set__mission_info(
    const glassy_msgs::msg::MissionInfo_<ContainerAllocator> & _arg)
  {
    this->mission_info = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    glassy_msgs::srv::SetMission_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const glassy_msgs::srv::SetMission_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<glassy_msgs::srv::SetMission_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<glassy_msgs::srv::SetMission_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      glassy_msgs::srv::SetMission_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<glassy_msgs::srv::SetMission_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      glassy_msgs::srv::SetMission_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<glassy_msgs::srv::SetMission_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<glassy_msgs::srv::SetMission_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<glassy_msgs::srv::SetMission_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__glassy_msgs__srv__SetMission_Request
    std::shared_ptr<glassy_msgs::srv::SetMission_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__glassy_msgs__srv__SetMission_Request
    std::shared_ptr<glassy_msgs::srv::SetMission_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetMission_Request_ & other) const
  {
    if (this->mission_info != other.mission_info) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetMission_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetMission_Request_

// alias to use template instance with default allocator
using SetMission_Request =
  glassy_msgs::srv::SetMission_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace glassy_msgs


#ifndef _WIN32
# define DEPRECATED__glassy_msgs__srv__SetMission_Response __attribute__((deprecated))
#else
# define DEPRECATED__glassy_msgs__srv__SetMission_Response __declspec(deprecated)
#endif

namespace glassy_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetMission_Response_
{
  using Type = SetMission_Response_<ContainerAllocator>;

  explicit SetMission_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit SetMission_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    glassy_msgs::srv::SetMission_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const glassy_msgs::srv::SetMission_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<glassy_msgs::srv::SetMission_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<glassy_msgs::srv::SetMission_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      glassy_msgs::srv::SetMission_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<glassy_msgs::srv::SetMission_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      glassy_msgs::srv::SetMission_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<glassy_msgs::srv::SetMission_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<glassy_msgs::srv::SetMission_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<glassy_msgs::srv::SetMission_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__glassy_msgs__srv__SetMission_Response
    std::shared_ptr<glassy_msgs::srv::SetMission_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__glassy_msgs__srv__SetMission_Response
    std::shared_ptr<glassy_msgs::srv::SetMission_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetMission_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetMission_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetMission_Response_

// alias to use template instance with default allocator
using SetMission_Response =
  glassy_msgs::srv::SetMission_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace glassy_msgs

namespace glassy_msgs
{

namespace srv
{

struct SetMission
{
  using Request = glassy_msgs::srv::SetMission_Request;
  using Response = glassy_msgs::srv::SetMission_Response;
};

}  // namespace srv

}  // namespace glassy_msgs

#endif  // GLASSY_MSGS__SRV__DETAIL__SET_MISSION__STRUCT_HPP_
