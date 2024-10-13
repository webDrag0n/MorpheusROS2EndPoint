// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from unity_robotics_demo_msgs:msg/H1ControlCommand.idl
// generated code does not contain a copyright notice
#include "unity_robotics_demo_msgs/msg/detail/h1_control_command__rosidl_typesupport_fastrtps_cpp.hpp"
#include "unity_robotics_demo_msgs/msg/detail/h1_control_command__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace unity_robotics_demo_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_unity_robotics_demo_msgs
cdr_serialize(
  const unity_robotics_demo_msgs::msg::H1ControlCommand & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: left_hip_yaw
  cdr << ros_message.left_hip_yaw;
  // Member: left_hip_roll
  cdr << ros_message.left_hip_roll;
  // Member: left_hip_pitch
  cdr << ros_message.left_hip_pitch;
  // Member: left_knee
  cdr << ros_message.left_knee;
  // Member: left_ankle
  cdr << ros_message.left_ankle;
  // Member: right_hip_yaw
  cdr << ros_message.right_hip_yaw;
  // Member: right_hip_roll
  cdr << ros_message.right_hip_roll;
  // Member: right_hip_pitch
  cdr << ros_message.right_hip_pitch;
  // Member: right_knee
  cdr << ros_message.right_knee;
  // Member: right_ankle
  cdr << ros_message.right_ankle;
  // Member: torso
  cdr << ros_message.torso;
  // Member: left_shoulder_pitch
  cdr << ros_message.left_shoulder_pitch;
  // Member: left_shoulder_roll
  cdr << ros_message.left_shoulder_roll;
  // Member: left_shoulder_yaw
  cdr << ros_message.left_shoulder_yaw;
  // Member: left_elbow
  cdr << ros_message.left_elbow;
  // Member: right_shoulder_pitch
  cdr << ros_message.right_shoulder_pitch;
  // Member: right_shoulder_roll
  cdr << ros_message.right_shoulder_roll;
  // Member: right_shoulder_yaw
  cdr << ros_message.right_shoulder_yaw;
  // Member: right_elbow
  cdr << ros_message.right_elbow;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_unity_robotics_demo_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  unity_robotics_demo_msgs::msg::H1ControlCommand & ros_message)
{
  // Member: left_hip_yaw
  cdr >> ros_message.left_hip_yaw;

  // Member: left_hip_roll
  cdr >> ros_message.left_hip_roll;

  // Member: left_hip_pitch
  cdr >> ros_message.left_hip_pitch;

  // Member: left_knee
  cdr >> ros_message.left_knee;

  // Member: left_ankle
  cdr >> ros_message.left_ankle;

  // Member: right_hip_yaw
  cdr >> ros_message.right_hip_yaw;

  // Member: right_hip_roll
  cdr >> ros_message.right_hip_roll;

  // Member: right_hip_pitch
  cdr >> ros_message.right_hip_pitch;

  // Member: right_knee
  cdr >> ros_message.right_knee;

  // Member: right_ankle
  cdr >> ros_message.right_ankle;

  // Member: torso
  cdr >> ros_message.torso;

  // Member: left_shoulder_pitch
  cdr >> ros_message.left_shoulder_pitch;

  // Member: left_shoulder_roll
  cdr >> ros_message.left_shoulder_roll;

  // Member: left_shoulder_yaw
  cdr >> ros_message.left_shoulder_yaw;

  // Member: left_elbow
  cdr >> ros_message.left_elbow;

  // Member: right_shoulder_pitch
  cdr >> ros_message.right_shoulder_pitch;

  // Member: right_shoulder_roll
  cdr >> ros_message.right_shoulder_roll;

  // Member: right_shoulder_yaw
  cdr >> ros_message.right_shoulder_yaw;

  // Member: right_elbow
  cdr >> ros_message.right_elbow;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_unity_robotics_demo_msgs
get_serialized_size(
  const unity_robotics_demo_msgs::msg::H1ControlCommand & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: left_hip_yaw
  {
    size_t item_size = sizeof(ros_message.left_hip_yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_hip_roll
  {
    size_t item_size = sizeof(ros_message.left_hip_roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_hip_pitch
  {
    size_t item_size = sizeof(ros_message.left_hip_pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_knee
  {
    size_t item_size = sizeof(ros_message.left_knee);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_ankle
  {
    size_t item_size = sizeof(ros_message.left_ankle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_hip_yaw
  {
    size_t item_size = sizeof(ros_message.right_hip_yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_hip_roll
  {
    size_t item_size = sizeof(ros_message.right_hip_roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_hip_pitch
  {
    size_t item_size = sizeof(ros_message.right_hip_pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_knee
  {
    size_t item_size = sizeof(ros_message.right_knee);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_ankle
  {
    size_t item_size = sizeof(ros_message.right_ankle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: torso
  {
    size_t item_size = sizeof(ros_message.torso);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_shoulder_pitch
  {
    size_t item_size = sizeof(ros_message.left_shoulder_pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_shoulder_roll
  {
    size_t item_size = sizeof(ros_message.left_shoulder_roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_shoulder_yaw
  {
    size_t item_size = sizeof(ros_message.left_shoulder_yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_elbow
  {
    size_t item_size = sizeof(ros_message.left_elbow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_shoulder_pitch
  {
    size_t item_size = sizeof(ros_message.right_shoulder_pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_shoulder_roll
  {
    size_t item_size = sizeof(ros_message.right_shoulder_roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_shoulder_yaw
  {
    size_t item_size = sizeof(ros_message.right_shoulder_yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_elbow
  {
    size_t item_size = sizeof(ros_message.right_elbow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_unity_robotics_demo_msgs
max_serialized_size_H1ControlCommand(
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


  // Member: left_hip_yaw
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: left_hip_roll
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: left_hip_pitch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: left_knee
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: left_ankle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: right_hip_yaw
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: right_hip_roll
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: right_hip_pitch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: right_knee
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: right_ankle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: torso
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: left_shoulder_pitch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: left_shoulder_roll
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: left_shoulder_yaw
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: left_elbow
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: right_shoulder_pitch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: right_shoulder_roll
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: right_shoulder_yaw
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: right_elbow
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
    using DataType = unity_robotics_demo_msgs::msg::H1ControlCommand;
    is_plain =
      (
      offsetof(DataType, right_elbow) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _H1ControlCommand__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const unity_robotics_demo_msgs::msg::H1ControlCommand *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _H1ControlCommand__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<unity_robotics_demo_msgs::msg::H1ControlCommand *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _H1ControlCommand__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const unity_robotics_demo_msgs::msg::H1ControlCommand *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _H1ControlCommand__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_H1ControlCommand(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _H1ControlCommand__callbacks = {
  "unity_robotics_demo_msgs::msg",
  "H1ControlCommand",
  _H1ControlCommand__cdr_serialize,
  _H1ControlCommand__cdr_deserialize,
  _H1ControlCommand__get_serialized_size,
  _H1ControlCommand__max_serialized_size
};

static rosidl_message_type_support_t _H1ControlCommand__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_H1ControlCommand__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace unity_robotics_demo_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_unity_robotics_demo_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<unity_robotics_demo_msgs::msg::H1ControlCommand>()
{
  return &unity_robotics_demo_msgs::msg::typesupport_fastrtps_cpp::_H1ControlCommand__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, unity_robotics_demo_msgs, msg, H1ControlCommand)() {
  return &unity_robotics_demo_msgs::msg::typesupport_fastrtps_cpp::_H1ControlCommand__handle;
}

#ifdef __cplusplus
}
#endif
