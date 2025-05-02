# generated from rosidl_generator_py/resource/_idl.py.em
# with input from glassy_msgs:msg/PathReferences.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PathReferences(type):
    """Metaclass of message 'PathReferences'."""

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
            module = import_type_support('glassy_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'glassy_msgs.msg.PathReferences')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__path_references
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__path_references
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__path_references
            cls._TYPE_SUPPORT = module.type_support_msg__msg__path_references
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__path_references

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PathReferences(metaclass=Metaclass_PathReferences):
    """Message class 'PathReferences'."""

    __slots__ = [
        '_header',
        '_x_ref',
        '_y_ref',
        '_is_active',
        '_path_segment_index',
        '_path_vel',
        '_tangent_heading',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'x_ref': 'double',
        'y_ref': 'double',
        'is_active': 'int64',
        'path_segment_index': 'int64',
        'path_vel': 'double',
        'tangent_heading': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.x_ref = kwargs.get('x_ref', float())
        self.y_ref = kwargs.get('y_ref', float())
        self.is_active = kwargs.get('is_active', int())
        self.path_segment_index = kwargs.get('path_segment_index', int())
        self.path_vel = kwargs.get('path_vel', float())
        self.tangent_heading = kwargs.get('tangent_heading', float())

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
        if self.header != other.header:
            return False
        if self.x_ref != other.x_ref:
            return False
        if self.y_ref != other.y_ref:
            return False
        if self.is_active != other.is_active:
            return False
        if self.path_segment_index != other.path_segment_index:
            return False
        if self.path_vel != other.path_vel:
            return False
        if self.tangent_heading != other.tangent_heading:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def x_ref(self):
        """Message field 'x_ref'."""
        return self._x_ref

    @x_ref.setter
    def x_ref(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x_ref' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'x_ref' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._x_ref = value

    @builtins.property
    def y_ref(self):
        """Message field 'y_ref'."""
        return self._y_ref

    @y_ref.setter
    def y_ref(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y_ref' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'y_ref' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._y_ref = value

    @builtins.property
    def is_active(self):
        """Message field 'is_active'."""
        return self._is_active

    @is_active.setter
    def is_active(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'is_active' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'is_active' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._is_active = value

    @builtins.property
    def path_segment_index(self):
        """Message field 'path_segment_index'."""
        return self._path_segment_index

    @path_segment_index.setter
    def path_segment_index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'path_segment_index' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'path_segment_index' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._path_segment_index = value

    @builtins.property
    def path_vel(self):
        """Message field 'path_vel'."""
        return self._path_vel

    @path_vel.setter
    def path_vel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'path_vel' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'path_vel' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._path_vel = value

    @builtins.property
    def tangent_heading(self):
        """Message field 'tangent_heading'."""
        return self._tangent_heading

    @tangent_heading.setter
    def tangent_heading(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tangent_heading' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'tangent_heading' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._tangent_heading = value
