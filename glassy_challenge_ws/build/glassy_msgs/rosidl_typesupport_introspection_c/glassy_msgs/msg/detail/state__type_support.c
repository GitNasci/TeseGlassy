// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from glassy_msgs:msg/State.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "glassy_msgs/msg/detail/state__rosidl_typesupport_introspection_c.h"
#include "glassy_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "glassy_msgs/msg/detail/state__functions.h"
#include "glassy_msgs/msg/detail/state__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void glassy_msgs__msg__State__rosidl_typesupport_introspection_c__State_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  glassy_msgs__msg__State__init(message_memory);
}

void glassy_msgs__msg__State__rosidl_typesupport_introspection_c__State_fini_function(void * message_memory)
{
  glassy_msgs__msg__State__fini(message_memory);
}

size_t glassy_msgs__msg__State__rosidl_typesupport_introspection_c__size_function__State__p_ned(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * glassy_msgs__msg__State__rosidl_typesupport_introspection_c__get_const_function__State__p_ned(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * glassy_msgs__msg__State__rosidl_typesupport_introspection_c__get_function__State__p_ned(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void glassy_msgs__msg__State__rosidl_typesupport_introspection_c__fetch_function__State__p_ned(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    glassy_msgs__msg__State__rosidl_typesupport_introspection_c__get_const_function__State__p_ned(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void glassy_msgs__msg__State__rosidl_typesupport_introspection_c__assign_function__State__p_ned(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    glassy_msgs__msg__State__rosidl_typesupport_introspection_c__get_function__State__p_ned(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t glassy_msgs__msg__State__rosidl_typesupport_introspection_c__size_function__State__v_body(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * glassy_msgs__msg__State__rosidl_typesupport_introspection_c__get_const_function__State__v_body(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * glassy_msgs__msg__State__rosidl_typesupport_introspection_c__get_function__State__v_body(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void glassy_msgs__msg__State__rosidl_typesupport_introspection_c__fetch_function__State__v_body(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    glassy_msgs__msg__State__rosidl_typesupport_introspection_c__get_const_function__State__v_body(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void glassy_msgs__msg__State__rosidl_typesupport_introspection_c__assign_function__State__v_body(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    glassy_msgs__msg__State__rosidl_typesupport_introspection_c__get_function__State__v_body(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember glassy_msgs__msg__State__rosidl_typesupport_introspection_c__State_message_member_array[12] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(glassy_msgs__msg__State, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lon",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(glassy_msgs__msg__State, lon),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lat",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(glassy_msgs__msg__State, lat),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "altitude",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(glassy_msgs__msg__State, altitude),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "p_ned",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(glassy_msgs__msg__State, p_ned),  // bytes offset in struct
    NULL,  // default value
    glassy_msgs__msg__State__rosidl_typesupport_introspection_c__size_function__State__p_ned,  // size() function pointer
    glassy_msgs__msg__State__rosidl_typesupport_introspection_c__get_const_function__State__p_ned,  // get_const(index) function pointer
    glassy_msgs__msg__State__rosidl_typesupport_introspection_c__get_function__State__p_ned,  // get(index) function pointer
    glassy_msgs__msg__State__rosidl_typesupport_introspection_c__fetch_function__State__p_ned,  // fetch(index, &value) function pointer
    glassy_msgs__msg__State__rosidl_typesupport_introspection_c__assign_function__State__p_ned,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "v_body",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(glassy_msgs__msg__State, v_body),  // bytes offset in struct
    NULL,  // default value
    glassy_msgs__msg__State__rosidl_typesupport_introspection_c__size_function__State__v_body,  // size() function pointer
    glassy_msgs__msg__State__rosidl_typesupport_introspection_c__get_const_function__State__v_body,  // get_const(index) function pointer
    glassy_msgs__msg__State__rosidl_typesupport_introspection_c__get_function__State__v_body,  // get(index) function pointer
    glassy_msgs__msg__State__rosidl_typesupport_introspection_c__fetch_function__State__v_body,  // fetch(index, &value) function pointer
    glassy_msgs__msg__State__rosidl_typesupport_introspection_c__assign_function__State__v_body,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pitch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(glassy_msgs__msg__State, pitch),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "roll",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(glassy_msgs__msg__State, roll),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(glassy_msgs__msg__State, yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pitch_rate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(glassy_msgs__msg__State, pitch_rate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw_rate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(glassy_msgs__msg__State, yaw_rate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "roll_rate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(glassy_msgs__msg__State, roll_rate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers glassy_msgs__msg__State__rosidl_typesupport_introspection_c__State_message_members = {
  "glassy_msgs__msg",  // message namespace
  "State",  // message name
  12,  // number of fields
  sizeof(glassy_msgs__msg__State),
  glassy_msgs__msg__State__rosidl_typesupport_introspection_c__State_message_member_array,  // message members
  glassy_msgs__msg__State__rosidl_typesupport_introspection_c__State_init_function,  // function to initialize message memory (memory has to be allocated)
  glassy_msgs__msg__State__rosidl_typesupport_introspection_c__State_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t glassy_msgs__msg__State__rosidl_typesupport_introspection_c__State_message_type_support_handle = {
  0,
  &glassy_msgs__msg__State__rosidl_typesupport_introspection_c__State_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_glassy_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, glassy_msgs, msg, State)() {
  glassy_msgs__msg__State__rosidl_typesupport_introspection_c__State_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!glassy_msgs__msg__State__rosidl_typesupport_introspection_c__State_message_type_support_handle.typesupport_identifier) {
    glassy_msgs__msg__State__rosidl_typesupport_introspection_c__State_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &glassy_msgs__msg__State__rosidl_typesupport_introspection_c__State_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
