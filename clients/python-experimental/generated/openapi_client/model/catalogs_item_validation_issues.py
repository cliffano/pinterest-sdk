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


class CatalogsItemValidationIssues(
    DictSchema
):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.
    """
    _required_property_names = set((
        'item_number',
        'item_id',
        'errors',
        'warnings',
    ))
    item_number = IntSchema
    
    
    class item_id(
        _SchemaTypeChecker(typing.Union[none_type, str, ]),
        StrBase,
        NoneBase,
        Schema
    ):
    
        def __new__(
            cls,
            *args: typing.Union[str, None, ],
            _configuration: typing.Optional[Configuration] = None,
        ) -> 'item_id':
            return super().__new__(
                cls,
                *args,
                _configuration=_configuration,
            )

    @classmethod
    @property
    def errors(cls) -> typing.Type['CatalogsItemValidationErrors']:
        return CatalogsItemValidationErrors

    @classmethod
    @property
    def warnings(cls) -> typing.Type['CatalogsItemValidationWarnings']:
        return CatalogsItemValidationWarnings


    def __new__(
        cls,
        *args: typing.Union[dict, frozendict, ],
        item_number: item_number,
        item_id: item_id,
        errors: errors,
        warnings: warnings,
        _configuration: typing.Optional[Configuration] = None,
        **kwargs: typing.Type[Schema],
    ) -> 'CatalogsItemValidationIssues':
        return super().__new__(
            cls,
            *args,
            item_number=item_number,
            item_id=item_id,
            errors=errors,
            warnings=warnings,
            _configuration=_configuration,
            **kwargs,
        )

from openapi_client.model.catalogs_item_validation_errors import CatalogsItemValidationErrors
from openapi_client.model.catalogs_item_validation_warnings import CatalogsItemValidationWarnings
