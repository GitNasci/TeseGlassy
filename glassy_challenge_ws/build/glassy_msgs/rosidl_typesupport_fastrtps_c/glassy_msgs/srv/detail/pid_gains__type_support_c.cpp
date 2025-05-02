// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from glassy_msgs:srv/PidGains.idl
// generated code does not contain a copyright notice
#include "glassy_msgs/srv/detail/pid_gains__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "glassy_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "glassy_msgs/srv/detail/pid_gains__struct.h"
#include "glassy_msgs/srv/detail/pid_gains__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _PidGains_Request__ros_msg_type = glassy_msgs__srv__PidGains_Request;

static bool _PidGains_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PidGains_Request__ros_msg_type * ros_message = static_cast<const _PidGains_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: kp
  {
    cdr << ros_message->kp;
  }

  // Field name: ki
  {
    cdr << ros_message->ki;
  }

  // Field name: kd
  {
    cdr << ros_message->kd;
  }

  return true;
}

static bool _PidGains_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PidGains_Request__ros_msg_type * ros_message = static_cast<_PidGains_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: kp
  {
    cdr >> ros_message->kp;
  }

  // Field name: ki
  {
    cdr >> ros_message->ki;
  }

  // Field name: kd
  {
    cdr >> ros_message->kd;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_glassy_msgs
size_t get_serialized_size_glassy_msgs__srv__PidGains_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PidGains_Request__ros_msg_type * ros_message = static_cast<const _PidGains_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name kp
  {
    size_t item_size = sizeof(ros_message->kp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ki
  {
    size_t item_size = sizeof(ros_message->ki);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name kd
  {
    size_t item_size = sizeof(ros_message->kd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PidGains_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_glassy_msgs__srv__PidGains_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_glassy_msgs
size_t max_serialized_size_glassy_msgs__srv__PidGains_Request(
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

  // member: kp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ki
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: kd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = glassy_msgs__srv__PidGains_Request;
    is_plain =
      (
      offsetof(DataType, kd) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _PidGains_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_glassy_msgs__srv__PidGains_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PidGains_Request = {
  "glassy_msgs::srv",
  "PidGains_Request",
  _PidGains_Request__cdr_serialize,
  _PidGains_Request__cdr_deserialize,
  _PidGains_Request__get_serialized_size,
  _PidGains_Request__max_serialized_size
};

static rosidl_message_type_support_t _PidGains_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PidGains_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, glassy_msgs, srv, PidGains_Request)() {
  return &_PidGains_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "glassy_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "glassy_msgs/srv/detail/pid_gains__struct.h"
// already included above
// #include "glassy_msgs/srv/detail/pid_gains__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _PidGains_Response__ros_msg_type = glassy_msgs__srv__PidGains_Response;

static bool _PidGains_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PidGains_Response__ros_msg_type * ros_message = static_cast<const _PidGains_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    cdr << ros_message->result;
  }

  return true;
}

static bool _PidGains_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PidGains_Response__ros_msg_type * ros_message = static_cast<_PidGains_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    cdr >> ros_message->result;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_glassy_msgs
size_t get_serialized_size_glassy_msgs__srv__PidGains_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PidGains_Response__ros_msg_type * ros_message = static_cast<const _PidGains_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name result
  {
    size_t item_size = sizeof(ros_message->result);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PidGains_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_glassy_msgs__srv__PidGains_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_glassy_msgs
size_t max_serialized_size_glassy_msgs__srv__PidGains_Response(
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

  // member: result
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = glassy_msgs__srv__PidGains_Response;
    is_plain =
      (
      offsetof(DataType, result) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _PidGains_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_glassy_msgs__srv__PidGains_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PidGains_Response = {
  "glassy_msgs::srv",
  "PidGains_Response",
  _PidGains_Response__cdr_serialize,
  _PidGains_Response__cdr_deserialize,
  _PidGains_Response__get_serialized_size,
  _PidGains_Response__max_serialized_size
};

static rosidl_message_type_support_t _PidGains_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PidGains_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, glassy_msgs, srv, PidGains_Response)() {
  return &_PidGains_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "glassy_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "glassy_msgs/srv/pid_gains.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t PidGains__callbacks = {
  "glassy_msgs::srv",
  "PidGains",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, glassy_msgs, srv, PidGains_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, glassy_msgs, srv, PidGains_Response)(),
};

static rosidl_service_type_support_t PidGains__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &PidGains__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, glassy_msgs, srv, PidGains)() {
  return &PidGains__handle;
}

#if defined(__cplusplus)
}
#endif
