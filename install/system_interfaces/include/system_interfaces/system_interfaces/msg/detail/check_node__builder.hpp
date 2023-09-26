// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from system_interfaces:msg/CheckNode.idl
// generated code does not contain a copyright notice

#ifndef SYSTEM_INTERFACES__MSG__DETAIL__CHECK_NODE__BUILDER_HPP_
#define SYSTEM_INTERFACES__MSG__DETAIL__CHECK_NODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "system_interfaces/msg/detail/check_node__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace system_interfaces
{

namespace msg
{

namespace builder
{

class Init_CheckNode_nanoseconds
{
public:
  explicit Init_CheckNode_nanoseconds(::system_interfaces::msg::CheckNode & msg)
  : msg_(msg)
  {}
  ::system_interfaces::msg::CheckNode nanoseconds(::system_interfaces::msg::CheckNode::_nanoseconds_type arg)
  {
    msg_.nanoseconds = std::move(arg);
    return std::move(msg_);
  }

private:
  ::system_interfaces::msg::CheckNode msg_;
};

class Init_CheckNode_seconds
{
public:
  explicit Init_CheckNode_seconds(::system_interfaces::msg::CheckNode & msg)
  : msg_(msg)
  {}
  Init_CheckNode_nanoseconds seconds(::system_interfaces::msg::CheckNode::_seconds_type arg)
  {
    msg_.seconds = std::move(arg);
    return Init_CheckNode_nanoseconds(msg_);
  }

private:
  ::system_interfaces::msg::CheckNode msg_;
};

class Init_CheckNode_node_name
{
public:
  Init_CheckNode_node_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CheckNode_seconds node_name(::system_interfaces::msg::CheckNode::_node_name_type arg)
  {
    msg_.node_name = std::move(arg);
    return Init_CheckNode_seconds(msg_);
  }

private:
  ::system_interfaces::msg::CheckNode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::system_interfaces::msg::CheckNode>()
{
  return system_interfaces::msg::builder::Init_CheckNode_node_name();
}

}  // namespace system_interfaces

#endif  // SYSTEM_INTERFACES__MSG__DETAIL__CHECK_NODE__BUILDER_HPP_
