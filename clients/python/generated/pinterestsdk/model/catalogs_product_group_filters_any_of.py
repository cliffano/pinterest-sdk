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


class CatalogsProductGroupFiltersAnyOf(
    schemas.DictSchema
):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.
    """


    class MetaOapg:
        required = {
            "any_of",
        }
        
        class properties:
            
            
            class any_of(
                schemas.ListSchema
            ):
            
            
                class MetaOapg:
                    items = schemas.DictSchema
            
                def __new__(
                    cls,
                    arg: typing.Union[typing.Tuple[typing.Union[MetaOapg.items, dict, frozendict.frozendict, ]], typing.List[typing.Union[MetaOapg.items, dict, frozendict.frozendict, ]]],
                    _configuration: typing.Optional[schemas.Configuration] = None,
                ) -> 'any_of':
                    return super().__new__(
                        cls,
                        arg,
                        _configuration=_configuration,
                    )
            
                def __getitem__(self, i: int) -> MetaOapg.items:
                    return super().__getitem__(i)
            __annotations__ = {
                "any_of": any_of,
            }
        additional_properties = schemas.NotAnyTypeSchema
    
    any_of: MetaOapg.properties.any_of
    
    @typing.overload
    def __getitem__(self, name: typing_extensions.Literal["any_of"]) -> MetaOapg.properties.any_of: ...
    
    def __getitem__(self, name: typing.Union[typing_extensions.Literal["any_of"], ]):
        # dict_instance[name] accessor
        return super().__getitem__(name)
    
    @typing.overload
    def get_item_oapg(self, name: typing_extensions.Literal["any_of"]) -> MetaOapg.properties.any_of: ...
    
    def get_item_oapg(self, name: typing.Union[typing_extensions.Literal["any_of"], ]):
        return super().get_item_oapg(name)

    def __new__(
        cls,
        *args: typing.Union[dict, frozendict.frozendict, ],
        any_of: typing.Union[MetaOapg.properties.any_of, list, tuple, ],
        _configuration: typing.Optional[schemas.Configuration] = None,
    ) -> 'CatalogsProductGroupFiltersAnyOf':
        return super().__new__(
            cls,
            *args,
            any_of=any_of,
            _configuration=_configuration,
        )
