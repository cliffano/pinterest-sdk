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


class PacingDeliveryType(
    schemas.EnumBase,
    schemas.StrSchema
):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.

    Ad group pacing delivery type
    """


    class MetaOapg:
        enum_value_to_name = {
            "STANDARD": "STANDARD",
            "ACCELERATED": "ACCELERATED",
        }
    
    @schemas.classproperty
    def STANDARD(cls):
        return cls("STANDARD")
    
    @schemas.classproperty
    def ACCELERATED(cls):
        return cls("ACCELERATED")
