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


class PinMediaSourceVideoID(
    DictSchema
):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.

    Video ID-based media source
    """
    _required_property_names = set((
        'source_type',
        'cover_image_url',
        'media_id',
    ))
    
    
    class source_type(
        _SchemaEnumMaker(
            enum_value_to_name={
                "video_id": "VIDEO_ID",
            }
        ),
        StrSchema
    ):
        
        @classmethod
        @property
        def VIDEO_ID(cls):
            return cls._enum_by_value["video_id"]("video_id")
    cover_image_url = StrSchema
    
    
    class media_id(
        _SchemaValidator(
            regex=[{
                'pattern': r'^\d+$',  # noqa: E501
            }],
        ),
        StrSchema
    ):
        pass


    def __new__(
        cls,
        *args: typing.Union[dict, frozendict, ],
        source_type: source_type,
        cover_image_url: cover_image_url,
        media_id: media_id,
        _instantiation_metadata: typing.Optional[InstantiationMetadata] = None,
        **kwargs: typing.Type[Schema],
    ) -> 'PinMediaSourceVideoID':
        return super().__new__(
            cls,
            *args,
            source_type=source_type,
            cover_image_url=cover_image_url,
            media_id=media_id,
            _instantiation_metadata=_instantiation_metadata,
            **kwargs,
        )
