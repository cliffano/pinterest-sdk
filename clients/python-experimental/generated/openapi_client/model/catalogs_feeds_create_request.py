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


class CatalogsFeedsCreateRequest(
    DictSchema
):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.

    Request object for creating a feed. Please, be aware that "default_country" and "default_locale" are not required in the spec for forward compatibility but for now the API will not accept requests without those fields.
    """
    _required_property_names = set((
        'name',
        'format',
        'location',
    ))

    @classmethod
    @property
    def default_country(cls) -> typing.Type['Country']:
        return Country

    @classmethod
    @property
    def default_availability(cls) -> typing.Type['ProductAvailabilityType']:
        return ProductAvailabilityType

    @classmethod
    @property
    def default_currency(cls) -> typing.Type['NullableCurrency']:
        return NullableCurrency
    name = StrSchema

    @classmethod
    @property
    def format(cls) -> typing.Type['CatalogsFormat']:
        return CatalogsFormat
    default_locale = StrSchema

    @classmethod
    @property
    def credentials(cls) -> typing.Type['CatalogsFeedCredentials']:
        return CatalogsFeedCredentials
    
    
    class location(
        _SchemaValidator(
            regex=[{
                'pattern': r'^(http|https|ftp|sftp):\/\/',  # noqa: E501
            }],
        ),
        StrSchema
    ):
        pass

    @classmethod
    @property
    def preferred_processing_schedule(cls) -> typing.Type['CatalogsFeedProcessingSchedule']:
        return CatalogsFeedProcessingSchedule


    def __new__(
        cls,
        *args: typing.Union[dict, frozendict, ],
        name: name,
        format: format,
        location: location,
        default_country: typing.Union['Country', Unset] = unset,
        default_availability: typing.Union['ProductAvailabilityType', Unset] = unset,
        default_currency: typing.Union['NullableCurrency', Unset] = unset,
        default_locale: typing.Union[default_locale, Unset] = unset,
        credentials: typing.Union['CatalogsFeedCredentials', Unset] = unset,
        preferred_processing_schedule: typing.Union['CatalogsFeedProcessingSchedule', Unset] = unset,
        _configuration: typing.Optional[Configuration] = None,
        **kwargs: typing.Type[Schema],
    ) -> 'CatalogsFeedsCreateRequest':
        return super().__new__(
            cls,
            *args,
            name=name,
            format=format,
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

from openapi_client.model.catalogs_feed_credentials import CatalogsFeedCredentials
from openapi_client.model.catalogs_feed_processing_schedule import CatalogsFeedProcessingSchedule
from openapi_client.model.catalogs_format import CatalogsFormat
from openapi_client.model.country import Country
from openapi_client.model.nullable_currency import NullableCurrency
from openapi_client.model.product_availability_type import ProductAvailabilityType
