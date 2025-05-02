// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from glassy_msgs:srv/SetPath.idl
// generated code does not contain a copyright notice

#ifndef GLASSY_MSGS__SRV__DETAIL__SET_PATH__TRAITS_HPP_
#define GLASSY_MSGS__SRV__DETAIL__SET_PATH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "glassy_msgs/srv/detail/set_path__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace glassy_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetPath_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: path_file
  {
    out << "path_file: ";
    rosidl_generator_traits::value_to_yaml(msg.path_file, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetPath_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: path_file
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path_file: ";
    rosidl_generator_traits::value_to_yaml(msg.path_file, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetPath_Request & msg, bool use_flow_style = false)
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
  const glassy_msgs::srv::SetPath_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  glassy_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use glassy_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const glassy_msgs::srv::SetPath_Request & msg)
{
  return glassy_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<glassy_msgs::srv::SetPath_Request>()
{
  return "glassy_msgs::srv::SetPath_Request";
}

template<>
inline const char * name<glassy_msgs::srv::SetPath_Request>()
{
  return "glassy_msgs/srv/SetPath_Request";
}

template<>
struct has_fixed_size<glassy_msgs::srv::SetPath_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<glassy_msgs::srv::SetPath_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<glassy_msgs::srv::SetPath_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace glassy_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetPath_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetPath_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetPath_Response & msg, bool use_flow_style = false)
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
  const glassy_msgs::srv::SetPath_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  glassy_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use glassy_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const glassy_msgs::srv::SetPath_Response & msg)
{
  return glassy_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<glassy_msgs::srv::SetPath_Response>()
{
  return "glassy_msgs::srv::SetPath_Response";
}

template<>
inline const char * name<glassy_msgs::srv::SetPath_Response>()
{
  return "glassy_msgs/srv/SetPath_Response";
}

template<>
struct has_fixed_size<glassy_msgs::srv::SetPath_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<glassy_msgs::srv::SetPath_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<glassy_msgs::srv::SetPath_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<glassy_msgs::srv::SetPath>()
{
  return "glassy_msgs::srv::SetPath";
}

template<>
inline const char * name<glassy_msgs::srv::SetPath>()
{
  return "glassy_msgs/srv/SetPath";
}

template<>
struct has_fixed_size<glassy_msgs::srv::SetPath>
  : std::integral_constant<
    bool,
    has_fixed_size<glassy_msgs::srv::SetPath_Request>::value &&
    has_fixed_size<glassy_msgs::srv::SetPath_Response>::value
  >
{
};

template<>
struct has_bounded_size<glassy_msgs::srv::SetPath>
  : std::integral_constant<
    bool,
    has_bounded_size<glassy_msgs::srv::SetPath_Request>::value &&
    has_bounded_size<glassy_msgs::srv::SetPath_Response>::value
  >
{
};

template<>
struct is_service<glassy_msgs::srv::SetPath>
  : std::true_type
{
};

template<>
struct is_service_request<glassy_msgs::srv::SetPath_Request>
  : std::true_type
{
};

template<>
struct is_service_response<glassy_msgs::srv::SetPath_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // GLASSY_MSGS__SRV__DETAIL__SET_PATH__TRAITS_HPP_
