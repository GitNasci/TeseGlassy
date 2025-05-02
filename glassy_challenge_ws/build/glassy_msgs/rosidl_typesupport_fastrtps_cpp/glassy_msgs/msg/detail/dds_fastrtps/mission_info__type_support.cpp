// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from glassy_msgs:msg/MissionInfo.idl
// generated code does not contain a copyright notice
#include "glassy_msgs/msg/detail/mission_info__rosidl_typesupport_fastrtps_cpp.hpp"
#include "glassy_msgs/msg/detail/mission_info__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace glassy_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_glassy_msgs
cdr_serialize(
  const glassy_msgs::msg::MissionInfo & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: mission_mode
  cdr << ros_message.mission_mode;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_glassy_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  glassy_msgs::msg::MissionInfo & ros_message)
{
  // Member: mission_mode
  cdr >> ros_message.mission_mode;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_glassy_msgs
get_serialized_size(
  const glassy_msgs::msg::MissionInfo & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: mission_mode
  {
    size_t item_size = sizeof(ros_message.mission_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_glassy_msgs
max_serialized_size_MissionInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: mission_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = glassy_msgs::msg::MissionInfo;
    is_plain =
      (
      offsetof(DataType, mission_mode) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _MissionInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const glassy_msgs::msg::MissionInfo *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MissionInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<glassy_msgs::msg::MissionInfo *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MissionInfo__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const glassy_msgs::msg::MissionInfo *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MissionInfo__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MissionInfo(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MissionInfo__callbacks = {
  "glassy_msgs::msg",
  "MissionInfo",
  _MissionInfo__cdr_serialize,
  _MissionInfo__cdr_deserialize,
  _MissionInfo__get_serialized_size,
  _MissionInfo__max_serialized_size
};

static rosidl_message_type_support_t _MissionInfo__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MissionInfo__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace glassy_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_glassy_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<glassy_msgs::msg::MissionInfo>()
{
  return &glassy_msgs::msg::typesupport_fastrtps_cpp::_MissionInfo__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, glassy_msgs, msg, MissionInfo)() {
  return &glassy_msgs::msg::typesupport_fastrtps_cpp::_MissionInfo__handle;
}

#ifdef __cplusplus
}
#endif
