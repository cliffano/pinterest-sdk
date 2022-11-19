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


class AdsAnalyticsTargetingType(
    schemas.EnumBase,
    schemas.StrSchema
):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.

    Reporting targeting type
    """


    class MetaOapg:
        enum_value_to_name = {
            "KEYWORD": "KEYWORD",
            "APPTYPE": "APPTYPE",
            "GENDER": "GENDER",
            "LOCATION": "LOCATION",
            "PLACEMENT": "PLACEMENT",
            "COUNTRY": "COUNTRY",
            "TARGETED_INTEREST": "TARGETED_INTEREST",
            "PINNER_INTEREST": "PINNER_INTEREST",
            "AUDIENCE_INCLUDE": "AUDIENCE_INCLUDE",
            "AUDIENCE_EXCLUDE": "AUDIENCE_EXCLUDE",
            "GEO": "GEO",
            "AGE_BUCKET": "AGE_BUCKET",
            "REGION": "REGION",
        }
    
    @schemas.classproperty
    def KEYWORD(cls):
        return cls("KEYWORD")
    
    @schemas.classproperty
    def APPTYPE(cls):
        return cls("APPTYPE")
    
    @schemas.classproperty
    def GENDER(cls):
        return cls("GENDER")
    
    @schemas.classproperty
    def LOCATION(cls):
        return cls("LOCATION")
    
    @schemas.classproperty
    def PLACEMENT(cls):
        return cls("PLACEMENT")
    
    @schemas.classproperty
    def COUNTRY(cls):
        return cls("COUNTRY")
    
    @schemas.classproperty
    def TARGETED_INTEREST(cls):
        return cls("TARGETED_INTEREST")
    
    @schemas.classproperty
    def PINNER_INTEREST(cls):
        return cls("PINNER_INTEREST")
    
    @schemas.classproperty
    def AUDIENCE_INCLUDE(cls):
        return cls("AUDIENCE_INCLUDE")
    
    @schemas.classproperty
    def AUDIENCE_EXCLUDE(cls):
        return cls("AUDIENCE_EXCLUDE")
    
    @schemas.classproperty
    def GEO(cls):
        return cls("GEO")
    
    @schemas.classproperty
    def AGE_BUCKET(cls):
        return cls("AGE_BUCKET")
    
    @schemas.classproperty
    def REGION(cls):
        return cls("REGION")
