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


class CatalogsProductGroupType(
    schemas.EnumBase,
    schemas.StrSchema
):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.

    <p>Catalog product group type</p>
<p>MERCHANT_CREATED: Product groups created by merchants.
<br>ALL_PRODUCTS: Consists of every product in your latest successful feed upload.
<br>BEST_DEALS: Consists of products with the deepest drop in price.
<br>PINNER_FAVORITES: Consists of products that are resonating most with people on Pinterest, based on engagement.
<br>TOP_SELLERS: Consists of products with the highest conversion rate, if you have the conversion tag installed.
<br>BACK_IN_STOCK: Consists of products that were previously out of stock and are now in stock.
<br>NEW_ARRIVALS: Consists of products that are new to your Catalog.
<br>SHOPIFY_COLLECTION: Product groups created based on Shopify Product Collections.
<br>I2PC: Product groups created based on predicted product category.</p>
    """


    class MetaOapg:
        enum_value_to_name = {
            "MERCHANT_CREATED": "MERCHANT_CREATED",
            "ALL_PRODUCTS": "ALL_PRODUCTS",
            "BEST_DEALS": "BEST_DEALS",
            "PINNER_FAVORITES": "PINNER_FAVORITES",
            "TOP_SELLERS": "TOP_SELLERS",
            "BACK_IN_STOCK": "BACK_IN_STOCK",
            "NEW_ARRIVALS": "NEW_ARRIVALS",
            "SHOPIFY_COLLECTIONS": "SHOPIFY_COLLECTIONS",
            "I2PC": "I2PC",
        }
    
    @schemas.classproperty
    def MERCHANT_CREATED(cls):
        return cls("MERCHANT_CREATED")
    
    @schemas.classproperty
    def ALL_PRODUCTS(cls):
        return cls("ALL_PRODUCTS")
    
    @schemas.classproperty
    def BEST_DEALS(cls):
        return cls("BEST_DEALS")
    
    @schemas.classproperty
    def PINNER_FAVORITES(cls):
        return cls("PINNER_FAVORITES")
    
    @schemas.classproperty
    def TOP_SELLERS(cls):
        return cls("TOP_SELLERS")
    
    @schemas.classproperty
    def BACK_IN_STOCK(cls):
        return cls("BACK_IN_STOCK")
    
    @schemas.classproperty
    def NEW_ARRIVALS(cls):
        return cls("NEW_ARRIVALS")
    
    @schemas.classproperty
    def SHOPIFY_COLLECTIONS(cls):
        return cls("SHOPIFY_COLLECTIONS")
    
    @schemas.classproperty
    def I2PC(cls):
        return cls("I2PC")
