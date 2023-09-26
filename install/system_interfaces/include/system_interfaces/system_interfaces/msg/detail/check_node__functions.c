// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from system_interfaces:msg/CheckNode.idl
// generated code does not contain a copyright notice
#include "system_interfaces/msg/detail/check_node__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `node_name`
#include "rosidl_runtime_c/string_functions.h"

bool
system_interfaces__msg__CheckNode__init(system_interfaces__msg__CheckNode * msg)
{
  if (!msg) {
    return false;
  }
  // node_name
  if (!rosidl_runtime_c__String__init(&msg->node_name)) {
    system_interfaces__msg__CheckNode__fini(msg);
    return false;
  }
  // seconds
  // nanoseconds
  return true;
}

void
system_interfaces__msg__CheckNode__fini(system_interfaces__msg__CheckNode * msg)
{
  if (!msg) {
    return;
  }
  // node_name
  rosidl_runtime_c__String__fini(&msg->node_name);
  // seconds
  // nanoseconds
}

bool
system_interfaces__msg__CheckNode__are_equal(const system_interfaces__msg__CheckNode * lhs, const system_interfaces__msg__CheckNode * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // node_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->node_name), &(rhs->node_name)))
  {
    return false;
  }
  // seconds
  if (lhs->seconds != rhs->seconds) {
    return false;
  }
  // nanoseconds
  if (lhs->nanoseconds != rhs->nanoseconds) {
    return false;
  }
  return true;
}

bool
system_interfaces__msg__CheckNode__copy(
  const system_interfaces__msg__CheckNode * input,
  system_interfaces__msg__CheckNode * output)
{
  if (!input || !output) {
    return false;
  }
  // node_name
  if (!rosidl_runtime_c__String__copy(
      &(input->node_name), &(output->node_name)))
  {
    return false;
  }
  // seconds
  output->seconds = input->seconds;
  // nanoseconds
  output->nanoseconds = input->nanoseconds;
  return true;
}

system_interfaces__msg__CheckNode *
system_interfaces__msg__CheckNode__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  system_interfaces__msg__CheckNode * msg = (system_interfaces__msg__CheckNode *)allocator.allocate(sizeof(system_interfaces__msg__CheckNode), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(system_interfaces__msg__CheckNode));
  bool success = system_interfaces__msg__CheckNode__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
system_interfaces__msg__CheckNode__destroy(system_interfaces__msg__CheckNode * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    system_interfaces__msg__CheckNode__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
system_interfaces__msg__CheckNode__Sequence__init(system_interfaces__msg__CheckNode__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  system_interfaces__msg__CheckNode * data = NULL;

  if (size) {
    data = (system_interfaces__msg__CheckNode *)allocator.zero_allocate(size, sizeof(system_interfaces__msg__CheckNode), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = system_interfaces__msg__CheckNode__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        system_interfaces__msg__CheckNode__fini(&data[i - 1]);
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
system_interfaces__msg__CheckNode__Sequence__fini(system_interfaces__msg__CheckNode__Sequence * array)
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
      system_interfaces__msg__CheckNode__fini(&array->data[i]);
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

system_interfaces__msg__CheckNode__Sequence *
system_interfaces__msg__CheckNode__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  system_interfaces__msg__CheckNode__Sequence * array = (system_interfaces__msg__CheckNode__Sequence *)allocator.allocate(sizeof(system_interfaces__msg__CheckNode__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = system_interfaces__msg__CheckNode__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
system_interfaces__msg__CheckNode__Sequence__destroy(system_interfaces__msg__CheckNode__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    system_interfaces__msg__CheckNode__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
system_interfaces__msg__CheckNode__Sequence__are_equal(const system_interfaces__msg__CheckNode__Sequence * lhs, const system_interfaces__msg__CheckNode__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!system_interfaces__msg__CheckNode__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
system_interfaces__msg__CheckNode__Sequence__copy(
  const system_interfaces__msg__CheckNode__Sequence * input,
  system_interfaces__msg__CheckNode__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(system_interfaces__msg__CheckNode);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    system_interfaces__msg__CheckNode * data =
      (system_interfaces__msg__CheckNode *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!system_interfaces__msg__CheckNode__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          system_interfaces__msg__CheckNode__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!system_interfaces__msg__CheckNode__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
