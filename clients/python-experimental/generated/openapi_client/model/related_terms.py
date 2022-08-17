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


class RelatedTerms(
    DictSchema
):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.
    """
    id = StrSchema
    related_term_count = IntSchema
    
    
    class related_terms_list(
        ListSchema
    ):
        
        
        class _items(
            DictSchema
        ):
            term = StrSchema
            
            
            class related_terms(
                ListSchema
            ):
                _items = StrSchema
        
        
            def __new__(
                cls,
                *args: typing.Union[dict, frozendict, ],
                term: typing.Union[term, Unset] = unset,
                related_terms: typing.Union[related_terms, Unset] = unset,
                _configuration: typing.Optional[Configuration] = None,
                **kwargs: typing.Type[Schema],
            ) -> '_items':
                return super().__new__(
                    cls,
                    *args,
                    term=term,
                    related_terms=related_terms,
                    _configuration=_configuration,
                    **kwargs,
                )


    def __new__(
        cls,
        *args: typing.Union[dict, frozendict, ],
        id: typing.Union[id, Unset] = unset,
        related_term_count: typing.Union[related_term_count, Unset] = unset,
        related_terms_list: typing.Union[related_terms_list, Unset] = unset,
        _configuration: typing.Optional[Configuration] = None,
        **kwargs: typing.Type[Schema],
    ) -> 'RelatedTerms':
        return super().__new__(
            cls,
            *args,
            id=id,
            related_term_count=related_term_count,
            related_terms_list=related_terms_list,
            _configuration=_configuration,
            **kwargs,
        )
