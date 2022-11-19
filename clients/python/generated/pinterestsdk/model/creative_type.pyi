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


class CreativeType(
    schemas.EnumBase,
    schemas.StrSchema
):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.

    Ad creative type enum
    """
    
    @schemas.classproperty
    def REGULAR(cls):
        return cls("REGULAR")
    
    @schemas.classproperty
    def VIDEO(cls):
        return cls("VIDEO")
    
    @schemas.classproperty
    def SHOPPING(cls):
        return cls("SHOPPING")
    
    @schemas.classproperty
    def CAROUSEL(cls):
        return cls("CAROUSEL")
    
    @schemas.classproperty
    def MAX_VIDEO(cls):
        return cls("MAX_VIDEO")
    
    @schemas.classproperty
    def SHOP_THE_PIN(cls):
        return cls("SHOP_THE_PIN")
    
    @schemas.classproperty
    def IDEA(cls):
        return cls("IDEA")
