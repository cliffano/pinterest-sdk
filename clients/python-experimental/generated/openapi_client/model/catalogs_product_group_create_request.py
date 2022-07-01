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


class CatalogsProductGroupCreateRequest(
    DictSchema
):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.

    Request object for creating a product group.
    """
    _required_property_names = set((
        'feed_id',
        'name',
        'filters',
    ))
    
    
    class feed_id(
        _SchemaValidator(
            regex=[{
                'pattern': r'^\d+$',  # noqa: E501
            }],
        ),
        StrSchema
    ):
        pass
    name = StrSchema
    
    
    class description(
        _SchemaTypeChecker(typing.Union[none_type, str, ]),
        StrBase,
        NoneBase,
        Schema
    ):
    
        def __new__(
            cls,
            *args: typing.Union[str, None, ],
            _instantiation_metadata: typing.Optional[InstantiationMetadata] = None,
        ) -> 'description':
            return super().__new__(
                cls,
                *args,
                _instantiation_metadata=_instantiation_metadata,
            )

    @classmethod
    @property
    def filters(cls) -> typing.Type['CatalogsProductGroupFilters']:
        return CatalogsProductGroupFilters


    def __new__(
        cls,
        *args: typing.Union[dict, frozendict, ],
        feed_id: feed_id,
        name: name,
        filters: filters,
        description: typing.Union[description, Unset] = unset,
        _instantiation_metadata: typing.Optional[InstantiationMetadata] = None,
        **kwargs: typing.Type[Schema],
    ) -> 'CatalogsProductGroupCreateRequest':
        return super().__new__(
            cls,
            *args,
            feed_id=feed_id,
            name=name,
            filters=filters,
            description=description,
            _instantiation_metadata=_instantiation_metadata,
            **kwargs,
        )

from openapi_client.model.catalogs_product_group_filters import CatalogsProductGroupFilters
