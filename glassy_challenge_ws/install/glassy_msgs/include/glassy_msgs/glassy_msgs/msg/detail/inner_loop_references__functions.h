// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from glassy_msgs:msg/InnerLoopReferences.idl
// generated code does not contain a copyright notice

#ifndef GLASSY_MSGS__MSG__DETAIL__INNER_LOOP_REFERENCES__FUNCTIONS_H_
#define GLASSY_MSGS__MSG__DETAIL__INNER_LOOP_REFERENCES__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "glassy_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "glassy_msgs/msg/detail/inner_loop_references__struct.h"

/// Initialize msg/InnerLoopReferences message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * glassy_msgs__msg__InnerLoopReferences
 * )) before or use
 * glassy_msgs__msg__InnerLoopReferences__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_glassy_msgs
bool
glassy_msgs__msg__InnerLoopReferences__init(glassy_msgs__msg__InnerLoopReferences * msg);

/// Finalize msg/InnerLoopReferences message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_glassy_msgs
void
glassy_msgs__msg__InnerLoopReferences__fini(glassy_msgs__msg__InnerLoopReferences * msg);

/// Create msg/InnerLoopReferences message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * glassy_msgs__msg__InnerLoopReferences__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_glassy_msgs
glassy_msgs__msg__InnerLoopReferences *
glassy_msgs__msg__InnerLoopReferences__create();

/// Destroy msg/InnerLoopReferences message.
/**
 * It calls
 * glassy_msgs__msg__InnerLoopReferences__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_glassy_msgs
void
glassy_msgs__msg__InnerLoopReferences__destroy(glassy_msgs__msg__InnerLoopReferences * msg);

/// Check for msg/InnerLoopReferences message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_glassy_msgs
bool
glassy_msgs__msg__InnerLoopReferences__are_equal(const glassy_msgs__msg__InnerLoopReferences * lhs, const glassy_msgs__msg__InnerLoopReferences * rhs);

/// Copy a msg/InnerLoopReferences message.
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
glassy_msgs__msg__InnerLoopReferences__copy(
  const glassy_msgs__msg__InnerLoopReferences * input,
  glassy_msgs__msg__InnerLoopReferences * output);

/// Initialize array of msg/InnerLoopReferences messages.
/**
 * It allocates the memory for the number of elements and calls
 * glassy_msgs__msg__InnerLoopReferences__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_glassy_msgs
bool
glassy_msgs__msg__InnerLoopReferences__Sequence__init(glassy_msgs__msg__InnerLoopReferences__Sequence * array, size_t size);

/// Finalize array of msg/InnerLoopReferences messages.
/**
 * It calls
 * glassy_msgs__msg__InnerLoopReferences__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_glassy_msgs
void
glassy_msgs__msg__InnerLoopReferences__Sequence__fini(glassy_msgs__msg__InnerLoopReferences__Sequence * array);

/// Create array of msg/InnerLoopReferences messages.
/**
 * It allocates the memory for the array and calls
 * glassy_msgs__msg__InnerLoopReferences__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_glassy_msgs
glassy_msgs__msg__InnerLoopReferences__Sequence *
glassy_msgs__msg__InnerLoopReferences__Sequence__create(size_t size);

/// Destroy array of msg/InnerLoopReferences messages.
/**
 * It calls
 * glassy_msgs__msg__InnerLoopReferences__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_glassy_msgs
void
glassy_msgs__msg__InnerLoopReferences__Sequence__destroy(glassy_msgs__msg__InnerLoopReferences__Sequence * array);

/// Check for msg/InnerLoopReferences message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_glassy_msgs
bool
glassy_msgs__msg__InnerLoopReferences__Sequence__are_equal(const glassy_msgs__msg__InnerLoopReferences__Sequence * lhs, const glassy_msgs__msg__InnerLoopReferences__Sequence * rhs);

/// Copy an array of msg/InnerLoopReferences messages.
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
glassy_msgs__msg__InnerLoopReferences__Sequence__copy(
  const glassy_msgs__msg__InnerLoopReferences__Sequence * input,
  glassy_msgs__msg__InnerLoopReferences__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // GLASSY_MSGS__MSG__DETAIL__INNER_LOOP_REFERENCES__FUNCTIONS_H_
