# generated from rosidl_generator_py/resource/_idl.py.em
# with input from glassy_msgs:msg/MissionInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MissionInfo(type):
    """Metaclass of message 'MissionInfo'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'MISSION_OFF': 0,
        'PATH_FOLLOWING': 1,
        'SUMMER_CHALLENGE': 2,
        'TRAJECTORY_TRACKING': 3,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('glassy_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'glassy_msgs.msg.MissionInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mission_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mission_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mission_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mission_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mission_info

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'MISSION_OFF': cls.__constants['MISSION_OFF'],
            'PATH_FOLLOWING': cls.__constants['PATH_FOLLOWING'],
            'SUMMER_CHALLENGE': cls.__constants['SUMMER_CHALLENGE'],
            'TRAJECTORY_TRACKING': cls.__constants['TRAJECTORY_TRACKING'],
            'MISSION_MODE__DEFAULT': 0,
        }

    @property
    def MISSION_OFF(self):
        """Message constant 'MISSION_OFF'."""
        return Metaclass_MissionInfo.__constants['MISSION_OFF']

    @property
    def PATH_FOLLOWING(self):
        """Message constant 'PATH_FOLLOWING'."""
        return Metaclass_MissionInfo.__constants['PATH_FOLLOWING']

    @property
    def SUMMER_CHALLENGE(self):
        """Message constant 'SUMMER_CHALLENGE'."""
        return Metaclass_MissionInfo.__constants['SUMMER_CHALLENGE']

    @property
    def TRAJECTORY_TRACKING(self):
        """Message constant 'TRAJECTORY_TRACKING'."""
        return Metaclass_MissionInfo.__constants['TRAJECTORY_TRACKING']

    @property
    def MISSION_MODE__DEFAULT(cls):
        """Return default value for message field 'mission_mode'."""
        return 0


class MissionInfo(metaclass=Metaclass_MissionInfo):
    """
    Message class 'MissionInfo'.

    Constants:
      MISSION_OFF
      PATH_FOLLOWING
      SUMMER_CHALLENGE
      TRAJECTORY_TRACKING
    """

    __slots__ = [
        '_mission_mode',
    ]

    _fields_and_field_types = {
        'mission_mode': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.mission_mode = kwargs.get(
            'mission_mode', MissionInfo.MISSION_MODE__DEFAULT)

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
        if self.mission_mode != other.mission_mode:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def mission_mode(self):
        """Message field 'mission_mode'."""
        return self._mission_mode

    @mission_mode.setter
    def mission_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mission_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mission_mode' field must be an unsigned integer in [0, 255]"
        self._mission_mode = value
