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


class CatalogsFeedProcessingResult(
    schemas.ComposedBase,
    schemas.DictSchema
):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.
    """


    class MetaOapg:
        
        
        class all_of_1(
            schemas.DictSchema
        ):
        
        
            class MetaOapg:
                required = {
                    "product_counts",
                    "ingestion_details",
                    "validation_details",
                    "status",
                }
                
                class properties:
                
                    @staticmethod
                    def ingestion_details() -> typing.Type['CatalogsFeedIngestionDetails']:
                        return CatalogsFeedIngestionDetails
                
                    @staticmethod
                    def status() -> typing.Type['CatalogsFeedProcessingStatus']:
                        return CatalogsFeedProcessingStatus
                
                    @staticmethod
                    def product_counts() -> typing.Type['CatalogsFeedProductCounts']:
                        return CatalogsFeedProductCounts
                
                    @staticmethod
                    def validation_details() -> typing.Type['CatalogsFeedValidationDetails']:
                        return CatalogsFeedValidationDetails
                    __annotations__ = {
                        "ingestion_details": ingestion_details,
                        "status": status,
                        "product_counts": product_counts,
                        "validation_details": validation_details,
                    }
            
            product_counts: 'CatalogsFeedProductCounts'
            ingestion_details: 'CatalogsFeedIngestionDetails'
            validation_details: 'CatalogsFeedValidationDetails'
            status: 'CatalogsFeedProcessingStatus'
            
            @typing.overload
            def __getitem__(self, name: typing_extensions.Literal["ingestion_details"]) -> 'CatalogsFeedIngestionDetails': ...
            
            @typing.overload
            def __getitem__(self, name: typing_extensions.Literal["status"]) -> 'CatalogsFeedProcessingStatus': ...
            
            @typing.overload
            def __getitem__(self, name: typing_extensions.Literal["product_counts"]) -> 'CatalogsFeedProductCounts': ...
            
            @typing.overload
            def __getitem__(self, name: typing_extensions.Literal["validation_details"]) -> 'CatalogsFeedValidationDetails': ...
            
            @typing.overload
            def __getitem__(self, name: str) -> schemas.UnsetAnyTypeSchema: ...
            
            def __getitem__(self, name: typing.Union[typing_extensions.Literal["ingestion_details", "status", "product_counts", "validation_details", ], str]):
                # dict_instance[name] accessor
                return super().__getitem__(name)
            
            
            @typing.overload
            def get_item_oapg(self, name: typing_extensions.Literal["ingestion_details"]) -> 'CatalogsFeedIngestionDetails': ...
            
            @typing.overload
            def get_item_oapg(self, name: typing_extensions.Literal["status"]) -> 'CatalogsFeedProcessingStatus': ...
            
            @typing.overload
            def get_item_oapg(self, name: typing_extensions.Literal["product_counts"]) -> 'CatalogsFeedProductCounts': ...
            
            @typing.overload
            def get_item_oapg(self, name: typing_extensions.Literal["validation_details"]) -> 'CatalogsFeedValidationDetails': ...
            
            @typing.overload
            def get_item_oapg(self, name: str) -> typing.Union[schemas.UnsetAnyTypeSchema, schemas.Unset]: ...
            
            def get_item_oapg(self, name: typing.Union[typing_extensions.Literal["ingestion_details", "status", "product_counts", "validation_details", ], str]):
                return super().get_item_oapg(name)
            
        
            def __new__(
                cls,
                *args: typing.Union[dict, frozendict.frozendict, ],
                product_counts: 'CatalogsFeedProductCounts',
                ingestion_details: 'CatalogsFeedIngestionDetails',
                validation_details: 'CatalogsFeedValidationDetails',
                status: 'CatalogsFeedProcessingStatus',
                _configuration: typing.Optional[schemas.Configuration] = None,
                **kwargs: typing.Union[schemas.AnyTypeSchema, dict, frozendict.frozendict, str, date, datetime, uuid.UUID, int, float, decimal.Decimal, None, list, tuple, bytes],
            ) -> 'all_of_1':
                return super().__new__(
                    cls,
                    *args,
                    product_counts=product_counts,
                    ingestion_details=ingestion_details,
                    validation_details=validation_details,
                    status=status,
                    _configuration=_configuration,
                    **kwargs,
                )
        
        @classmethod
        @functools.lru_cache()
        def all_of(cls):
            # we need this here to make our import statements work
            # we must store _composed_schemas in here so the code is only run
            # when we invoke this method. If we kept this at the class
            # level we would get an error because the class level
            # code would be run when this module is imported, and these composed
            # classes don't exist yet because their module has not finished
            # loading
            return [
                CatalogsDbItem,
                cls.all_of_1,
            ]


    def __new__(
        cls,
        *args: typing.Union[dict, frozendict.frozendict, ],
        _configuration: typing.Optional[schemas.Configuration] = None,
        **kwargs: typing.Union[schemas.AnyTypeSchema, dict, frozendict.frozendict, str, date, datetime, uuid.UUID, int, float, decimal.Decimal, None, list, tuple, bytes],
    ) -> 'CatalogsFeedProcessingResult':
        return super().__new__(
            cls,
            *args,
            _configuration=_configuration,
            **kwargs,
        )

from pinterestsdk.model.catalogs_db_item import CatalogsDbItem
from pinterestsdk.model.catalogs_feed_ingestion_details import CatalogsFeedIngestionDetails
from pinterestsdk.model.catalogs_feed_processing_status import CatalogsFeedProcessingStatus
from pinterestsdk.model.catalogs_feed_product_counts import CatalogsFeedProductCounts
from pinterestsdk.model.catalogs_feed_validation_details import CatalogsFeedValidationDetails
