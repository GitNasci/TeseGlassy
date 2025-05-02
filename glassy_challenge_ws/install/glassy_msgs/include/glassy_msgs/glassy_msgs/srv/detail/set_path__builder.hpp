// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from glassy_msgs:srv/SetPath.idl
// generated code does not contain a copyright notice

#ifndef GLASSY_MSGS__SRV__DETAIL__SET_PATH__BUILDER_HPP_
#define GLASSY_MSGS__SRV__DETAIL__SET_PATH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "glassy_msgs/srv/detail/set_path__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace glassy_msgs
{

namespace srv
{

namespace builder
{

class Init_SetPath_Request_path_file
{
public:
  Init_SetPath_Request_path_file()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::glassy_msgs::srv::SetPath_Request path_file(::glassy_msgs::srv::SetPath_Request::_path_file_type arg)
  {
    msg_.path_file = std::move(arg);
    return std::move(msg_);
  }

private:
  ::glassy_msgs::srv::SetPath_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::glassy_msgs::srv::SetPath_Request>()
{
  return glassy_msgs::srv::builder::Init_SetPath_Request_path_file();
}

}  // namespace glassy_msgs


namespace glassy_msgs
{

namespace srv
{

namespace builder
{

class Init_SetPath_Response_result
{
public:
  Init_SetPath_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::glassy_msgs::srv::SetPath_Response result(::glassy_msgs::srv::SetPath_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::glassy_msgs::srv::SetPath_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::glassy_msgs::srv::SetPath_Response>()
{
  return glassy_msgs::srv::builder::Init_SetPath_Response_result();
}

}  // namespace glassy_msgs

#endif  // GLASSY_MSGS__SRV__DETAIL__SET_PATH__BUILDER_HPP_
