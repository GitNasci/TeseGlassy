// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from glassy_msgs:msg/PathReferences.idl
// generated code does not contain a copyright notice
#include "glassy_msgs/msg/detail/path_references__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
glassy_msgs__msg__PathReferences__init(glassy_msgs__msg__PathReferences * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    glassy_msgs__msg__PathReferences__fini(msg);
    return false;
  }
  // x_ref
  // y_ref
  // is_active
  // path_segment_index
  // path_vel
  // tangent_heading
  return true;
}

void
glassy_msgs__msg__PathReferences__fini(glassy_msgs__msg__PathReferences * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // x_ref
  // y_ref
  // is_active
  // path_segment_index
  // path_vel
  // tangent_heading
}

bool
glassy_msgs__msg__PathReferences__are_equal(const glassy_msgs__msg__PathReferences * lhs, const glassy_msgs__msg__PathReferences * rhs)
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
  // x_ref
  if (lhs->x_ref != rhs->x_ref) {
    return false;
  }
  // y_ref
  if (lhs->y_ref != rhs->y_ref) {
    return false;
  }
  // is_active
  if (lhs->is_active != rhs->is_active) {
    return false;
  }
  // path_segment_index
  if (lhs->path_segment_index != rhs->path_segment_index) {
    return false;
  }
  // path_vel
  if (lhs->path_vel != rhs->path_vel) {
    return false;
  }
  // tangent_heading
  if (lhs->tangent_heading != rhs->tangent_heading) {
    return false;
  }
  return true;
}

bool
glassy_msgs__msg__PathReferences__copy(
  const glassy_msgs__msg__PathReferences * input,
  glassy_msgs__msg__PathReferences * output)
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
  // x_ref
  output->x_ref = input->x_ref;
  // y_ref
  output->y_ref = input->y_ref;
  // is_active
  output->is_active = input->is_active;
  // path_segment_index
  output->path_segment_index = input->path_segment_index;
  // path_vel
  output->path_vel = input->path_vel;
  // tangent_heading
  output->tangent_heading = input->tangent_heading;
  return true;
}

glassy_msgs__msg__PathReferences *
glassy_msgs__msg__PathReferences__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  glassy_msgs__msg__PathReferences * msg = (glassy_msgs__msg__PathReferences *)allocator.allocate(sizeof(glassy_msgs__msg__PathReferences), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(glassy_msgs__msg__PathReferences));
  bool success = glassy_msgs__msg__PathReferences__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
glassy_msgs__msg__PathReferences__destroy(glassy_msgs__msg__PathReferences * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    glassy_msgs__msg__PathReferences__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
glassy_msgs__msg__PathReferences__Sequence__init(glassy_msgs__msg__PathReferences__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  glassy_msgs__msg__PathReferences * data = NULL;

  if (size) {
    data = (glassy_msgs__msg__PathReferences *)allocator.zero_allocate(size, sizeof(glassy_msgs__msg__PathReferences), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = glassy_msgs__msg__PathReferences__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        glassy_msgs__msg__PathReferences__fini(&data[i - 1]);
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
glassy_msgs__msg__PathReferences__Sequence__fini(glassy_msgs__msg__PathReferences__Sequence * array)
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
      glassy_msgs__msg__PathReferences__fini(&array->data[i]);
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

glassy_msgs__msg__PathReferences__Sequence *
glassy_msgs__msg__PathReferences__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  glassy_msgs__msg__PathReferences__Sequence * array = (glassy_msgs__msg__PathReferences__Sequence *)allocator.allocate(sizeof(glassy_msgs__msg__PathReferences__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = glassy_msgs__msg__PathReferences__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
glassy_msgs__msg__PathReferences__Sequence__destroy(glassy_msgs__msg__PathReferences__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    glassy_msgs__msg__PathReferences__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
glassy_msgs__msg__PathReferences__Sequence__are_equal(const glassy_msgs__msg__PathReferences__Sequence * lhs, const glassy_msgs__msg__PathReferences__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!glassy_msgs__msg__PathReferences__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
glassy_msgs__msg__PathReferences__Sequence__copy(
  const glassy_msgs__msg__PathReferences__Sequence * input,
  glassy_msgs__msg__PathReferences__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(glassy_msgs__msg__PathReferences);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    glassy_msgs__msg__PathReferences * data =
      (glassy_msgs__msg__PathReferences *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!glassy_msgs__msg__PathReferences__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          glassy_msgs__msg__PathReferences__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!glassy_msgs__msg__PathReferences__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
