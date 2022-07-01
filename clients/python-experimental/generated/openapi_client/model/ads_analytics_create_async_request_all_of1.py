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


class AdsAnalyticsCreateAsyncRequestAllOf1(
    DictSchema
):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.
    """
    _required_property_names = set((
        'columns',
        'level',
    ))
    
    
    class columns(
        ListSchema
    ):
    
        @classmethod
        @property
        def _items(cls) -> typing.Type['ReportingColumnAsync']:
            return ReportingColumnAsync
    
    
    class level(
        ComposedBase,
        StrSchema
    ):
    
        @classmethod
        @property
        def _composed_schemas(cls):
            # we need this here to make our import statements work
            # we must store _composed_schemas in here so the code is only run
            # when we invoke this method. If we kept this at the class
            # level we would get an error because the class level
            # code would be run when this module is imported, and these composed
            # classes don't exist yet because their module has not finished
            # loading
            return {
                'allOf': [
                    MetricsReportingLevel,
                ],
                'oneOf': [
                ],
                'anyOf': [
                ],
            }
    
        def __new__(
            cls,
            *args: typing.Union[str, ],
            _instantiation_metadata: typing.Optional[InstantiationMetadata] = None,
        ) -> 'level':
            return super().__new__(
                cls,
                *args,
                _instantiation_metadata=_instantiation_metadata,
            )
    
    
    class report_format(
        ComposedBase,
        StrSchema
    ):
    
        @classmethod
        @property
        def _composed_schemas(cls):
            # we need this here to make our import statements work
            # we must store _composed_schemas in here so the code is only run
            # when we invoke this method. If we kept this at the class
            # level we would get an error because the class level
            # code would be run when this module is imported, and these composed
            # classes don't exist yet because their module has not finished
            # loading
            return {
                'allOf': [
                    DataOutputFormat,
                ],
                'oneOf': [
                ],
                'anyOf': [
                ],
            }
    
        def __new__(
            cls,
            *args: typing.Union[str, ],
            _instantiation_metadata: typing.Optional[InstantiationMetadata] = None,
        ) -> 'report_format':
            return super().__new__(
                cls,
                *args,
                _instantiation_metadata=_instantiation_metadata,
            )


    def __new__(
        cls,
        *args: typing.Union[dict, frozendict, ],
        columns: columns,
        level: level,
        report_format: typing.Union[report_format, Unset] = unset,
        _instantiation_metadata: typing.Optional[InstantiationMetadata] = None,
        **kwargs: typing.Type[Schema],
    ) -> 'AdsAnalyticsCreateAsyncRequestAllOf1':
        return super().__new__(
            cls,
            *args,
            columns=columns,
            level=level,
            report_format=report_format,
            _instantiation_metadata=_instantiation_metadata,
            **kwargs,
        )

from openapi_client.model.data_output_format import DataOutputFormat
from openapi_client.model.metrics_reporting_level import MetricsReportingLevel
from openapi_client.model.reporting_column_async import ReportingColumnAsync
