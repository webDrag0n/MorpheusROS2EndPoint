// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from unity_robotics_demo_msgs:msg/H1ControlCommand.idl
// generated code does not contain a copyright notice

#ifndef UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__H1_CONTROL_COMMAND__TRAITS_HPP_
#define UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__H1_CONTROL_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "unity_robotics_demo_msgs/msg/detail/h1_control_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace unity_robotics_demo_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const H1ControlCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: left_hip_yaw
  {
    out << "left_hip_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.left_hip_yaw, out);
    out << ", ";
  }

  // member: left_hip_roll
  {
    out << "left_hip_roll: ";
    rosidl_generator_traits::value_to_yaml(msg.left_hip_roll, out);
    out << ", ";
  }

  // member: left_hip_pitch
  {
    out << "left_hip_pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.left_hip_pitch, out);
    out << ", ";
  }

  // member: left_knee
  {
    out << "left_knee: ";
    rosidl_generator_traits::value_to_yaml(msg.left_knee, out);
    out << ", ";
  }

  // member: left_ankle
  {
    out << "left_ankle: ";
    rosidl_generator_traits::value_to_yaml(msg.left_ankle, out);
    out << ", ";
  }

  // member: right_hip_yaw
  {
    out << "right_hip_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.right_hip_yaw, out);
    out << ", ";
  }

  // member: right_hip_roll
  {
    out << "right_hip_roll: ";
    rosidl_generator_traits::value_to_yaml(msg.right_hip_roll, out);
    out << ", ";
  }

  // member: right_hip_pitch
  {
    out << "right_hip_pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.right_hip_pitch, out);
    out << ", ";
  }

  // member: right_knee
  {
    out << "right_knee: ";
    rosidl_generator_traits::value_to_yaml(msg.right_knee, out);
    out << ", ";
  }

  // member: right_ankle
  {
    out << "right_ankle: ";
    rosidl_generator_traits::value_to_yaml(msg.right_ankle, out);
    out << ", ";
  }

  // member: torso
  {
    out << "torso: ";
    rosidl_generator_traits::value_to_yaml(msg.torso, out);
    out << ", ";
  }

  // member: left_shoulder_pitch
  {
    out << "left_shoulder_pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.left_shoulder_pitch, out);
    out << ", ";
  }

  // member: left_shoulder_roll
  {
    out << "left_shoulder_roll: ";
    rosidl_generator_traits::value_to_yaml(msg.left_shoulder_roll, out);
    out << ", ";
  }

  // member: left_shoulder_yaw
  {
    out << "left_shoulder_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.left_shoulder_yaw, out);
    out << ", ";
  }

  // member: left_elbow
  {
    out << "left_elbow: ";
    rosidl_generator_traits::value_to_yaml(msg.left_elbow, out);
    out << ", ";
  }

  // member: right_shoulder_pitch
  {
    out << "right_shoulder_pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.right_shoulder_pitch, out);
    out << ", ";
  }

  // member: right_shoulder_roll
  {
    out << "right_shoulder_roll: ";
    rosidl_generator_traits::value_to_yaml(msg.right_shoulder_roll, out);
    out << ", ";
  }

  // member: right_shoulder_yaw
  {
    out << "right_shoulder_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.right_shoulder_yaw, out);
    out << ", ";
  }

  // member: right_elbow
  {
    out << "right_elbow: ";
    rosidl_generator_traits::value_to_yaml(msg.right_elbow, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const H1ControlCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: left_hip_yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_hip_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.left_hip_yaw, out);
    out << "\n";
  }

  // member: left_hip_roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_hip_roll: ";
    rosidl_generator_traits::value_to_yaml(msg.left_hip_roll, out);
    out << "\n";
  }

  // member: left_hip_pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_hip_pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.left_hip_pitch, out);
    out << "\n";
  }

  // member: left_knee
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_knee: ";
    rosidl_generator_traits::value_to_yaml(msg.left_knee, out);
    out << "\n";
  }

  // member: left_ankle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_ankle: ";
    rosidl_generator_traits::value_to_yaml(msg.left_ankle, out);
    out << "\n";
  }

  // member: right_hip_yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_hip_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.right_hip_yaw, out);
    out << "\n";
  }

  // member: right_hip_roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_hip_roll: ";
    rosidl_generator_traits::value_to_yaml(msg.right_hip_roll, out);
    out << "\n";
  }

  // member: right_hip_pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_hip_pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.right_hip_pitch, out);
    out << "\n";
  }

  // member: right_knee
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_knee: ";
    rosidl_generator_traits::value_to_yaml(msg.right_knee, out);
    out << "\n";
  }

  // member: right_ankle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_ankle: ";
    rosidl_generator_traits::value_to_yaml(msg.right_ankle, out);
    out << "\n";
  }

  // member: torso
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "torso: ";
    rosidl_generator_traits::value_to_yaml(msg.torso, out);
    out << "\n";
  }

  // member: left_shoulder_pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_shoulder_pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.left_shoulder_pitch, out);
    out << "\n";
  }

  // member: left_shoulder_roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_shoulder_roll: ";
    rosidl_generator_traits::value_to_yaml(msg.left_shoulder_roll, out);
    out << "\n";
  }

  // member: left_shoulder_yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_shoulder_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.left_shoulder_yaw, out);
    out << "\n";
  }

  // member: left_elbow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_elbow: ";
    rosidl_generator_traits::value_to_yaml(msg.left_elbow, out);
    out << "\n";
  }

  // member: right_shoulder_pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_shoulder_pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.right_shoulder_pitch, out);
    out << "\n";
  }

  // member: right_shoulder_roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_shoulder_roll: ";
    rosidl_generator_traits::value_to_yaml(msg.right_shoulder_roll, out);
    out << "\n";
  }

  // member: right_shoulder_yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_shoulder_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.right_shoulder_yaw, out);
    out << "\n";
  }

  // member: right_elbow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_elbow: ";
    rosidl_generator_traits::value_to_yaml(msg.right_elbow, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const H1ControlCommand & msg, bool use_flow_style = false)
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

}  // namespace unity_robotics_demo_msgs

namespace rosidl_generator_traits
{

[[deprecated("use unity_robotics_demo_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const unity_robotics_demo_msgs::msg::H1ControlCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  unity_robotics_demo_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use unity_robotics_demo_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const unity_robotics_demo_msgs::msg::H1ControlCommand & msg)
{
  return unity_robotics_demo_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<unity_robotics_demo_msgs::msg::H1ControlCommand>()
{
  return "unity_robotics_demo_msgs::msg::H1ControlCommand";
}

template<>
inline const char * name<unity_robotics_demo_msgs::msg::H1ControlCommand>()
{
  return "unity_robotics_demo_msgs/msg/H1ControlCommand";
}

template<>
struct has_fixed_size<unity_robotics_demo_msgs::msg::H1ControlCommand>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<unity_robotics_demo_msgs::msg::H1ControlCommand>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<unity_robotics_demo_msgs::msg::H1ControlCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__H1_CONTROL_COMMAND__TRAITS_HPP_
