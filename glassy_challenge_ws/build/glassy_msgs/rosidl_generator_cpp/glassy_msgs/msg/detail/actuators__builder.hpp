// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from glassy_msgs:msg/Actuators.idl
// generated code does not contain a copyright notice

#ifndef GLASSY_MSGS__MSG__DETAIL__ACTUATORS__BUILDER_HPP_
#define GLASSY_MSGS__MSG__DETAIL__ACTUATORS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "glassy_msgs/msg/detail/actuators__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace glassy_msgs
{

namespace msg
{

namespace builder
{

class Init_Actuators_thrust
{
public:
  explicit Init_Actuators_thrust(::glassy_msgs::msg::Actuators & msg)
  : msg_(msg)
  {}
  ::glassy_msgs::msg::Actuators thrust(::glassy_msgs::msg::Actuators::_thrust_type arg)
  {
    msg_.thrust = std::move(arg);
    return std::move(msg_);
  }

private:
  ::glassy_msgs::msg::Actuators msg_;
};

class Init_Actuators_rudder
{
public:
  explicit Init_Actuators_rudder(::glassy_msgs::msg::Actuators & msg)
  : msg_(msg)
  {}
  Init_Actuators_thrust rudder(::glassy_msgs::msg::Actuators::_rudder_type arg)
  {
    msg_.rudder = std::move(arg);
    return Init_Actuators_thrust(msg_);
  }

private:
  ::glassy_msgs::msg::Actuators msg_;
};

class Init_Actuators_header
{
public:
  Init_Actuators_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Actuators_rudder header(::glassy_msgs::msg::Actuators::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Actuators_rudder(msg_);
  }

private:
  ::glassy_msgs::msg::Actuators msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::glassy_msgs::msg::Actuators>()
{
  return glassy_msgs::msg::builder::Init_Actuators_header();
}

}  // namespace glassy_msgs

#endif  // GLASSY_MSGS__MSG__DETAIL__ACTUATORS__BUILDER_HPP_
