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


class ProductGroupAnalyticsResponse(
    schemas.ListSchema
):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.
    """


    class MetaOapg:
        
        
        class items(
            schemas.DictSchema
        ):
        
        
            class MetaOapg:
                required = {
                    "PRODUCT_GROUP_ID",
                }
                
                class properties:
                    
                    
                    class PRODUCT_GROUP_ID(
                        schemas.StrSchema
                    ):
                    
                    
                        class MetaOapg:
                            regex=[{
                                'pattern': r'^\d+$',  # noqa: E501
                            }]
                    DATE = schemas.DateSchema
                    __annotations__ = {
                        "PRODUCT_GROUP_ID": PRODUCT_GROUP_ID,
                        "DATE": DATE,
                    }
                additional_properties = schemas.AnyTypeSchema
            
            PRODUCT_GROUP_ID: MetaOapg.properties.PRODUCT_GROUP_ID
            
            @typing.overload
            def __getitem__(self, name: typing_extensions.Literal["PRODUCT_GROUP_ID"]) -> MetaOapg.properties.PRODUCT_GROUP_ID: ...
            
            @typing.overload
            def __getitem__(self, name: typing_extensions.Literal["DATE"]) -> MetaOapg.properties.DATE: ...
            
            @typing.overload
            def __getitem__(self, name: str) -> MetaOapg.additional_properties: ...
            
            def __getitem__(self, name: typing.Union[typing_extensions.Literal["PRODUCT_GROUP_ID"], typing_extensions.Literal["DATE"], str, ]):
                # dict_instance[name] accessor
                return super().__getitem__(name)
            
            @typing.overload
            def get_item_oapg(self, name: typing_extensions.Literal["PRODUCT_GROUP_ID"]) -> MetaOapg.properties.PRODUCT_GROUP_ID: ...
            
            @typing.overload
            def get_item_oapg(self, name: typing_extensions.Literal["DATE"]) -> typing.Union[MetaOapg.properties.DATE, schemas.Unset]: ...
            
            @typing.overload
            def get_item_oapg(self, name: str) -> typing.Union[MetaOapg.additional_properties, schemas.Unset]: ...
            
            def get_item_oapg(self, name: typing.Union[typing_extensions.Literal["PRODUCT_GROUP_ID"], typing_extensions.Literal["DATE"], str, ]):
                return super().get_item_oapg(name)
        
            def __new__(
                cls,
                *args: typing.Union[dict, frozendict.frozendict, ],
                PRODUCT_GROUP_ID: typing.Union[MetaOapg.properties.PRODUCT_GROUP_ID, str, ],
                DATE: typing.Union[MetaOapg.properties.DATE, str, date, schemas.Unset] = schemas.unset,
                _configuration: typing.Optional[schemas.Configuration] = None,
                **kwargs: typing.Union[MetaOapg.additional_properties, dict, frozendict.frozendict, str, date, datetime, uuid.UUID, int, float, decimal.Decimal, bool, None, list, tuple, bytes, io.FileIO, io.BufferedReader, ],
            ) -> 'items':
                return super().__new__(
                    cls,
                    *args,
                    PRODUCT_GROUP_ID=PRODUCT_GROUP_ID,
                    DATE=DATE,
                    _configuration=_configuration,
                    **kwargs,
                )

    def __new__(
        cls,
        arg: typing.Union[typing.Tuple[typing.Union[MetaOapg.items, dict, frozendict.frozendict, ]], typing.List[typing.Union[MetaOapg.items, dict, frozendict.frozendict, ]]],
        _configuration: typing.Optional[schemas.Configuration] = None,
    ) -> 'ProductGroupAnalyticsResponse':
        return super().__new__(
            cls,
            arg,
            _configuration=_configuration,
        )

    def __getitem__(self, i: int) -> MetaOapg.items:
        return super().__getitem__(i)
