// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from glassy_msgs:srv/LosParams.idl
// generated code does not contain a copyright notice

#ifndef GLASSY_MSGS__SRV__DETAIL__LOS_PARAMS__BUILDER_HPP_
#define GLASSY_MSGS__SRV__DETAIL__LOS_PARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "glassy_msgs/srv/detail/los_params__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace glassy_msgs
{

namespace srv
{

namespace builder
{

class Init_LosParams_Request_sigma
{
public:
  explicit Init_LosParams_Request_sigma(::glassy_msgs::srv::LosParams_Request & msg)
  : msg_(msg)
  {}
  ::glassy_msgs::srv::LosParams_Request sigma(::glassy_msgs::srv::LosParams_Request::_sigma_type arg)
  {
    msg_.sigma = std::move(arg);
    return std::move(msg_);
  }

private:
  ::glassy_msgs::srv::LosParams_Request msg_;
};

class Init_LosParams_Request_look_ahead_dist
{
public:
  Init_LosParams_Request_look_ahead_dist()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LosParams_Request_sigma look_ahead_dist(::glassy_msgs::srv::LosParams_Request::_look_ahead_dist_type arg)
  {
    msg_.look_ahead_dist = std::move(arg);
    return Init_LosParams_Request_sigma(msg_);
  }

private:
  ::glassy_msgs::srv::LosParams_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::glassy_msgs::srv::LosParams_Request>()
{
  return glassy_msgs::srv::builder::Init_LosParams_Request_look_ahead_dist();
}

}  // namespace glassy_msgs


namespace glassy_msgs
{

namespace srv
{

namespace builder
{

class Init_LosParams_Response_result
{
public:
  Init_LosParams_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::glassy_msgs::srv::LosParams_Response result(::glassy_msgs::srv::LosParams_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::glassy_msgs::srv::LosParams_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::glassy_msgs::srv::LosParams_Response>()
{
  return glassy_msgs::srv::builder::Init_LosParams_Response_result();
}

}  // namespace glassy_msgs

#endif  // GLASSY_MSGS__SRV__DETAIL__LOS_PARAMS__BUILDER_HPP_
