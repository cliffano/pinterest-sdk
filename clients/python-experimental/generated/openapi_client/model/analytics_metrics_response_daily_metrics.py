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


class AnalyticsMetricsResponseDailyMetrics(
    DictSchema
):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.
    """
    
    
    class data_status(
        _SchemaEnumMaker(
            enum_value_to_name={
                "PROCESSING": "PROCESSING",
                "READY": "READY",
                "ESTIMATE": "ESTIMATE",
                "BEFORE_BUSINESS_CREATED": "BEFORE_BUSINESS_CREATED",
                "BEFORE_DATA_RETENTION_PERIOD": "BEFORE_DATA_RETENTION_PERIOD",
                "BEFORE_PIN_DATA_RETENTION_PERIOD": "BEFORE_PIN_DATA_RETENTION_PERIOD",
                "BEFORE_METRIC_START_DATE": "BEFORE_METRIC_START_DATE",
                "BEFORE_CORE_METRIC_START_DATE": "BEFORE_CORE_METRIC_START_DATE",
                "BEFORE_PIN_FORMAT_METRIC_START_DATE": "BEFORE_PIN_FORMAT_METRIC_START_DATE",
                "BEFORE_AUDIENCE_METRIC_START_DATE": "BEFORE_AUDIENCE_METRIC_START_DATE",
                "BEFORE_AUDIENCE_MONTHLY_METRIC_START_DATE": "BEFORE_AUDIENCE_MONTHLY_METRIC_START_DATE",
                "BEFORE_VIDEO_METRIC_START_DATE": "BEFORE_VIDEO_METRIC_START_DATE",
                "BEFORE_CONVERSION_METRIC_START_DATE": "BEFORE_CONVERSION_METRIC_START_DATE",
                "PURCHASERS_METRIC_SMALLER_THAN_THRESHOLD": "PURCHASERS_METRIC_SMALLER_THAN_THRESHOLD",
                "IN_BAD_TAG_DATE": "IN_BAD_TAG_DATE",
                "BEFORE_PUBLISHED_METRIC_START_DATE": "BEFORE_PUBLISHED_METRIC_START_DATE",
                "BEFORE_ASSIST_METRIC_START_DATE": "BEFORE_ASSIST_METRIC_START_DATE",
                "BEFORE_PIN_CREATED": "BEFORE_PIN_CREATED",
                "BEFORE_ACCOUNT_CLAIMED": "BEFORE_ACCOUNT_CLAIMED",
                "BEFORE_DEMOGRAPHIC_FILTERS_START_DATE": "BEFORE_DEMOGRAPHIC_FILTERS_START_DATE",
                "AUDIENCE_SEGMENT_SMALLER_THAN_THRESHOLD": "AUDIENCE_SEGMENT_SMALLER_THAN_THRESHOLD",
                "AUDIENCE_TOTAL_SMALLER_THAN_THRESHOLD": "AUDIENCE_TOTAL_SMALLER_THAN_THRESHOLD",
                "BEFORE_PRODUCT_GROUP_FILTER_START_DATE": "BEFORE_PRODUCT_GROUP_FILTER_START_DATE",
            }
        ),
        StrSchema
    ):
        
        @classmethod
        @property
        def PROCESSING(cls):
            return cls._enum_by_value["PROCESSING"]("PROCESSING")
        
        @classmethod
        @property
        def READY(cls):
            return cls._enum_by_value["READY"]("READY")
        
        @classmethod
        @property
        def ESTIMATE(cls):
            return cls._enum_by_value["ESTIMATE"]("ESTIMATE")
        
        @classmethod
        @property
        def BEFORE_BUSINESS_CREATED(cls):
            return cls._enum_by_value["BEFORE_BUSINESS_CREATED"]("BEFORE_BUSINESS_CREATED")
        
        @classmethod
        @property
        def BEFORE_DATA_RETENTION_PERIOD(cls):
            return cls._enum_by_value["BEFORE_DATA_RETENTION_PERIOD"]("BEFORE_DATA_RETENTION_PERIOD")
        
        @classmethod
        @property
        def BEFORE_PIN_DATA_RETENTION_PERIOD(cls):
            return cls._enum_by_value["BEFORE_PIN_DATA_RETENTION_PERIOD"]("BEFORE_PIN_DATA_RETENTION_PERIOD")
        
        @classmethod
        @property
        def BEFORE_METRIC_START_DATE(cls):
            return cls._enum_by_value["BEFORE_METRIC_START_DATE"]("BEFORE_METRIC_START_DATE")
        
        @classmethod
        @property
        def BEFORE_CORE_METRIC_START_DATE(cls):
            return cls._enum_by_value["BEFORE_CORE_METRIC_START_DATE"]("BEFORE_CORE_METRIC_START_DATE")
        
        @classmethod
        @property
        def BEFORE_PIN_FORMAT_METRIC_START_DATE(cls):
            return cls._enum_by_value["BEFORE_PIN_FORMAT_METRIC_START_DATE"]("BEFORE_PIN_FORMAT_METRIC_START_DATE")
        
        @classmethod
        @property
        def BEFORE_AUDIENCE_METRIC_START_DATE(cls):
            return cls._enum_by_value["BEFORE_AUDIENCE_METRIC_START_DATE"]("BEFORE_AUDIENCE_METRIC_START_DATE")
        
        @classmethod
        @property
        def BEFORE_AUDIENCE_MONTHLY_METRIC_START_DATE(cls):
            return cls._enum_by_value["BEFORE_AUDIENCE_MONTHLY_METRIC_START_DATE"]("BEFORE_AUDIENCE_MONTHLY_METRIC_START_DATE")
        
        @classmethod
        @property
        def BEFORE_VIDEO_METRIC_START_DATE(cls):
            return cls._enum_by_value["BEFORE_VIDEO_METRIC_START_DATE"]("BEFORE_VIDEO_METRIC_START_DATE")
        
        @classmethod
        @property
        def BEFORE_CONVERSION_METRIC_START_DATE(cls):
            return cls._enum_by_value["BEFORE_CONVERSION_METRIC_START_DATE"]("BEFORE_CONVERSION_METRIC_START_DATE")
        
        @classmethod
        @property
        def PURCHASERS_METRIC_SMALLER_THAN_THRESHOLD(cls):
            return cls._enum_by_value["PURCHASERS_METRIC_SMALLER_THAN_THRESHOLD"]("PURCHASERS_METRIC_SMALLER_THAN_THRESHOLD")
        
        @classmethod
        @property
        def IN_BAD_TAG_DATE(cls):
            return cls._enum_by_value["IN_BAD_TAG_DATE"]("IN_BAD_TAG_DATE")
        
        @classmethod
        @property
        def BEFORE_PUBLISHED_METRIC_START_DATE(cls):
            return cls._enum_by_value["BEFORE_PUBLISHED_METRIC_START_DATE"]("BEFORE_PUBLISHED_METRIC_START_DATE")
        
        @classmethod
        @property
        def BEFORE_ASSIST_METRIC_START_DATE(cls):
            return cls._enum_by_value["BEFORE_ASSIST_METRIC_START_DATE"]("BEFORE_ASSIST_METRIC_START_DATE")
        
        @classmethod
        @property
        def BEFORE_PIN_CREATED(cls):
            return cls._enum_by_value["BEFORE_PIN_CREATED"]("BEFORE_PIN_CREATED")
        
        @classmethod
        @property
        def BEFORE_ACCOUNT_CLAIMED(cls):
            return cls._enum_by_value["BEFORE_ACCOUNT_CLAIMED"]("BEFORE_ACCOUNT_CLAIMED")
        
        @classmethod
        @property
        def BEFORE_DEMOGRAPHIC_FILTERS_START_DATE(cls):
            return cls._enum_by_value["BEFORE_DEMOGRAPHIC_FILTERS_START_DATE"]("BEFORE_DEMOGRAPHIC_FILTERS_START_DATE")
        
        @classmethod
        @property
        def AUDIENCE_SEGMENT_SMALLER_THAN_THRESHOLD(cls):
            return cls._enum_by_value["AUDIENCE_SEGMENT_SMALLER_THAN_THRESHOLD"]("AUDIENCE_SEGMENT_SMALLER_THAN_THRESHOLD")
        
        @classmethod
        @property
        def AUDIENCE_TOTAL_SMALLER_THAN_THRESHOLD(cls):
            return cls._enum_by_value["AUDIENCE_TOTAL_SMALLER_THAN_THRESHOLD"]("AUDIENCE_TOTAL_SMALLER_THAN_THRESHOLD")
        
        @classmethod
        @property
        def BEFORE_PRODUCT_GROUP_FILTER_START_DATE(cls):
            return cls._enum_by_value["BEFORE_PRODUCT_GROUP_FILTER_START_DATE"]("BEFORE_PRODUCT_GROUP_FILTER_START_DATE")
    date = StrSchema
    
    
    class metrics(
        DictSchema
    ):
        _additional_properties = NumberSchema
    
    
        def __new__(
            cls,
            *args: typing.Union[dict, frozendict, ],
            _instantiation_metadata: typing.Optional[InstantiationMetadata] = None,
            **kwargs: typing.Type[Schema],
        ) -> 'metrics':
            return super().__new__(
                cls,
                *args,
                _instantiation_metadata=_instantiation_metadata,
                **kwargs,
            )


    def __new__(
        cls,
        *args: typing.Union[dict, frozendict, ],
        data_status: typing.Union[data_status, Unset] = unset,
        date: typing.Union[date, Unset] = unset,
        metrics: typing.Union[metrics, Unset] = unset,
        _instantiation_metadata: typing.Optional[InstantiationMetadata] = None,
        **kwargs: typing.Type[Schema],
    ) -> 'AnalyticsMetricsResponseDailyMetrics':
        return super().__new__(
            cls,
            *args,
            data_status=data_status,
            date=date,
            metrics=metrics,
            _instantiation_metadata=_instantiation_metadata,
            **kwargs,
        )