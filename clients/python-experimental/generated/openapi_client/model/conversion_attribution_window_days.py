# coding: utf-8

"""
    Pinterest REST API

    Pinterest's REST API  # noqa: E501

    The version of the OpenAPI document: 5.3.0
    Contact: pinterest-api@pinterest.com
    Generated by: https://openapi-generator.tech
"""

import re  # noqa: F401
import sys  # noqa: F401
import typing  # noqa: F401

from frozendict import frozendict  # noqa: F401

import decimal  # noqa: F401
from datetime import date, datetime  # noqa: F401
from frozendict import frozendict  # noqa: F401

from openapi_client.schemas import (  # noqa: F401
    AnyTypeSchema,
    ComposedSchema,
    DictSchema,
    ListSchema,
    StrSchema,
    IntSchema,
    Int32Schema,
    Int64Schema,
    Float32Schema,
    Float64Schema,
    NumberSchema,
    DateSchema,
    DateTimeSchema,
    DecimalSchema,
    BoolSchema,
    BinarySchema,
    NoneSchema,
    none_type,
    InstantiationMetadata,
    Unset,
    unset,
    ComposedBase,
    ListBase,
    DictBase,
    NoneBase,
    StrBase,
    IntBase,
    NumberBase,
    DateBase,
    DateTimeBase,
    BoolBase,
    BinaryBase,
    Schema,
    _SchemaValidator,
    _SchemaTypeChecker,
    _SchemaEnumMaker
)


class ConversionAttributionWindowDays(
    _SchemaEnumMaker(
        enum_value_to_name={
            1: "POSITIVE_1",
            7: "POSITIVE_7",
            30: "POSITIVE_30",
            60: "POSITIVE_60",
        }
    ),
    IntSchema
):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.
    """
    
    @classmethod
    @property
    def POSITIVE_1(cls):
        return cls._enum_by_value[1](1)
    
    @classmethod
    @property
    def POSITIVE_7(cls):
        return cls._enum_by_value[7](7)
    
    @classmethod
    @property
    def POSITIVE_30(cls):
        return cls._enum_by_value[30](30)
    
    @classmethod
    @property
    def POSITIVE_60(cls):
        return cls._enum_by_value[60](60)