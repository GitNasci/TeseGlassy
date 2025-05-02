// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from glassy_msgs:srv/PidGains.idl
// generated code does not contain a copyright notice

#ifndef GLASSY_MSGS__SRV__DETAIL__PID_GAINS__BUILDER_HPP_
#define GLASSY_MSGS__SRV__DETAIL__PID_GAINS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "glassy_msgs/srv/detail/pid_gains__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace glassy_msgs
{

namespace srv
{

namespace builder
{

class Init_PidGains_Request_kd
{
public:
  explicit Init_PidGains_Request_kd(::glassy_msgs::srv::PidGains_Request & msg)
  : msg_(msg)
  {}
  ::glassy_msgs::srv::PidGains_Request kd(::glassy_msgs::srv::PidGains_Request::_kd_type arg)
  {
    msg_.kd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::glassy_msgs::srv::PidGains_Request msg_;
};

class Init_PidGains_Request_ki
{
public:
  explicit Init_PidGains_Request_ki(::glassy_msgs::srv::PidGains_Request & msg)
  : msg_(msg)
  {}
  Init_PidGains_Request_kd ki(::glassy_msgs::srv::PidGains_Request::_ki_type arg)
  {
    msg_.ki = std::move(arg);
    return Init_PidGains_Request_kd(msg_);
  }

private:
  ::glassy_msgs::srv::PidGains_Request msg_;
};

class Init_PidGains_Request_kp
{
public:
  Init_PidGains_Request_kp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PidGains_Request_ki kp(::glassy_msgs::srv::PidGains_Request::_kp_type arg)
  {
    msg_.kp = std::move(arg);
    return Init_PidGains_Request_ki(msg_);
  }

private:
  ::glassy_msgs::srv::PidGains_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::glassy_msgs::srv::PidGains_Request>()
{
  return glassy_msgs::srv::builder::Init_PidGains_Request_kp();
}

}  // namespace glassy_msgs


namespace glassy_msgs
{

namespace srv
{

namespace builder
{

class Init_PidGains_Response_result
{
public:
  Init_PidGains_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::glassy_msgs::srv::PidGains_Response result(::glassy_msgs::srv::PidGains_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::glassy_msgs::srv::PidGains_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::glassy_msgs::srv::PidGains_Response>()
{
  return glassy_msgs::srv::builder::Init_PidGains_Response_result();
}

}  // namespace glassy_msgs

#endif  // GLASSY_MSGS__SRV__DETAIL__PID_GAINS__BUILDER_HPP_
