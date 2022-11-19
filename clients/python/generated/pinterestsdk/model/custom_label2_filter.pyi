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


class CustomLabel2Filter(
    schemas.DictSchema
):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.
    """


    class MetaOapg:
        required = {
            "CUSTOM_LABEL_2",
        }
        
        class properties:
            CUSTOM_LABEL_2 = schemas.DictSchema
            __annotations__ = {
                "CUSTOM_LABEL_2": CUSTOM_LABEL_2,
            }
        additional_properties = schemas.NotAnyTypeSchema
    
    CUSTOM_LABEL_2: MetaOapg.properties.CUSTOM_LABEL_2
    
    @typing.overload
    def __getitem__(self, name: typing_extensions.Literal["CUSTOM_LABEL_2"]) -> MetaOapg.properties.CUSTOM_LABEL_2: ...
    
    def __getitem__(self, name: typing.Union[typing_extensions.Literal["CUSTOM_LABEL_2"], ]):
        # dict_instance[name] accessor
        return super().__getitem__(name)
    
    @typing.overload
    def get_item_oapg(self, name: typing_extensions.Literal["CUSTOM_LABEL_2"]) -> MetaOapg.properties.CUSTOM_LABEL_2: ...
    
    def get_item_oapg(self, name: typing.Union[typing_extensions.Literal["CUSTOM_LABEL_2"], ]):
        return super().get_item_oapg(name)

    def __new__(
        cls,
        *args: typing.Union[dict, frozendict.frozendict, ],
        CUSTOM_LABEL_2: typing.Union[MetaOapg.properties.CUSTOM_LABEL_2, dict, frozendict.frozendict, ],
        _configuration: typing.Optional[schemas.Configuration] = None,
    ) -> 'CustomLabel2Filter':
        return super().__new__(
            cls,
            *args,
            CUSTOM_LABEL_2=CUSTOM_LABEL_2,
            _configuration=_configuration,
        )
