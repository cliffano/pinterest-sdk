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


class AdResponseAllOf(
    DictSchema
):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.

    Creation fields
    """
    
    
    class ad_group_id(
        _SchemaValidator(
            regex=[{
                'pattern': r'^\d+$',  # noqa: E501
            }],
        ),
        StrSchema
    ):
        pass
    
    
    class android_deep_link(
        _SchemaTypeChecker(typing.Union[none_type, str, ]),
        StrBase,
        NoneBase,
        Schema
    ):
    
        def __new__(
            cls,
            *args: typing.Union[str, None, ],
            _instantiation_metadata: typing.Optional[InstantiationMetadata] = None,
        ) -> 'android_deep_link':
            return super().__new__(
                cls,
                *args,
                _instantiation_metadata=_instantiation_metadata,
            )
    
    
    class carousel_android_deep_links(
        _SchemaTypeChecker(typing.Union[tuple, none_type, ]),
        ListBase,
        NoneBase,
        Schema
    ):
    
        def __new__(
            cls,
            *args: typing.Union[list, tuple, None, ],
            _instantiation_metadata: typing.Optional[InstantiationMetadata] = None,
        ) -> 'carousel_android_deep_links':
            return super().__new__(
                cls,
                *args,
                _instantiation_metadata=_instantiation_metadata,
            )
    
    
    class carousel_destination_urls(
        _SchemaTypeChecker(typing.Union[tuple, none_type, ]),
        ListBase,
        NoneBase,
        Schema
    ):
    
        def __new__(
            cls,
            *args: typing.Union[list, tuple, None, ],
            _instantiation_metadata: typing.Optional[InstantiationMetadata] = None,
        ) -> 'carousel_destination_urls':
            return super().__new__(
                cls,
                *args,
                _instantiation_metadata=_instantiation_metadata,
            )
    
    
    class carousel_ios_deep_links(
        _SchemaTypeChecker(typing.Union[tuple, none_type, ]),
        ListBase,
        NoneBase,
        Schema
    ):
    
        def __new__(
            cls,
            *args: typing.Union[list, tuple, None, ],
            _instantiation_metadata: typing.Optional[InstantiationMetadata] = None,
        ) -> 'carousel_ios_deep_links':
            return super().__new__(
                cls,
                *args,
                _instantiation_metadata=_instantiation_metadata,
            )
    
    
    class click_tracking_url(
        _SchemaTypeChecker(typing.Union[none_type, str, ]),
        StrBase,
        NoneBase,
        Schema
    ):
    
        def __new__(
            cls,
            *args: typing.Union[str, None, ],
            _instantiation_metadata: typing.Optional[InstantiationMetadata] = None,
        ) -> 'click_tracking_url':
            return super().__new__(
                cls,
                *args,
                _instantiation_metadata=_instantiation_metadata,
            )
    
    
    class creative_type(
        _SchemaEnumMaker(
            enum_value_to_name={
                "REGULAR": "REGULAR",
                "VIDEO": "VIDEO",
                "SHOPPING": "SHOPPING",
                "CAROUSEL": "CAROUSEL",
                "MAX_VIDEO": "MAX_VIDEO",
                "SHOP_THE_PIN": "SHOP_THE_PIN",
                "STORY": "STORY",
            }
        ),
        StrSchema
    ):
        
        @classmethod
        @property
        def REGULAR(cls):
            return cls._enum_by_value["REGULAR"]("REGULAR")
        
        @classmethod
        @property
        def VIDEO(cls):
            return cls._enum_by_value["VIDEO"]("VIDEO")
        
        @classmethod
        @property
        def SHOPPING(cls):
            return cls._enum_by_value["SHOPPING"]("SHOPPING")
        
        @classmethod
        @property
        def CAROUSEL(cls):
            return cls._enum_by_value["CAROUSEL"]("CAROUSEL")
        
        @classmethod
        @property
        def MAX_VIDEO(cls):
            return cls._enum_by_value["MAX_VIDEO"]("MAX_VIDEO")
        
        @classmethod
        @property
        def SHOP_THE_PIN(cls):
            return cls._enum_by_value["SHOP_THE_PIN"]("SHOP_THE_PIN")
        
        @classmethod
        @property
        def STORY(cls):
            return cls._enum_by_value["STORY"]("STORY")
    
    
    class destination_url(
        _SchemaTypeChecker(typing.Union[none_type, str, ]),
        StrBase,
        NoneBase,
        Schema
    ):
    
        def __new__(
            cls,
            *args: typing.Union[str, None, ],
            _instantiation_metadata: typing.Optional[InstantiationMetadata] = None,
        ) -> 'destination_url':
            return super().__new__(
                cls,
                *args,
                _instantiation_metadata=_instantiation_metadata,
            )
    
    
    class ios_deep_link(
        _SchemaTypeChecker(typing.Union[none_type, str, ]),
        StrBase,
        NoneBase,
        Schema
    ):
    
        def __new__(
            cls,
            *args: typing.Union[str, None, ],
            _instantiation_metadata: typing.Optional[InstantiationMetadata] = None,
        ) -> 'ios_deep_link':
            return super().__new__(
                cls,
                *args,
                _instantiation_metadata=_instantiation_metadata,
            )
    is_pin_deleted = BoolSchema
    is_removable = BoolSchema
    
    
    class name(
        _SchemaTypeChecker(typing.Union[none_type, str, ]),
        StrBase,
        NoneBase,
        Schema
    ):
    
        def __new__(
            cls,
            *args: typing.Union[str, None, ],
            _instantiation_metadata: typing.Optional[InstantiationMetadata] = None,
        ) -> 'name':
            return super().__new__(
                cls,
                *args,
                _instantiation_metadata=_instantiation_metadata,
            )
    
    
    class pin_id(
        _SchemaValidator(
            regex=[{
                'pattern': r'^\d+$',  # noqa: E501
            }],
        ),
        StrSchema
    ):
        pass

    @classmethod
    @property
    def status(cls) -> typing.Type['EntityStatus']:
        return EntityStatus
    
    
    class tracking_urls(
        _SchemaTypeChecker(typing.Union[frozendict, none_type, ]),
        ComposedBase,
        DictBase,
        NoneBase,
        Schema
    ):
    
        @classmethod
        @property
        def _composed_schemas(cls):
            # we need this here to make our import statements work
            # we must store _composed_schemas in here so the code is only run
            # when we invoke this method. If we kept this at the class
            # level we would get an error because the class level
            # code would be run when this module is imported, and these composed
            # classes don't exist yet because their module has not finished
            # loading
            return {
                'allOf': [
                    TrackingUrls,
                ],
                'oneOf': [
                ],
                'anyOf': [
                ],
            }
    
        def __new__(
            cls,
            *args: typing.Union[dict, frozendict, None, ],
            _instantiation_metadata: typing.Optional[InstantiationMetadata] = None,
            **kwargs: typing.Type[Schema],
        ) -> 'tracking_urls':
            return super().__new__(
                cls,
                *args,
                _instantiation_metadata=_instantiation_metadata,
                **kwargs,
            )
    
    
    class view_tracking_url(
        _SchemaTypeChecker(typing.Union[none_type, str, ]),
        StrBase,
        NoneBase,
        Schema
    ):
    
        def __new__(
            cls,
            *args: typing.Union[str, None, ],
            _instantiation_metadata: typing.Optional[InstantiationMetadata] = None,
        ) -> 'view_tracking_url':
            return super().__new__(
                cls,
                *args,
                _instantiation_metadata=_instantiation_metadata,
            )


    def __new__(
        cls,
        *args: typing.Union[dict, frozendict, ],
        ad_group_id: typing.Union[ad_group_id, Unset] = unset,
        android_deep_link: typing.Union[android_deep_link, Unset] = unset,
        carousel_android_deep_links: typing.Union[carousel_android_deep_links, Unset] = unset,
        carousel_destination_urls: typing.Union[carousel_destination_urls, Unset] = unset,
        carousel_ios_deep_links: typing.Union[carousel_ios_deep_links, Unset] = unset,
        click_tracking_url: typing.Union[click_tracking_url, Unset] = unset,
        creative_type: typing.Union[creative_type, Unset] = unset,
        destination_url: typing.Union[destination_url, Unset] = unset,
        ios_deep_link: typing.Union[ios_deep_link, Unset] = unset,
        is_pin_deleted: typing.Union[is_pin_deleted, Unset] = unset,
        is_removable: typing.Union[is_removable, Unset] = unset,
        name: typing.Union[name, Unset] = unset,
        pin_id: typing.Union[pin_id, Unset] = unset,
        status: typing.Union['EntityStatus', Unset] = unset,
        tracking_urls: typing.Union[tracking_urls, Unset] = unset,
        view_tracking_url: typing.Union[view_tracking_url, Unset] = unset,
        _instantiation_metadata: typing.Optional[InstantiationMetadata] = None,
        **kwargs: typing.Type[Schema],
    ) -> 'AdResponseAllOf':
        return super().__new__(
            cls,
            *args,
            ad_group_id=ad_group_id,
            android_deep_link=android_deep_link,
            carousel_android_deep_links=carousel_android_deep_links,
            carousel_destination_urls=carousel_destination_urls,
            carousel_ios_deep_links=carousel_ios_deep_links,
            click_tracking_url=click_tracking_url,
            creative_type=creative_type,
            destination_url=destination_url,
            ios_deep_link=ios_deep_link,
            is_pin_deleted=is_pin_deleted,
            is_removable=is_removable,
            name=name,
            pin_id=pin_id,
            status=status,
            tracking_urls=tracking_urls,
            view_tracking_url=view_tracking_url,
            _instantiation_metadata=_instantiation_metadata,
            **kwargs,
        )

from openapi_client.model.entity_status import EntityStatus
from openapi_client.model.tracking_urls import TrackingUrls
