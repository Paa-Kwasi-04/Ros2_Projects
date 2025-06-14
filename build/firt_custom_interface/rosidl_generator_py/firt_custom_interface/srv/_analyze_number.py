# generated from rosidl_generator_py/resource/_idl.py.em
# with input from firt_custom_interface:srv/AnalyzeNumber.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AnalyzeNumber_Request(type):
    """Metaclass of message 'AnalyzeNumber_Request'."""

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
            module = import_type_support('firt_custom_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'firt_custom_interface.srv.AnalyzeNumber_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__analyze_number__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__analyze_number__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__analyze_number__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__analyze_number__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__analyze_number__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AnalyzeNumber_Request(metaclass=Metaclass_AnalyzeNumber_Request):
    """Message class 'AnalyzeNumber_Request'."""

    __slots__ = [
        '_number',
    ]

    _fields_and_field_types = {
        'number': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.number = kwargs.get('number', int())

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
        if self.number != other.number:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def number(self):
        """Message field 'number'."""
        return self._number

    @number.setter
    def number(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'number' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'number' field must be an integer in [-2147483648, 2147483647]"
        self._number = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_AnalyzeNumber_Response(type):
    """Metaclass of message 'AnalyzeNumber_Response'."""

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
            module = import_type_support('firt_custom_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'firt_custom_interface.srv.AnalyzeNumber_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__analyze_number__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__analyze_number__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__analyze_number__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__analyze_number__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__analyze_number__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AnalyzeNumber_Response(metaclass=Metaclass_AnalyzeNumber_Response):
    """Message class 'AnalyzeNumber_Response'."""

    __slots__ = [
        '_parity',
        '_sign',
    ]

    _fields_and_field_types = {
        'parity': 'string',
        'sign': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.parity = kwargs.get('parity', str())
        self.sign = kwargs.get('sign', str())

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
        if self.parity != other.parity:
            return False
        if self.sign != other.sign:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def parity(self):
        """Message field 'parity'."""
        return self._parity

    @parity.setter
    def parity(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'parity' field must be of type 'str'"
        self._parity = value

    @builtins.property
    def sign(self):
        """Message field 'sign'."""
        return self._sign

    @sign.setter
    def sign(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'sign' field must be of type 'str'"
        self._sign = value


class Metaclass_AnalyzeNumber(type):
    """Metaclass of service 'AnalyzeNumber'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('firt_custom_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'firt_custom_interface.srv.AnalyzeNumber')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__analyze_number

            from firt_custom_interface.srv import _analyze_number
            if _analyze_number.Metaclass_AnalyzeNumber_Request._TYPE_SUPPORT is None:
                _analyze_number.Metaclass_AnalyzeNumber_Request.__import_type_support__()
            if _analyze_number.Metaclass_AnalyzeNumber_Response._TYPE_SUPPORT is None:
                _analyze_number.Metaclass_AnalyzeNumber_Response.__import_type_support__()


class AnalyzeNumber(metaclass=Metaclass_AnalyzeNumber):
    from firt_custom_interface.srv._analyze_number import AnalyzeNumber_Request as Request
    from firt_custom_interface.srv._analyze_number import AnalyzeNumber_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
