// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from glassy_msgs:msg/PathReferences.idl
// generated code does not contain a copyright notice

#ifndef GLASSY_MSGS__MSG__DETAIL__PATH_REFERENCES__TRAITS_HPP_
#define GLASSY_MSGS__MSG__DETAIL__PATH_REFERENCES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "glassy_msgs/msg/detail/path_references__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace glassy_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PathReferences & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: x_ref
  {
    out << "x_ref: ";
    rosidl_generator_traits::value_to_yaml(msg.x_ref, out);
    out << ", ";
  }

  // member: y_ref
  {
    out << "y_ref: ";
    rosidl_generator_traits::value_to_yaml(msg.y_ref, out);
    out << ", ";
  }

  // member: is_active
  {
    out << "is_active: ";
    rosidl_generator_traits::value_to_yaml(msg.is_active, out);
    out << ", ";
  }

  // member: path_segment_index
  {
    out << "path_segment_index: ";
    rosidl_generator_traits::value_to_yaml(msg.path_segment_index, out);
    out << ", ";
  }

  // member: path_vel
  {
    out << "path_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.path_vel, out);
    out << ", ";
  }

  // member: tangent_heading
  {
    out << "tangent_heading: ";
    rosidl_generator_traits::value_to_yaml(msg.tangent_heading, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PathReferences & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: x_ref
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_ref: ";
    rosidl_generator_traits::value_to_yaml(msg.x_ref, out);
    out << "\n";
  }

  // member: y_ref
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_ref: ";
    rosidl_generator_traits::value_to_yaml(msg.y_ref, out);
    out << "\n";
  }

  // member: is_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_active: ";
    rosidl_generator_traits::value_to_yaml(msg.is_active, out);
    out << "\n";
  }

  // member: path_segment_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path_segment_index: ";
    rosidl_generator_traits::value_to_yaml(msg.path_segment_index, out);
    out << "\n";
  }

  // member: path_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.path_vel, out);
    out << "\n";
  }

  // member: tangent_heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tangent_heading: ";
    rosidl_generator_traits::value_to_yaml(msg.tangent_heading, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PathReferences & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace glassy_msgs

namespace rosidl_generator_traits
{

[[deprecated("use glassy_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const glassy_msgs::msg::PathReferences & msg,
  std::ostream & out, size_t indentation = 0)
{
  glassy_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use glassy_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const glassy_msgs::msg::PathReferences & msg)
{
  return glassy_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<glassy_msgs::msg::PathReferences>()
{
  return "glassy_msgs::msg::PathReferences";
}

template<>
inline const char * name<glassy_msgs::msg::PathReferences>()
{
  return "glassy_msgs/msg/PathReferences";
}

template<>
struct has_fixed_size<glassy_msgs::msg::PathReferences>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<glassy_msgs::msg::PathReferences>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<glassy_msgs::msg::PathReferences>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GLASSY_MSGS__MSG__DETAIL__PATH_REFERENCES__TRAITS_HPP_
