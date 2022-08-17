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


class MetricsReportingLevel(
    _SchemaEnumMaker(
        enum_value_to_name={
            "ADVERTISER": "ADVERTISER",
            "ADVERTISER_TARGETING": "ADVERTISER_TARGETING",
            "CAMPAIGN": "CAMPAIGN",
            "CAMPAIGN_TARGETING": "CAMPAIGN_TARGETING",
            "AD_GROUP": "AD_GROUP",
            "AD_GROUP_TARGETING": "AD_GROUP_TARGETING",
            "PIN_PROMOTION": "PIN_PROMOTION",
            "PIN_PROMOTION_TARGETING": "PIN_PROMOTION_TARGETING",
            "KEYWORD": "KEYWORD",
            "PRODUCT_GROUP": "PRODUCT_GROUP",
            "PRODUCT_GROUP_TARGETING": "PRODUCT_GROUP_TARGETING",
            "PRODUCT_ITEM": "PRODUCT_ITEM",
        }
    ),
    StrSchema
):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.

    Level of the reporting request
    """
    
    @classmethod
    @property
    def ADVERTISER(cls):
        return cls("ADVERTISER")
    
    @classmethod
    @property
    def ADVERTISER_TARGETING(cls):
        return cls("ADVERTISER_TARGETING")
    
    @classmethod
    @property
    def CAMPAIGN(cls):
        return cls("CAMPAIGN")
    
    @classmethod
    @property
    def CAMPAIGN_TARGETING(cls):
        return cls("CAMPAIGN_TARGETING")
    
    @classmethod
    @property
    def AD_GROUP(cls):
        return cls("AD_GROUP")
    
    @classmethod
    @property
    def AD_GROUP_TARGETING(cls):
        return cls("AD_GROUP_TARGETING")
    
    @classmethod
    @property
    def PIN_PROMOTION(cls):
        return cls("PIN_PROMOTION")
    
    @classmethod
    @property
    def PIN_PROMOTION_TARGETING(cls):
        return cls("PIN_PROMOTION_TARGETING")
    
    @classmethod
    @property
    def KEYWORD(cls):
        return cls("KEYWORD")
    
    @classmethod
    @property
    def PRODUCT_GROUP(cls):
        return cls("PRODUCT_GROUP")
    
    @classmethod
    @property
    def PRODUCT_GROUP_TARGETING(cls):
        return cls("PRODUCT_GROUP_TARGETING")
    
    @classmethod
    @property
    def PRODUCT_ITEM(cls):
        return cls("PRODUCT_ITEM")
