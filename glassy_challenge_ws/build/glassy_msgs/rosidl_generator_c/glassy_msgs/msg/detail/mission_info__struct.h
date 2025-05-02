// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from glassy_msgs:msg/MissionInfo.idl
// generated code does not contain a copyright notice

#ifndef GLASSY_MSGS__MSG__DETAIL__MISSION_INFO__STRUCT_H_
#define GLASSY_MSGS__MSG__DETAIL__MISSION_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MISSION_OFF'.
enum
{
  glassy_msgs__msg__MissionInfo__MISSION_OFF = 0
};

/// Constant 'PATH_FOLLOWING'.
enum
{
  glassy_msgs__msg__MissionInfo__PATH_FOLLOWING = 1
};

/// Constant 'SUMMER_CHALLENGE'.
enum
{
  glassy_msgs__msg__MissionInfo__SUMMER_CHALLENGE = 2
};

/// Constant 'TRAJECTORY_TRACKING'.
enum
{
  glassy_msgs__msg__MissionInfo__TRAJECTORY_TRACKING = 3
};

/// Struct defined in msg/MissionInfo in the package glassy_msgs.
typedef struct glassy_msgs__msg__MissionInfo
{
  uint8_t mission_mode;
} glassy_msgs__msg__MissionInfo;

// Struct for a sequence of glassy_msgs__msg__MissionInfo.
typedef struct glassy_msgs__msg__MissionInfo__Sequence
{
  glassy_msgs__msg__MissionInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} glassy_msgs__msg__MissionInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GLASSY_MSGS__MSG__DETAIL__MISSION_INFO__STRUCT_H_
