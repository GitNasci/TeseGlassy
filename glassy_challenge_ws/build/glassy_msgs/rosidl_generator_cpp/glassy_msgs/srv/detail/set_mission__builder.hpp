// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from glassy_msgs:srv/SetMission.idl
// generated code does not contain a copyright notice

#ifndef GLASSY_MSGS__SRV__DETAIL__SET_MISSION__BUILDER_HPP_
#define GLASSY_MSGS__SRV__DETAIL__SET_MISSION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "glassy_msgs/srv/detail/set_mission__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace glassy_msgs
{

namespace srv
{

namespace builder
{

class Init_SetMission_Request_mission_info
{
public:
  Init_SetMission_Request_mission_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::glassy_msgs::srv::SetMission_Request mission_info(::glassy_msgs::srv::SetMission_Request::_mission_info_type arg)
  {
    msg_.mission_info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::glassy_msgs::srv::SetMission_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::glassy_msgs::srv::SetMission_Request>()
{
  return glassy_msgs::srv::builder::Init_SetMission_Request_mission_info();
}

}  // namespace glassy_msgs


namespace glassy_msgs
{

namespace srv
{

namespace builder
{

class Init_SetMission_Response_success
{
public:
  Init_SetMission_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::glassy_msgs::srv::SetMission_Response success(::glassy_msgs::srv::SetMission_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::glassy_msgs::srv::SetMission_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::glassy_msgs::srv::SetMission_Response>()
{
  return glassy_msgs::srv::builder::Init_SetMission_Response_success();
}

}  // namespace glassy_msgs

#endif  // GLASSY_MSGS__SRV__DETAIL__SET_MISSION__BUILDER_HPP_
