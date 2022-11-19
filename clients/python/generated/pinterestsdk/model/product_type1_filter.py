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


class ProductType1Filter(
    schemas.DictSchema
):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.
    """


    class MetaOapg:
        required = {
            "PRODUCT_TYPE_1",
        }
        
        class properties:
            PRODUCT_TYPE_1 = schemas.DictSchema
            __annotations__ = {
                "PRODUCT_TYPE_1": PRODUCT_TYPE_1,
            }
        additional_properties = schemas.NotAnyTypeSchema
    
    PRODUCT_TYPE_1: MetaOapg.properties.PRODUCT_TYPE_1
    
    @typing.overload
    def __getitem__(self, name: typing_extensions.Literal["PRODUCT_TYPE_1"]) -> MetaOapg.properties.PRODUCT_TYPE_1: ...
    
    def __getitem__(self, name: typing.Union[typing_extensions.Literal["PRODUCT_TYPE_1"], ]):
        # dict_instance[name] accessor
        return super().__getitem__(name)
    
    @typing.overload
    def get_item_oapg(self, name: typing_extensions.Literal["PRODUCT_TYPE_1"]) -> MetaOapg.properties.PRODUCT_TYPE_1: ...
    
    def get_item_oapg(self, name: typing.Union[typing_extensions.Literal["PRODUCT_TYPE_1"], ]):
        return super().get_item_oapg(name)

    def __new__(
        cls,
        *args: typing.Union[dict, frozendict.frozendict, ],
        PRODUCT_TYPE_1: typing.Union[MetaOapg.properties.PRODUCT_TYPE_1, dict, frozendict.frozendict, ],
        _configuration: typing.Optional[schemas.Configuration] = None,
    ) -> 'ProductType1Filter':
        return super().__new__(
            cls,
            *args,
            PRODUCT_TYPE_1=PRODUCT_TYPE_1,
            _configuration=_configuration,
        )
