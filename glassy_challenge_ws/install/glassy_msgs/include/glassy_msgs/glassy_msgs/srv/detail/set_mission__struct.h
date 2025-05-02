// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from glassy_msgs:srv/SetMission.idl
// generated code does not contain a copyright notice

#ifndef GLASSY_MSGS__SRV__DETAIL__SET_MISSION__STRUCT_H_
#define GLASSY_MSGS__SRV__DETAIL__SET_MISSION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'mission_info'
#include "glassy_msgs/msg/detail/mission_info__struct.h"

/// Struct defined in srv/SetMission in the package glassy_msgs.
typedef struct glassy_msgs__srv__SetMission_Request
{
  glassy_msgs__msg__MissionInfo mission_info;
} glassy_msgs__srv__SetMission_Request;

// Struct for a sequence of glassy_msgs__srv__SetMission_Request.
typedef struct glassy_msgs__srv__SetMission_Request__Sequence
{
  glassy_msgs__srv__SetMission_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} glassy_msgs__srv__SetMission_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetMission in the package glassy_msgs.
typedef struct glassy_msgs__srv__SetMission_Response
{
  bool success;
} glassy_msgs__srv__SetMission_Response;

// Struct for a sequence of glassy_msgs__srv__SetMission_Response.
typedef struct glassy_msgs__srv__SetMission_Response__Sequence
{
  glassy_msgs__srv__SetMission_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} glassy_msgs__srv__SetMission_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GLASSY_MSGS__SRV__DETAIL__SET_MISSION__STRUCT_H_
