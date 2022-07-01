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


class PlacementGroupType(
    _SchemaEnumMaker(
        enum_value_to_name={
            "ALL": "ALL",
            "SEARCH": "SEARCH",
            "BROWSE": "BROWSE",
            "OTHER": "OTHER",
        }
    ),
    StrSchema
):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.

    Campaign placement group type
    """
    
    @classmethod
    @property
    def ALL(cls):
        return cls._enum_by_value["ALL"]("ALL")
    
    @classmethod
    @property
    def SEARCH(cls):
        return cls._enum_by_value["SEARCH"]("SEARCH")
    
    @classmethod
    @property
    def BROWSE(cls):
        return cls._enum_by_value["BROWSE"]("BROWSE")
    
    @classmethod
    @property
    def OTHER(cls):
        return cls._enum_by_value["OTHER"]("OTHER")
