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


class AdsAnalyticsMetricsFilter(
    DictSchema
):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.
    """

    @classmethod
    @property
    def field(cls) -> typing.Type['AdsAnalyticsFilterColumn']:
        return AdsAnalyticsFilterColumn

    @classmethod
    @property
    def operator(cls) -> typing.Type['AdsAnalyticsFilterOperator']:
        return AdsAnalyticsFilterOperator
    
    
    class values(
        _SchemaValidator(
            min_items=1,
        ),
        ListSchema
    ):
        _items = NumberSchema


    def __new__(
        cls,
        *args: typing.Union[dict, frozendict, ],
        field: typing.Union['AdsAnalyticsFilterColumn', Unset] = unset,
        operator: typing.Union['AdsAnalyticsFilterOperator', Unset] = unset,
        values: typing.Union[values, Unset] = unset,
        _instantiation_metadata: typing.Optional[InstantiationMetadata] = None,
        **kwargs: typing.Type[Schema],
    ) -> 'AdsAnalyticsMetricsFilter':
        return super().__new__(
            cls,
            *args,
            field=field,
            operator=operator,
            values=values,
            _instantiation_metadata=_instantiation_metadata,
            **kwargs,
        )

from openapi_client.model.ads_analytics_filter_column import AdsAnalyticsFilterColumn
from openapi_client.model.ads_analytics_filter_operator import AdsAnalyticsFilterOperator
