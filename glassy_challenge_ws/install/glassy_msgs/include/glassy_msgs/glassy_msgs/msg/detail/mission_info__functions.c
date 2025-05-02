// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from glassy_msgs:msg/MissionInfo.idl
// generated code does not contain a copyright notice
#include "glassy_msgs/msg/detail/mission_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
glassy_msgs__msg__MissionInfo__init(glassy_msgs__msg__MissionInfo * msg)
{
  if (!msg) {
    return false;
  }
  // mission_mode
  msg->mission_mode = 0;
  return true;
}

void
glassy_msgs__msg__MissionInfo__fini(glassy_msgs__msg__MissionInfo * msg)
{
  if (!msg) {
    return;
  }
  // mission_mode
}

bool
glassy_msgs__msg__MissionInfo__are_equal(const glassy_msgs__msg__MissionInfo * lhs, const glassy_msgs__msg__MissionInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mission_mode
  if (lhs->mission_mode != rhs->mission_mode) {
    return false;
  }
  return true;
}

bool
glassy_msgs__msg__MissionInfo__copy(
  const glassy_msgs__msg__MissionInfo * input,
  glassy_msgs__msg__MissionInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // mission_mode
  output->mission_mode = input->mission_mode;
  return true;
}

glassy_msgs__msg__MissionInfo *
glassy_msgs__msg__MissionInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  glassy_msgs__msg__MissionInfo * msg = (glassy_msgs__msg__MissionInfo *)allocator.allocate(sizeof(glassy_msgs__msg__MissionInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(glassy_msgs__msg__MissionInfo));
  bool success = glassy_msgs__msg__MissionInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
glassy_msgs__msg__MissionInfo__destroy(glassy_msgs__msg__MissionInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    glassy_msgs__msg__MissionInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
glassy_msgs__msg__MissionInfo__Sequence__init(glassy_msgs__msg__MissionInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  glassy_msgs__msg__MissionInfo * data = NULL;

  if (size) {
    data = (glassy_msgs__msg__MissionInfo *)allocator.zero_allocate(size, sizeof(glassy_msgs__msg__MissionInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = glassy_msgs__msg__MissionInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        glassy_msgs__msg__MissionInfo__fini(&data[i - 1]);
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
glassy_msgs__msg__MissionInfo__Sequence__fini(glassy_msgs__msg__MissionInfo__Sequence * array)
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
      glassy_msgs__msg__MissionInfo__fini(&array->data[i]);
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

glassy_msgs__msg__MissionInfo__Sequence *
glassy_msgs__msg__MissionInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  glassy_msgs__msg__MissionInfo__Sequence * array = (glassy_msgs__msg__MissionInfo__Sequence *)allocator.allocate(sizeof(glassy_msgs__msg__MissionInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = glassy_msgs__msg__MissionInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
glassy_msgs__msg__MissionInfo__Sequence__destroy(glassy_msgs__msg__MissionInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    glassy_msgs__msg__MissionInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
glassy_msgs__msg__MissionInfo__Sequence__are_equal(const glassy_msgs__msg__MissionInfo__Sequence * lhs, const glassy_msgs__msg__MissionInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!glassy_msgs__msg__MissionInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
glassy_msgs__msg__MissionInfo__Sequence__copy(
  const glassy_msgs__msg__MissionInfo__Sequence * input,
  glassy_msgs__msg__MissionInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(glassy_msgs__msg__MissionInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    glassy_msgs__msg__MissionInfo * data =
      (glassy_msgs__msg__MissionInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!glassy_msgs__msg__MissionInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          glassy_msgs__msg__MissionInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!glassy_msgs__msg__MissionInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
