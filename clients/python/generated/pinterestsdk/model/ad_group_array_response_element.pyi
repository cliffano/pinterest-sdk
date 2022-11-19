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


class AdGroupArrayResponseElement(
    schemas.DictSchema
):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.
    """


    class MetaOapg:
        
        class properties:
        
            @staticmethod
            def data() -> typing.Type['AdGroupResponse']:
                return AdGroupResponse
            
            
            class exceptions(
                schemas.ListSchema
            ):
            
            
                class MetaOapg:
                    
                    @staticmethod
                    def items() -> typing.Type['Exception']:
                        return Exception
            
                def __new__(
                    cls,
                    arg: typing.Union[typing.Tuple['Exception'], typing.List['Exception']],
                    _configuration: typing.Optional[schemas.Configuration] = None,
                ) -> 'exceptions':
                    return super().__new__(
                        cls,
                        arg,
                        _configuration=_configuration,
                    )
            
                def __getitem__(self, i: int) -> 'Exception':
                    return super().__getitem__(i)
            __annotations__ = {
                "data": data,
                "exceptions": exceptions,
            }
    
    @typing.overload
    def __getitem__(self, name: typing_extensions.Literal["data"]) -> 'AdGroupResponse': ...
    
    @typing.overload
    def __getitem__(self, name: typing_extensions.Literal["exceptions"]) -> MetaOapg.properties.exceptions: ...
    
    @typing.overload
    def __getitem__(self, name: str) -> schemas.UnsetAnyTypeSchema: ...
    
    def __getitem__(self, name: typing.Union[typing_extensions.Literal["data", "exceptions", ], str]):
        # dict_instance[name] accessor
        return super().__getitem__(name)
    
    
    @typing.overload
    def get_item_oapg(self, name: typing_extensions.Literal["data"]) -> typing.Union['AdGroupResponse', schemas.Unset]: ...
    
    @typing.overload
    def get_item_oapg(self, name: typing_extensions.Literal["exceptions"]) -> typing.Union[MetaOapg.properties.exceptions, schemas.Unset]: ...
    
    @typing.overload
    def get_item_oapg(self, name: str) -> typing.Union[schemas.UnsetAnyTypeSchema, schemas.Unset]: ...
    
    def get_item_oapg(self, name: typing.Union[typing_extensions.Literal["data", "exceptions", ], str]):
        return super().get_item_oapg(name)
    

    def __new__(
        cls,
        *args: typing.Union[dict, frozendict.frozendict, ],
        data: typing.Union['AdGroupResponse', schemas.Unset] = schemas.unset,
        exceptions: typing.Union[MetaOapg.properties.exceptions, list, tuple, schemas.Unset] = schemas.unset,
        _configuration: typing.Optional[schemas.Configuration] = None,
        **kwargs: typing.Union[schemas.AnyTypeSchema, dict, frozendict.frozendict, str, date, datetime, uuid.UUID, int, float, decimal.Decimal, None, list, tuple, bytes],
    ) -> 'AdGroupArrayResponseElement':
        return super().__new__(
            cls,
            *args,
            data=data,
            exceptions=exceptions,
            _configuration=_configuration,
            **kwargs,
        )

from pinterestsdk.model.ad_group_response import AdGroupResponse
from pinterestsdk.model.exception import Exception
