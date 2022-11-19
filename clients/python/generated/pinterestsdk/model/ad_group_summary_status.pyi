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


class AdGroupSummaryStatus(
    schemas.EnumBase,
    schemas.StrSchema
):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.

    Summary status for ad group
    """
    
    @schemas.classproperty
    def RUNNING(cls):
        return cls("RUNNING")
    
    @schemas.classproperty
    def PAUSED(cls):
        return cls("PAUSED")
    
    @schemas.classproperty
    def NOT_STARTED(cls):
        return cls("NOT_STARTED")
    
    @schemas.classproperty
    def COMPLETED(cls):
        return cls("COMPLETED")
    
    @schemas.classproperty
    def ADVERTISER_DISABLED(cls):
        return cls("ADVERTISER_DISABLED")
    
    @schemas.classproperty
    def ARCHIVED(cls):
        return cls("ARCHIVED")
