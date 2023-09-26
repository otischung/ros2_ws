// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from system_interfaces:msg/CheckNode.idl
// generated code does not contain a copyright notice

#ifndef SYSTEM_INTERFACES__MSG__DETAIL__CHECK_NODE__STRUCT_H_
#define SYSTEM_INTERFACES__MSG__DETAIL__CHECK_NODE__STRUCT_H_

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
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/CheckNode in the package system_interfaces.
typedef struct system_interfaces__msg__CheckNode
{
  rosidl_runtime_c__String node_name;
  int32_t seconds;
  uint32_t nanoseconds;
} system_interfaces__msg__CheckNode;

// Struct for a sequence of system_interfaces__msg__CheckNode.
typedef struct system_interfaces__msg__CheckNode__Sequence
{
  system_interfaces__msg__CheckNode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} system_interfaces__msg__CheckNode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SYSTEM_INTERFACES__MSG__DETAIL__CHECK_NODE__STRUCT_H_
