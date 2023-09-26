// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from system_interfaces:msg/CheckNode.idl
// generated code does not contain a copyright notice

#ifndef SYSTEM_INTERFACES__MSG__DETAIL__CHECK_NODE__STRUCT_HPP_
#define SYSTEM_INTERFACES__MSG__DETAIL__CHECK_NODE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__system_interfaces__msg__CheckNode __attribute__((deprecated))
#else
# define DEPRECATED__system_interfaces__msg__CheckNode __declspec(deprecated)
#endif

namespace system_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CheckNode_
{
  using Type = CheckNode_<ContainerAllocator>;

  explicit CheckNode_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node_name = "";
      this->seconds = 0l;
      this->nanoseconds = 0ul;
    }
  }

  explicit CheckNode_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : node_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node_name = "";
      this->seconds = 0l;
      this->nanoseconds = 0ul;
    }
  }

  // field types and members
  using _node_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _node_name_type node_name;
  using _seconds_type =
    int32_t;
  _seconds_type seconds;
  using _nanoseconds_type =
    uint32_t;
  _nanoseconds_type nanoseconds;

  // setters for named parameter idiom
  Type & set__node_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->node_name = _arg;
    return *this;
  }
  Type & set__seconds(
    const int32_t & _arg)
  {
    this->seconds = _arg;
    return *this;
  }
  Type & set__nanoseconds(
    const uint32_t & _arg)
  {
    this->nanoseconds = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    system_interfaces::msg::CheckNode_<ContainerAllocator> *;
  using ConstRawPtr =
    const system_interfaces::msg::CheckNode_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<system_interfaces::msg::CheckNode_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<system_interfaces::msg::CheckNode_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      system_interfaces::msg::CheckNode_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<system_interfaces::msg::CheckNode_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      system_interfaces::msg::CheckNode_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<system_interfaces::msg::CheckNode_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<system_interfaces::msg::CheckNode_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<system_interfaces::msg::CheckNode_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__system_interfaces__msg__CheckNode
    std::shared_ptr<system_interfaces::msg::CheckNode_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__system_interfaces__msg__CheckNode
    std::shared_ptr<system_interfaces::msg::CheckNode_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CheckNode_ & other) const
  {
    if (this->node_name != other.node_name) {
      return false;
    }
    if (this->seconds != other.seconds) {
      return false;
    }
    if (this->nanoseconds != other.nanoseconds) {
      return false;
    }
    return true;
  }
  bool operator!=(const CheckNode_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CheckNode_

// alias to use template instance with default allocator
using CheckNode =
  system_interfaces::msg::CheckNode_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace system_interfaces

#endif  // SYSTEM_INTERFACES__MSG__DETAIL__CHECK_NODE__STRUCT_HPP_
