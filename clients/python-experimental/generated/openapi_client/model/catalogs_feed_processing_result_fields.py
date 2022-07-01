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


class CatalogsFeedProcessingResultFields(
    DictSchema
):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.
    """
    _required_property_names = set((
        'ingestion_details',
        'status',
        'product_counts',
        'validation_details',
    ))

    @classmethod
    @property
    def ingestion_details(cls) -> typing.Type['CatalogsFeedIngestionDetails']:
        return CatalogsFeedIngestionDetails

    @classmethod
    @property
    def status(cls) -> typing.Type['CatalogsFeedProcessingStatus']:
        return CatalogsFeedProcessingStatus

    @classmethod
    @property
    def product_counts(cls) -> typing.Type['CatalogsFeedProductCounts']:
        return CatalogsFeedProductCounts

    @classmethod
    @property
    def validation_details(cls) -> typing.Type['CatalogsFeedValidationDetails']:
        return CatalogsFeedValidationDetails


    def __new__(
        cls,
        *args: typing.Union[dict, frozendict, ],
        ingestion_details: ingestion_details,
        status: status,
        product_counts: product_counts,
        validation_details: validation_details,
        _instantiation_metadata: typing.Optional[InstantiationMetadata] = None,
        **kwargs: typing.Type[Schema],
    ) -> 'CatalogsFeedProcessingResultFields':
        return super().__new__(
            cls,
            *args,
            ingestion_details=ingestion_details,
            status=status,
            product_counts=product_counts,
            validation_details=validation_details,
            _instantiation_metadata=_instantiation_metadata,
            **kwargs,
        )

from openapi_client.model.catalogs_feed_ingestion_details import CatalogsFeedIngestionDetails
from openapi_client.model.catalogs_feed_processing_status import CatalogsFeedProcessingStatus
from openapi_client.model.catalogs_feed_product_counts import CatalogsFeedProductCounts
from openapi_client.model.catalogs_feed_validation_details import CatalogsFeedValidationDetails
