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


class PinMediaSourceImageBase64(
    DictSchema
):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.

    Base64-encoded image media source
    """
    _required_property_names = set((
        'source_type',
        'content_type',
        'data',
    ))
    
    
    class source_type(
        _SchemaEnumMaker(
            enum_value_to_name={
                "image_base64": "IMAGE_BASE64",
            }
        ),
        StrSchema
    ):
        
        @classmethod
        @property
        def IMAGE_BASE64(cls):
            return cls("image_base64")
    
    
    class content_type(
        _SchemaEnumMaker(
            enum_value_to_name={
                "image/jpeg": "JPEG",
                "image/png": "PNG",
            }
        ),
        StrSchema
    ):
        
        @classmethod
        @property
        def JPEG(cls):
            return cls("image/jpeg")
        
        @classmethod
        @property
        def PNG(cls):
            return cls("image/png")
    
    
    class data(
        _SchemaValidator(
            regex=[{
                'pattern': r'[a-zA-Z0-9+\/=]+',  # noqa: E501
            }],
        ),
        StrSchema
    ):
        pass


    def __new__(
        cls,
        *args: typing.Union[dict, frozendict, ],
        source_type: source_type,
        content_type: content_type,
        data: data,
        _configuration: typing.Optional[Configuration] = None,
        **kwargs: typing.Type[Schema],
    ) -> 'PinMediaSourceImageBase64':
        return super().__new__(
            cls,
            *args,
            source_type=source_type,
            content_type=content_type,
            data=data,
            _configuration=_configuration,
            **kwargs,
        )
