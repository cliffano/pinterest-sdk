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


class KeywordsRequest(
    schemas.DictSchema
):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.
    """


    class MetaOapg:
        required = {
            "keywords",
            "parent_id",
        }
        
        class properties:
            
            
            class keywords(
                schemas.ListSchema
            ):
            
            
                class MetaOapg:
                    
                    @staticmethod
                    def items() -> typing.Type['KeywordsCommon']:
                        return KeywordsCommon
            
                def __new__(
                    cls,
                    arg: typing.Union[typing.Tuple['KeywordsCommon'], typing.List['KeywordsCommon']],
                    _configuration: typing.Optional[schemas.Configuration] = None,
                ) -> 'keywords':
                    return super().__new__(
                        cls,
                        arg,
                        _configuration=_configuration,
                    )
            
                def __getitem__(self, i: int) -> 'KeywordsCommon':
                    return super().__getitem__(i)
            
            
            class parent_id(
                schemas.StrSchema
            ):
            
            
                class MetaOapg:
                    regex=[{
                        'pattern': r'^((AG)|C)?\d+$',  # noqa: E501
                    }]
            __annotations__ = {
                "keywords": keywords,
                "parent_id": parent_id,
            }
    
    keywords: MetaOapg.properties.keywords
    parent_id: MetaOapg.properties.parent_id
    
    @typing.overload
    def __getitem__(self, name: typing_extensions.Literal["keywords"]) -> MetaOapg.properties.keywords: ...
    
    @typing.overload
    def __getitem__(self, name: typing_extensions.Literal["parent_id"]) -> MetaOapg.properties.parent_id: ...
    
    @typing.overload
    def __getitem__(self, name: str) -> schemas.UnsetAnyTypeSchema: ...
    
    def __getitem__(self, name: typing.Union[typing_extensions.Literal["keywords", "parent_id", ], str]):
        # dict_instance[name] accessor
        return super().__getitem__(name)
    
    
    @typing.overload
    def get_item_oapg(self, name: typing_extensions.Literal["keywords"]) -> MetaOapg.properties.keywords: ...
    
    @typing.overload
    def get_item_oapg(self, name: typing_extensions.Literal["parent_id"]) -> MetaOapg.properties.parent_id: ...
    
    @typing.overload
    def get_item_oapg(self, name: str) -> typing.Union[schemas.UnsetAnyTypeSchema, schemas.Unset]: ...
    
    def get_item_oapg(self, name: typing.Union[typing_extensions.Literal["keywords", "parent_id", ], str]):
        return super().get_item_oapg(name)
    

    def __new__(
        cls,
        *args: typing.Union[dict, frozendict.frozendict, ],
        keywords: typing.Union[MetaOapg.properties.keywords, list, tuple, ],
        parent_id: typing.Union[MetaOapg.properties.parent_id, str, ],
        _configuration: typing.Optional[schemas.Configuration] = None,
        **kwargs: typing.Union[schemas.AnyTypeSchema, dict, frozendict.frozendict, str, date, datetime, uuid.UUID, int, float, decimal.Decimal, None, list, tuple, bytes],
    ) -> 'KeywordsRequest':
        return super().__new__(
            cls,
            *args,
            keywords=keywords,
            parent_id=parent_id,
            _configuration=_configuration,
            **kwargs,
        )

from pinterestsdk.model.keywords_common import KeywordsCommon
