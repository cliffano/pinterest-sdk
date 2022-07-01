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


class AdsAnalyticsResponse(
    ListSchema
):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.
    """
    
    
    class _items(
        DictSchema
    ):
        _required_property_names = set((
        ))
        
        
        class AD_ID(
            _SchemaValidator(
                regex=[{
                    'pattern': r'^\d+$',  # noqa: E501
                }],
            ),
            StrSchema
        ):
            pass
        DATE = DateSchema
    
    
        def __new__(
            cls,
            *args: typing.Union[dict, frozendict, ],
            DATE: typing.Union[DATE, Unset] = unset,
            _instantiation_metadata: typing.Optional[InstantiationMetadata] = None,
            **kwargs: typing.Type[Schema],
        ) -> '_items':
            return super().__new__(
                cls,
                *args,
                DATE=DATE,
                _instantiation_metadata=_instantiation_metadata,
                **kwargs,
            )
