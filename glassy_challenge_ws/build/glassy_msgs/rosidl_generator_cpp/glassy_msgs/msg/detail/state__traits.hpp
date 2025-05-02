// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from glassy_msgs:msg/State.idl
// generated code does not contain a copyright notice

#ifndef GLASSY_MSGS__MSG__DETAIL__STATE__TRAITS_HPP_
#define GLASSY_MSGS__MSG__DETAIL__STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "glassy_msgs/msg/detail/state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace glassy_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const State & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: lon
  {
    out << "lon: ";
    rosidl_generator_traits::value_to_yaml(msg.lon, out);
    out << ", ";
  }

  // member: lat
  {
    out << "lat: ";
    rosidl_generator_traits::value_to_yaml(msg.lat, out);
    out << ", ";
  }

  // member: altitude
  {
    out << "altitude: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude, out);
    out << ", ";
  }

  // member: p_ned
  {
    if (msg.p_ned.size() == 0) {
      out << "p_ned: []";
    } else {
      out << "p_ned: [";
      size_t pending_items = msg.p_ned.size();
      for (auto item : msg.p_ned) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: v_body
  {
    if (msg.v_body.size() == 0) {
      out << "v_body: []";
    } else {
      out << "v_body: [";
      size_t pending_items = msg.v_body.size();
      for (auto item : msg.v_body) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: pitch
  {
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << ", ";
  }

  // member: roll
  {
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << ", ";
  }

  // member: pitch_rate
  {
    out << "pitch_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_rate, out);
    out << ", ";
  }

  // member: yaw_rate
  {
    out << "yaw_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_rate, out);
    out << ", ";
  }

  // member: roll_rate
  {
    out << "roll_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.roll_rate, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const State & msg,
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

  // member: lon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lon: ";
    rosidl_generator_traits::value_to_yaml(msg.lon, out);
    out << "\n";
  }

  // member: lat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lat: ";
    rosidl_generator_traits::value_to_yaml(msg.lat, out);
    out << "\n";
  }

  // member: altitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "altitude: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude, out);
    out << "\n";
  }

  // member: p_ned
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.p_ned.size() == 0) {
      out << "p_ned: []\n";
    } else {
      out << "p_ned:\n";
      for (auto item : msg.p_ned) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: v_body
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.v_body.size() == 0) {
      out << "v_body: []\n";
    } else {
      out << "v_body:\n";
      for (auto item : msg.v_body) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << "\n";
  }

  // member: roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << "\n";
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }

  // member: pitch_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_rate, out);
    out << "\n";
  }

  // member: yaw_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_rate, out);
    out << "\n";
  }

  // member: roll_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.roll_rate, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const State & msg, bool use_flow_style = false)
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
  const glassy_msgs::msg::State & msg,
  std::ostream & out, size_t indentation = 0)
{
  glassy_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use glassy_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const glassy_msgs::msg::State & msg)
{
  return glassy_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<glassy_msgs::msg::State>()
{
  return "glassy_msgs::msg::State";
}

template<>
inline const char * name<glassy_msgs::msg::State>()
{
  return "glassy_msgs/msg/State";
}

template<>
struct has_fixed_size<glassy_msgs::msg::State>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<glassy_msgs::msg::State>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<glassy_msgs::msg::State>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GLASSY_MSGS__MSG__DETAIL__STATE__TRAITS_HPP_
