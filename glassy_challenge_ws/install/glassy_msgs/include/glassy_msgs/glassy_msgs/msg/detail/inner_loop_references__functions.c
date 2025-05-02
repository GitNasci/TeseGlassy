// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from glassy_msgs:msg/InnerLoopReferences.idl
// generated code does not contain a copyright notice
#include "glassy_msgs/msg/detail/inner_loop_references__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
glassy_msgs__msg__InnerLoopReferences__init(glassy_msgs__msg__InnerLoopReferences * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    glassy_msgs__msg__InnerLoopReferences__fini(msg);
    return false;
  }
  // yaw_rate_ref
  // surge_ref
  // yaw_ref
  return true;
}

void
glassy_msgs__msg__InnerLoopReferences__fini(glassy_msgs__msg__InnerLoopReferences * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // yaw_rate_ref
  // surge_ref
  // yaw_ref
}

bool
glassy_msgs__msg__InnerLoopReferences__are_equal(const glassy_msgs__msg__InnerLoopReferences * lhs, const glassy_msgs__msg__InnerLoopReferences * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // yaw_rate_ref
  if (lhs->yaw_rate_ref != rhs->yaw_rate_ref) {
    return false;
  }
  // surge_ref
  if (lhs->surge_ref != rhs->surge_ref) {
    return false;
  }
  // yaw_ref
  if (lhs->yaw_ref != rhs->yaw_ref) {
    return false;
  }
  return true;
}

bool
glassy_msgs__msg__InnerLoopReferences__copy(
  const glassy_msgs__msg__InnerLoopReferences * input,
  glassy_msgs__msg__InnerLoopReferences * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // yaw_rate_ref
  output->yaw_rate_ref = input->yaw_rate_ref;
  // surge_ref
  output->surge_ref = input->surge_ref;
  // yaw_ref
  output->yaw_ref = input->yaw_ref;
  return true;
}

glassy_msgs__msg__InnerLoopReferences *
glassy_msgs__msg__InnerLoopReferences__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  glassy_msgs__msg__InnerLoopReferences * msg = (glassy_msgs__msg__InnerLoopReferences *)allocator.allocate(sizeof(glassy_msgs__msg__InnerLoopReferences), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(glassy_msgs__msg__InnerLoopReferences));
  bool success = glassy_msgs__msg__InnerLoopReferences__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
glassy_msgs__msg__InnerLoopReferences__destroy(glassy_msgs__msg__InnerLoopReferences * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    glassy_msgs__msg__InnerLoopReferences__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
glassy_msgs__msg__InnerLoopReferences__Sequence__init(glassy_msgs__msg__InnerLoopReferences__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  glassy_msgs__msg__InnerLoopReferences * data = NULL;

  if (size) {
    data = (glassy_msgs__msg__InnerLoopReferences *)allocator.zero_allocate(size, sizeof(glassy_msgs__msg__InnerLoopReferences), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = glassy_msgs__msg__InnerLoopReferences__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        glassy_msgs__msg__InnerLoopReferences__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
glassy_msgs__msg__InnerLoopReferences__Sequence__fini(glassy_msgs__msg__InnerLoopReferences__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      glassy_msgs__msg__InnerLoopReferences__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

glassy_msgs__msg__InnerLoopReferences__Sequence *
glassy_msgs__msg__InnerLoopReferences__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  glassy_msgs__msg__InnerLoopReferences__Sequence * array = (glassy_msgs__msg__InnerLoopReferences__Sequence *)allocator.allocate(sizeof(glassy_msgs__msg__InnerLoopReferences__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = glassy_msgs__msg__InnerLoopReferences__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
glassy_msgs__msg__InnerLoopReferences__Sequence__destroy(glassy_msgs__msg__InnerLoopReferences__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    glassy_msgs__msg__InnerLoopReferences__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
glassy_msgs__msg__InnerLoopReferences__Sequence__are_equal(const glassy_msgs__msg__InnerLoopReferences__Sequence * lhs, const glassy_msgs__msg__InnerLoopReferences__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!glassy_msgs__msg__InnerLoopReferences__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
glassy_msgs__msg__InnerLoopReferences__Sequence__copy(
  const glassy_msgs__msg__InnerLoopReferences__Sequence * input,
  glassy_msgs__msg__InnerLoopReferences__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(glassy_msgs__msg__InnerLoopReferences);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    glassy_msgs__msg__InnerLoopReferences * data =
      (glassy_msgs__msg__InnerLoopReferences *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!glassy_msgs__msg__InnerLoopReferences__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          glassy_msgs__msg__InnerLoopReferences__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!glassy_msgs__msg__InnerLoopReferences__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
