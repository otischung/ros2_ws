// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from system_interfaces:msg/NodeChange.idl
// generated code does not contain a copyright notice
#include "system_interfaces/msg/detail/node_change__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `node_name`
// Member `state`
#include "rosidl_runtime_c/string_functions.h"

bool
system_interfaces__msg__NodeChange__init(system_interfaces__msg__NodeChange * msg)
{
  if (!msg) {
    return false;
  }
  // node_name
  if (!rosidl_runtime_c__String__init(&msg->node_name)) {
    system_interfaces__msg__NodeChange__fini(msg);
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__init(&msg->state)) {
    system_interfaces__msg__NodeChange__fini(msg);
    return false;
  }
  return true;
}

void
system_interfaces__msg__NodeChange__fini(system_interfaces__msg__NodeChange * msg)
{
  if (!msg) {
    return;
  }
  // node_name
  rosidl_runtime_c__String__fini(&msg->node_name);
  // state
  rosidl_runtime_c__String__fini(&msg->state);
}

bool
system_interfaces__msg__NodeChange__are_equal(const system_interfaces__msg__NodeChange * lhs, const system_interfaces__msg__NodeChange * rhs)
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
  // state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  return true;
}

bool
system_interfaces__msg__NodeChange__copy(
  const system_interfaces__msg__NodeChange * input,
  system_interfaces__msg__NodeChange * output)
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
  // state
  if (!rosidl_runtime_c__String__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  return true;
}

system_interfaces__msg__NodeChange *
system_interfaces__msg__NodeChange__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  system_interfaces__msg__NodeChange * msg = (system_interfaces__msg__NodeChange *)allocator.allocate(sizeof(system_interfaces__msg__NodeChange), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(system_interfaces__msg__NodeChange));
  bool success = system_interfaces__msg__NodeChange__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
system_interfaces__msg__NodeChange__destroy(system_interfaces__msg__NodeChange * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    system_interfaces__msg__NodeChange__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
system_interfaces__msg__NodeChange__Sequence__init(system_interfaces__msg__NodeChange__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  system_interfaces__msg__NodeChange * data = NULL;

  if (size) {
    data = (system_interfaces__msg__NodeChange *)allocator.zero_allocate(size, sizeof(system_interfaces__msg__NodeChange), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = system_interfaces__msg__NodeChange__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        system_interfaces__msg__NodeChange__fini(&data[i - 1]);
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
system_interfaces__msg__NodeChange__Sequence__fini(system_interfaces__msg__NodeChange__Sequence * array)
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
      system_interfaces__msg__NodeChange__fini(&array->data[i]);
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

system_interfaces__msg__NodeChange__Sequence *
system_interfaces__msg__NodeChange__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  system_interfaces__msg__NodeChange__Sequence * array = (system_interfaces__msg__NodeChange__Sequence *)allocator.allocate(sizeof(system_interfaces__msg__NodeChange__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = system_interfaces__msg__NodeChange__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
system_interfaces__msg__NodeChange__Sequence__destroy(system_interfaces__msg__NodeChange__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    system_interfaces__msg__NodeChange__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
system_interfaces__msg__NodeChange__Sequence__are_equal(const system_interfaces__msg__NodeChange__Sequence * lhs, const system_interfaces__msg__NodeChange__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!system_interfaces__msg__NodeChange__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
system_interfaces__msg__NodeChange__Sequence__copy(
  const system_interfaces__msg__NodeChange__Sequence * input,
  system_interfaces__msg__NodeChange__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(system_interfaces__msg__NodeChange);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    system_interfaces__msg__NodeChange * data =
      (system_interfaces__msg__NodeChange *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!system_interfaces__msg__NodeChange__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          system_interfaces__msg__NodeChange__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!system_interfaces__msg__NodeChange__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
