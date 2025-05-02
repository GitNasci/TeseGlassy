// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from glassy_msgs:msg/InnerLoopReferences.idl
// generated code does not contain a copyright notice

#ifndef GLASSY_MSGS__MSG__DETAIL__INNER_LOOP_REFERENCES__BUILDER_HPP_
#define GLASSY_MSGS__MSG__DETAIL__INNER_LOOP_REFERENCES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "glassy_msgs/msg/detail/inner_loop_references__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace glassy_msgs
{

namespace msg
{

namespace builder
{

class Init_InnerLoopReferences_yaw_ref
{
public:
  explicit Init_InnerLoopReferences_yaw_ref(::glassy_msgs::msg::InnerLoopReferences & msg)
  : msg_(msg)
  {}
  ::glassy_msgs::msg::InnerLoopReferences yaw_ref(::glassy_msgs::msg::InnerLoopReferences::_yaw_ref_type arg)
  {
    msg_.yaw_ref = std::move(arg);
    return std::move(msg_);
  }

private:
  ::glassy_msgs::msg::InnerLoopReferences msg_;
};

class Init_InnerLoopReferences_surge_ref
{
public:
  explicit Init_InnerLoopReferences_surge_ref(::glassy_msgs::msg::InnerLoopReferences & msg)
  : msg_(msg)
  {}
  Init_InnerLoopReferences_yaw_ref surge_ref(::glassy_msgs::msg::InnerLoopReferences::_surge_ref_type arg)
  {
    msg_.surge_ref = std::move(arg);
    return Init_InnerLoopReferences_yaw_ref(msg_);
  }

private:
  ::glassy_msgs::msg::InnerLoopReferences msg_;
};

class Init_InnerLoopReferences_yaw_rate_ref
{
public:
  explicit Init_InnerLoopReferences_yaw_rate_ref(::glassy_msgs::msg::InnerLoopReferences & msg)
  : msg_(msg)
  {}
  Init_InnerLoopReferences_surge_ref yaw_rate_ref(::glassy_msgs::msg::InnerLoopReferences::_yaw_rate_ref_type arg)
  {
    msg_.yaw_rate_ref = std::move(arg);
    return Init_InnerLoopReferences_surge_ref(msg_);
  }

private:
  ::glassy_msgs::msg::InnerLoopReferences msg_;
};

class Init_InnerLoopReferences_header
{
public:
  Init_InnerLoopReferences_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InnerLoopReferences_yaw_rate_ref header(::glassy_msgs::msg::InnerLoopReferences::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_InnerLoopReferences_yaw_rate_ref(msg_);
  }

private:
  ::glassy_msgs::msg::InnerLoopReferences msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::glassy_msgs::msg::InnerLoopReferences>()
{
  return glassy_msgs::msg::builder::Init_InnerLoopReferences_header();
}

}  // namespace glassy_msgs

#endif  // GLASSY_MSGS__MSG__DETAIL__INNER_LOOP_REFERENCES__BUILDER_HPP_
