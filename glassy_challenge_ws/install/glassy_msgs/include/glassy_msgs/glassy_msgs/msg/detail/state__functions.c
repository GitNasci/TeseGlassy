// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from glassy_msgs:msg/State.idl
// generated code does not contain a copyright notice
#include "glassy_msgs/msg/detail/state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
glassy_msgs__msg__State__init(glassy_msgs__msg__State * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    glassy_msgs__msg__State__fini(msg);
    return false;
  }
  // lon
  // lat
  // altitude
  // p_ned
  // v_body
  // pitch
  // roll
  // yaw
  // pitch_rate
  // yaw_rate
  // roll_rate
  return true;
}

void
glassy_msgs__msg__State__fini(glassy_msgs__msg__State * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // lon
  // lat
  // altitude
  // p_ned
  // v_body
  // pitch
  // roll
  // yaw
  // pitch_rate
  // yaw_rate
  // roll_rate
}

bool
glassy_msgs__msg__State__are_equal(const glassy_msgs__msg__State * lhs, const glassy_msgs__msg__State * rhs)
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
  // lon
  if (lhs->lon != rhs->lon) {
    return false;
  }
  // lat
  if (lhs->lat != rhs->lat) {
    return false;
  }
  // altitude
  if (lhs->altitude != rhs->altitude) {
    return false;
  }
  // p_ned
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->p_ned[i] != rhs->p_ned[i]) {
      return false;
    }
  }
  // v_body
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->v_body[i] != rhs->v_body[i]) {
      return false;
    }
  }
  // pitch
  if (lhs->pitch != rhs->pitch) {
    return false;
  }
  // roll
  if (lhs->roll != rhs->roll) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // pitch_rate
  if (lhs->pitch_rate != rhs->pitch_rate) {
    return false;
  }
  // yaw_rate
  if (lhs->yaw_rate != rhs->yaw_rate) {
    return false;
  }
  // roll_rate
  if (lhs->roll_rate != rhs->roll_rate) {
    return false;
  }
  return true;
}

bool
glassy_msgs__msg__State__copy(
  const glassy_msgs__msg__State * input,
  glassy_msgs__msg__State * output)
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
  // lon
  output->lon = input->lon;
  // lat
  output->lat = input->lat;
  // altitude
  output->altitude = input->altitude;
  // p_ned
  for (size_t i = 0; i < 3; ++i) {
    output->p_ned[i] = input->p_ned[i];
  }
  // v_body
  for (size_t i = 0; i < 3; ++i) {
    output->v_body[i] = input->v_body[i];
  }
  // pitch
  output->pitch = input->pitch;
  // roll
  output->roll = input->roll;
  // yaw
  output->yaw = input->yaw;
  // pitch_rate
  output->pitch_rate = input->pitch_rate;
  // yaw_rate
  output->yaw_rate = input->yaw_rate;
  // roll_rate
  output->roll_rate = input->roll_rate;
  return true;
}

glassy_msgs__msg__State *
glassy_msgs__msg__State__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  glassy_msgs__msg__State * msg = (glassy_msgs__msg__State *)allocator.allocate(sizeof(glassy_msgs__msg__State), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(glassy_msgs__msg__State));
  bool success = glassy_msgs__msg__State__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
glassy_msgs__msg__State__destroy(glassy_msgs__msg__State * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    glassy_msgs__msg__State__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
glassy_msgs__msg__State__Sequence__init(glassy_msgs__msg__State__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  glassy_msgs__msg__State * data = NULL;

  if (size) {
    data = (glassy_msgs__msg__State *)allocator.zero_allocate(size, sizeof(glassy_msgs__msg__State), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = glassy_msgs__msg__State__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        glassy_msgs__msg__State__fini(&data[i - 1]);
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
glassy_msgs__msg__State__Sequence__fini(glassy_msgs__msg__State__Sequence * array)
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
      glassy_msgs__msg__State__fini(&array->data[i]);
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

glassy_msgs__msg__State__Sequence *
glassy_msgs__msg__State__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  glassy_msgs__msg__State__Sequence * array = (glassy_msgs__msg__State__Sequence *)allocator.allocate(sizeof(glassy_msgs__msg__State__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = glassy_msgs__msg__State__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
glassy_msgs__msg__State__Sequence__destroy(glassy_msgs__msg__State__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    glassy_msgs__msg__State__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
glassy_msgs__msg__State__Sequence__are_equal(const glassy_msgs__msg__State__Sequence * lhs, const glassy_msgs__msg__State__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!glassy_msgs__msg__State__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
glassy_msgs__msg__State__Sequence__copy(
  const glassy_msgs__msg__State__Sequence * input,
  glassy_msgs__msg__State__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(glassy_msgs__msg__State);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    glassy_msgs__msg__State * data =
      (glassy_msgs__msg__State *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!glassy_msgs__msg__State__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          glassy_msgs__msg__State__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!glassy_msgs__msg__State__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
