// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from glassy_msgs:srv/PidGains.idl
// generated code does not contain a copyright notice

#ifndef GLASSY_MSGS__SRV__DETAIL__PID_GAINS__STRUCT_H_
#define GLASSY_MSGS__SRV__DETAIL__PID_GAINS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/PidGains in the package glassy_msgs.
typedef struct glassy_msgs__srv__PidGains_Request
{
  double kp;
  double ki;
  double kd;
} glassy_msgs__srv__PidGains_Request;

// Struct for a sequence of glassy_msgs__srv__PidGains_Request.
typedef struct glassy_msgs__srv__PidGains_Request__Sequence
{
  glassy_msgs__srv__PidGains_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} glassy_msgs__srv__PidGains_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/PidGains in the package glassy_msgs.
typedef struct glassy_msgs__srv__PidGains_Response
{
  int64_t result;
} glassy_msgs__srv__PidGains_Response;

// Struct for a sequence of glassy_msgs__srv__PidGains_Response.
typedef struct glassy_msgs__srv__PidGains_Response__Sequence
{
  glassy_msgs__srv__PidGains_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} glassy_msgs__srv__PidGains_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GLASSY_MSGS__SRV__DETAIL__PID_GAINS__STRUCT_H_
