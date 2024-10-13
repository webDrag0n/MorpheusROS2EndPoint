// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from unity_robotics_demo_msgs:msg/H1ControlCommand.idl
// generated code does not contain a copyright notice

#ifndef UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__H1_CONTROL_COMMAND__BUILDER_HPP_
#define UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__H1_CONTROL_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "unity_robotics_demo_msgs/msg/detail/h1_control_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace unity_robotics_demo_msgs
{

namespace msg
{

namespace builder
{

class Init_H1ControlCommand_right_elbow
{
public:
  explicit Init_H1ControlCommand_right_elbow(::unity_robotics_demo_msgs::msg::H1ControlCommand & msg)
  : msg_(msg)
  {}
  ::unity_robotics_demo_msgs::msg::H1ControlCommand right_elbow(::unity_robotics_demo_msgs::msg::H1ControlCommand::_right_elbow_type arg)
  {
    msg_.right_elbow = std::move(arg);
    return std::move(msg_);
  }

private:
  ::unity_robotics_demo_msgs::msg::H1ControlCommand msg_;
};

class Init_H1ControlCommand_right_shoulder_yaw
{
public:
  explicit Init_H1ControlCommand_right_shoulder_yaw(::unity_robotics_demo_msgs::msg::H1ControlCommand & msg)
  : msg_(msg)
  {}
  Init_H1ControlCommand_right_elbow right_shoulder_yaw(::unity_robotics_demo_msgs::msg::H1ControlCommand::_right_shoulder_yaw_type arg)
  {
    msg_.right_shoulder_yaw = std::move(arg);
    return Init_H1ControlCommand_right_elbow(msg_);
  }

private:
  ::unity_robotics_demo_msgs::msg::H1ControlCommand msg_;
};

class Init_H1ControlCommand_right_shoulder_roll
{
public:
  explicit Init_H1ControlCommand_right_shoulder_roll(::unity_robotics_demo_msgs::msg::H1ControlCommand & msg)
  : msg_(msg)
  {}
  Init_H1ControlCommand_right_shoulder_yaw right_shoulder_roll(::unity_robotics_demo_msgs::msg::H1ControlCommand::_right_shoulder_roll_type arg)
  {
    msg_.right_shoulder_roll = std::move(arg);
    return Init_H1ControlCommand_right_shoulder_yaw(msg_);
  }

private:
  ::unity_robotics_demo_msgs::msg::H1ControlCommand msg_;
};

class Init_H1ControlCommand_right_shoulder_pitch
{
public:
  explicit Init_H1ControlCommand_right_shoulder_pitch(::unity_robotics_demo_msgs::msg::H1ControlCommand & msg)
  : msg_(msg)
  {}
  Init_H1ControlCommand_right_shoulder_roll right_shoulder_pitch(::unity_robotics_demo_msgs::msg::H1ControlCommand::_right_shoulder_pitch_type arg)
  {
    msg_.right_shoulder_pitch = std::move(arg);
    return Init_H1ControlCommand_right_shoulder_roll(msg_);
  }

private:
  ::unity_robotics_demo_msgs::msg::H1ControlCommand msg_;
};

class Init_H1ControlCommand_left_elbow
{
public:
  explicit Init_H1ControlCommand_left_elbow(::unity_robotics_demo_msgs::msg::H1ControlCommand & msg)
  : msg_(msg)
  {}
  Init_H1ControlCommand_right_shoulder_pitch left_elbow(::unity_robotics_demo_msgs::msg::H1ControlCommand::_left_elbow_type arg)
  {
    msg_.left_elbow = std::move(arg);
    return Init_H1ControlCommand_right_shoulder_pitch(msg_);
  }

private:
  ::unity_robotics_demo_msgs::msg::H1ControlCommand msg_;
};

class Init_H1ControlCommand_left_shoulder_yaw
{
public:
  explicit Init_H1ControlCommand_left_shoulder_yaw(::unity_robotics_demo_msgs::msg::H1ControlCommand & msg)
  : msg_(msg)
  {}
  Init_H1ControlCommand_left_elbow left_shoulder_yaw(::unity_robotics_demo_msgs::msg::H1ControlCommand::_left_shoulder_yaw_type arg)
  {
    msg_.left_shoulder_yaw = std::move(arg);
    return Init_H1ControlCommand_left_elbow(msg_);
  }

private:
  ::unity_robotics_demo_msgs::msg::H1ControlCommand msg_;
};

class Init_H1ControlCommand_left_shoulder_roll
{
public:
  explicit Init_H1ControlCommand_left_shoulder_roll(::unity_robotics_demo_msgs::msg::H1ControlCommand & msg)
  : msg_(msg)
  {}
  Init_H1ControlCommand_left_shoulder_yaw left_shoulder_roll(::unity_robotics_demo_msgs::msg::H1ControlCommand::_left_shoulder_roll_type arg)
  {
    msg_.left_shoulder_roll = std::move(arg);
    return Init_H1ControlCommand_left_shoulder_yaw(msg_);
  }

private:
  ::unity_robotics_demo_msgs::msg::H1ControlCommand msg_;
};

class Init_H1ControlCommand_left_shoulder_pitch
{
public:
  explicit Init_H1ControlCommand_left_shoulder_pitch(::unity_robotics_demo_msgs::msg::H1ControlCommand & msg)
  : msg_(msg)
  {}
  Init_H1ControlCommand_left_shoulder_roll left_shoulder_pitch(::unity_robotics_demo_msgs::msg::H1ControlCommand::_left_shoulder_pitch_type arg)
  {
    msg_.left_shoulder_pitch = std::move(arg);
    return Init_H1ControlCommand_left_shoulder_roll(msg_);
  }

private:
  ::unity_robotics_demo_msgs::msg::H1ControlCommand msg_;
};

class Init_H1ControlCommand_torso
{
public:
  explicit Init_H1ControlCommand_torso(::unity_robotics_demo_msgs::msg::H1ControlCommand & msg)
  : msg_(msg)
  {}
  Init_H1ControlCommand_left_shoulder_pitch torso(::unity_robotics_demo_msgs::msg::H1ControlCommand::_torso_type arg)
  {
    msg_.torso = std::move(arg);
    return Init_H1ControlCommand_left_shoulder_pitch(msg_);
  }

private:
  ::unity_robotics_demo_msgs::msg::H1ControlCommand msg_;
};

class Init_H1ControlCommand_right_ankle
{
public:
  explicit Init_H1ControlCommand_right_ankle(::unity_robotics_demo_msgs::msg::H1ControlCommand & msg)
  : msg_(msg)
  {}
  Init_H1ControlCommand_torso right_ankle(::unity_robotics_demo_msgs::msg::H1ControlCommand::_right_ankle_type arg)
  {
    msg_.right_ankle = std::move(arg);
    return Init_H1ControlCommand_torso(msg_);
  }

private:
  ::unity_robotics_demo_msgs::msg::H1ControlCommand msg_;
};

class Init_H1ControlCommand_right_knee
{
public:
  explicit Init_H1ControlCommand_right_knee(::unity_robotics_demo_msgs::msg::H1ControlCommand & msg)
  : msg_(msg)
  {}
  Init_H1ControlCommand_right_ankle right_knee(::unity_robotics_demo_msgs::msg::H1ControlCommand::_right_knee_type arg)
  {
    msg_.right_knee = std::move(arg);
    return Init_H1ControlCommand_right_ankle(msg_);
  }

private:
  ::unity_robotics_demo_msgs::msg::H1ControlCommand msg_;
};

class Init_H1ControlCommand_right_hip_pitch
{
public:
  explicit Init_H1ControlCommand_right_hip_pitch(::unity_robotics_demo_msgs::msg::H1ControlCommand & msg)
  : msg_(msg)
  {}
  Init_H1ControlCommand_right_knee right_hip_pitch(::unity_robotics_demo_msgs::msg::H1ControlCommand::_right_hip_pitch_type arg)
  {
    msg_.right_hip_pitch = std::move(arg);
    return Init_H1ControlCommand_right_knee(msg_);
  }

private:
  ::unity_robotics_demo_msgs::msg::H1ControlCommand msg_;
};

class Init_H1ControlCommand_right_hip_roll
{
public:
  explicit Init_H1ControlCommand_right_hip_roll(::unity_robotics_demo_msgs::msg::H1ControlCommand & msg)
  : msg_(msg)
  {}
  Init_H1ControlCommand_right_hip_pitch right_hip_roll(::unity_robotics_demo_msgs::msg::H1ControlCommand::_right_hip_roll_type arg)
  {
    msg_.right_hip_roll = std::move(arg);
    return Init_H1ControlCommand_right_hip_pitch(msg_);
  }

private:
  ::unity_robotics_demo_msgs::msg::H1ControlCommand msg_;
};

class Init_H1ControlCommand_right_hip_yaw
{
public:
  explicit Init_H1ControlCommand_right_hip_yaw(::unity_robotics_demo_msgs::msg::H1ControlCommand & msg)
  : msg_(msg)
  {}
  Init_H1ControlCommand_right_hip_roll right_hip_yaw(::unity_robotics_demo_msgs::msg::H1ControlCommand::_right_hip_yaw_type arg)
  {
    msg_.right_hip_yaw = std::move(arg);
    return Init_H1ControlCommand_right_hip_roll(msg_);
  }

private:
  ::unity_robotics_demo_msgs::msg::H1ControlCommand msg_;
};

class Init_H1ControlCommand_left_ankle
{
public:
  explicit Init_H1ControlCommand_left_ankle(::unity_robotics_demo_msgs::msg::H1ControlCommand & msg)
  : msg_(msg)
  {}
  Init_H1ControlCommand_right_hip_yaw left_ankle(::unity_robotics_demo_msgs::msg::H1ControlCommand::_left_ankle_type arg)
  {
    msg_.left_ankle = std::move(arg);
    return Init_H1ControlCommand_right_hip_yaw(msg_);
  }

private:
  ::unity_robotics_demo_msgs::msg::H1ControlCommand msg_;
};

class Init_H1ControlCommand_left_knee
{
public:
  explicit Init_H1ControlCommand_left_knee(::unity_robotics_demo_msgs::msg::H1ControlCommand & msg)
  : msg_(msg)
  {}
  Init_H1ControlCommand_left_ankle left_knee(::unity_robotics_demo_msgs::msg::H1ControlCommand::_left_knee_type arg)
  {
    msg_.left_knee = std::move(arg);
    return Init_H1ControlCommand_left_ankle(msg_);
  }

private:
  ::unity_robotics_demo_msgs::msg::H1ControlCommand msg_;
};

class Init_H1ControlCommand_left_hip_pitch
{
public:
  explicit Init_H1ControlCommand_left_hip_pitch(::unity_robotics_demo_msgs::msg::H1ControlCommand & msg)
  : msg_(msg)
  {}
  Init_H1ControlCommand_left_knee left_hip_pitch(::unity_robotics_demo_msgs::msg::H1ControlCommand::_left_hip_pitch_type arg)
  {
    msg_.left_hip_pitch = std::move(arg);
    return Init_H1ControlCommand_left_knee(msg_);
  }

private:
  ::unity_robotics_demo_msgs::msg::H1ControlCommand msg_;
};

class Init_H1ControlCommand_left_hip_roll
{
public:
  explicit Init_H1ControlCommand_left_hip_roll(::unity_robotics_demo_msgs::msg::H1ControlCommand & msg)
  : msg_(msg)
  {}
  Init_H1ControlCommand_left_hip_pitch left_hip_roll(::unity_robotics_demo_msgs::msg::H1ControlCommand::_left_hip_roll_type arg)
  {
    msg_.left_hip_roll = std::move(arg);
    return Init_H1ControlCommand_left_hip_pitch(msg_);
  }

private:
  ::unity_robotics_demo_msgs::msg::H1ControlCommand msg_;
};

class Init_H1ControlCommand_left_hip_yaw
{
public:
  Init_H1ControlCommand_left_hip_yaw()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_H1ControlCommand_left_hip_roll left_hip_yaw(::unity_robotics_demo_msgs::msg::H1ControlCommand::_left_hip_yaw_type arg)
  {
    msg_.left_hip_yaw = std::move(arg);
    return Init_H1ControlCommand_left_hip_roll(msg_);
  }

private:
  ::unity_robotics_demo_msgs::msg::H1ControlCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::unity_robotics_demo_msgs::msg::H1ControlCommand>()
{
  return unity_robotics_demo_msgs::msg::builder::Init_H1ControlCommand_left_hip_yaw();
}

}  // namespace unity_robotics_demo_msgs

#endif  // UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__H1_CONTROL_COMMAND__BUILDER_HPP_
