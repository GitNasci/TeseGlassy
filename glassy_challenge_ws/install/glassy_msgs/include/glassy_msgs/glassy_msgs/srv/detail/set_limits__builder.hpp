// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from glassy_msgs:srv/SetLimits.idl
// generated code does not contain a copyright notice

#ifndef GLASSY_MSGS__SRV__DETAIL__SET_LIMITS__BUILDER_HPP_
#define GLASSY_MSGS__SRV__DETAIL__SET_LIMITS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "glassy_msgs/srv/detail/set_limits__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace glassy_msgs
{

namespace srv
{

namespace builder
{

class Init_SetLimits_Request_min_value
{
public:
  explicit Init_SetLimits_Request_min_value(::glassy_msgs::srv::SetLimits_Request & msg)
  : msg_(msg)
  {}
  ::glassy_msgs::srv::SetLimits_Request min_value(::glassy_msgs::srv::SetLimits_Request::_min_value_type arg)
  {
    msg_.min_value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::glassy_msgs::srv::SetLimits_Request msg_;
};

class Init_SetLimits_Request_max_value
{
public:
  Init_SetLimits_Request_max_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetLimits_Request_min_value max_value(::glassy_msgs::srv::SetLimits_Request::_max_value_type arg)
  {
    msg_.max_value = std::move(arg);
    return Init_SetLimits_Request_min_value(msg_);
  }

private:
  ::glassy_msgs::srv::SetLimits_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::glassy_msgs::srv::SetLimits_Request>()
{
  return glassy_msgs::srv::builder::Init_SetLimits_Request_max_value();
}

}  // namespace glassy_msgs


namespace glassy_msgs
{

namespace srv
{

namespace builder
{

class Init_SetLimits_Response_result
{
public:
  Init_SetLimits_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::glassy_msgs::srv::SetLimits_Response result(::glassy_msgs::srv::SetLimits_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::glassy_msgs::srv::SetLimits_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::glassy_msgs::srv::SetLimits_Response>()
{
  return glassy_msgs::srv::builder::Init_SetLimits_Response_result();
}

}  // namespace glassy_msgs

#endif  // GLASSY_MSGS__SRV__DETAIL__SET_LIMITS__BUILDER_HPP_
