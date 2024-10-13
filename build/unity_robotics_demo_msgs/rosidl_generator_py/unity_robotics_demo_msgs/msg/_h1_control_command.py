# generated from rosidl_generator_py/resource/_idl.py.em
# with input from unity_robotics_demo_msgs:msg/H1ControlCommand.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_H1ControlCommand(type):
    """Metaclass of message 'H1ControlCommand'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('unity_robotics_demo_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'unity_robotics_demo_msgs.msg.H1ControlCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__h1_control_command
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__h1_control_command
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__h1_control_command
            cls._TYPE_SUPPORT = module.type_support_msg__msg__h1_control_command
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__h1_control_command

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class H1ControlCommand(metaclass=Metaclass_H1ControlCommand):
    """Message class 'H1ControlCommand'."""

    __slots__ = [
        '_left_hip_yaw',
        '_left_hip_roll',
        '_left_hip_pitch',
        '_left_knee',
        '_left_ankle',
        '_right_hip_yaw',
        '_right_hip_roll',
        '_right_hip_pitch',
        '_right_knee',
        '_right_ankle',
        '_torso',
        '_left_shoulder_pitch',
        '_left_shoulder_roll',
        '_left_shoulder_yaw',
        '_left_elbow',
        '_right_shoulder_pitch',
        '_right_shoulder_roll',
        '_right_shoulder_yaw',
        '_right_elbow',
    ]

    _fields_and_field_types = {
        'left_hip_yaw': 'float',
        'left_hip_roll': 'float',
        'left_hip_pitch': 'float',
        'left_knee': 'float',
        'left_ankle': 'float',
        'right_hip_yaw': 'float',
        'right_hip_roll': 'float',
        'right_hip_pitch': 'float',
        'right_knee': 'float',
        'right_ankle': 'float',
        'torso': 'float',
        'left_shoulder_pitch': 'float',
        'left_shoulder_roll': 'float',
        'left_shoulder_yaw': 'float',
        'left_elbow': 'float',
        'right_shoulder_pitch': 'float',
        'right_shoulder_roll': 'float',
        'right_shoulder_yaw': 'float',
        'right_elbow': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.left_hip_yaw = kwargs.get('left_hip_yaw', float())
        self.left_hip_roll = kwargs.get('left_hip_roll', float())
        self.left_hip_pitch = kwargs.get('left_hip_pitch', float())
        self.left_knee = kwargs.get('left_knee', float())
        self.left_ankle = kwargs.get('left_ankle', float())
        self.right_hip_yaw = kwargs.get('right_hip_yaw', float())
        self.right_hip_roll = kwargs.get('right_hip_roll', float())
        self.right_hip_pitch = kwargs.get('right_hip_pitch', float())
        self.right_knee = kwargs.get('right_knee', float())
        self.right_ankle = kwargs.get('right_ankle', float())
        self.torso = kwargs.get('torso', float())
        self.left_shoulder_pitch = kwargs.get('left_shoulder_pitch', float())
        self.left_shoulder_roll = kwargs.get('left_shoulder_roll', float())
        self.left_shoulder_yaw = kwargs.get('left_shoulder_yaw', float())
        self.left_elbow = kwargs.get('left_elbow', float())
        self.right_shoulder_pitch = kwargs.get('right_shoulder_pitch', float())
        self.right_shoulder_roll = kwargs.get('right_shoulder_roll', float())
        self.right_shoulder_yaw = kwargs.get('right_shoulder_yaw', float())
        self.right_elbow = kwargs.get('right_elbow', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.left_hip_yaw != other.left_hip_yaw:
            return False
        if self.left_hip_roll != other.left_hip_roll:
            return False
        if self.left_hip_pitch != other.left_hip_pitch:
            return False
        if self.left_knee != other.left_knee:
            return False
        if self.left_ankle != other.left_ankle:
            return False
        if self.right_hip_yaw != other.right_hip_yaw:
            return False
        if self.right_hip_roll != other.right_hip_roll:
            return False
        if self.right_hip_pitch != other.right_hip_pitch:
            return False
        if self.right_knee != other.right_knee:
            return False
        if self.right_ankle != other.right_ankle:
            return False
        if self.torso != other.torso:
            return False
        if self.left_shoulder_pitch != other.left_shoulder_pitch:
            return False
        if self.left_shoulder_roll != other.left_shoulder_roll:
            return False
        if self.left_shoulder_yaw != other.left_shoulder_yaw:
            return False
        if self.left_elbow != other.left_elbow:
            return False
        if self.right_shoulder_pitch != other.right_shoulder_pitch:
            return False
        if self.right_shoulder_roll != other.right_shoulder_roll:
            return False
        if self.right_shoulder_yaw != other.right_shoulder_yaw:
            return False
        if self.right_elbow != other.right_elbow:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def left_hip_yaw(self):
        """Message field 'left_hip_yaw'."""
        return self._left_hip_yaw

    @left_hip_yaw.setter
    def left_hip_yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'left_hip_yaw' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'left_hip_yaw' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._left_hip_yaw = value

    @builtins.property
    def left_hip_roll(self):
        """Message field 'left_hip_roll'."""
        return self._left_hip_roll

    @left_hip_roll.setter
    def left_hip_roll(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'left_hip_roll' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'left_hip_roll' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._left_hip_roll = value

    @builtins.property
    def left_hip_pitch(self):
        """Message field 'left_hip_pitch'."""
        return self._left_hip_pitch

    @left_hip_pitch.setter
    def left_hip_pitch(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'left_hip_pitch' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'left_hip_pitch' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._left_hip_pitch = value

    @builtins.property
    def left_knee(self):
        """Message field 'left_knee'."""
        return self._left_knee

    @left_knee.setter
    def left_knee(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'left_knee' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'left_knee' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._left_knee = value

    @builtins.property
    def left_ankle(self):
        """Message field 'left_ankle'."""
        return self._left_ankle

    @left_ankle.setter
    def left_ankle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'left_ankle' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'left_ankle' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._left_ankle = value

    @builtins.property
    def right_hip_yaw(self):
        """Message field 'right_hip_yaw'."""
        return self._right_hip_yaw

    @right_hip_yaw.setter
    def right_hip_yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'right_hip_yaw' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'right_hip_yaw' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._right_hip_yaw = value

    @builtins.property
    def right_hip_roll(self):
        """Message field 'right_hip_roll'."""
        return self._right_hip_roll

    @right_hip_roll.setter
    def right_hip_roll(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'right_hip_roll' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'right_hip_roll' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._right_hip_roll = value

    @builtins.property
    def right_hip_pitch(self):
        """Message field 'right_hip_pitch'."""
        return self._right_hip_pitch

    @right_hip_pitch.setter
    def right_hip_pitch(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'right_hip_pitch' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'right_hip_pitch' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._right_hip_pitch = value

    @builtins.property
    def right_knee(self):
        """Message field 'right_knee'."""
        return self._right_knee

    @right_knee.setter
    def right_knee(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'right_knee' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'right_knee' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._right_knee = value

    @builtins.property
    def right_ankle(self):
        """Message field 'right_ankle'."""
        return self._right_ankle

    @right_ankle.setter
    def right_ankle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'right_ankle' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'right_ankle' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._right_ankle = value

    @builtins.property
    def torso(self):
        """Message field 'torso'."""
        return self._torso

    @torso.setter
    def torso(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'torso' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'torso' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._torso = value

    @builtins.property
    def left_shoulder_pitch(self):
        """Message field 'left_shoulder_pitch'."""
        return self._left_shoulder_pitch

    @left_shoulder_pitch.setter
    def left_shoulder_pitch(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'left_shoulder_pitch' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'left_shoulder_pitch' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._left_shoulder_pitch = value

    @builtins.property
    def left_shoulder_roll(self):
        """Message field 'left_shoulder_roll'."""
        return self._left_shoulder_roll

    @left_shoulder_roll.setter
    def left_shoulder_roll(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'left_shoulder_roll' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'left_shoulder_roll' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._left_shoulder_roll = value

    @builtins.property
    def left_shoulder_yaw(self):
        """Message field 'left_shoulder_yaw'."""
        return self._left_shoulder_yaw

    @left_shoulder_yaw.setter
    def left_shoulder_yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'left_shoulder_yaw' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'left_shoulder_yaw' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._left_shoulder_yaw = value

    @builtins.property
    def left_elbow(self):
        """Message field 'left_elbow'."""
        return self._left_elbow

    @left_elbow.setter
    def left_elbow(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'left_elbow' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'left_elbow' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._left_elbow = value

    @builtins.property
    def right_shoulder_pitch(self):
        """Message field 'right_shoulder_pitch'."""
        return self._right_shoulder_pitch

    @right_shoulder_pitch.setter
    def right_shoulder_pitch(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'right_shoulder_pitch' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'right_shoulder_pitch' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._right_shoulder_pitch = value

    @builtins.property
    def right_shoulder_roll(self):
        """Message field 'right_shoulder_roll'."""
        return self._right_shoulder_roll

    @right_shoulder_roll.setter
    def right_shoulder_roll(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'right_shoulder_roll' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'right_shoulder_roll' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._right_shoulder_roll = value

    @builtins.property
    def right_shoulder_yaw(self):
        """Message field 'right_shoulder_yaw'."""
        return self._right_shoulder_yaw

    @right_shoulder_yaw.setter
    def right_shoulder_yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'right_shoulder_yaw' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'right_shoulder_yaw' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._right_shoulder_yaw = value

    @builtins.property
    def right_elbow(self):
        """Message field 'right_elbow'."""
        return self._right_elbow

    @right_elbow.setter
    def right_elbow(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'right_elbow' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'right_elbow' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._right_elbow = value
