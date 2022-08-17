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


class AdAccountCreateRequest(
    DictSchema
):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.
    """

    @classmethod
    @property
    def country(cls) -> typing.Type['Country']:
        return Country
    
    
    class name(
        _SchemaValidator(
            max_length=256,
        ),
        StrSchema
    ):
        pass
    
    
    class owner_user_id(
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
        country: typing.Union['Country', Unset] = unset,
        name: typing.Union[name, Unset] = unset,
        owner_user_id: typing.Union[owner_user_id, Unset] = unset,
        _configuration: typing.Optional[Configuration] = None,
        **kwargs: typing.Type[Schema],
    ) -> 'AdAccountCreateRequest':
        return super().__new__(
            cls,
            *args,
            country=country,
            name=name,
            owner_user_id=owner_user_id,
            _configuration=_configuration,
            **kwargs,
        )

from openapi_client.model.country import Country