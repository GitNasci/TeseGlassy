// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from glassy_msgs:msg/PathReferences.idl
// generated code does not contain a copyright notice

#ifndef GLASSY_MSGS__MSG__DETAIL__PATH_REFERENCES__BUILDER_HPP_
#define GLASSY_MSGS__MSG__DETAIL__PATH_REFERENCES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "glassy_msgs/msg/detail/path_references__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace glassy_msgs
{

namespace msg
{

namespace builder
{

class Init_PathReferences_tangent_heading
{
public:
  explicit Init_PathReferences_tangent_heading(::glassy_msgs::msg::PathReferences & msg)
  : msg_(msg)
  {}
  ::glassy_msgs::msg::PathReferences tangent_heading(::glassy_msgs::msg::PathReferences::_tangent_heading_type arg)
  {
    msg_.tangent_heading = std::move(arg);
    return std::move(msg_);
  }

private:
  ::glassy_msgs::msg::PathReferences msg_;
};

class Init_PathReferences_path_vel
{
public:
  explicit Init_PathReferences_path_vel(::glassy_msgs::msg::PathReferences & msg)
  : msg_(msg)
  {}
  Init_PathReferences_tangent_heading path_vel(::glassy_msgs::msg::PathReferences::_path_vel_type arg)
  {
    msg_.path_vel = std::move(arg);
    return Init_PathReferences_tangent_heading(msg_);
  }

private:
  ::glassy_msgs::msg::PathReferences msg_;
};

class Init_PathReferences_path_segment_index
{
public:
  explicit Init_PathReferences_path_segment_index(::glassy_msgs::msg::PathReferences & msg)
  : msg_(msg)
  {}
  Init_PathReferences_path_vel path_segment_index(::glassy_msgs::msg::PathReferences::_path_segment_index_type arg)
  {
    msg_.path_segment_index = std::move(arg);
    return Init_PathReferences_path_vel(msg_);
  }

private:
  ::glassy_msgs::msg::PathReferences msg_;
};

class Init_PathReferences_is_active
{
public:
  explicit Init_PathReferences_is_active(::glassy_msgs::msg::PathReferences & msg)
  : msg_(msg)
  {}
  Init_PathReferences_path_segment_index is_active(::glassy_msgs::msg::PathReferences::_is_active_type arg)
  {
    msg_.is_active = std::move(arg);
    return Init_PathReferences_path_segment_index(msg_);
  }

private:
  ::glassy_msgs::msg::PathReferences msg_;
};

class Init_PathReferences_y_ref
{
public:
  explicit Init_PathReferences_y_ref(::glassy_msgs::msg::PathReferences & msg)
  : msg_(msg)
  {}
  Init_PathReferences_is_active y_ref(::glassy_msgs::msg::PathReferences::_y_ref_type arg)
  {
    msg_.y_ref = std::move(arg);
    return Init_PathReferences_is_active(msg_);
  }

private:
  ::glassy_msgs::msg::PathReferences msg_;
};

class Init_PathReferences_x_ref
{
public:
  explicit Init_PathReferences_x_ref(::glassy_msgs::msg::PathReferences & msg)
  : msg_(msg)
  {}
  Init_PathReferences_y_ref x_ref(::glassy_msgs::msg::PathReferences::_x_ref_type arg)
  {
    msg_.x_ref = std::move(arg);
    return Init_PathReferences_y_ref(msg_);
  }

private:
  ::glassy_msgs::msg::PathReferences msg_;
};

class Init_PathReferences_header
{
public:
  Init_PathReferences_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PathReferences_x_ref header(::glassy_msgs::msg::PathReferences::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PathReferences_x_ref(msg_);
  }

private:
  ::glassy_msgs::msg::PathReferences msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::glassy_msgs::msg::PathReferences>()
{
  return glassy_msgs::msg::builder::Init_PathReferences_header();
}

}  // namespace glassy_msgs

#endif  // GLASSY_MSGS__MSG__DETAIL__PATH_REFERENCES__BUILDER_HPP_
