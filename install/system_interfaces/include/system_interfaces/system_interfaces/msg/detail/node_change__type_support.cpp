// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from system_interfaces:msg/NodeChange.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "system_interfaces/msg/detail/node_change__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace system_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void NodeChange_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) system_interfaces::msg::NodeChange(_init);
}

void NodeChange_fini_function(void * message_memory)
{
  auto typed_message = static_cast<system_interfaces::msg::NodeChange *>(message_memory);
  typed_message->~NodeChange();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember NodeChange_message_member_array[2] = {
  {
    "node_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(system_interfaces::msg::NodeChange, node_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(system_interfaces::msg::NodeChange, state),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers NodeChange_message_members = {
  "system_interfaces::msg",  // message namespace
  "NodeChange",  // message name
  2,  // number of fields
  sizeof(system_interfaces::msg::NodeChange),
  NodeChange_message_member_array,  // message members
  NodeChange_init_function,  // function to initialize message memory (memory has to be allocated)
  NodeChange_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t NodeChange_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NodeChange_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace system_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<system_interfaces::msg::NodeChange>()
{
  return &::system_interfaces::msg::rosidl_typesupport_introspection_cpp::NodeChange_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, system_interfaces, msg, NodeChange)() {
  return &::system_interfaces::msg::rosidl_typesupport_introspection_cpp::NodeChange_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
