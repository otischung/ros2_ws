// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from system_interfaces:msg/NodeChange.idl
// generated code does not contain a copyright notice

#ifndef SYSTEM_INTERFACES__MSG__DETAIL__NODE_CHANGE__TRAITS_HPP_
#define SYSTEM_INTERFACES__MSG__DETAIL__NODE_CHANGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "system_interfaces/msg/detail/node_change__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace system_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const NodeChange & msg,
  std::ostream & out)
{
  out << "{";
  // member: node_name
  {
    out << "node_name: ";
    rosidl_generator_traits::value_to_yaml(msg.node_name, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NodeChange & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: node_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node_name: ";
    rosidl_generator_traits::value_to_yaml(msg.node_name, out);
    out << "\n";
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NodeChange & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace system_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use system_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const system_interfaces::msg::NodeChange & msg,
  std::ostream & out, size_t indentation = 0)
{
  system_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use system_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const system_interfaces::msg::NodeChange & msg)
{
  return system_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<system_interfaces::msg::NodeChange>()
{
  return "system_interfaces::msg::NodeChange";
}

template<>
inline const char * name<system_interfaces::msg::NodeChange>()
{
  return "system_interfaces/msg/NodeChange";
}

template<>
struct has_fixed_size<system_interfaces::msg::NodeChange>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<system_interfaces::msg::NodeChange>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<system_interfaces::msg::NodeChange>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SYSTEM_INTERFACES__MSG__DETAIL__NODE_CHANGE__TRAITS_HPP_
