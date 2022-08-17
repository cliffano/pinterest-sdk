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


class TargetingSpec(
    DictSchema
):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.

    Ad group targeting specification defining the ad group target audience. For example, {"APPTYPE":["iphone"], "GENDER":["male"], "LOCALE":["en-US"], "LOCATION":["501"], "AGE_BUCKET":["25-34"]}
    """
    
    
    class AGE_BUCKET(
        _SchemaTypeChecker(typing.Union[tuple, none_type, ]),
        _SchemaEnumMaker(
            enum_value_to_name={
                None: "NONE",
                "18-24": "824",
                "21+": "1",
                "25-34": "534",
                "35-44": "544",
                "45-49": "549",
                "50-54": "054",
                "55-64": "564",
                "65+": "5",
            }
        ),
        ListBase,
        NoneBase,
        Schema
    ):
        
        @classmethod
        @property
        def NONE(cls):
            return cls._enum_by_value[None](None)
        
        @classmethod
        @property
        def 824(cls):
            return cls("18-24")
        
        @classmethod
        @property
        def 1(cls):
            return cls("21+")
        
        @classmethod
        @property
        def 534(cls):
            return cls("25-34")
        
        @classmethod
        @property
        def 544(cls):
            return cls("35-44")
        
        @classmethod
        @property
        def 549(cls):
            return cls("45-49")
        
        @classmethod
        @property
        def 054(cls):
            return cls("50-54")
        
        @classmethod
        @property
        def 564(cls):
            return cls("55-64")
        
        @classmethod
        @property
        def 5(cls):
            return cls("65+")
    
        def __new__(
            cls,
            *args: typing.Union[list, tuple, None, ],
            _configuration: typing.Optional[Configuration] = None,
        ) -> 'AGE_BUCKET':
            return super().__new__(
                cls,
                *args,
                _configuration=_configuration,
            )
    
    
    class APPTYPE(
        _SchemaTypeChecker(typing.Union[tuple, none_type, ]),
        _SchemaEnumMaker(
            enum_value_to_name={
                None: "NONE",
                "android_mobile": "ANDROID_MOBILE",
                "android_tablet": "ANDROID_TABLET",
                "ipad": "IPAD",
                "iphone": "IPHONE",
                "web": "WEB",
                "web_mobile": "WEB_MOBILE",
            }
        ),
        ListBase,
        NoneBase,
        Schema
    ):
        
        @classmethod
        @property
        def NONE(cls):
            return cls._enum_by_value[None](None)
        
        @classmethod
        @property
        def ANDROID_MOBILE(cls):
            return cls("android_mobile")
        
        @classmethod
        @property
        def ANDROID_TABLET(cls):
            return cls("android_tablet")
        
        @classmethod
        @property
        def IPAD(cls):
            return cls("ipad")
        
        @classmethod
        @property
        def IPHONE(cls):
            return cls("iphone")
        
        @classmethod
        @property
        def WEB(cls):
            return cls("web")
        
        @classmethod
        @property
        def WEB_MOBILE(cls):
            return cls("web_mobile")
    
        def __new__(
            cls,
            *args: typing.Union[list, tuple, None, ],
            _configuration: typing.Optional[Configuration] = None,
        ) -> 'APPTYPE':
            return super().__new__(
                cls,
                *args,
                _configuration=_configuration,
            )
    
    
    class AUDIENCE_EXCLUDE(
        _SchemaTypeChecker(typing.Union[tuple, none_type, ]),
        ListBase,
        NoneBase,
        Schema
    ):
    
        def __new__(
            cls,
            *args: typing.Union[list, tuple, None, ],
            _configuration: typing.Optional[Configuration] = None,
        ) -> 'AUDIENCE_EXCLUDE':
            return super().__new__(
                cls,
                *args,
                _configuration=_configuration,
            )
    
    
    class audience_include(
        _SchemaTypeChecker(typing.Union[tuple, none_type, ]),
        ListBase,
        NoneBase,
        Schema
    ):
    
        def __new__(
            cls,
            *args: typing.Union[list, tuple, None, ],
            _configuration: typing.Optional[Configuration] = None,
        ) -> 'audience_include':
            return super().__new__(
                cls,
                *args,
                _configuration=_configuration,
            )
    
    
    class GENDER(
        _SchemaTypeChecker(typing.Union[tuple, none_type, ]),
        _SchemaEnumMaker(
            enum_value_to_name={
                None: "NONE",
                "unknown": "UNKNOWN",
                "male": "MALE",
                "female": "FEMALE",
            }
        ),
        ListBase,
        NoneBase,
        Schema
    ):
        
        @classmethod
        @property
        def NONE(cls):
            return cls._enum_by_value[None](None)
        
        @classmethod
        @property
        def UNKNOWN(cls):
            return cls("unknown")
        
        @classmethod
        @property
        def MALE(cls):
            return cls("male")
        
        @classmethod
        @property
        def FEMALE(cls):
            return cls("female")
    
        def __new__(
            cls,
            *args: typing.Union[list, tuple, None, ],
            _configuration: typing.Optional[Configuration] = None,
        ) -> 'GENDER':
            return super().__new__(
                cls,
                *args,
                _configuration=_configuration,
            )
    
    
    class GEO(
        _SchemaTypeChecker(typing.Union[tuple, none_type, ]),
        ListBase,
        NoneBase,
        Schema
    ):
    
        def __new__(
            cls,
            *args: typing.Union[list, tuple, None, ],
            _configuration: typing.Optional[Configuration] = None,
        ) -> 'GEO':
            return super().__new__(
                cls,
                *args,
                _configuration=_configuration,
            )
    
    
    class INTEREST(
        ListSchema
    ):
        _items = StrSchema
    
    
    class LOCALE(
        _SchemaTypeChecker(typing.Union[tuple, none_type, ]),
        ListBase,
        NoneBase,
        Schema
    ):
    
        def __new__(
            cls,
            *args: typing.Union[list, tuple, None, ],
            _configuration: typing.Optional[Configuration] = None,
        ) -> 'LOCALE':
            return super().__new__(
                cls,
                *args,
                _configuration=_configuration,
            )
    
    
    class LOCATION(
        _SchemaTypeChecker(typing.Union[tuple, none_type, ]),
        ListBase,
        NoneBase,
        Schema
    ):
    
        def __new__(
            cls,
            *args: typing.Union[list, tuple, None, ],
            _configuration: typing.Optional[Configuration] = None,
        ) -> 'LOCATION':
            return super().__new__(
                cls,
                *args,
                _configuration=_configuration,
            )
    
    
    class SHOPPING_RETARGETING(
        _SchemaTypeChecker(typing.Union[tuple, none_type, ]),
        ListBase,
        NoneBase,
        Schema
    ):
    
        def __new__(
            cls,
            *args: typing.Union[list, tuple, None, ],
            _configuration: typing.Optional[Configuration] = None,
        ) -> 'SHOPPING_RETARGETING':
            return super().__new__(
                cls,
                *args,
                _configuration=_configuration,
            )
    
    
    class TARGETING_STRATEGY(
        _SchemaTypeChecker(typing.Union[tuple, none_type, ]),
        _SchemaEnumMaker(
            enum_value_to_name={
                None: "NONE",
                "CHOOSE_YOUR_OWN": "CHOOSE_YOUR_OWN",
                "FIND_NEW_CUSTOMERS": "FIND_NEW_CUSTOMERS",
                "RECONNECT_WITH_USERS": "RECONNECT_WITH_USERS",
            }
        ),
        ListBase,
        NoneBase,
        Schema
    ):
        
        @classmethod
        @property
        def NONE(cls):
            return cls._enum_by_value[None](None)
        
        @classmethod
        @property
        def CHOOSE_YOUR_OWN(cls):
            return cls("CHOOSE_YOUR_OWN")
        
        @classmethod
        @property
        def FIND_NEW_CUSTOMERS(cls):
            return cls("FIND_NEW_CUSTOMERS")
        
        @classmethod
        @property
        def RECONNECT_WITH_USERS(cls):
            return cls("RECONNECT_WITH_USERS")
    
        def __new__(
            cls,
            *args: typing.Union[list, tuple, None, ],
            _configuration: typing.Optional[Configuration] = None,
        ) -> 'TARGETING_STRATEGY':
            return super().__new__(
                cls,
                *args,
                _configuration=_configuration,
            )


    def __new__(
        cls,
        *args: typing.Union[dict, frozendict, ],
        AGE_BUCKET: typing.Union[AGE_BUCKET, Unset] = unset,
        APPTYPE: typing.Union[APPTYPE, Unset] = unset,
        AUDIENCE_EXCLUDE: typing.Union[AUDIENCE_EXCLUDE, Unset] = unset,
        GENDER: typing.Union[GENDER, Unset] = unset,
        GEO: typing.Union[GEO, Unset] = unset,
        INTEREST: typing.Union[INTEREST, Unset] = unset,
        LOCALE: typing.Union[LOCALE, Unset] = unset,
        LOCATION: typing.Union[LOCATION, Unset] = unset,
        SHOPPING_RETARGETING: typing.Union[SHOPPING_RETARGETING, Unset] = unset,
        TARGETING_STRATEGY: typing.Union[TARGETING_STRATEGY, Unset] = unset,
        _configuration: typing.Optional[Configuration] = None,
        **kwargs: typing.Type[Schema],
    ) -> 'TargetingSpec':
        return super().__new__(
            cls,
            *args,
            AGE_BUCKET=AGE_BUCKET,
            APPTYPE=APPTYPE,
            AUDIENCE_EXCLUDE=AUDIENCE_EXCLUDE,
            GENDER=GENDER,
            GEO=GEO,
            INTEREST=INTEREST,
            LOCALE=LOCALE,
            LOCATION=LOCATION,
            SHOPPING_RETARGETING=SHOPPING_RETARGETING,
            TARGETING_STRATEGY=TARGETING_STRATEGY,
            _configuration=_configuration,
            **kwargs,
        )