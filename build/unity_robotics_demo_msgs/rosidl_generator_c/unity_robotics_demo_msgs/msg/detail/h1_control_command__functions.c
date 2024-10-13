// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from unity_robotics_demo_msgs:msg/H1ControlCommand.idl
// generated code does not contain a copyright notice
#include "unity_robotics_demo_msgs/msg/detail/h1_control_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
unity_robotics_demo_msgs__msg__H1ControlCommand__init(unity_robotics_demo_msgs__msg__H1ControlCommand * msg)
{
  if (!msg) {
    return false;
  }
  // left_hip_yaw
  // left_hip_roll
  // left_hip_pitch
  // left_knee
  // left_ankle
  // right_hip_yaw
  // right_hip_roll
  // right_hip_pitch
  // right_knee
  // right_ankle
  // torso
  // left_shoulder_pitch
  // left_shoulder_roll
  // left_shoulder_yaw
  // left_elbow
  // right_shoulder_pitch
  // right_shoulder_roll
  // right_shoulder_yaw
  // right_elbow
  return true;
}

void
unity_robotics_demo_msgs__msg__H1ControlCommand__fini(unity_robotics_demo_msgs__msg__H1ControlCommand * msg)
{
  if (!msg) {
    return;
  }
  // left_hip_yaw
  // left_hip_roll
  // left_hip_pitch
  // left_knee
  // left_ankle
  // right_hip_yaw
  // right_hip_roll
  // right_hip_pitch
  // right_knee
  // right_ankle
  // torso
  // left_shoulder_pitch
  // left_shoulder_roll
  // left_shoulder_yaw
  // left_elbow
  // right_shoulder_pitch
  // right_shoulder_roll
  // right_shoulder_yaw
  // right_elbow
}

bool
unity_robotics_demo_msgs__msg__H1ControlCommand__are_equal(const unity_robotics_demo_msgs__msg__H1ControlCommand * lhs, const unity_robotics_demo_msgs__msg__H1ControlCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // left_hip_yaw
  if (lhs->left_hip_yaw != rhs->left_hip_yaw) {
    return false;
  }
  // left_hip_roll
  if (lhs->left_hip_roll != rhs->left_hip_roll) {
    return false;
  }
  // left_hip_pitch
  if (lhs->left_hip_pitch != rhs->left_hip_pitch) {
    return false;
  }
  // left_knee
  if (lhs->left_knee != rhs->left_knee) {
    return false;
  }
  // left_ankle
  if (lhs->left_ankle != rhs->left_ankle) {
    return false;
  }
  // right_hip_yaw
  if (lhs->right_hip_yaw != rhs->right_hip_yaw) {
    return false;
  }
  // right_hip_roll
  if (lhs->right_hip_roll != rhs->right_hip_roll) {
    return false;
  }
  // right_hip_pitch
  if (lhs->right_hip_pitch != rhs->right_hip_pitch) {
    return false;
  }
  // right_knee
  if (lhs->right_knee != rhs->right_knee) {
    return false;
  }
  // right_ankle
  if (lhs->right_ankle != rhs->right_ankle) {
    return false;
  }
  // torso
  if (lhs->torso != rhs->torso) {
    return false;
  }
  // left_shoulder_pitch
  if (lhs->left_shoulder_pitch != rhs->left_shoulder_pitch) {
    return false;
  }
  // left_shoulder_roll
  if (lhs->left_shoulder_roll != rhs->left_shoulder_roll) {
    return false;
  }
  // left_shoulder_yaw
  if (lhs->left_shoulder_yaw != rhs->left_shoulder_yaw) {
    return false;
  }
  // left_elbow
  if (lhs->left_elbow != rhs->left_elbow) {
    return false;
  }
  // right_shoulder_pitch
  if (lhs->right_shoulder_pitch != rhs->right_shoulder_pitch) {
    return false;
  }
  // right_shoulder_roll
  if (lhs->right_shoulder_roll != rhs->right_shoulder_roll) {
    return false;
  }
  // right_shoulder_yaw
  if (lhs->right_shoulder_yaw != rhs->right_shoulder_yaw) {
    return false;
  }
  // right_elbow
  if (lhs->right_elbow != rhs->right_elbow) {
    return false;
  }
  return true;
}

bool
unity_robotics_demo_msgs__msg__H1ControlCommand__copy(
  const unity_robotics_demo_msgs__msg__H1ControlCommand * input,
  unity_robotics_demo_msgs__msg__H1ControlCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // left_hip_yaw
  output->left_hip_yaw = input->left_hip_yaw;
  // left_hip_roll
  output->left_hip_roll = input->left_hip_roll;
  // left_hip_pitch
  output->left_hip_pitch = input->left_hip_pitch;
  // left_knee
  output->left_knee = input->left_knee;
  // left_ankle
  output->left_ankle = input->left_ankle;
  // right_hip_yaw
  output->right_hip_yaw = input->right_hip_yaw;
  // right_hip_roll
  output->right_hip_roll = input->right_hip_roll;
  // right_hip_pitch
  output->right_hip_pitch = input->right_hip_pitch;
  // right_knee
  output->right_knee = input->right_knee;
  // right_ankle
  output->right_ankle = input->right_ankle;
  // torso
  output->torso = input->torso;
  // left_shoulder_pitch
  output->left_shoulder_pitch = input->left_shoulder_pitch;
  // left_shoulder_roll
  output->left_shoulder_roll = input->left_shoulder_roll;
  // left_shoulder_yaw
  output->left_shoulder_yaw = input->left_shoulder_yaw;
  // left_elbow
  output->left_elbow = input->left_elbow;
  // right_shoulder_pitch
  output->right_shoulder_pitch = input->right_shoulder_pitch;
  // right_shoulder_roll
  output->right_shoulder_roll = input->right_shoulder_roll;
  // right_shoulder_yaw
  output->right_shoulder_yaw = input->right_shoulder_yaw;
  // right_elbow
  output->right_elbow = input->right_elbow;
  return true;
}

unity_robotics_demo_msgs__msg__H1ControlCommand *
unity_robotics_demo_msgs__msg__H1ControlCommand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  unity_robotics_demo_msgs__msg__H1ControlCommand * msg = (unity_robotics_demo_msgs__msg__H1ControlCommand *)allocator.allocate(sizeof(unity_robotics_demo_msgs__msg__H1ControlCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(unity_robotics_demo_msgs__msg__H1ControlCommand));
  bool success = unity_robotics_demo_msgs__msg__H1ControlCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
unity_robotics_demo_msgs__msg__H1ControlCommand__destroy(unity_robotics_demo_msgs__msg__H1ControlCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    unity_robotics_demo_msgs__msg__H1ControlCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
unity_robotics_demo_msgs__msg__H1ControlCommand__Sequence__init(unity_robotics_demo_msgs__msg__H1ControlCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  unity_robotics_demo_msgs__msg__H1ControlCommand * data = NULL;

  if (size) {
    data = (unity_robotics_demo_msgs__msg__H1ControlCommand *)allocator.zero_allocate(size, sizeof(unity_robotics_demo_msgs__msg__H1ControlCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = unity_robotics_demo_msgs__msg__H1ControlCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        unity_robotics_demo_msgs__msg__H1ControlCommand__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
unity_robotics_demo_msgs__msg__H1ControlCommand__Sequence__fini(unity_robotics_demo_msgs__msg__H1ControlCommand__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      unity_robotics_demo_msgs__msg__H1ControlCommand__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

unity_robotics_demo_msgs__msg__H1ControlCommand__Sequence *
unity_robotics_demo_msgs__msg__H1ControlCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  unity_robotics_demo_msgs__msg__H1ControlCommand__Sequence * array = (unity_robotics_demo_msgs__msg__H1ControlCommand__Sequence *)allocator.allocate(sizeof(unity_robotics_demo_msgs__msg__H1ControlCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = unity_robotics_demo_msgs__msg__H1ControlCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
unity_robotics_demo_msgs__msg__H1ControlCommand__Sequence__destroy(unity_robotics_demo_msgs__msg__H1ControlCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    unity_robotics_demo_msgs__msg__H1ControlCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
unity_robotics_demo_msgs__msg__H1ControlCommand__Sequence__are_equal(const unity_robotics_demo_msgs__msg__H1ControlCommand__Sequence * lhs, const unity_robotics_demo_msgs__msg__H1ControlCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!unity_robotics_demo_msgs__msg__H1ControlCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
unity_robotics_demo_msgs__msg__H1ControlCommand__Sequence__copy(
  const unity_robotics_demo_msgs__msg__H1ControlCommand__Sequence * input,
  unity_robotics_demo_msgs__msg__H1ControlCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(unity_robotics_demo_msgs__msg__H1ControlCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    unity_robotics_demo_msgs__msg__H1ControlCommand * data =
      (unity_robotics_demo_msgs__msg__H1ControlCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!unity_robotics_demo_msgs__msg__H1ControlCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          unity_robotics_demo_msgs__msg__H1ControlCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!unity_robotics_demo_msgs__msg__H1ControlCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
