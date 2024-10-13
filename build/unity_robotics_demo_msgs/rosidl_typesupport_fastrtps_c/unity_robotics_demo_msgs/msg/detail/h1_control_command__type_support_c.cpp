// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from unity_robotics_demo_msgs:msg/H1ControlCommand.idl
// generated code does not contain a copyright notice
#include "unity_robotics_demo_msgs/msg/detail/h1_control_command__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "unity_robotics_demo_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "unity_robotics_demo_msgs/msg/detail/h1_control_command__struct.h"
#include "unity_robotics_demo_msgs/msg/detail/h1_control_command__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _H1ControlCommand__ros_msg_type = unity_robotics_demo_msgs__msg__H1ControlCommand;

static bool _H1ControlCommand__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _H1ControlCommand__ros_msg_type * ros_message = static_cast<const _H1ControlCommand__ros_msg_type *>(untyped_ros_message);
  // Field name: left_hip_yaw
  {
    cdr << ros_message->left_hip_yaw;
  }

  // Field name: left_hip_roll
  {
    cdr << ros_message->left_hip_roll;
  }

  // Field name: left_hip_pitch
  {
    cdr << ros_message->left_hip_pitch;
  }

  // Field name: left_knee
  {
    cdr << ros_message->left_knee;
  }

  // Field name: left_ankle
  {
    cdr << ros_message->left_ankle;
  }

  // Field name: right_hip_yaw
  {
    cdr << ros_message->right_hip_yaw;
  }

  // Field name: right_hip_roll
  {
    cdr << ros_message->right_hip_roll;
  }

  // Field name: right_hip_pitch
  {
    cdr << ros_message->right_hip_pitch;
  }

  // Field name: right_knee
  {
    cdr << ros_message->right_knee;
  }

  // Field name: right_ankle
  {
    cdr << ros_message->right_ankle;
  }

  // Field name: torso
  {
    cdr << ros_message->torso;
  }

  // Field name: left_shoulder_pitch
  {
    cdr << ros_message->left_shoulder_pitch;
  }

  // Field name: left_shoulder_roll
  {
    cdr << ros_message->left_shoulder_roll;
  }

  // Field name: left_shoulder_yaw
  {
    cdr << ros_message->left_shoulder_yaw;
  }

  // Field name: left_elbow
  {
    cdr << ros_message->left_elbow;
  }

  // Field name: right_shoulder_pitch
  {
    cdr << ros_message->right_shoulder_pitch;
  }

  // Field name: right_shoulder_roll
  {
    cdr << ros_message->right_shoulder_roll;
  }

  // Field name: right_shoulder_yaw
  {
    cdr << ros_message->right_shoulder_yaw;
  }

  // Field name: right_elbow
  {
    cdr << ros_message->right_elbow;
  }

  return true;
}

static bool _H1ControlCommand__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _H1ControlCommand__ros_msg_type * ros_message = static_cast<_H1ControlCommand__ros_msg_type *>(untyped_ros_message);
  // Field name: left_hip_yaw
  {
    cdr >> ros_message->left_hip_yaw;
  }

  // Field name: left_hip_roll
  {
    cdr >> ros_message->left_hip_roll;
  }

  // Field name: left_hip_pitch
  {
    cdr >> ros_message->left_hip_pitch;
  }

  // Field name: left_knee
  {
    cdr >> ros_message->left_knee;
  }

  // Field name: left_ankle
  {
    cdr >> ros_message->left_ankle;
  }

  // Field name: right_hip_yaw
  {
    cdr >> ros_message->right_hip_yaw;
  }

  // Field name: right_hip_roll
  {
    cdr >> ros_message->right_hip_roll;
  }

  // Field name: right_hip_pitch
  {
    cdr >> ros_message->right_hip_pitch;
  }

  // Field name: right_knee
  {
    cdr >> ros_message->right_knee;
  }

  // Field name: right_ankle
  {
    cdr >> ros_message->right_ankle;
  }

  // Field name: torso
  {
    cdr >> ros_message->torso;
  }

  // Field name: left_shoulder_pitch
  {
    cdr >> ros_message->left_shoulder_pitch;
  }

  // Field name: left_shoulder_roll
  {
    cdr >> ros_message->left_shoulder_roll;
  }

  // Field name: left_shoulder_yaw
  {
    cdr >> ros_message->left_shoulder_yaw;
  }

  // Field name: left_elbow
  {
    cdr >> ros_message->left_elbow;
  }

  // Field name: right_shoulder_pitch
  {
    cdr >> ros_message->right_shoulder_pitch;
  }

  // Field name: right_shoulder_roll
  {
    cdr >> ros_message->right_shoulder_roll;
  }

  // Field name: right_shoulder_yaw
  {
    cdr >> ros_message->right_shoulder_yaw;
  }

  // Field name: right_elbow
  {
    cdr >> ros_message->right_elbow;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unity_robotics_demo_msgs
size_t get_serialized_size_unity_robotics_demo_msgs__msg__H1ControlCommand(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _H1ControlCommand__ros_msg_type * ros_message = static_cast<const _H1ControlCommand__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name left_hip_yaw
  {
    size_t item_size = sizeof(ros_message->left_hip_yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_hip_roll
  {
    size_t item_size = sizeof(ros_message->left_hip_roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_hip_pitch
  {
    size_t item_size = sizeof(ros_message->left_hip_pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_knee
  {
    size_t item_size = sizeof(ros_message->left_knee);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_ankle
  {
    size_t item_size = sizeof(ros_message->left_ankle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_hip_yaw
  {
    size_t item_size = sizeof(ros_message->right_hip_yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_hip_roll
  {
    size_t item_size = sizeof(ros_message->right_hip_roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_hip_pitch
  {
    size_t item_size = sizeof(ros_message->right_hip_pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_knee
  {
    size_t item_size = sizeof(ros_message->right_knee);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_ankle
  {
    size_t item_size = sizeof(ros_message->right_ankle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name torso
  {
    size_t item_size = sizeof(ros_message->torso);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_shoulder_pitch
  {
    size_t item_size = sizeof(ros_message->left_shoulder_pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_shoulder_roll
  {
    size_t item_size = sizeof(ros_message->left_shoulder_roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_shoulder_yaw
  {
    size_t item_size = sizeof(ros_message->left_shoulder_yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_elbow
  {
    size_t item_size = sizeof(ros_message->left_elbow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_shoulder_pitch
  {
    size_t item_size = sizeof(ros_message->right_shoulder_pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_shoulder_roll
  {
    size_t item_size = sizeof(ros_message->right_shoulder_roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_shoulder_yaw
  {
    size_t item_size = sizeof(ros_message->right_shoulder_yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_elbow
  {
    size_t item_size = sizeof(ros_message->right_elbow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _H1ControlCommand__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_unity_robotics_demo_msgs__msg__H1ControlCommand(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unity_robotics_demo_msgs
size_t max_serialized_size_unity_robotics_demo_msgs__msg__H1ControlCommand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: left_hip_yaw
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: left_hip_roll
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: left_hip_pitch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: left_knee
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: left_ankle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: right_hip_yaw
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: right_hip_roll
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: right_hip_pitch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: right_knee
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: right_ankle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: torso
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: left_shoulder_pitch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: left_shoulder_roll
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: left_shoulder_yaw
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: left_elbow
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: right_shoulder_pitch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: right_shoulder_roll
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: right_shoulder_yaw
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: right_elbow
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = unity_robotics_demo_msgs__msg__H1ControlCommand;
    is_plain =
      (
      offsetof(DataType, right_elbow) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _H1ControlCommand__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_unity_robotics_demo_msgs__msg__H1ControlCommand(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_H1ControlCommand = {
  "unity_robotics_demo_msgs::msg",
  "H1ControlCommand",
  _H1ControlCommand__cdr_serialize,
  _H1ControlCommand__cdr_deserialize,
  _H1ControlCommand__get_serialized_size,
  _H1ControlCommand__max_serialized_size
};

static rosidl_message_type_support_t _H1ControlCommand__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_H1ControlCommand,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unity_robotics_demo_msgs, msg, H1ControlCommand)() {
  return &_H1ControlCommand__type_support;
}

#if defined(__cplusplus)
}
#endif
