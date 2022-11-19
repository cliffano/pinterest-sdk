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


class ObjectiveType(
    schemas.EnumBase,
    schemas.StrSchema
):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.

    Campaign objective type. ["WEB_SESSIONS"] in BETA.
    """
    
    @schemas.classproperty
    def AWARENESS(cls):
        return cls("AWARENESS")
    
    @schemas.classproperty
    def CONSIDERATION(cls):
        return cls("CONSIDERATION")
    
    @schemas.classproperty
    def VIDEO_VIEW(cls):
        return cls("VIDEO_VIEW")
    
    @schemas.classproperty
    def WEB_CONVERSION(cls):
        return cls("WEB_CONVERSION")
    
    @schemas.classproperty
    def CATALOG_SALES(cls):
        return cls("CATALOG_SALES")
    
    @schemas.classproperty
    def WEB_SESSIONS(cls):
        return cls("WEB_SESSIONS")
