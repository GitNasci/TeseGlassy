// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from glassy_msgs:msg/Actuators.idl
// generated code does not contain a copyright notice

#ifndef GLASSY_MSGS__MSG__DETAIL__ACTUATORS__TRAITS_HPP_
#define GLASSY_MSGS__MSG__DETAIL__ACTUATORS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "glassy_msgs/msg/detail/actuators__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace glassy_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Actuators & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: rudder
  {
    out << "rudder: ";
    rosidl_generator_traits::value_to_yaml(msg.rudder, out);
    out << ", ";
  }

  // member: thrust
  {
    out << "thrust: ";
    rosidl_generator_traits::value_to_yaml(msg.thrust, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Actuators & msg,
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

  // member: rudder
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rudder: ";
    rosidl_generator_traits::value_to_yaml(msg.rudder, out);
    out << "\n";
  }

  // member: thrust
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "thrust: ";
    rosidl_generator_traits::value_to_yaml(msg.thrust, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Actuators & msg, bool use_flow_style = false)
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
  const glassy_msgs::msg::Actuators & msg,
  std::ostream & out, size_t indentation = 0)
{
  glassy_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use glassy_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const glassy_msgs::msg::Actuators & msg)
{
  return glassy_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<glassy_msgs::msg::Actuators>()
{
  return "glassy_msgs::msg::Actuators";
}

template<>
inline const char * name<glassy_msgs::msg::Actuators>()
{
  return "glassy_msgs/msg/Actuators";
}

template<>
struct has_fixed_size<glassy_msgs::msg::Actuators>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<glassy_msgs::msg::Actuators>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<glassy_msgs::msg::Actuators>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GLASSY_MSGS__MSG__DETAIL__ACTUATORS__TRAITS_HPP_
