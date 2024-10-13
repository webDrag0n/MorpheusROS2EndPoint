// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from unity_robotics_demo_msgs:msg/H1ControlCommand.idl
// generated code does not contain a copyright notice

#ifndef UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__H1_CONTROL_COMMAND__STRUCT_H_
#define UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__H1_CONTROL_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/H1ControlCommand in the package unity_robotics_demo_msgs.
typedef struct unity_robotics_demo_msgs__msg__H1ControlCommand
{
  float left_hip_yaw;
  float left_hip_roll;
  float left_hip_pitch;
  float left_knee;
  float left_ankle;
  float right_hip_yaw;
  float right_hip_roll;
  float right_hip_pitch;
  float right_knee;
  float right_ankle;
  float torso;
  float left_shoulder_pitch;
  float left_shoulder_roll;
  float left_shoulder_yaw;
  float left_elbow;
  float right_shoulder_pitch;
  float right_shoulder_roll;
  float right_shoulder_yaw;
  float right_elbow;
} unity_robotics_demo_msgs__msg__H1ControlCommand;

// Struct for a sequence of unity_robotics_demo_msgs__msg__H1ControlCommand.
typedef struct unity_robotics_demo_msgs__msg__H1ControlCommand__Sequence
{
  unity_robotics_demo_msgs__msg__H1ControlCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} unity_robotics_demo_msgs__msg__H1ControlCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__H1_CONTROL_COMMAND__STRUCT_H_
