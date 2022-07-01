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


class CampaignResponseAllOf1(
    DictSchema
):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.
    """

    @classmethod
    @property
    def objective_type(cls) -> typing.Type['ObjectiveType']:
        return ObjectiveType
    created_time = IntSchema
    updated_time = IntSchema
    type = StrSchema


    def __new__(
        cls,
        *args: typing.Union[dict, frozendict, ],
        objective_type: typing.Union['ObjectiveType', Unset] = unset,
        created_time: typing.Union[created_time, Unset] = unset,
        updated_time: typing.Union[updated_time, Unset] = unset,
        type: typing.Union[type, Unset] = unset,
        _instantiation_metadata: typing.Optional[InstantiationMetadata] = None,
        **kwargs: typing.Type[Schema],
    ) -> 'CampaignResponseAllOf1':
        return super().__new__(
            cls,
            *args,
            objective_type=objective_type,
            created_time=created_time,
            updated_time=updated_time,
            type=type,
            _instantiation_metadata=_instantiation_metadata,
            **kwargs,
        )

from openapi_client.model.objective_type import ObjectiveType
