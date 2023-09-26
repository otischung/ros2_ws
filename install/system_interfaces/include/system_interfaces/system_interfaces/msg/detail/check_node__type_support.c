// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from system_interfaces:msg/CheckNode.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "system_interfaces/msg/detail/check_node__rosidl_typesupport_introspection_c.h"
#include "system_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "system_interfaces/msg/detail/check_node__functions.h"
#include "system_interfaces/msg/detail/check_node__struct.h"


// Include directives for member types
// Member `node_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void system_interfaces__msg__CheckNode__rosidl_typesupport_introspection_c__CheckNode_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  system_interfaces__msg__CheckNode__init(message_memory);
}

void system_interfaces__msg__CheckNode__rosidl_typesupport_introspection_c__CheckNode_fini_function(void * message_memory)
{
  system_interfaces__msg__CheckNode__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember system_interfaces__msg__CheckNode__rosidl_typesupport_introspection_c__CheckNode_message_member_array[3] = {
  {
    "node_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(system_interfaces__msg__CheckNode, node_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "seconds",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(system_interfaces__msg__CheckNode, seconds),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nanoseconds",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(system_interfaces__msg__CheckNode, nanoseconds),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers system_interfaces__msg__CheckNode__rosidl_typesupport_introspection_c__CheckNode_message_members = {
  "system_interfaces__msg",  // message namespace
  "CheckNode",  // message name
  3,  // number of fields
  sizeof(system_interfaces__msg__CheckNode),
  system_interfaces__msg__CheckNode__rosidl_typesupport_introspection_c__CheckNode_message_member_array,  // message members
  system_interfaces__msg__CheckNode__rosidl_typesupport_introspection_c__CheckNode_init_function,  // function to initialize message memory (memory has to be allocated)
  system_interfaces__msg__CheckNode__rosidl_typesupport_introspection_c__CheckNode_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t system_interfaces__msg__CheckNode__rosidl_typesupport_introspection_c__CheckNode_message_type_support_handle = {
  0,
  &system_interfaces__msg__CheckNode__rosidl_typesupport_introspection_c__CheckNode_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_system_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, system_interfaces, msg, CheckNode)() {
  if (!system_interfaces__msg__CheckNode__rosidl_typesupport_introspection_c__CheckNode_message_type_support_handle.typesupport_identifier) {
    system_interfaces__msg__CheckNode__rosidl_typesupport_introspection_c__CheckNode_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &system_interfaces__msg__CheckNode__rosidl_typesupport_introspection_c__CheckNode_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
