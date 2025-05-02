// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from glassy_msgs:msg/MissionInfo.idl
// generated code does not contain a copyright notice

#ifndef GLASSY_MSGS__MSG__DETAIL__MISSION_INFO__TRAITS_HPP_
#define GLASSY_MSGS__MSG__DETAIL__MISSION_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "glassy_msgs/msg/detail/mission_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace glassy_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MissionInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: mission_mode
  {
    out << "mission_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_mode, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MissionInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mission_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mission_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_mode, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MissionInfo & msg, bool use_flow_style = false)
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
  const glassy_msgs::msg::MissionInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  glassy_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use glassy_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const glassy_msgs::msg::MissionInfo & msg)
{
  return glassy_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<glassy_msgs::msg::MissionInfo>()
{
  return "glassy_msgs::msg::MissionInfo";
}

template<>
inline const char * name<glassy_msgs::msg::MissionInfo>()
{
  return "glassy_msgs/msg/MissionInfo";
}

template<>
struct has_fixed_size<glassy_msgs::msg::MissionInfo>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<glassy_msgs::msg::MissionInfo>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<glassy_msgs::msg::MissionInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GLASSY_MSGS__MSG__DETAIL__MISSION_INFO__TRAITS_HPP_
