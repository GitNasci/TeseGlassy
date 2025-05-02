// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from glassy_msgs:msg/InnerLoopReferences.idl
// generated code does not contain a copyright notice

#ifndef GLASSY_MSGS__MSG__DETAIL__INNER_LOOP_REFERENCES__STRUCT_H_
#define GLASSY_MSGS__MSG__DETAIL__INNER_LOOP_REFERENCES__STRUCT_H_

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

/// Struct defined in msg/InnerLoopReferences in the package glassy_msgs.
typedef struct glassy_msgs__msg__InnerLoopReferences
{
  std_msgs__msg__Header header;
  double yaw_rate_ref;
  double surge_ref;
  double yaw_ref;
} glassy_msgs__msg__InnerLoopReferences;

// Struct for a sequence of glassy_msgs__msg__InnerLoopReferences.
typedef struct glassy_msgs__msg__InnerLoopReferences__Sequence
{
  glassy_msgs__msg__InnerLoopReferences * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} glassy_msgs__msg__InnerLoopReferences__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GLASSY_MSGS__MSG__DETAIL__INNER_LOOP_REFERENCES__STRUCT_H_
