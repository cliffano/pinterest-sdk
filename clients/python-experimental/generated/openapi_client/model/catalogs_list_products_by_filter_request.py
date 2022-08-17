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


class CatalogsListProductsByFilterRequest(
    ComposedBase,
    DictSchema
):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.

    Request object to list products for a given product group filter.
    """

    @classmethod
    @property
    @functools.cache
    def _composed_schemas(cls):
        # we need this here to make our import statements work
        # we must store _composed_schemas in here so the code is only run
        # when we invoke this method. If we kept this at the class
        # level we would get an error because the class level
        # code would be run when this module is imported, and these composed
        # classes don't exist yet because their module has not finished
        # loading
        
        
        class oneOf_0(
            DictSchema
        ):
            _required_property_names = set((
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
        
            @classmethod
            @property
            def filters(cls) -> typing.Type['CatalogsProductGroupFilters']:
                return CatalogsProductGroupFilters
            _additional_properties = None
        
        
            def __new__(
                cls,
                *args: typing.Union[dict, frozendict, ],
                _configuration: typing.Optional[Configuration] = None,
            ) -> 'oneOf_0':
                return super().__new__(
                    cls,
                    *args,
                    _configuration=_configuration,
                )
        return {
            'allOf': [
            ],
            'oneOf': [
                oneOf_0,
            ],
            'anyOf': [
            ],
            'not':
                None
        }

    def __new__(
        cls,
        *args: typing.Union[dict, frozendict, ],
        _configuration: typing.Optional[Configuration] = None,
        **kwargs: typing.Type[Schema],
    ) -> 'CatalogsListProductsByFilterRequest':
        return super().__new__(
            cls,
            *args,
            _configuration=_configuration,
            **kwargs,
        )
