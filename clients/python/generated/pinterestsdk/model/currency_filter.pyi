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


class CurrencyFilter(
    schemas.DictSchema
):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.
    """


    class MetaOapg:
        required = {
            "CURRENCY",
        }
        
        class properties:
            CURRENCY = schemas.DictSchema
            __annotations__ = {
                "CURRENCY": CURRENCY,
            }
        additional_properties = schemas.NotAnyTypeSchema
    
    CURRENCY: MetaOapg.properties.CURRENCY
    
    @typing.overload
    def __getitem__(self, name: typing_extensions.Literal["CURRENCY"]) -> MetaOapg.properties.CURRENCY: ...
    
    def __getitem__(self, name: typing.Union[typing_extensions.Literal["CURRENCY"], ]):
        # dict_instance[name] accessor
        return super().__getitem__(name)
    
    @typing.overload
    def get_item_oapg(self, name: typing_extensions.Literal["CURRENCY"]) -> MetaOapg.properties.CURRENCY: ...
    
    def get_item_oapg(self, name: typing.Union[typing_extensions.Literal["CURRENCY"], ]):
        return super().get_item_oapg(name)

    def __new__(
        cls,
        *args: typing.Union[dict, frozendict.frozendict, ],
        CURRENCY: typing.Union[MetaOapg.properties.CURRENCY, dict, frozendict.frozendict, ],
        _configuration: typing.Optional[schemas.Configuration] = None,
    ) -> 'CurrencyFilter':
        return super().__new__(
            cls,
            *args,
            CURRENCY=CURRENCY,
            _configuration=_configuration,
        )
