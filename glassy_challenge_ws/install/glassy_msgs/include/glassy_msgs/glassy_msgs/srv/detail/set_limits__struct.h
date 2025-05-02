// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from glassy_msgs:srv/SetLimits.idl
// generated code does not contain a copyright notice

#ifndef GLASSY_MSGS__SRV__DETAIL__SET_LIMITS__STRUCT_H_
#define GLASSY_MSGS__SRV__DETAIL__SET_LIMITS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetLimits in the package glassy_msgs.
typedef struct glassy_msgs__srv__SetLimits_Request
{
  double max_value;
  double min_value;
} glassy_msgs__srv__SetLimits_Request;

// Struct for a sequence of glassy_msgs__srv__SetLimits_Request.
typedef struct glassy_msgs__srv__SetLimits_Request__Sequence
{
  glassy_msgs__srv__SetLimits_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} glassy_msgs__srv__SetLimits_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetLimits in the package glassy_msgs.
typedef struct glassy_msgs__srv__SetLimits_Response
{
  bool result;
} glassy_msgs__srv__SetLimits_Response;

// Struct for a sequence of glassy_msgs__srv__SetLimits_Response.
typedef struct glassy_msgs__srv__SetLimits_Response__Sequence
{
  glassy_msgs__srv__SetLimits_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} glassy_msgs__srv__SetLimits_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GLASSY_MSGS__SRV__DETAIL__SET_LIMITS__STRUCT_H_
