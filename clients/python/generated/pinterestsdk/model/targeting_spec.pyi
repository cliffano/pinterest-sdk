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


class TargetingSpec(
    schemas.DictSchema
):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.

    Ad group targeting specification defining the ad group target audience. For example, {"APPTYPE":["iphone"], "GENDER":["male"], "LOCALE":["en-US"], "LOCATION":["501"], "AGE_BUCKET":["25-34"]}
    """


    class MetaOapg:
        
        class properties:
            
            
            class AGE_BUCKET(
                schemas.EnumBase,
                schemas.ListBase,
                schemas.NoneBase,
                schemas.Schema,
                schemas.NoneTupleMixin
            ):
            
            
                class MetaOapg:
                    enum_value_to_name = {
                        "18-24": "824",
                        "21+": "1",
                        "25-34": "534",
                        "35-44": "544",
                        "45-49": "549",
                        "50-54": "054",
                        "55-64": "564",
                        "65+": "5",
                    }
                    
                    
                    class items(
                        schemas.EnumBase,
                        schemas.StrSchema
                    ):
                        
                        @schemas.classproperty
                        def 824(cls):
                            return cls("18-24")
                        
                        @schemas.classproperty
                        def 1(cls):
                            return cls("21+")
                        
                        @schemas.classproperty
                        def 534(cls):
                            return cls("25-34")
                        
                        @schemas.classproperty
                        def 544(cls):
                            return cls("35-44")
                        
                        @schemas.classproperty
                        def 549(cls):
                            return cls("45-49")
                        
                        @schemas.classproperty
                        def 054(cls):
                            return cls("50-54")
                        
                        @schemas.classproperty
                        def 564(cls):
                            return cls("55-64")
                        
                        @schemas.classproperty
                        def 5(cls):
                            return cls("65+")
                
                @schemas.classproperty
                def 824(cls):
                    return cls("18-24")
                
                @schemas.classproperty
                def 1(cls):
                    return cls("21+")
                
                @schemas.classproperty
                def 534(cls):
                    return cls("25-34")
                
                @schemas.classproperty
                def 544(cls):
                    return cls("35-44")
                
                @schemas.classproperty
                def 549(cls):
                    return cls("45-49")
                
                @schemas.classproperty
                def 054(cls):
                    return cls("50-54")
                
                @schemas.classproperty
                def 564(cls):
                    return cls("55-64")
                
                @schemas.classproperty
                def 5(cls):
                    return cls("65+")
            
            
                def __new__(
                    cls,
                    *args: typing.Union[list, tuple, None, ],
                    _configuration: typing.Optional[schemas.Configuration] = None,
                ) -> 'AGE_BUCKET':
                    return super().__new__(
                        cls,
                        *args,
                        _configuration=_configuration,
                    )
            
            
            class APPTYPE(
                schemas.EnumBase,
                schemas.ListBase,
                schemas.NoneBase,
                schemas.Schema,
                schemas.NoneTupleMixin
            ):
            
            
                class MetaOapg:
                    enum_value_to_name = {
                        "android_mobile": "ANDROID_MOBILE",
                        "android_tablet": "ANDROID_TABLET",
                        "ipad": "IPAD",
                        "iphone": "IPHONE",
                        "web": "WEB",
                        "web_mobile": "WEB_MOBILE",
                    }
                    
                    
                    class items(
                        schemas.EnumBase,
                        schemas.StrSchema
                    ):
                        
                        @schemas.classproperty
                        def ANDROID_MOBILE(cls):
                            return cls("android_mobile")
                        
                        @schemas.classproperty
                        def ANDROID_TABLET(cls):
                            return cls("android_tablet")
                        
                        @schemas.classproperty
                        def IPAD(cls):
                            return cls("ipad")
                        
                        @schemas.classproperty
                        def IPHONE(cls):
                            return cls("iphone")
                        
                        @schemas.classproperty
                        def WEB(cls):
                            return cls("web")
                        
                        @schemas.classproperty
                        def WEB_MOBILE(cls):
                            return cls("web_mobile")
                
                @schemas.classproperty
                def ANDROID_MOBILE(cls):
                    return cls("android_mobile")
                
                @schemas.classproperty
                def ANDROID_TABLET(cls):
                    return cls("android_tablet")
                
                @schemas.classproperty
                def IPAD(cls):
                    return cls("ipad")
                
                @schemas.classproperty
                def IPHONE(cls):
                    return cls("iphone")
                
                @schemas.classproperty
                def WEB(cls):
                    return cls("web")
                
                @schemas.classproperty
                def WEB_MOBILE(cls):
                    return cls("web_mobile")
            
            
                def __new__(
                    cls,
                    *args: typing.Union[list, tuple, None, ],
                    _configuration: typing.Optional[schemas.Configuration] = None,
                ) -> 'APPTYPE':
                    return super().__new__(
                        cls,
                        *args,
                        _configuration=_configuration,
                    )
            
            
            class AUDIENCE_EXCLUDE(
                schemas.ListBase,
                schemas.NoneBase,
                schemas.Schema,
                schemas.NoneTupleMixin
            ):
            
            
                class MetaOapg:
                    
                    
                    class items(
                        schemas.StrSchema
                    ):
                        pass
            
            
                def __new__(
                    cls,
                    *args: typing.Union[list, tuple, None, ],
                    _configuration: typing.Optional[schemas.Configuration] = None,
                ) -> 'AUDIENCE_EXCLUDE':
                    return super().__new__(
                        cls,
                        *args,
                        _configuration=_configuration,
                    )
            
            
            class audience_include(
                schemas.ListBase,
                schemas.NoneBase,
                schemas.Schema,
                schemas.NoneTupleMixin
            ):
            
            
                class MetaOapg:
                    
                    
                    class items(
                        schemas.StrSchema
                    ):
                        pass
            
            
                def __new__(
                    cls,
                    *args: typing.Union[list, tuple, None, ],
                    _configuration: typing.Optional[schemas.Configuration] = None,
                ) -> 'audience_include':
                    return super().__new__(
                        cls,
                        *args,
                        _configuration=_configuration,
                    )
            
            
            class GENDER(
                schemas.EnumBase,
                schemas.ListBase,
                schemas.NoneBase,
                schemas.Schema,
                schemas.NoneTupleMixin
            ):
            
            
                class MetaOapg:
                    enum_value_to_name = {
                        "unknown": "UNKNOWN",
                        "male": "MALE",
                        "female": "FEMALE",
                    }
                    
                    
                    class items(
                        schemas.EnumBase,
                        schemas.StrSchema
                    ):
                        
                        @schemas.classproperty
                        def UNKNOWN(cls):
                            return cls("unknown")
                        
                        @schemas.classproperty
                        def MALE(cls):
                            return cls("male")
                        
                        @schemas.classproperty
                        def FEMALE(cls):
                            return cls("female")
                
                @schemas.classproperty
                def UNKNOWN(cls):
                    return cls("unknown")
                
                @schemas.classproperty
                def MALE(cls):
                    return cls("male")
                
                @schemas.classproperty
                def FEMALE(cls):
                    return cls("female")
            
            
                def __new__(
                    cls,
                    *args: typing.Union[list, tuple, None, ],
                    _configuration: typing.Optional[schemas.Configuration] = None,
                ) -> 'GENDER':
                    return super().__new__(
                        cls,
                        *args,
                        _configuration=_configuration,
                    )
            
            
            class GEO(
                schemas.ListBase,
                schemas.NoneBase,
                schemas.Schema,
                schemas.NoneTupleMixin
            ):
            
            
                class MetaOapg:
                    items = schemas.StrSchema
            
            
                def __new__(
                    cls,
                    *args: typing.Union[list, tuple, None, ],
                    _configuration: typing.Optional[schemas.Configuration] = None,
                ) -> 'GEO':
                    return super().__new__(
                        cls,
                        *args,
                        _configuration=_configuration,
                    )
            
            
            class INTEREST(
                schemas.ListSchema
            ):
            
            
                class MetaOapg:
                    items = schemas.StrSchema
            
                def __new__(
                    cls,
                    arg: typing.Union[typing.Tuple[typing.Union[MetaOapg.items, str, ]], typing.List[typing.Union[MetaOapg.items, str, ]]],
                    _configuration: typing.Optional[schemas.Configuration] = None,
                ) -> 'INTEREST':
                    return super().__new__(
                        cls,
                        arg,
                        _configuration=_configuration,
                    )
            
                def __getitem__(self, i: int) -> MetaOapg.items:
                    return super().__getitem__(i)
            
            
            class LOCALE(
                schemas.ListBase,
                schemas.NoneBase,
                schemas.Schema,
                schemas.NoneTupleMixin
            ):
            
            
                class MetaOapg:
                    items = schemas.StrSchema
            
            
                def __new__(
                    cls,
                    *args: typing.Union[list, tuple, None, ],
                    _configuration: typing.Optional[schemas.Configuration] = None,
                ) -> 'LOCALE':
                    return super().__new__(
                        cls,
                        *args,
                        _configuration=_configuration,
                    )
            
            
            class LOCATION(
                schemas.ListBase,
                schemas.NoneBase,
                schemas.Schema,
                schemas.NoneTupleMixin
            ):
            
            
                class MetaOapg:
                    items = schemas.StrSchema
            
            
                def __new__(
                    cls,
                    *args: typing.Union[list, tuple, None, ],
                    _configuration: typing.Optional[schemas.Configuration] = None,
                ) -> 'LOCATION':
                    return super().__new__(
                        cls,
                        *args,
                        _configuration=_configuration,
                    )
            
            
            class SHOPPING_RETARGETING(
                schemas.ListBase,
                schemas.NoneBase,
                schemas.Schema,
                schemas.NoneTupleMixin
            ):
            
            
                class MetaOapg:
                    
                    
                    class items(
                        schemas.DictSchema
                    ):
                    
                    
                        class MetaOapg:
                            
                            class properties:
                                lookback_window = schemas.IntSchema
                                
                                
                                class tag_types(
                                    schemas.ListSchema
                                ):
                                
                                
                                    class MetaOapg:
                                        items = schemas.IntSchema
                                
                                    def __new__(
                                        cls,
                                        arg: typing.Union[typing.Tuple[typing.Union[MetaOapg.items, decimal.Decimal, int, ]], typing.List[typing.Union[MetaOapg.items, decimal.Decimal, int, ]]],
                                        _configuration: typing.Optional[schemas.Configuration] = None,
                                    ) -> 'tag_types':
                                        return super().__new__(
                                            cls,
                                            arg,
                                            _configuration=_configuration,
                                        )
                                
                                    def __getitem__(self, i: int) -> MetaOapg.items:
                                        return super().__getitem__(i)
                                exclusion_window = schemas.IntSchema
                                __annotations__ = {
                                    "lookback_window": lookback_window,
                                    "tag_types": tag_types,
                                    "exclusion_window": exclusion_window,
                                }
                        
                        @typing.overload
                        def __getitem__(self, name: typing_extensions.Literal["lookback_window"]) -> MetaOapg.properties.lookback_window: ...
                        
                        @typing.overload
                        def __getitem__(self, name: typing_extensions.Literal["tag_types"]) -> MetaOapg.properties.tag_types: ...
                        
                        @typing.overload
                        def __getitem__(self, name: typing_extensions.Literal["exclusion_window"]) -> MetaOapg.properties.exclusion_window: ...
                        
                        @typing.overload
                        def __getitem__(self, name: str) -> schemas.UnsetAnyTypeSchema: ...
                        
                        def __getitem__(self, name: typing.Union[typing_extensions.Literal["lookback_window", "tag_types", "exclusion_window", ], str]):
                            # dict_instance[name] accessor
                            return super().__getitem__(name)
                        
                        
                        @typing.overload
                        def get_item_oapg(self, name: typing_extensions.Literal["lookback_window"]) -> typing.Union[MetaOapg.properties.lookback_window, schemas.Unset]: ...
                        
                        @typing.overload
                        def get_item_oapg(self, name: typing_extensions.Literal["tag_types"]) -> typing.Union[MetaOapg.properties.tag_types, schemas.Unset]: ...
                        
                        @typing.overload
                        def get_item_oapg(self, name: typing_extensions.Literal["exclusion_window"]) -> typing.Union[MetaOapg.properties.exclusion_window, schemas.Unset]: ...
                        
                        @typing.overload
                        def get_item_oapg(self, name: str) -> typing.Union[schemas.UnsetAnyTypeSchema, schemas.Unset]: ...
                        
                        def get_item_oapg(self, name: typing.Union[typing_extensions.Literal["lookback_window", "tag_types", "exclusion_window", ], str]):
                            return super().get_item_oapg(name)
                        
                    
                        def __new__(
                            cls,
                            *args: typing.Union[dict, frozendict.frozendict, ],
                            lookback_window: typing.Union[MetaOapg.properties.lookback_window, decimal.Decimal, int, schemas.Unset] = schemas.unset,
                            tag_types: typing.Union[MetaOapg.properties.tag_types, list, tuple, schemas.Unset] = schemas.unset,
                            exclusion_window: typing.Union[MetaOapg.properties.exclusion_window, decimal.Decimal, int, schemas.Unset] = schemas.unset,
                            _configuration: typing.Optional[schemas.Configuration] = None,
                            **kwargs: typing.Union[schemas.AnyTypeSchema, dict, frozendict.frozendict, str, date, datetime, uuid.UUID, int, float, decimal.Decimal, None, list, tuple, bytes],
                        ) -> 'items':
                            return super().__new__(
                                cls,
                                *args,
                                lookback_window=lookback_window,
                                tag_types=tag_types,
                                exclusion_window=exclusion_window,
                                _configuration=_configuration,
                                **kwargs,
                            )
            
            
                def __new__(
                    cls,
                    *args: typing.Union[list, tuple, None, ],
                    _configuration: typing.Optional[schemas.Configuration] = None,
                ) -> 'SHOPPING_RETARGETING':
                    return super().__new__(
                        cls,
                        *args,
                        _configuration=_configuration,
                    )
            
            
            class TARGETING_STRATEGY(
                schemas.EnumBase,
                schemas.ListBase,
                schemas.NoneBase,
                schemas.Schema,
                schemas.NoneTupleMixin
            ):
            
            
                class MetaOapg:
                    enum_value_to_name = {
                        "CHOOSE_YOUR_OWN": "CHOOSE_YOUR_OWN",
                        "FIND_NEW_CUSTOMERS": "FIND_NEW_CUSTOMERS",
                        "RECONNECT_WITH_USERS": "RECONNECT_WITH_USERS",
                    }
                    
                    
                    class items(
                        schemas.EnumBase,
                        schemas.StrSchema
                    ):
                        
                        @schemas.classproperty
                        def CHOOSE_YOUR_OWN(cls):
                            return cls("CHOOSE_YOUR_OWN")
                        
                        @schemas.classproperty
                        def FIND_NEW_CUSTOMERS(cls):
                            return cls("FIND_NEW_CUSTOMERS")
                        
                        @schemas.classproperty
                        def RECONNECT_WITH_USERS(cls):
                            return cls("RECONNECT_WITH_USERS")
                
                @schemas.classproperty
                def CHOOSE_YOUR_OWN(cls):
                    return cls("CHOOSE_YOUR_OWN")
                
                @schemas.classproperty
                def FIND_NEW_CUSTOMERS(cls):
                    return cls("FIND_NEW_CUSTOMERS")
                
                @schemas.classproperty
                def RECONNECT_WITH_USERS(cls):
                    return cls("RECONNECT_WITH_USERS")
            
            
                def __new__(
                    cls,
                    *args: typing.Union[list, tuple, None, ],
                    _configuration: typing.Optional[schemas.Configuration] = None,
                ) -> 'TARGETING_STRATEGY':
                    return super().__new__(
                        cls,
                        *args,
                        _configuration=_configuration,
                    )
            __annotations__ = {
                "AGE_BUCKET": AGE_BUCKET,
                "APPTYPE": APPTYPE,
                "AUDIENCE_EXCLUDE": AUDIENCE_EXCLUDE,
                "AUDIENCE_INCLUDE'": audience_include,
                "GENDER": GENDER,
                "GEO": GEO,
                "INTEREST": INTEREST,
                "LOCALE": LOCALE,
                "LOCATION": LOCATION,
                "SHOPPING_RETARGETING": SHOPPING_RETARGETING,
                "TARGETING_STRATEGY": TARGETING_STRATEGY,
            }
    
    @typing.overload
    def __getitem__(self, name: typing_extensions.Literal["AGE_BUCKET"]) -> MetaOapg.properties.AGE_BUCKET: ...
    
    @typing.overload
    def __getitem__(self, name: typing_extensions.Literal["APPTYPE"]) -> MetaOapg.properties.APPTYPE: ...
    
    @typing.overload
    def __getitem__(self, name: typing_extensions.Literal["AUDIENCE_EXCLUDE"]) -> MetaOapg.properties.AUDIENCE_EXCLUDE: ...
    
    @typing.overload
    def __getitem__(self, name: typing_extensions.Literal["AUDIENCE_INCLUDE'"]) -> MetaOapg.properties.audience_include: ...
    
    @typing.overload
    def __getitem__(self, name: typing_extensions.Literal["GENDER"]) -> MetaOapg.properties.GENDER: ...
    
    @typing.overload
    def __getitem__(self, name: typing_extensions.Literal["GEO"]) -> MetaOapg.properties.GEO: ...
    
    @typing.overload
    def __getitem__(self, name: typing_extensions.Literal["INTEREST"]) -> MetaOapg.properties.INTEREST: ...
    
    @typing.overload
    def __getitem__(self, name: typing_extensions.Literal["LOCALE"]) -> MetaOapg.properties.LOCALE: ...
    
    @typing.overload
    def __getitem__(self, name: typing_extensions.Literal["LOCATION"]) -> MetaOapg.properties.LOCATION: ...
    
    @typing.overload
    def __getitem__(self, name: typing_extensions.Literal["SHOPPING_RETARGETING"]) -> MetaOapg.properties.SHOPPING_RETARGETING: ...
    
    @typing.overload
    def __getitem__(self, name: typing_extensions.Literal["TARGETING_STRATEGY"]) -> MetaOapg.properties.TARGETING_STRATEGY: ...
    
    @typing.overload
    def __getitem__(self, name: str) -> schemas.UnsetAnyTypeSchema: ...
    
    def __getitem__(self, name: typing.Union[typing_extensions.Literal["AGE_BUCKET", "APPTYPE", "AUDIENCE_EXCLUDE", "AUDIENCE_INCLUDE'", "GENDER", "GEO", "INTEREST", "LOCALE", "LOCATION", "SHOPPING_RETARGETING", "TARGETING_STRATEGY", ], str]):
        # dict_instance[name] accessor
        return super().__getitem__(name)
    
    
    @typing.overload
    def get_item_oapg(self, name: typing_extensions.Literal["AGE_BUCKET"]) -> typing.Union[MetaOapg.properties.AGE_BUCKET, schemas.Unset]: ...
    
    @typing.overload
    def get_item_oapg(self, name: typing_extensions.Literal["APPTYPE"]) -> typing.Union[MetaOapg.properties.APPTYPE, schemas.Unset]: ...
    
    @typing.overload
    def get_item_oapg(self, name: typing_extensions.Literal["AUDIENCE_EXCLUDE"]) -> typing.Union[MetaOapg.properties.AUDIENCE_EXCLUDE, schemas.Unset]: ...
    
    @typing.overload
    def get_item_oapg(self, name: typing_extensions.Literal["AUDIENCE_INCLUDE'"]) -> typing.Union[MetaOapg.properties.audience_include, schemas.Unset]: ...
    
    @typing.overload
    def get_item_oapg(self, name: typing_extensions.Literal["GENDER"]) -> typing.Union[MetaOapg.properties.GENDER, schemas.Unset]: ...
    
    @typing.overload
    def get_item_oapg(self, name: typing_extensions.Literal["GEO"]) -> typing.Union[MetaOapg.properties.GEO, schemas.Unset]: ...
    
    @typing.overload
    def get_item_oapg(self, name: typing_extensions.Literal["INTEREST"]) -> typing.Union[MetaOapg.properties.INTEREST, schemas.Unset]: ...
    
    @typing.overload
    def get_item_oapg(self, name: typing_extensions.Literal["LOCALE"]) -> typing.Union[MetaOapg.properties.LOCALE, schemas.Unset]: ...
    
    @typing.overload
    def get_item_oapg(self, name: typing_extensions.Literal["LOCATION"]) -> typing.Union[MetaOapg.properties.LOCATION, schemas.Unset]: ...
    
    @typing.overload
    def get_item_oapg(self, name: typing_extensions.Literal["SHOPPING_RETARGETING"]) -> typing.Union[MetaOapg.properties.SHOPPING_RETARGETING, schemas.Unset]: ...
    
    @typing.overload
    def get_item_oapg(self, name: typing_extensions.Literal["TARGETING_STRATEGY"]) -> typing.Union[MetaOapg.properties.TARGETING_STRATEGY, schemas.Unset]: ...
    
    @typing.overload
    def get_item_oapg(self, name: str) -> typing.Union[schemas.UnsetAnyTypeSchema, schemas.Unset]: ...
    
    def get_item_oapg(self, name: typing.Union[typing_extensions.Literal["AGE_BUCKET", "APPTYPE", "AUDIENCE_EXCLUDE", "AUDIENCE_INCLUDE'", "GENDER", "GEO", "INTEREST", "LOCALE", "LOCATION", "SHOPPING_RETARGETING", "TARGETING_STRATEGY", ], str]):
        return super().get_item_oapg(name)
    

    def __new__(
        cls,
        *args: typing.Union[dict, frozendict.frozendict, ],
        AGE_BUCKET: typing.Union[MetaOapg.properties.AGE_BUCKET, list, tuple, None, schemas.Unset] = schemas.unset,
        APPTYPE: typing.Union[MetaOapg.properties.APPTYPE, list, tuple, None, schemas.Unset] = schemas.unset,
        AUDIENCE_EXCLUDE: typing.Union[MetaOapg.properties.AUDIENCE_EXCLUDE, list, tuple, None, schemas.Unset] = schemas.unset,
        GENDER: typing.Union[MetaOapg.properties.GENDER, list, tuple, None, schemas.Unset] = schemas.unset,
        GEO: typing.Union[MetaOapg.properties.GEO, list, tuple, None, schemas.Unset] = schemas.unset,
        INTEREST: typing.Union[MetaOapg.properties.INTEREST, list, tuple, schemas.Unset] = schemas.unset,
        LOCALE: typing.Union[MetaOapg.properties.LOCALE, list, tuple, None, schemas.Unset] = schemas.unset,
        LOCATION: typing.Union[MetaOapg.properties.LOCATION, list, tuple, None, schemas.Unset] = schemas.unset,
        SHOPPING_RETARGETING: typing.Union[MetaOapg.properties.SHOPPING_RETARGETING, list, tuple, None, schemas.Unset] = schemas.unset,
        TARGETING_STRATEGY: typing.Union[MetaOapg.properties.TARGETING_STRATEGY, list, tuple, None, schemas.Unset] = schemas.unset,
        _configuration: typing.Optional[schemas.Configuration] = None,
        **kwargs: typing.Union[schemas.AnyTypeSchema, dict, frozendict.frozendict, str, date, datetime, uuid.UUID, int, float, decimal.Decimal, None, list, tuple, bytes],
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
