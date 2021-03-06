# coding: utf-8

"""
    Pinterest REST API

    Pinterest's REST API  # noqa: E501

    The version of the OpenAPI document: 5.3.0
    Contact: blah@cliffano.com
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


class ActionType(
    _SchemaEnumMaker(
        enum_value_to_name={
            "CLICKTHROUGH": "CLICKTHROUGH",
            "IMPRESSION": "IMPRESSION",
            "VIDEO_V_50_MRC": "VIDEO_V_50_MRC",
            "BILLABLE_ENGAGEMENT": "BILLABLE_ENGAGEMENT",
        }
    ),
    StrSchema
):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.

    Ad group billable event type.
    """
    
    @classmethod
    @property
    def CLICKTHROUGH(cls):
        return cls._enum_by_value["CLICKTHROUGH"]("CLICKTHROUGH")
    
    @classmethod
    @property
    def IMPRESSION(cls):
        return cls._enum_by_value["IMPRESSION"]("IMPRESSION")
    
    @classmethod
    @property
    def VIDEO_V_50_MRC(cls):
        return cls._enum_by_value["VIDEO_V_50_MRC"]("VIDEO_V_50_MRC")
    
    @classmethod
    @property
    def BILLABLE_ENGAGEMENT(cls):
        return cls._enum_by_value["BILLABLE_ENGAGEMENT"]("BILLABLE_ENGAGEMENT")
