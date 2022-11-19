# coding: utf-8

"""
    Pinterest REST API

    Pinterest's REST API  # noqa: E501

    The version of the OpenAPI document: 5.6.0
    Contact: blah@cliffano.com
    Generated by: https://openapi-generator.tech
"""

from datetime import date, datetime  # noqa: F401
import decimal  # noqa: F401
import functools  # noqa: F401
import io  # noqa: F401
import re  # noqa: F401
import typing  # noqa: F401
import typing_extensions  # noqa: F401
import uuid  # noqa: F401

import frozendict  # noqa: F401

from pinterestsdk import schemas  # noqa: F401


class ProductAvailabilityType(
    schemas.EnumBase,
    schemas.StrBase,
    schemas.NoneBase,
    schemas.Schema,
    schemas.NoneStrMixin
):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.

    Default availability for products in a feed.
    """


    class MetaOapg:
        enum_value_to_name = {
            "IN_STOCK": "IN_STOCK",
            "OUT_OF_STOCK": "OUT_OF_STOCK",
            "PREORDER": "PREORDER",
            schemas.NoneClass.NONE: "NONE",
        }
    
    @schemas.classproperty
    def IN_STOCK(cls):
        return cls("IN_STOCK")
    
    @schemas.classproperty
    def OUT_OF_STOCK(cls):
        return cls("OUT_OF_STOCK")
    
    @schemas.classproperty
    def PREORDER(cls):
        return cls("PREORDER")
    
    @schemas.classproperty
    def NONE(cls):
        return cls(None)


    def __new__(
        cls,
        *args: typing.Union[None, str, ],
        _configuration: typing.Optional[schemas.Configuration] = None,
    ) -> 'ProductAvailabilityType':
        return super().__new__(
            cls,
            *args,
            _configuration=_configuration,
        )
