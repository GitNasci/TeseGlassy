// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from glassy_msgs:msg/State.idl
// generated code does not contain a copyright notice

#ifndef GLASSY_MSGS__MSG__DETAIL__STATE__BUILDER_HPP_
#define GLASSY_MSGS__MSG__DETAIL__STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "glassy_msgs/msg/detail/state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace glassy_msgs
{

namespace msg
{

namespace builder
{

class Init_State_roll_rate
{
public:
  explicit Init_State_roll_rate(::glassy_msgs::msg::State & msg)
  : msg_(msg)
  {}
  ::glassy_msgs::msg::State roll_rate(::glassy_msgs::msg::State::_roll_rate_type arg)
  {
    msg_.roll_rate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::glassy_msgs::msg::State msg_;
};

class Init_State_yaw_rate
{
public:
  explicit Init_State_yaw_rate(::glassy_msgs::msg::State & msg)
  : msg_(msg)
  {}
  Init_State_roll_rate yaw_rate(::glassy_msgs::msg::State::_yaw_rate_type arg)
  {
    msg_.yaw_rate = std::move(arg);
    return Init_State_roll_rate(msg_);
  }

private:
  ::glassy_msgs::msg::State msg_;
};

class Init_State_pitch_rate
{
public:
  explicit Init_State_pitch_rate(::glassy_msgs::msg::State & msg)
  : msg_(msg)
  {}
  Init_State_yaw_rate pitch_rate(::glassy_msgs::msg::State::_pitch_rate_type arg)
  {
    msg_.pitch_rate = std::move(arg);
    return Init_State_yaw_rate(msg_);
  }

private:
  ::glassy_msgs::msg::State msg_;
};

class Init_State_yaw
{
public:
  explicit Init_State_yaw(::glassy_msgs::msg::State & msg)
  : msg_(msg)
  {}
  Init_State_pitch_rate yaw(::glassy_msgs::msg::State::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_State_pitch_rate(msg_);
  }

private:
  ::glassy_msgs::msg::State msg_;
};

class Init_State_roll
{
public:
  explicit Init_State_roll(::glassy_msgs::msg::State & msg)
  : msg_(msg)
  {}
  Init_State_yaw roll(::glassy_msgs::msg::State::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_State_yaw(msg_);
  }

private:
  ::glassy_msgs::msg::State msg_;
};

class Init_State_pitch
{
public:
  explicit Init_State_pitch(::glassy_msgs::msg::State & msg)
  : msg_(msg)
  {}
  Init_State_roll pitch(::glassy_msgs::msg::State::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_State_roll(msg_);
  }

private:
  ::glassy_msgs::msg::State msg_;
};

class Init_State_v_body
{
public:
  explicit Init_State_v_body(::glassy_msgs::msg::State & msg)
  : msg_(msg)
  {}
  Init_State_pitch v_body(::glassy_msgs::msg::State::_v_body_type arg)
  {
    msg_.v_body = std::move(arg);
    return Init_State_pitch(msg_);
  }

private:
  ::glassy_msgs::msg::State msg_;
};

class Init_State_p_ned
{
public:
  explicit Init_State_p_ned(::glassy_msgs::msg::State & msg)
  : msg_(msg)
  {}
  Init_State_v_body p_ned(::glassy_msgs::msg::State::_p_ned_type arg)
  {
    msg_.p_ned = std::move(arg);
    return Init_State_v_body(msg_);
  }

private:
  ::glassy_msgs::msg::State msg_;
};

class Init_State_altitude
{
public:
  explicit Init_State_altitude(::glassy_msgs::msg::State & msg)
  : msg_(msg)
  {}
  Init_State_p_ned altitude(::glassy_msgs::msg::State::_altitude_type arg)
  {
    msg_.altitude = std::move(arg);
    return Init_State_p_ned(msg_);
  }

private:
  ::glassy_msgs::msg::State msg_;
};

class Init_State_lat
{
public:
  explicit Init_State_lat(::glassy_msgs::msg::State & msg)
  : msg_(msg)
  {}
  Init_State_altitude lat(::glassy_msgs::msg::State::_lat_type arg)
  {
    msg_.lat = std::move(arg);
    return Init_State_altitude(msg_);
  }

private:
  ::glassy_msgs::msg::State msg_;
};

class Init_State_lon
{
public:
  explicit Init_State_lon(::glassy_msgs::msg::State & msg)
  : msg_(msg)
  {}
  Init_State_lat lon(::glassy_msgs::msg::State::_lon_type arg)
  {
    msg_.lon = std::move(arg);
    return Init_State_lat(msg_);
  }

private:
  ::glassy_msgs::msg::State msg_;
};

class Init_State_header
{
public:
  Init_State_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_State_lon header(::glassy_msgs::msg::State::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_State_lon(msg_);
  }

private:
  ::glassy_msgs::msg::State msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::glassy_msgs::msg::State>()
{
  return glassy_msgs::msg::builder::Init_State_header();
}

}  // namespace glassy_msgs

#endif  // GLASSY_MSGS__MSG__DETAIL__STATE__BUILDER_HPP_
