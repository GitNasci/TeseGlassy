// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from glassy_msgs:srv/PidGains.idl
// generated code does not contain a copyright notice
#include "glassy_msgs/srv/detail/pid_gains__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
glassy_msgs__srv__PidGains_Request__init(glassy_msgs__srv__PidGains_Request * msg)
{
  if (!msg) {
    return false;
  }
  // kp
  // ki
  // kd
  return true;
}

void
glassy_msgs__srv__PidGains_Request__fini(glassy_msgs__srv__PidGains_Request * msg)
{
  if (!msg) {
    return;
  }
  // kp
  // ki
  // kd
}

bool
glassy_msgs__srv__PidGains_Request__are_equal(const glassy_msgs__srv__PidGains_Request * lhs, const glassy_msgs__srv__PidGains_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // kp
  if (lhs->kp != rhs->kp) {
    return false;
  }
  // ki
  if (lhs->ki != rhs->ki) {
    return false;
  }
  // kd
  if (lhs->kd != rhs->kd) {
    return false;
  }
  return true;
}

bool
glassy_msgs__srv__PidGains_Request__copy(
  const glassy_msgs__srv__PidGains_Request * input,
  glassy_msgs__srv__PidGains_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // kp
  output->kp = input->kp;
  // ki
  output->ki = input->ki;
  // kd
  output->kd = input->kd;
  return true;
}

glassy_msgs__srv__PidGains_Request *
glassy_msgs__srv__PidGains_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  glassy_msgs__srv__PidGains_Request * msg = (glassy_msgs__srv__PidGains_Request *)allocator.allocate(sizeof(glassy_msgs__srv__PidGains_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(glassy_msgs__srv__PidGains_Request));
  bool success = glassy_msgs__srv__PidGains_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
glassy_msgs__srv__PidGains_Request__destroy(glassy_msgs__srv__PidGains_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    glassy_msgs__srv__PidGains_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
glassy_msgs__srv__PidGains_Request__Sequence__init(glassy_msgs__srv__PidGains_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  glassy_msgs__srv__PidGains_Request * data = NULL;

  if (size) {
    data = (glassy_msgs__srv__PidGains_Request *)allocator.zero_allocate(size, sizeof(glassy_msgs__srv__PidGains_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = glassy_msgs__srv__PidGains_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        glassy_msgs__srv__PidGains_Request__fini(&data[i - 1]);
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
glassy_msgs__srv__PidGains_Request__Sequence__fini(glassy_msgs__srv__PidGains_Request__Sequence * array)
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
      glassy_msgs__srv__PidGains_Request__fini(&array->data[i]);
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

glassy_msgs__srv__PidGains_Request__Sequence *
glassy_msgs__srv__PidGains_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  glassy_msgs__srv__PidGains_Request__Sequence * array = (glassy_msgs__srv__PidGains_Request__Sequence *)allocator.allocate(sizeof(glassy_msgs__srv__PidGains_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = glassy_msgs__srv__PidGains_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
glassy_msgs__srv__PidGains_Request__Sequence__destroy(glassy_msgs__srv__PidGains_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    glassy_msgs__srv__PidGains_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
glassy_msgs__srv__PidGains_Request__Sequence__are_equal(const glassy_msgs__srv__PidGains_Request__Sequence * lhs, const glassy_msgs__srv__PidGains_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!glassy_msgs__srv__PidGains_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
glassy_msgs__srv__PidGains_Request__Sequence__copy(
  const glassy_msgs__srv__PidGains_Request__Sequence * input,
  glassy_msgs__srv__PidGains_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(glassy_msgs__srv__PidGains_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    glassy_msgs__srv__PidGains_Request * data =
      (glassy_msgs__srv__PidGains_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!glassy_msgs__srv__PidGains_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          glassy_msgs__srv__PidGains_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!glassy_msgs__srv__PidGains_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
glassy_msgs__srv__PidGains_Response__init(glassy_msgs__srv__PidGains_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result
  return true;
}

void
glassy_msgs__srv__PidGains_Response__fini(glassy_msgs__srv__PidGains_Response * msg)
{
  if (!msg) {
    return;
  }
  // result
}

bool
glassy_msgs__srv__PidGains_Response__are_equal(const glassy_msgs__srv__PidGains_Response * lhs, const glassy_msgs__srv__PidGains_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result
  if (lhs->result != rhs->result) {
    return false;
  }
  return true;
}

bool
glassy_msgs__srv__PidGains_Response__copy(
  const glassy_msgs__srv__PidGains_Response * input,
  glassy_msgs__srv__PidGains_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  output->result = input->result;
  return true;
}

glassy_msgs__srv__PidGains_Response *
glassy_msgs__srv__PidGains_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  glassy_msgs__srv__PidGains_Response * msg = (glassy_msgs__srv__PidGains_Response *)allocator.allocate(sizeof(glassy_msgs__srv__PidGains_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(glassy_msgs__srv__PidGains_Response));
  bool success = glassy_msgs__srv__PidGains_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
glassy_msgs__srv__PidGains_Response__destroy(glassy_msgs__srv__PidGains_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    glassy_msgs__srv__PidGains_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
glassy_msgs__srv__PidGains_Response__Sequence__init(glassy_msgs__srv__PidGains_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  glassy_msgs__srv__PidGains_Response * data = NULL;

  if (size) {
    data = (glassy_msgs__srv__PidGains_Response *)allocator.zero_allocate(size, sizeof(glassy_msgs__srv__PidGains_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = glassy_msgs__srv__PidGains_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        glassy_msgs__srv__PidGains_Response__fini(&data[i - 1]);
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
glassy_msgs__srv__PidGains_Response__Sequence__fini(glassy_msgs__srv__PidGains_Response__Sequence * array)
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
      glassy_msgs__srv__PidGains_Response__fini(&array->data[i]);
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

glassy_msgs__srv__PidGains_Response__Sequence *
glassy_msgs__srv__PidGains_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  glassy_msgs__srv__PidGains_Response__Sequence * array = (glassy_msgs__srv__PidGains_Response__Sequence *)allocator.allocate(sizeof(glassy_msgs__srv__PidGains_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = glassy_msgs__srv__PidGains_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
glassy_msgs__srv__PidGains_Response__Sequence__destroy(glassy_msgs__srv__PidGains_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    glassy_msgs__srv__PidGains_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
glassy_msgs__srv__PidGains_Response__Sequence__are_equal(const glassy_msgs__srv__PidGains_Response__Sequence * lhs, const glassy_msgs__srv__PidGains_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!glassy_msgs__srv__PidGains_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
glassy_msgs__srv__PidGains_Response__Sequence__copy(
  const glassy_msgs__srv__PidGains_Response__Sequence * input,
  glassy_msgs__srv__PidGains_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(glassy_msgs__srv__PidGains_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    glassy_msgs__srv__PidGains_Response * data =
      (glassy_msgs__srv__PidGains_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!glassy_msgs__srv__PidGains_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          glassy_msgs__srv__PidGains_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!glassy_msgs__srv__PidGains_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
