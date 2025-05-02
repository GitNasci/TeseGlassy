// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from glassy_msgs:msg/MissionInfo.idl
// generated code does not contain a copyright notice

#ifndef GLASSY_MSGS__MSG__DETAIL__MISSION_INFO__BUILDER_HPP_
#define GLASSY_MSGS__MSG__DETAIL__MISSION_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "glassy_msgs/msg/detail/mission_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace glassy_msgs
{

namespace msg
{

namespace builder
{

class Init_MissionInfo_mission_mode
{
public:
  Init_MissionInfo_mission_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::glassy_msgs::msg::MissionInfo mission_mode(::glassy_msgs::msg::MissionInfo::_mission_mode_type arg)
  {
    msg_.mission_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::glassy_msgs::msg::MissionInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::glassy_msgs::msg::MissionInfo>()
{
  return glassy_msgs::msg::builder::Init_MissionInfo_mission_mode();
}

}  // namespace glassy_msgs

#endif  // GLASSY_MSGS__MSG__DETAIL__MISSION_INFO__BUILDER_HPP_
