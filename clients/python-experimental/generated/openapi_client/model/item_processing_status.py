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


class ItemProcessingStatus(
    _SchemaEnumMaker(
        enum_value_to_name={
            "SUCCESS": "SUCCESS",
            "FAILURE": "FAILURE",
            "PROCESSING": "PROCESSING",
        }
    ),
    StrSchema
):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.

    The status of the item processing record
    """
    
    @classmethod
    @property
    def SUCCESS(cls):
        return cls._enum_by_value["SUCCESS"]("SUCCESS")
    
    @classmethod
    @property
    def FAILURE(cls):
        return cls._enum_by_value["FAILURE"]("FAILURE")
    
    @classmethod
    @property
    def PROCESSING(cls):
        return cls._enum_by_value["PROCESSING"]("PROCESSING")
