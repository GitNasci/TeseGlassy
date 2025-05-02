// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from glassy_msgs:msg/PathReferences.idl
// generated code does not contain a copyright notice

#ifndef GLASSY_MSGS__MSG__DETAIL__PATH_REFERENCES__STRUCT_H_
#define GLASSY_MSGS__MSG__DETAIL__PATH_REFERENCES__STRUCT_H_

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

/// Struct defined in msg/PathReferences in the package glassy_msgs.
typedef struct glassy_msgs__msg__PathReferences
{
  std_msgs__msg__Header header;
  double x_ref;
  double y_ref;
  int64_t is_active;
  int64_t path_segment_index;
  double path_vel;
  double tangent_heading;
} glassy_msgs__msg__PathReferences;

// Struct for a sequence of glassy_msgs__msg__PathReferences.
typedef struct glassy_msgs__msg__PathReferences__Sequence
{
  glassy_msgs__msg__PathReferences * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} glassy_msgs__msg__PathReferences__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GLASSY_MSGS__MSG__DETAIL__PATH_REFERENCES__STRUCT_H_
