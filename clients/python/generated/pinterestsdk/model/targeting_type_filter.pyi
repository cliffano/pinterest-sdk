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


class TargetingTypeFilter(
    schemas.DictSchema
):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.
    """


    class MetaOapg:
        
        class properties:
            
            
            class targeting_types(
                schemas.ListSchema
            ):
            
            
                class MetaOapg:
                    
                    @staticmethod
                    def items() -> typing.Type['AdsAnalyticsTargetingType']:
                        return AdsAnalyticsTargetingType
            
                def __new__(
                    cls,
                    arg: typing.Union[typing.Tuple['AdsAnalyticsTargetingType'], typing.List['AdsAnalyticsTargetingType']],
                    _configuration: typing.Optional[schemas.Configuration] = None,
                ) -> 'targeting_types':
                    return super().__new__(
                        cls,
                        arg,
                        _configuration=_configuration,
                    )
            
                def __getitem__(self, i: int) -> 'AdsAnalyticsTargetingType':
                    return super().__getitem__(i)
            __annotations__ = {
                "targeting_types": targeting_types,
            }
    
    @typing.overload
    def __getitem__(self, name: typing_extensions.Literal["targeting_types"]) -> MetaOapg.properties.targeting_types: ...
    
    @typing.overload
    def __getitem__(self, name: str) -> schemas.UnsetAnyTypeSchema: ...
    
    def __getitem__(self, name: typing.Union[typing_extensions.Literal["targeting_types", ], str]):
        # dict_instance[name] accessor
        return super().__getitem__(name)
    
    
    @typing.overload
    def get_item_oapg(self, name: typing_extensions.Literal["targeting_types"]) -> typing.Union[MetaOapg.properties.targeting_types, schemas.Unset]: ...
    
    @typing.overload
    def get_item_oapg(self, name: str) -> typing.Union[schemas.UnsetAnyTypeSchema, schemas.Unset]: ...
    
    def get_item_oapg(self, name: typing.Union[typing_extensions.Literal["targeting_types", ], str]):
        return super().get_item_oapg(name)
    

    def __new__(
        cls,
        *args: typing.Union[dict, frozendict.frozendict, ],
        targeting_types: typing.Union[MetaOapg.properties.targeting_types, list, tuple, schemas.Unset] = schemas.unset,
        _configuration: typing.Optional[schemas.Configuration] = None,
        **kwargs: typing.Union[schemas.AnyTypeSchema, dict, frozendict.frozendict, str, date, datetime, uuid.UUID, int, float, decimal.Decimal, None, list, tuple, bytes],
    ) -> 'TargetingTypeFilter':
        return super().__new__(
            cls,
            *args,
            targeting_types=targeting_types,
            _configuration=_configuration,
            **kwargs,
        )

from pinterestsdk.model.ads_analytics_targeting_type import AdsAnalyticsTargetingType
