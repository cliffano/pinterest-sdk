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


class CatalogsItemsBatch(
    DictSchema
):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.

    Object describing the catalogs items batch
    """
    
    
    class items(
        ListSchema
    ):
    
        @classmethod
        @property
        def _items(cls) -> typing.Type['ItemProcessingRecord']:
            return ItemProcessingRecord
    batch_id = StrSchema
    created_time = DateTimeSchema
    
    
    class completed_time(
        _SchemaTypeChecker(typing.Union[none_type, str, ]),
        DateTimeBase,
        NoneBase,
        Schema
    ):
    
        def __new__(
            cls,
            *args: typing.Union[None, ],
            _instantiation_metadata: typing.Optional[InstantiationMetadata] = None,
        ) -> 'completed_time':
            return super().__new__(
                cls,
                *args,
                _instantiation_metadata=_instantiation_metadata,
            )

    @classmethod
    @property
    def status(cls) -> typing.Type['BatchOperationStatus']:
        return BatchOperationStatus


    def __new__(
        cls,
        *args: typing.Union[dict, frozendict, ],
        items: typing.Union[items, Unset] = unset,
        batch_id: typing.Union[batch_id, Unset] = unset,
        created_time: typing.Union[created_time, Unset] = unset,
        completed_time: typing.Union[completed_time, Unset] = unset,
        status: typing.Union['BatchOperationStatus', Unset] = unset,
        _instantiation_metadata: typing.Optional[InstantiationMetadata] = None,
        **kwargs: typing.Type[Schema],
    ) -> 'CatalogsItemsBatch':
        return super().__new__(
            cls,
            *args,
            items=items,
            batch_id=batch_id,
            created_time=created_time,
            completed_time=completed_time,
            status=status,
            _instantiation_metadata=_instantiation_metadata,
            **kwargs,
        )

from openapi_client.model.batch_operation_status import BatchOperationStatus
from openapi_client.model.item_processing_record import ItemProcessingRecord
