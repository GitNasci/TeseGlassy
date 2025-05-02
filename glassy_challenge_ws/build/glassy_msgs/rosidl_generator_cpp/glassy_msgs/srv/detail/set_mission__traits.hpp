// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from glassy_msgs:srv/SetMission.idl
// generated code does not contain a copyright notice

#ifndef GLASSY_MSGS__SRV__DETAIL__SET_MISSION__TRAITS_HPP_
#define GLASSY_MSGS__SRV__DETAIL__SET_MISSION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "glassy_msgs/srv/detail/set_mission__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'mission_info'
#include "glassy_msgs/msg/detail/mission_info__traits.hpp"

namespace glassy_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetMission_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: mission_info
  {
    out << "mission_info: ";
    to_flow_style_yaml(msg.mission_info, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetMission_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mission_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mission_info:\n";
    to_block_style_yaml(msg.mission_info, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetMission_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace glassy_msgs

namespace rosidl_generator_traits
{

[[deprecated("use glassy_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const glassy_msgs::srv::SetMission_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  glassy_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use glassy_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const glassy_msgs::srv::SetMission_Request & msg)
{
  return glassy_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<glassy_msgs::srv::SetMission_Request>()
{
  return "glassy_msgs::srv::SetMission_Request";
}

template<>
inline const char * name<glassy_msgs::srv::SetMission_Request>()
{
  return "glassy_msgs/srv/SetMission_Request";
}

template<>
struct has_fixed_size<glassy_msgs::srv::SetMission_Request>
  : std::integral_constant<bool, has_fixed_size<glassy_msgs::msg::MissionInfo>::value> {};

template<>
struct has_bounded_size<glassy_msgs::srv::SetMission_Request>
  : std::integral_constant<bool, has_bounded_size<glassy_msgs::msg::MissionInfo>::value> {};

template<>
struct is_message<glassy_msgs::srv::SetMission_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace glassy_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetMission_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetMission_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetMission_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace glassy_msgs

namespace rosidl_generator_traits
{

[[deprecated("use glassy_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const glassy_msgs::srv::SetMission_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  glassy_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use glassy_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const glassy_msgs::srv::SetMission_Response & msg)
{
  return glassy_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<glassy_msgs::srv::SetMission_Response>()
{
  return "glassy_msgs::srv::SetMission_Response";
}

template<>
inline const char * name<glassy_msgs::srv::SetMission_Response>()
{
  return "glassy_msgs/srv/SetMission_Response";
}

template<>
struct has_fixed_size<glassy_msgs::srv::SetMission_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<glassy_msgs::srv::SetMission_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<glassy_msgs::srv::SetMission_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<glassy_msgs::srv::SetMission>()
{
  return "glassy_msgs::srv::SetMission";
}

template<>
inline const char * name<glassy_msgs::srv::SetMission>()
{
  return "glassy_msgs/srv/SetMission";
}

template<>
struct has_fixed_size<glassy_msgs::srv::SetMission>
  : std::integral_constant<
    bool,
    has_fixed_size<glassy_msgs::srv::SetMission_Request>::value &&
    has_fixed_size<glassy_msgs::srv::SetMission_Response>::value
  >
{
};

template<>
struct has_bounded_size<glassy_msgs::srv::SetMission>
  : std::integral_constant<
    bool,
    has_bounded_size<glassy_msgs::srv::SetMission_Request>::value &&
    has_bounded_size<glassy_msgs::srv::SetMission_Response>::value
  >
{
};

template<>
struct is_service<glassy_msgs::srv::SetMission>
  : std::true_type
{
};

template<>
struct is_service_request<glassy_msgs::srv::SetMission_Request>
  : std::true_type
{
};

template<>
struct is_service_response<glassy_msgs::srv::SetMission_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // GLASSY_MSGS__SRV__DETAIL__SET_MISSION__TRAITS_HPP_
