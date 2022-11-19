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


class ProductGroupPromotionCreateRequest(
    schemas.DictSchema
):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.
    """


    class MetaOapg:
        required = {
            "product_group_promotion",
            "ad_group_id",
        }
        
        class properties:
            
            
            class ad_group_id(
                schemas.StrSchema
            ):
                pass
            
            
            class product_group_promotion(
                schemas.ListSchema
            ):
            
            
                class MetaOapg:
                    
                    @staticmethod
                    def items() -> typing.Type['ProductGroupPromotionCommon']:
                        return ProductGroupPromotionCommon
            
                def __new__(
                    cls,
                    arg: typing.Union[typing.Tuple['ProductGroupPromotionCommon'], typing.List['ProductGroupPromotionCommon']],
                    _configuration: typing.Optional[schemas.Configuration] = None,
                ) -> 'product_group_promotion':
                    return super().__new__(
                        cls,
                        arg,
                        _configuration=_configuration,
                    )
            
                def __getitem__(self, i: int) -> 'ProductGroupPromotionCommon':
                    return super().__getitem__(i)
            __annotations__ = {
                "ad_group_id": ad_group_id,
                "product_group_promotion": product_group_promotion,
            }
    
    product_group_promotion: MetaOapg.properties.product_group_promotion
    ad_group_id: MetaOapg.properties.ad_group_id
    
    @typing.overload
    def __getitem__(self, name: typing_extensions.Literal["ad_group_id"]) -> MetaOapg.properties.ad_group_id: ...
    
    @typing.overload
    def __getitem__(self, name: typing_extensions.Literal["product_group_promotion"]) -> MetaOapg.properties.product_group_promotion: ...
    
    @typing.overload
    def __getitem__(self, name: str) -> schemas.UnsetAnyTypeSchema: ...
    
    def __getitem__(self, name: typing.Union[typing_extensions.Literal["ad_group_id", "product_group_promotion", ], str]):
        # dict_instance[name] accessor
        return super().__getitem__(name)
    
    
    @typing.overload
    def get_item_oapg(self, name: typing_extensions.Literal["ad_group_id"]) -> MetaOapg.properties.ad_group_id: ...
    
    @typing.overload
    def get_item_oapg(self, name: typing_extensions.Literal["product_group_promotion"]) -> MetaOapg.properties.product_group_promotion: ...
    
    @typing.overload
    def get_item_oapg(self, name: str) -> typing.Union[schemas.UnsetAnyTypeSchema, schemas.Unset]: ...
    
    def get_item_oapg(self, name: typing.Union[typing_extensions.Literal["ad_group_id", "product_group_promotion", ], str]):
        return super().get_item_oapg(name)
    

    def __new__(
        cls,
        *args: typing.Union[dict, frozendict.frozendict, ],
        product_group_promotion: typing.Union[MetaOapg.properties.product_group_promotion, list, tuple, ],
        ad_group_id: typing.Union[MetaOapg.properties.ad_group_id, str, ],
        _configuration: typing.Optional[schemas.Configuration] = None,
        **kwargs: typing.Union[schemas.AnyTypeSchema, dict, frozendict.frozendict, str, date, datetime, uuid.UUID, int, float, decimal.Decimal, None, list, tuple, bytes],
    ) -> 'ProductGroupPromotionCreateRequest':
        return super().__new__(
            cls,
            *args,
            product_group_promotion=product_group_promotion,
            ad_group_id=ad_group_id,
            _configuration=_configuration,
            **kwargs,
        )

from pinterestsdk.model.product_group_promotion_common import ProductGroupPromotionCommon
