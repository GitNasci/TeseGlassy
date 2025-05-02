// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from glassy_msgs:msg/Actuators.idl
// generated code does not contain a copyright notice

#ifndef GLASSY_MSGS__MSG__DETAIL__ACTUATORS__STRUCT_H_
#define GLASSY_MSGS__MSG__DETAIL__ACTUATORS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/Actuators in the package glassy_msgs.
typedef struct glassy_msgs__msg__Actuators
{
  std_msgs__msg__Header header;
  double rudder;
  double thrust;
} glassy_msgs__msg__Actuators;

// Struct for a sequence of glassy_msgs__msg__Actuators.
typedef struct glassy_msgs__msg__Actuators__Sequence
{
  glassy_msgs__msg__Actuators * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} glassy_msgs__msg__Actuators__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GLASSY_MSGS__MSG__DETAIL__ACTUATORS__STRUCT_H_
