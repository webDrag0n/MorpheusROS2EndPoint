// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from unity_robotics_demo_msgs:msg/H1ControlCommand.idl
// generated code does not contain a copyright notice

#ifndef UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__H1_CONTROL_COMMAND__STRUCT_HPP_
#define UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__H1_CONTROL_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__unity_robotics_demo_msgs__msg__H1ControlCommand __attribute__((deprecated))
#else
# define DEPRECATED__unity_robotics_demo_msgs__msg__H1ControlCommand __declspec(deprecated)
#endif

namespace unity_robotics_demo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct H1ControlCommand_
{
  using Type = H1ControlCommand_<ContainerAllocator>;

  explicit H1ControlCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_hip_yaw = 0.0f;
      this->left_hip_roll = 0.0f;
      this->left_hip_pitch = 0.0f;
      this->left_knee = 0.0f;
      this->left_ankle = 0.0f;
      this->right_hip_yaw = 0.0f;
      this->right_hip_roll = 0.0f;
      this->right_hip_pitch = 0.0f;
      this->right_knee = 0.0f;
      this->right_ankle = 0.0f;
      this->torso = 0.0f;
      this->left_shoulder_pitch = 0.0f;
      this->left_shoulder_roll = 0.0f;
      this->left_shoulder_yaw = 0.0f;
      this->left_elbow = 0.0f;
      this->right_shoulder_pitch = 0.0f;
      this->right_shoulder_roll = 0.0f;
      this->right_shoulder_yaw = 0.0f;
      this->right_elbow = 0.0f;
    }
  }

  explicit H1ControlCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_hip_yaw = 0.0f;
      this->left_hip_roll = 0.0f;
      this->left_hip_pitch = 0.0f;
      this->left_knee = 0.0f;
      this->left_ankle = 0.0f;
      this->right_hip_yaw = 0.0f;
      this->right_hip_roll = 0.0f;
      this->right_hip_pitch = 0.0f;
      this->right_knee = 0.0f;
      this->right_ankle = 0.0f;
      this->torso = 0.0f;
      this->left_shoulder_pitch = 0.0f;
      this->left_shoulder_roll = 0.0f;
      this->left_shoulder_yaw = 0.0f;
      this->left_elbow = 0.0f;
      this->right_shoulder_pitch = 0.0f;
      this->right_shoulder_roll = 0.0f;
      this->right_shoulder_yaw = 0.0f;
      this->right_elbow = 0.0f;
    }
  }

  // field types and members
  using _left_hip_yaw_type =
    float;
  _left_hip_yaw_type left_hip_yaw;
  using _left_hip_roll_type =
    float;
  _left_hip_roll_type left_hip_roll;
  using _left_hip_pitch_type =
    float;
  _left_hip_pitch_type left_hip_pitch;
  using _left_knee_type =
    float;
  _left_knee_type left_knee;
  using _left_ankle_type =
    float;
  _left_ankle_type left_ankle;
  using _right_hip_yaw_type =
    float;
  _right_hip_yaw_type right_hip_yaw;
  using _right_hip_roll_type =
    float;
  _right_hip_roll_type right_hip_roll;
  using _right_hip_pitch_type =
    float;
  _right_hip_pitch_type right_hip_pitch;
  using _right_knee_type =
    float;
  _right_knee_type right_knee;
  using _right_ankle_type =
    float;
  _right_ankle_type right_ankle;
  using _torso_type =
    float;
  _torso_type torso;
  using _left_shoulder_pitch_type =
    float;
  _left_shoulder_pitch_type left_shoulder_pitch;
  using _left_shoulder_roll_type =
    float;
  _left_shoulder_roll_type left_shoulder_roll;
  using _left_shoulder_yaw_type =
    float;
  _left_shoulder_yaw_type left_shoulder_yaw;
  using _left_elbow_type =
    float;
  _left_elbow_type left_elbow;
  using _right_shoulder_pitch_type =
    float;
  _right_shoulder_pitch_type right_shoulder_pitch;
  using _right_shoulder_roll_type =
    float;
  _right_shoulder_roll_type right_shoulder_roll;
  using _right_shoulder_yaw_type =
    float;
  _right_shoulder_yaw_type right_shoulder_yaw;
  using _right_elbow_type =
    float;
  _right_elbow_type right_elbow;

  // setters for named parameter idiom
  Type & set__left_hip_yaw(
    const float & _arg)
  {
    this->left_hip_yaw = _arg;
    return *this;
  }
  Type & set__left_hip_roll(
    const float & _arg)
  {
    this->left_hip_roll = _arg;
    return *this;
  }
  Type & set__left_hip_pitch(
    const float & _arg)
  {
    this->left_hip_pitch = _arg;
    return *this;
  }
  Type & set__left_knee(
    const float & _arg)
  {
    this->left_knee = _arg;
    return *this;
  }
  Type & set__left_ankle(
    const float & _arg)
  {
    this->left_ankle = _arg;
    return *this;
  }
  Type & set__right_hip_yaw(
    const float & _arg)
  {
    this->right_hip_yaw = _arg;
    return *this;
  }
  Type & set__right_hip_roll(
    const float & _arg)
  {
    this->right_hip_roll = _arg;
    return *this;
  }
  Type & set__right_hip_pitch(
    const float & _arg)
  {
    this->right_hip_pitch = _arg;
    return *this;
  }
  Type & set__right_knee(
    const float & _arg)
  {
    this->right_knee = _arg;
    return *this;
  }
  Type & set__right_ankle(
    const float & _arg)
  {
    this->right_ankle = _arg;
    return *this;
  }
  Type & set__torso(
    const float & _arg)
  {
    this->torso = _arg;
    return *this;
  }
  Type & set__left_shoulder_pitch(
    const float & _arg)
  {
    this->left_shoulder_pitch = _arg;
    return *this;
  }
  Type & set__left_shoulder_roll(
    const float & _arg)
  {
    this->left_shoulder_roll = _arg;
    return *this;
  }
  Type & set__left_shoulder_yaw(
    const float & _arg)
  {
    this->left_shoulder_yaw = _arg;
    return *this;
  }
  Type & set__left_elbow(
    const float & _arg)
  {
    this->left_elbow = _arg;
    return *this;
  }
  Type & set__right_shoulder_pitch(
    const float & _arg)
  {
    this->right_shoulder_pitch = _arg;
    return *this;
  }
  Type & set__right_shoulder_roll(
    const float & _arg)
  {
    this->right_shoulder_roll = _arg;
    return *this;
  }
  Type & set__right_shoulder_yaw(
    const float & _arg)
  {
    this->right_shoulder_yaw = _arg;
    return *this;
  }
  Type & set__right_elbow(
    const float & _arg)
  {
    this->right_elbow = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    unity_robotics_demo_msgs::msg::H1ControlCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const unity_robotics_demo_msgs::msg::H1ControlCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<unity_robotics_demo_msgs::msg::H1ControlCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<unity_robotics_demo_msgs::msg::H1ControlCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      unity_robotics_demo_msgs::msg::H1ControlCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<unity_robotics_demo_msgs::msg::H1ControlCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      unity_robotics_demo_msgs::msg::H1ControlCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<unity_robotics_demo_msgs::msg::H1ControlCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<unity_robotics_demo_msgs::msg::H1ControlCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<unity_robotics_demo_msgs::msg::H1ControlCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__unity_robotics_demo_msgs__msg__H1ControlCommand
    std::shared_ptr<unity_robotics_demo_msgs::msg::H1ControlCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__unity_robotics_demo_msgs__msg__H1ControlCommand
    std::shared_ptr<unity_robotics_demo_msgs::msg::H1ControlCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const H1ControlCommand_ & other) const
  {
    if (this->left_hip_yaw != other.left_hip_yaw) {
      return false;
    }
    if (this->left_hip_roll != other.left_hip_roll) {
      return false;
    }
    if (this->left_hip_pitch != other.left_hip_pitch) {
      return false;
    }
    if (this->left_knee != other.left_knee) {
      return false;
    }
    if (this->left_ankle != other.left_ankle) {
      return false;
    }
    if (this->right_hip_yaw != other.right_hip_yaw) {
      return false;
    }
    if (this->right_hip_roll != other.right_hip_roll) {
      return false;
    }
    if (this->right_hip_pitch != other.right_hip_pitch) {
      return false;
    }
    if (this->right_knee != other.right_knee) {
      return false;
    }
    if (this->right_ankle != other.right_ankle) {
      return false;
    }
    if (this->torso != other.torso) {
      return false;
    }
    if (this->left_shoulder_pitch != other.left_shoulder_pitch) {
      return false;
    }
    if (this->left_shoulder_roll != other.left_shoulder_roll) {
      return false;
    }
    if (this->left_shoulder_yaw != other.left_shoulder_yaw) {
      return false;
    }
    if (this->left_elbow != other.left_elbow) {
      return false;
    }
    if (this->right_shoulder_pitch != other.right_shoulder_pitch) {
      return false;
    }
    if (this->right_shoulder_roll != other.right_shoulder_roll) {
      return false;
    }
    if (this->right_shoulder_yaw != other.right_shoulder_yaw) {
      return false;
    }
    if (this->right_elbow != other.right_elbow) {
      return false;
    }
    return true;
  }
  bool operator!=(const H1ControlCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct H1ControlCommand_

// alias to use template instance with default allocator
using H1ControlCommand =
  unity_robotics_demo_msgs::msg::H1ControlCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace unity_robotics_demo_msgs

#endif  // UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__H1_CONTROL_COMMAND__STRUCT_HPP_
