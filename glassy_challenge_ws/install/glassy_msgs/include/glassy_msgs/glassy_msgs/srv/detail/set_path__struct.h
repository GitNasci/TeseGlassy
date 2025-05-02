// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from glassy_msgs:srv/SetPath.idl
// generated code does not contain a copyright notice

#ifndef GLASSY_MSGS__SRV__DETAIL__SET_PATH__STRUCT_H_
#define GLASSY_MSGS__SRV__DETAIL__SET_PATH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'path_file'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetPath in the package glassy_msgs.
typedef struct glassy_msgs__srv__SetPath_Request
{
  rosidl_runtime_c__String path_file;
} glassy_msgs__srv__SetPath_Request;

// Struct for a sequence of glassy_msgs__srv__SetPath_Request.
typedef struct glassy_msgs__srv__SetPath_Request__Sequence
{
  glassy_msgs__srv__SetPath_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} glassy_msgs__srv__SetPath_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetPath in the package glassy_msgs.
typedef struct glassy_msgs__srv__SetPath_Response
{
  int64_t result;
} glassy_msgs__srv__SetPath_Response;

// Struct for a sequence of glassy_msgs__srv__SetPath_Response.
typedef struct glassy_msgs__srv__SetPath_Response__Sequence
{
  glassy_msgs__srv__SetPath_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} glassy_msgs__srv__SetPath_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GLASSY_MSGS__SRV__DETAIL__SET_PATH__STRUCT_H_
