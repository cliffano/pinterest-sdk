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


class CatalogsFeedsCreateRequest(
    schemas.DictSchema
):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.

    Request object for creating a feed. Please, be aware that "default_country" and "default_locale" are not required in the spec for forward compatibility but for now the API will not accept requests without those fields.
    """


    class MetaOapg:
        required = {
            "format",
            "name",
            "location",
        }
        
        class properties:
            name = schemas.StrSchema
        
            @staticmethod
            def format() -> typing.Type['CatalogsFormat']:
                return CatalogsFormat
            
            
            class location(
                schemas.StrSchema
            ):
            
            
                class MetaOapg:
                    regex=[{
                        'pattern': r'^(http|https|ftp|sftp):/',  # noqa: E501
                    }]
        
            @staticmethod
            def default_country() -> typing.Type['Country']:
                return Country
        
            @staticmethod
            def default_availability() -> typing.Type['ProductAvailabilityType']:
                return ProductAvailabilityType
        
            @staticmethod
            def default_currency() -> typing.Type['NullableCurrency']:
                return NullableCurrency
            default_locale = schemas.StrSchema
        
            @staticmethod
            def credentials() -> typing.Type['CatalogsFeedCredentials']:
                return CatalogsFeedCredentials
        
            @staticmethod
            def preferred_processing_schedule() -> typing.Type['CatalogsFeedProcessingSchedule']:
                return CatalogsFeedProcessingSchedule
            __annotations__ = {
                "name": name,
                "format": format,
                "location": location,
                "default_country": default_country,
                "default_availability": default_availability,
                "default_currency": default_currency,
                "default_locale": default_locale,
                "credentials": credentials,
                "preferred_processing_schedule": preferred_processing_schedule,
            }
    
    format: 'CatalogsFormat'
    name: MetaOapg.properties.name
    location: MetaOapg.properties.location
    
    @typing.overload
    def __getitem__(self, name: typing_extensions.Literal["name"]) -> MetaOapg.properties.name: ...
    
    @typing.overload
    def __getitem__(self, name: typing_extensions.Literal["format"]) -> 'CatalogsFormat': ...
    
    @typing.overload
    def __getitem__(self, name: typing_extensions.Literal["location"]) -> MetaOapg.properties.location: ...
    
    @typing.overload
    def __getitem__(self, name: typing_extensions.Literal["default_country"]) -> 'Country': ...
    
    @typing.overload
    def __getitem__(self, name: typing_extensions.Literal["default_availability"]) -> 'ProductAvailabilityType': ...
    
    @typing.overload
    def __getitem__(self, name: typing_extensions.Literal["default_currency"]) -> 'NullableCurrency': ...
    
    @typing.overload
    def __getitem__(self, name: typing_extensions.Literal["default_locale"]) -> MetaOapg.properties.default_locale: ...
    
    @typing.overload
    def __getitem__(self, name: typing_extensions.Literal["credentials"]) -> 'CatalogsFeedCredentials': ...
    
    @typing.overload
    def __getitem__(self, name: typing_extensions.Literal["preferred_processing_schedule"]) -> 'CatalogsFeedProcessingSchedule': ...
    
    @typing.overload
    def __getitem__(self, name: str) -> schemas.UnsetAnyTypeSchema: ...
    
    def __getitem__(self, name: typing.Union[typing_extensions.Literal["name", "format", "location", "default_country", "default_availability", "default_currency", "default_locale", "credentials", "preferred_processing_schedule", ], str]):
        # dict_instance[name] accessor
        return super().__getitem__(name)
    
    
    @typing.overload
    def get_item_oapg(self, name: typing_extensions.Literal["name"]) -> MetaOapg.properties.name: ...
    
    @typing.overload
    def get_item_oapg(self, name: typing_extensions.Literal["format"]) -> 'CatalogsFormat': ...
    
    @typing.overload
    def get_item_oapg(self, name: typing_extensions.Literal["location"]) -> MetaOapg.properties.location: ...
    
    @typing.overload
    def get_item_oapg(self, name: typing_extensions.Literal["default_country"]) -> typing.Union['Country', schemas.Unset]: ...
    
    @typing.overload
    def get_item_oapg(self, name: typing_extensions.Literal["default_availability"]) -> typing.Union['ProductAvailabilityType', schemas.Unset]: ...
    
    @typing.overload
    def get_item_oapg(self, name: typing_extensions.Literal["default_currency"]) -> typing.Union['NullableCurrency', schemas.Unset]: ...
    
    @typing.overload
    def get_item_oapg(self, name: typing_extensions.Literal["default_locale"]) -> typing.Union[MetaOapg.properties.default_locale, schemas.Unset]: ...
    
    @typing.overload
    def get_item_oapg(self, name: typing_extensions.Literal["credentials"]) -> typing.Union['CatalogsFeedCredentials', schemas.Unset]: ...
    
    @typing.overload
    def get_item_oapg(self, name: typing_extensions.Literal["preferred_processing_schedule"]) -> typing.Union['CatalogsFeedProcessingSchedule', schemas.Unset]: ...
    
    @typing.overload
    def get_item_oapg(self, name: str) -> typing.Union[schemas.UnsetAnyTypeSchema, schemas.Unset]: ...
    
    def get_item_oapg(self, name: typing.Union[typing_extensions.Literal["name", "format", "location", "default_country", "default_availability", "default_currency", "default_locale", "credentials", "preferred_processing_schedule", ], str]):
        return super().get_item_oapg(name)
    

    def __new__(
        cls,
        *args: typing.Union[dict, frozendict.frozendict, ],
        format: 'CatalogsFormat',
        name: typing.Union[MetaOapg.properties.name, str, ],
        location: typing.Union[MetaOapg.properties.location, str, ],
        default_country: typing.Union['Country', schemas.Unset] = schemas.unset,
        default_availability: typing.Union['ProductAvailabilityType', schemas.Unset] = schemas.unset,
        default_currency: typing.Union['NullableCurrency', schemas.Unset] = schemas.unset,
        default_locale: typing.Union[MetaOapg.properties.default_locale, str, schemas.Unset] = schemas.unset,
        credentials: typing.Union['CatalogsFeedCredentials', schemas.Unset] = schemas.unset,
        preferred_processing_schedule: typing.Union['CatalogsFeedProcessingSchedule', schemas.Unset] = schemas.unset,
        _configuration: typing.Optional[schemas.Configuration] = None,
        **kwargs: typing.Union[schemas.AnyTypeSchema, dict, frozendict.frozendict, str, date, datetime, uuid.UUID, int, float, decimal.Decimal, None, list, tuple, bytes],
    ) -> 'CatalogsFeedsCreateRequest':
        return super().__new__(
            cls,
            *args,
            format=format,
            name=name,
            location=location,
            default_country=default_country,
            default_availability=default_availability,
            default_currency=default_currency,
            default_locale=default_locale,
            credentials=credentials,
            preferred_processing_schedule=preferred_processing_schedule,
            _configuration=_configuration,
            **kwargs,
        )

from pinterestsdk.model.catalogs_feed_credentials import CatalogsFeedCredentials
from pinterestsdk.model.catalogs_feed_processing_schedule import CatalogsFeedProcessingSchedule
from pinterestsdk.model.catalogs_format import CatalogsFormat
from pinterestsdk.model.country import Country
from pinterestsdk.model.nullable_currency import NullableCurrency
from pinterestsdk.model.product_availability_type import ProductAvailabilityType
