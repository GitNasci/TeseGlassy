// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from glassy_msgs:srv/SetMission.idl
// generated code does not contain a copyright notice

#ifndef GLASSY_MSGS__SRV__DETAIL__SET_MISSION__FUNCTIONS_H_
#define GLASSY_MSGS__SRV__DETAIL__SET_MISSION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "glassy_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "glassy_msgs/srv/detail/set_mission__struct.h"

/// Initialize srv/SetMission message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * glassy_msgs__srv__SetMission_Request
 * )) before or use
 * glassy_msgs__srv__SetMission_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_glassy_msgs
bool
glassy_msgs__srv__SetMission_Request__init(glassy_msgs__srv__SetMission_Request * msg);

/// Finalize srv/SetMission message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_glassy_msgs
void
glassy_msgs__srv__SetMission_Request__fini(glassy_msgs__srv__SetMission_Request * msg);

/// Create srv/SetMission message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * glassy_msgs__srv__SetMission_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_glassy_msgs
glassy_msgs__srv__SetMission_Request *
glassy_msgs__srv__SetMission_Request__create();

/// Destroy srv/SetMission message.
/**
 * It calls
 * glassy_msgs__srv__SetMission_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_glassy_msgs
void
glassy_msgs__srv__SetMission_Request__destroy(glassy_msgs__srv__SetMission_Request * msg);

/// Check for srv/SetMission message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_glassy_msgs
bool
glassy_msgs__srv__SetMission_Request__are_equal(const glassy_msgs__srv__SetMission_Request * lhs, const glassy_msgs__srv__SetMission_Request * rhs);

/// Copy a srv/SetMission message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_glassy_msgs
bool
glassy_msgs__srv__SetMission_Request__copy(
  const glassy_msgs__srv__SetMission_Request * input,
  glassy_msgs__srv__SetMission_Request * output);

/// Initialize array of srv/SetMission messages.
/**
 * It allocates the memory for the number of elements and calls
 * glassy_msgs__srv__SetMission_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_glassy_msgs
bool
glassy_msgs__srv__SetMission_Request__Sequence__init(glassy_msgs__srv__SetMission_Request__Sequence * array, size_t size);

/// Finalize array of srv/SetMission messages.
/**
 * It calls
 * glassy_msgs__srv__SetMission_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_glassy_msgs
void
glassy_msgs__srv__SetMission_Request__Sequence__fini(glassy_msgs__srv__SetMission_Request__Sequence * array);

/// Create array of srv/SetMission messages.
/**
 * It allocates the memory for the array and calls
 * glassy_msgs__srv__SetMission_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_glassy_msgs
glassy_msgs__srv__SetMission_Request__Sequence *
glassy_msgs__srv__SetMission_Request__Sequence__create(size_t size);

/// Destroy array of srv/SetMission messages.
/**
 * It calls
 * glassy_msgs__srv__SetMission_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_glassy_msgs
void
glassy_msgs__srv__SetMission_Request__Sequence__destroy(glassy_msgs__srv__SetMission_Request__Sequence * array);

/// Check for srv/SetMission message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_glassy_msgs
bool
glassy_msgs__srv__SetMission_Request__Sequence__are_equal(const glassy_msgs__srv__SetMission_Request__Sequence * lhs, const glassy_msgs__srv__SetMission_Request__Sequence * rhs);

/// Copy an array of srv/SetMission messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_glassy_msgs
bool
glassy_msgs__srv__SetMission_Request__Sequence__copy(
  const glassy_msgs__srv__SetMission_Request__Sequence * input,
  glassy_msgs__srv__SetMission_Request__Sequence * output);

/// Initialize srv/SetMission message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * glassy_msgs__srv__SetMission_Response
 * )) before or use
 * glassy_msgs__srv__SetMission_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_glassy_msgs
bool
glassy_msgs__srv__SetMission_Response__init(glassy_msgs__srv__SetMission_Response * msg);

/// Finalize srv/SetMission message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_glassy_msgs
void
glassy_msgs__srv__SetMission_Response__fini(glassy_msgs__srv__SetMission_Response * msg);

/// Create srv/SetMission message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * glassy_msgs__srv__SetMission_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_glassy_msgs
glassy_msgs__srv__SetMission_Response *
glassy_msgs__srv__SetMission_Response__create();

/// Destroy srv/SetMission message.
/**
 * It calls
 * glassy_msgs__srv__SetMission_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_glassy_msgs
void
glassy_msgs__srv__SetMission_Response__destroy(glassy_msgs__srv__SetMission_Response * msg);

/// Check for srv/SetMission message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_glassy_msgs
bool
glassy_msgs__srv__SetMission_Response__are_equal(const glassy_msgs__srv__SetMission_Response * lhs, const glassy_msgs__srv__SetMission_Response * rhs);

/// Copy a srv/SetMission message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_glassy_msgs
bool
glassy_msgs__srv__SetMission_Response__copy(
  const glassy_msgs__srv__SetMission_Response * input,
  glassy_msgs__srv__SetMission_Response * output);

/// Initialize array of srv/SetMission messages.
/**
 * It allocates the memory for the number of elements and calls
 * glassy_msgs__srv__SetMission_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_glassy_msgs
bool
glassy_msgs__srv__SetMission_Response__Sequence__init(glassy_msgs__srv__SetMission_Response__Sequence * array, size_t size);

/// Finalize array of srv/SetMission messages.
/**
 * It calls
 * glassy_msgs__srv__SetMission_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_glassy_msgs
void
glassy_msgs__srv__SetMission_Response__Sequence__fini(glassy_msgs__srv__SetMission_Response__Sequence * array);

/// Create array of srv/SetMission messages.
/**
 * It allocates the memory for the array and calls
 * glassy_msgs__srv__SetMission_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_glassy_msgs
glassy_msgs__srv__SetMission_Response__Sequence *
glassy_msgs__srv__SetMission_Response__Sequence__create(size_t size);

/// Destroy array of srv/SetMission messages.
/**
 * It calls
 * glassy_msgs__srv__SetMission_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_glassy_msgs
void
glassy_msgs__srv__SetMission_Response__Sequence__destroy(glassy_msgs__srv__SetMission_Response__Sequence * array);

/// Check for srv/SetMission message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_glassy_msgs
bool
glassy_msgs__srv__SetMission_Response__Sequence__are_equal(const glassy_msgs__srv__SetMission_Response__Sequence * lhs, const glassy_msgs__srv__SetMission_Response__Sequence * rhs);

/// Copy an array of srv/SetMission messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_glassy_msgs
bool
glassy_msgs__srv__SetMission_Response__Sequence__copy(
  const glassy_msgs__srv__SetMission_Response__Sequence * input,
  glassy_msgs__srv__SetMission_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // GLASSY_MSGS__SRV__DETAIL__SET_MISSION__FUNCTIONS_H_
