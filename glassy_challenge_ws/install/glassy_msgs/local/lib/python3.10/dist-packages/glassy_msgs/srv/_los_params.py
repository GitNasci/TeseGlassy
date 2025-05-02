# generated from rosidl_generator_py/resource/_idl.py.em
# with input from glassy_msgs:srv/LosParams.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LosParams_Request(type):
    """Metaclass of message 'LosParams_Request'."""

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
                'glassy_msgs.srv.LosParams_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__los_params__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__los_params__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__los_params__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__los_params__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__los_params__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LosParams_Request(metaclass=Metaclass_LosParams_Request):
    """Message class 'LosParams_Request'."""

    __slots__ = [
        '_look_ahead_dist',
        '_sigma',
    ]

    _fields_and_field_types = {
        'look_ahead_dist': 'double',
        'sigma': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.look_ahead_dist = kwargs.get('look_ahead_dist', float())
        self.sigma = kwargs.get('sigma', float())

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
        if self.look_ahead_dist != other.look_ahead_dist:
            return False
        if self.sigma != other.sigma:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def look_ahead_dist(self):
        """Message field 'look_ahead_dist'."""
        return self._look_ahead_dist

    @look_ahead_dist.setter
    def look_ahead_dist(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'look_ahead_dist' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'look_ahead_dist' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._look_ahead_dist = value

    @builtins.property
    def sigma(self):
        """Message field 'sigma'."""
        return self._sigma

    @sigma.setter
    def sigma(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'sigma' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'sigma' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._sigma = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_LosParams_Response(type):
    """Metaclass of message 'LosParams_Response'."""

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
                'glassy_msgs.srv.LosParams_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__los_params__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__los_params__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__los_params__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__los_params__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__los_params__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LosParams_Response(metaclass=Metaclass_LosParams_Response):
    """Message class 'LosParams_Response'."""

    __slots__ = [
        '_result',
    ]

    _fields_and_field_types = {
        'result': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.result = kwargs.get('result', bool())

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
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'result' field must be of type 'bool'"
        self._result = value


class Metaclass_LosParams(type):
    """Metaclass of service 'LosParams'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('glassy_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'glassy_msgs.srv.LosParams')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__los_params

            from glassy_msgs.srv import _los_params
            if _los_params.Metaclass_LosParams_Request._TYPE_SUPPORT is None:
                _los_params.Metaclass_LosParams_Request.__import_type_support__()
            if _los_params.Metaclass_LosParams_Response._TYPE_SUPPORT is None:
                _los_params.Metaclass_LosParams_Response.__import_type_support__()


class LosParams(metaclass=Metaclass_LosParams):
    from glassy_msgs.srv._los_params import LosParams_Request as Request
    from glassy_msgs.srv._los_params import LosParams_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
