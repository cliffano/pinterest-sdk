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


class BudgetType(
    schemas.EnumBase,
    schemas.StrSchema
):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.

    Budget type. If DAILY, an ad group's daily spend will not exceed the budget parameter value. If LIFETIME, the end_time parameter is **REQUIRED**, and the ad group spend is spread evenly between the ad group `start_time` and `end_time` range. A CBO campaign automatically generates ad group budgets from its campaign budget to maximize campaign outcome.
    """


    class MetaOapg:
        enum_value_to_name = {
            "DAILY": "DAILY",
            "LIFETIME": "LIFETIME",
            "CBO_ADGROUP": "CBO_ADGROUP",
        }
    
    @schemas.classproperty
    def DAILY(cls):
        return cls("DAILY")
    
    @schemas.classproperty
    def LIFETIME(cls):
        return cls("LIFETIME")
    
    @schemas.classproperty
    def CBO_ADGROUP(cls):
        return cls("CBO_ADGROUP")
