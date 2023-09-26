// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from system_interfaces:msg/NodeChange.idl
// generated code does not contain a copyright notice

#ifndef SYSTEM_INTERFACES__MSG__DETAIL__NODE_CHANGE__BUILDER_HPP_
#define SYSTEM_INTERFACES__MSG__DETAIL__NODE_CHANGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "system_interfaces/msg/detail/node_change__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace system_interfaces
{

namespace msg
{

namespace builder
{

class Init_NodeChange_state
{
public:
  explicit Init_NodeChange_state(::system_interfaces::msg::NodeChange & msg)
  : msg_(msg)
  {}
  ::system_interfaces::msg::NodeChange state(::system_interfaces::msg::NodeChange::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::system_interfaces::msg::NodeChange msg_;
};

class Init_NodeChange_node_name
{
public:
  Init_NodeChange_node_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NodeChange_state node_name(::system_interfaces::msg::NodeChange::_node_name_type arg)
  {
    msg_.node_name = std::move(arg);
    return Init_NodeChange_state(msg_);
  }

private:
  ::system_interfaces::msg::NodeChange msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::system_interfaces::msg::NodeChange>()
{
  return system_interfaces::msg::builder::Init_NodeChange_node_name();
}

}  // namespace system_interfaces

#endif  // SYSTEM_INTERFACES__MSG__DETAIL__NODE_CHANGE__BUILDER_HPP_
