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


class CatalogsProductGroupType(
    _SchemaEnumMaker(
        enum_value_to_name={
            "MERCHANT_CREATED": "MERCHANT_CREATED",
            "ALL_PRODUCTS": "ALL_PRODUCTS",
            "BEST_DEALS": "BEST_DEALS",
            "PINNER_FAVORITES": "PINNER_FAVORITES",
            "TOP_SELLERS": "TOP_SELLERS",
            "BACK_IN_STOCK": "BACK_IN_STOCK",
            "NEW_ARRIVALS": "NEW_ARRIVALS",
        }
    ),
    StrSchema
):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.

    Catalog product group type
    """
    
    @classmethod
    @property
    def MERCHANT_CREATED(cls):
        return cls._enum_by_value["MERCHANT_CREATED"]("MERCHANT_CREATED")
    
    @classmethod
    @property
    def ALL_PRODUCTS(cls):
        return cls._enum_by_value["ALL_PRODUCTS"]("ALL_PRODUCTS")
    
    @classmethod
    @property
    def BEST_DEALS(cls):
        return cls._enum_by_value["BEST_DEALS"]("BEST_DEALS")
    
    @classmethod
    @property
    def PINNER_FAVORITES(cls):
        return cls._enum_by_value["PINNER_FAVORITES"]("PINNER_FAVORITES")
    
    @classmethod
    @property
    def TOP_SELLERS(cls):
        return cls._enum_by_value["TOP_SELLERS"]("TOP_SELLERS")
    
    @classmethod
    @property
    def BACK_IN_STOCK(cls):
        return cls._enum_by_value["BACK_IN_STOCK"]("BACK_IN_STOCK")
    
    @classmethod
    @property
    def NEW_ARRIVALS(cls):
        return cls._enum_by_value["NEW_ARRIVALS"]("NEW_ARRIVALS")
