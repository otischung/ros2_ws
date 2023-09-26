// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from system_interfaces:msg/NodeChange.idl
// generated code does not contain a copyright notice

#ifndef SYSTEM_INTERFACES__MSG__DETAIL__NODE_CHANGE__FUNCTIONS_H_
#define SYSTEM_INTERFACES__MSG__DETAIL__NODE_CHANGE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "system_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "system_interfaces/msg/detail/node_change__struct.h"

/// Initialize msg/NodeChange message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * system_interfaces__msg__NodeChange
 * )) before or use
 * system_interfaces__msg__NodeChange__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_system_interfaces
bool
system_interfaces__msg__NodeChange__init(system_interfaces__msg__NodeChange * msg);

/// Finalize msg/NodeChange message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_system_interfaces
void
system_interfaces__msg__NodeChange__fini(system_interfaces__msg__NodeChange * msg);

/// Create msg/NodeChange message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * system_interfaces__msg__NodeChange__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_system_interfaces
system_interfaces__msg__NodeChange *
system_interfaces__msg__NodeChange__create();

/// Destroy msg/NodeChange message.
/**
 * It calls
 * system_interfaces__msg__NodeChange__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_system_interfaces
void
system_interfaces__msg__NodeChange__destroy(system_interfaces__msg__NodeChange * msg);

/// Check for msg/NodeChange message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_system_interfaces
bool
system_interfaces__msg__NodeChange__are_equal(const system_interfaces__msg__NodeChange * lhs, const system_interfaces__msg__NodeChange * rhs);

/// Copy a msg/NodeChange message.
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
ROSIDL_GENERATOR_C_PUBLIC_system_interfaces
bool
system_interfaces__msg__NodeChange__copy(
  const system_interfaces__msg__NodeChange * input,
  system_interfaces__msg__NodeChange * output);

/// Initialize array of msg/NodeChange messages.
/**
 * It allocates the memory for the number of elements and calls
 * system_interfaces__msg__NodeChange__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_system_interfaces
bool
system_interfaces__msg__NodeChange__Sequence__init(system_interfaces__msg__NodeChange__Sequence * array, size_t size);

/// Finalize array of msg/NodeChange messages.
/**
 * It calls
 * system_interfaces__msg__NodeChange__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_system_interfaces
void
system_interfaces__msg__NodeChange__Sequence__fini(system_interfaces__msg__NodeChange__Sequence * array);

/// Create array of msg/NodeChange messages.
/**
 * It allocates the memory for the array and calls
 * system_interfaces__msg__NodeChange__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_system_interfaces
system_interfaces__msg__NodeChange__Sequence *
system_interfaces__msg__NodeChange__Sequence__create(size_t size);

/// Destroy array of msg/NodeChange messages.
/**
 * It calls
 * system_interfaces__msg__NodeChange__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_system_interfaces
void
system_interfaces__msg__NodeChange__Sequence__destroy(system_interfaces__msg__NodeChange__Sequence * array);

/// Check for msg/NodeChange message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_system_interfaces
bool
system_interfaces__msg__NodeChange__Sequence__are_equal(const system_interfaces__msg__NodeChange__Sequence * lhs, const system_interfaces__msg__NodeChange__Sequence * rhs);

/// Copy an array of msg/NodeChange messages.
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
ROSIDL_GENERATOR_C_PUBLIC_system_interfaces
bool
system_interfaces__msg__NodeChange__Sequence__copy(
  const system_interfaces__msg__NodeChange__Sequence * input,
  system_interfaces__msg__NodeChange__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SYSTEM_INTERFACES__MSG__DETAIL__NODE_CHANGE__FUNCTIONS_H_
