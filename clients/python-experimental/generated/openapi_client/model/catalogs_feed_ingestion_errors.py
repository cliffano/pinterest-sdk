# coding: utf-8

"""
    Pinterest REST API

    Pinterest's REST API  # noqa: E501

    The version of the OpenAPI document: 5.4.1
    Contact: blah@cliffano.com
    Generated by: https://openapi-generator.tech
"""

import re  # noqa: F401
import sys  # noqa: F401
import typing  # noqa: F401
import functools  # noqa: F401

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
    UUIDSchema,
    DateSchema,
    DateTimeSchema,
    DecimalSchema,
    BoolSchema,
    BinarySchema,
    NoneSchema,
    none_type,
    Configuration,
    Unset,
    unset,
    ComposedBase,
    ListBase,
    DictBase,
    NoneBase,
    StrBase,
    IntBase,
    Int32Base,
    Int64Base,
    Float32Base,
    Float64Base,
    NumberBase,
    UUIDBase,
    DateBase,
    DateTimeBase,
    BoolBase,
    BinaryBase,
    Schema,
    _SchemaValidator,
    _SchemaTypeChecker,
    _SchemaEnumMaker
)


class CatalogsFeedIngestionErrors(
    DictSchema
):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.
    """
    IMAGE_DOWNLOAD_ERROR = IntSchema
    LINE_LEVEL_INTERNAL_ERROR = IntSchema
    
    
    class LARGE_PRODUCT_COUNT_DECREASE(
        _SchemaEnumMaker(
            enum_value_to_name={
                1: "POSITIVE_1",
            }
        ),
        IntSchema
    ):
        
        @classmethod
        @property
        def POSITIVE_1(cls):
            return cls(1)


    def __new__(
        cls,
        *args: typing.Union[dict, frozendict, ],
        IMAGE_DOWNLOAD_ERROR: typing.Union[IMAGE_DOWNLOAD_ERROR, Unset] = unset,
        LINE_LEVEL_INTERNAL_ERROR: typing.Union[LINE_LEVEL_INTERNAL_ERROR, Unset] = unset,
        LARGE_PRODUCT_COUNT_DECREASE: typing.Union[LARGE_PRODUCT_COUNT_DECREASE, Unset] = unset,
        _configuration: typing.Optional[Configuration] = None,
        **kwargs: typing.Type[Schema],
    ) -> 'CatalogsFeedIngestionErrors':
        return super().__new__(
            cls,
            *args,
            IMAGE_DOWNLOAD_ERROR=IMAGE_DOWNLOAD_ERROR,
            LINE_LEVEL_INTERNAL_ERROR=LINE_LEVEL_INTERNAL_ERROR,
            LARGE_PRODUCT_COUNT_DECREASE=LARGE_PRODUCT_COUNT_DECREASE,
            _configuration=_configuration,
            **kwargs,
        )
