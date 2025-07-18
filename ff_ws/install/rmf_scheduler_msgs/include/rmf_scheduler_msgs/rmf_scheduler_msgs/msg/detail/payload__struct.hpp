// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_scheduler_msgs:msg/Payload.idl
// generated code does not contain a copyright notice

#ifndef RMF_SCHEDULER_MSGS__MSG__DETAIL__PAYLOAD__STRUCT_HPP_
#define RMF_SCHEDULER_MSGS__MSG__DETAIL__PAYLOAD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rmf_scheduler_msgs__msg__Payload __attribute__((deprecated))
#else
# define DEPRECATED__rmf_scheduler_msgs__msg__Payload __declspec(deprecated)
#endif

namespace rmf_scheduler_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Payload_
{
  using Type = Payload_<ContainerAllocator>;

  explicit Payload_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
      this->topic = "";
      this->message_type = "";
    }
  }

  explicit Payload_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : topic(_alloc),
    message_type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
      this->topic = "";
      this->message_type = "";
    }
  }

  // field types and members
  using _type_type =
    uint8_t;
  _type_type type;
  using _topic_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _topic_type topic;
  using _message_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type_type message_type;
  using _data_type =
    rosidl_runtime_cpp::BoundedVector<uint8_t, 2097152, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__topic(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->topic = _arg;
    return *this;
  }
  Type & set__message_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message_type = _arg;
    return *this;
  }
  Type & set__data(
    const rosidl_runtime_cpp::BoundedVector<uint8_t, 2097152, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t PAYLOAD_TYPE_SERIALIZED_MESSAGE =
    1u;

  // pointer types
  using RawPtr =
    rmf_scheduler_msgs::msg::Payload_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_scheduler_msgs::msg::Payload_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_scheduler_msgs::msg::Payload_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_scheduler_msgs::msg::Payload_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_scheduler_msgs::msg::Payload_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_scheduler_msgs::msg::Payload_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_scheduler_msgs::msg::Payload_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_scheduler_msgs::msg::Payload_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_scheduler_msgs::msg::Payload_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_scheduler_msgs::msg::Payload_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_scheduler_msgs__msg__Payload
    std::shared_ptr<rmf_scheduler_msgs::msg::Payload_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_scheduler_msgs__msg__Payload
    std::shared_ptr<rmf_scheduler_msgs::msg::Payload_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Payload_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->topic != other.topic) {
      return false;
    }
    if (this->message_type != other.message_type) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const Payload_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Payload_

// alias to use template instance with default allocator
using Payload =
  rmf_scheduler_msgs::msg::Payload_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Payload_<ContainerAllocator>::PAYLOAD_TYPE_SERIALIZED_MESSAGE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace rmf_scheduler_msgs

#endif  // RMF_SCHEDULER_MSGS__MSG__DETAIL__PAYLOAD__STRUCT_HPP_
