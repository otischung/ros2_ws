// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from system_interfaces:msg/NodeChange.idl
// generated code does not contain a copyright notice

#ifndef SYSTEM_INTERFACES__MSG__DETAIL__NODE_CHANGE__STRUCT_H_
#define SYSTEM_INTERFACES__MSG__DETAIL__NODE_CHANGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'node_name'
// Member 'state'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/NodeChange in the package system_interfaces.
typedef struct system_interfaces__msg__NodeChange
{
  rosidl_runtime_c__String node_name;
  rosidl_runtime_c__String state;
} system_interfaces__msg__NodeChange;

// Struct for a sequence of system_interfaces__msg__NodeChange.
typedef struct system_interfaces__msg__NodeChange__Sequence
{
  system_interfaces__msg__NodeChange * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} system_interfaces__msg__NodeChange__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SYSTEM_INTERFACES__MSG__DETAIL__NODE_CHANGE__STRUCT_H_
