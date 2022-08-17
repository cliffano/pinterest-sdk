# coding: utf-8

"""
    Pinterest REST API

    Pinterest's REST API  # noqa: E501

    The version of the OpenAPI document: 5.4.1
    Contact: blah@cliffano.com
    Generated by: https://openapi-generator.tech
"""

import re  # noqa: F401
import sys  # noqa: F401
import typing  # noqa: F401
import functools  # noqa: F401

from frozendict import frozendict  # noqa: F401

import decimal  # noqa: F401
from datetime import date, datetime  # noqa: F401
from frozendict import frozendict  # noqa: F401

from openapi_client.schemas import (  # noqa: F401
    AnyTypeSchema,
    ComposedSchema,
    DictSchema,
    ListSchema,
    StrSchema,
    IntSchema,
    Int32Schema,
    Int64Schema,
    Float32Schema,
    Float64Schema,
    NumberSchema,
    UUIDSchema,
    DateSchema,
    DateTimeSchema,
    DecimalSchema,
    BoolSchema,
    BinarySchema,
    NoneSchema,
    none_type,
    Configuration,
    Unset,
    unset,
    ComposedBase,
    ListBase,
    DictBase,
    NoneBase,
    StrBase,
    IntBase,
    Int32Base,
    Int64Base,
    Float32Base,
    Float64Base,
    NumberBase,
    UUIDBase,
    DateBase,
    DateTimeBase,
    BoolBase,
    BinaryBase,
    Schema,
    _SchemaValidator,
    _SchemaTypeChecker,
    _SchemaEnumMaker
)


class CatalogsItemValidationWarnings(
    DictSchema
):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.
    """

    @classmethod
    @property
    def ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG(cls) -> typing.Type['CatalogsItemValidationDetails']:
        return CatalogsItemValidationDetails

    @classmethod
    @property
    def ADDITIONAL_IMAGE_LINK_WARNING(cls) -> typing.Type['CatalogsItemValidationDetails']:
        return CatalogsItemValidationDetails

    @classmethod
    @property
    def ADWORDS_FORMAT_WARNING(cls) -> typing.Type['CatalogsItemValidationDetails']:
        return CatalogsItemValidationDetails

    @classmethod
    @property
    def ADWORDS_SAME_AS_LINK(cls) -> typing.Type['CatalogsItemValidationDetails']:
        return CatalogsItemValidationDetails

    @classmethod
    @property
    def AGE_GROUP_INVALID(cls) -> typing.Type['CatalogsItemValidationDetails']:
        return CatalogsItemValidationDetails

    @classmethod
    @property
    def AGE_GROUP_NORMALIZED(cls) -> typing.Type['CatalogsItemValidationDetails']:
        return CatalogsItemValidationDetails

    @classmethod
    @property
    def ANDROID_DEEP_LINK_INVALID(cls) -> typing.Type['CatalogsItemValidationDetails']:
        return CatalogsItemValidationDetails

    @classmethod
    @property
    def AVAILABILITY_DATE_INVALID(cls) -> typing.Type['CatalogsItemValidationDetails']:
        return CatalogsItemValidationDetails

    @classmethod
    @property
    def AVAILABILITY_NORMALIZED(cls) -> typing.Type['CatalogsItemValidationDetails']:
        return CatalogsItemValidationDetails

    @classmethod
    @property
    def CONDITION_NORMALIZED(cls) -> typing.Type['CatalogsItemValidationDetails']:
        return CatalogsItemValidationDetails

    @classmethod
    @property
    def COUNTRY_DOES_NOT_MAP_TO_CURRENCY(cls) -> typing.Type['CatalogsItemValidationDetails']:
        return CatalogsItemValidationDetails

    @classmethod
    @property
    def CUSTOM_LABEL_LENGTH_TOO_LONG(cls) -> typing.Type['CatalogsItemValidationDetails']:
        return CatalogsItemValidationDetails

    @classmethod
    @property
    def DESCRIPTION_LENGTH_TOO_LONG(cls) -> typing.Type['CatalogsItemValidationDetails']:
        return CatalogsItemValidationDetails

    @classmethod
    @property
    def DUPLICATE_PRODUCTS(cls) -> typing.Type['CatalogsItemValidationDetails']:
        return CatalogsItemValidationDetails

    @classmethod
    @property
    def EXPIRATION_DATE_INVALID(cls) -> typing.Type['CatalogsItemValidationDetails']:
        return CatalogsItemValidationDetails

    @classmethod
    @property
    def GENDER_INVALID(cls) -> typing.Type['CatalogsItemValidationDetails']:
        return CatalogsItemValidationDetails

    @classmethod
    @property
    def GENDER_NORMALIZED(cls) -> typing.Type['CatalogsItemValidationDetails']:
        return CatalogsItemValidationDetails

    @classmethod
    @property
    def IMAGE_LINK_WARNING(cls) -> typing.Type['CatalogsItemValidationDetails']:
        return CatalogsItemValidationDetails

    @classmethod
    @property
    def IOS_DEEP_LINK_INVALID(cls) -> typing.Type['CatalogsItemValidationDetails']:
        return CatalogsItemValidationDetails

    @classmethod
    @property
    def IS_BUNDLE_INVALID(cls) -> typing.Type['CatalogsItemValidationDetails']:
        return CatalogsItemValidationDetails

    @classmethod
    @property
    def ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE(cls) -> typing.Type['CatalogsItemValidationDetails']:
        return CatalogsItemValidationDetails

    @classmethod
    @property
    def LINK_FORMAT_WARNING(cls) -> typing.Type['CatalogsItemValidationDetails']:
        return CatalogsItemValidationDetails

    @classmethod
    @property
    def MIN_AD_PRICE_INVALID(cls) -> typing.Type['CatalogsItemValidationDetails']:
        return CatalogsItemValidationDetails

    @classmethod
    @property
    def MULTIPACK_INVALID(cls) -> typing.Type['CatalogsItemValidationDetails']:
        return CatalogsItemValidationDetails

    @classmethod
    @property
    def OPTIONAL_CONDITION_INVALID(cls) -> typing.Type['CatalogsItemValidationDetails']:
        return CatalogsItemValidationDetails

    @classmethod
    @property
    def OPTIONAL_CONDITION_MISSING(cls) -> typing.Type['CatalogsItemValidationDetails']:
        return CatalogsItemValidationDetails

    @classmethod
    @property
    def OPTIONAL_PRODUCT_CATEGORY_INVALID(cls) -> typing.Type['CatalogsItemValidationDetails']:
        return CatalogsItemValidationDetails

    @classmethod
    @property
    def OPTIONAL_PRODUCT_CATEGORY_MISSING(cls) -> typing.Type['CatalogsItemValidationDetails']:
        return CatalogsItemValidationDetails

    @classmethod
    @property
    def PRODUCT_CATEGORY_DEPTH_WARNING(cls) -> typing.Type['CatalogsItemValidationDetails']:
        return CatalogsItemValidationDetails

    @classmethod
    @property
    def PRODUCT_TYPE_LENGTH_TOO_LONG(cls) -> typing.Type['CatalogsItemValidationDetails']:
        return CatalogsItemValidationDetails

    @classmethod
    @property
    def SALES_PRICE_INVALID(cls) -> typing.Type['CatalogsItemValidationDetails']:
        return CatalogsItemValidationDetails

    @classmethod
    @property
    def SALE_DATE_INVALID(cls) -> typing.Type['CatalogsItemValidationDetails']:
        return CatalogsItemValidationDetails

    @classmethod
    @property
    def SHIPPING_INVALID(cls) -> typing.Type['CatalogsItemValidationDetails']:
        return CatalogsItemValidationDetails

    @classmethod
    @property
    def SHIPPING_WEIGHT_INVALID(cls) -> typing.Type['CatalogsItemValidationDetails']:
        return CatalogsItemValidationDetails

    @classmethod
    @property
    def SIZE_TYPE_INVALID(cls) -> typing.Type['CatalogsItemValidationDetails']:
        return CatalogsItemValidationDetails

    @classmethod
    @property
    def SIZE_TYPE_NORMALIZED(cls) -> typing.Type['CatalogsItemValidationDetails']:
        return CatalogsItemValidationDetails

    @classmethod
    @property
    def TAX_INVALID(cls) -> typing.Type['CatalogsItemValidationDetails']:
        return CatalogsItemValidationDetails

    @classmethod
    @property
    def TITLE_LENGTH_TOO_LONG(cls) -> typing.Type['CatalogsItemValidationDetails']:
        return CatalogsItemValidationDetails

    @classmethod
    @property
    def TOO_MANY_ADDITIONAL_IMAGE_LINKS(cls) -> typing.Type['CatalogsItemValidationDetails']:
        return CatalogsItemValidationDetails

    @classmethod
    @property
    def UTM_SOURCE_AUTO_CORRECTED(cls) -> typing.Type['CatalogsItemValidationDetails']:
        return CatalogsItemValidationDetails

    @classmethod
    @property
    def WEIGHT_UNIT_INVALID(cls) -> typing.Type['CatalogsItemValidationDetails']:
        return CatalogsItemValidationDetails


    def __new__(
        cls,
        *args: typing.Union[dict, frozendict, ],
        ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG: typing.Union['CatalogsItemValidationDetails', Unset] = unset,
        ADDITIONAL_IMAGE_LINK_WARNING: typing.Union['CatalogsItemValidationDetails', Unset] = unset,
        ADWORDS_FORMAT_WARNING: typing.Union['CatalogsItemValidationDetails', Unset] = unset,
        ADWORDS_SAME_AS_LINK: typing.Union['CatalogsItemValidationDetails', Unset] = unset,
        AGE_GROUP_INVALID: typing.Union['CatalogsItemValidationDetails', Unset] = unset,
        AGE_GROUP_NORMALIZED: typing.Union['CatalogsItemValidationDetails', Unset] = unset,
        ANDROID_DEEP_LINK_INVALID: typing.Union['CatalogsItemValidationDetails', Unset] = unset,
        AVAILABILITY_DATE_INVALID: typing.Union['CatalogsItemValidationDetails', Unset] = unset,
        AVAILABILITY_NORMALIZED: typing.Union['CatalogsItemValidationDetails', Unset] = unset,
        CONDITION_NORMALIZED: typing.Union['CatalogsItemValidationDetails', Unset] = unset,
        COUNTRY_DOES_NOT_MAP_TO_CURRENCY: typing.Union['CatalogsItemValidationDetails', Unset] = unset,
        CUSTOM_LABEL_LENGTH_TOO_LONG: typing.Union['CatalogsItemValidationDetails', Unset] = unset,
        DESCRIPTION_LENGTH_TOO_LONG: typing.Union['CatalogsItemValidationDetails', Unset] = unset,
        DUPLICATE_PRODUCTS: typing.Union['CatalogsItemValidationDetails', Unset] = unset,
        EXPIRATION_DATE_INVALID: typing.Union['CatalogsItemValidationDetails', Unset] = unset,
        GENDER_INVALID: typing.Union['CatalogsItemValidationDetails', Unset] = unset,
        GENDER_NORMALIZED: typing.Union['CatalogsItemValidationDetails', Unset] = unset,
        IMAGE_LINK_WARNING: typing.Union['CatalogsItemValidationDetails', Unset] = unset,
        IOS_DEEP_LINK_INVALID: typing.Union['CatalogsItemValidationDetails', Unset] = unset,
        IS_BUNDLE_INVALID: typing.Union['CatalogsItemValidationDetails', Unset] = unset,
        ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE: typing.Union['CatalogsItemValidationDetails', Unset] = unset,
        LINK_FORMAT_WARNING: typing.Union['CatalogsItemValidationDetails', Unset] = unset,
        MIN_AD_PRICE_INVALID: typing.Union['CatalogsItemValidationDetails', Unset] = unset,
        MULTIPACK_INVALID: typing.Union['CatalogsItemValidationDetails', Unset] = unset,
        OPTIONAL_CONDITION_INVALID: typing.Union['CatalogsItemValidationDetails', Unset] = unset,
        OPTIONAL_CONDITION_MISSING: typing.Union['CatalogsItemValidationDetails', Unset] = unset,
        OPTIONAL_PRODUCT_CATEGORY_INVALID: typing.Union['CatalogsItemValidationDetails', Unset] = unset,
        OPTIONAL_PRODUCT_CATEGORY_MISSING: typing.Union['CatalogsItemValidationDetails', Unset] = unset,
        PRODUCT_CATEGORY_DEPTH_WARNING: typing.Union['CatalogsItemValidationDetails', Unset] = unset,
        PRODUCT_TYPE_LENGTH_TOO_LONG: typing.Union['CatalogsItemValidationDetails', Unset] = unset,
        SALES_PRICE_INVALID: typing.Union['CatalogsItemValidationDetails', Unset] = unset,
        SALE_DATE_INVALID: typing.Union['CatalogsItemValidationDetails', Unset] = unset,
        SHIPPING_INVALID: typing.Union['CatalogsItemValidationDetails', Unset] = unset,
        SHIPPING_WEIGHT_INVALID: typing.Union['CatalogsItemValidationDetails', Unset] = unset,
        SIZE_TYPE_INVALID: typing.Union['CatalogsItemValidationDetails', Unset] = unset,
        SIZE_TYPE_NORMALIZED: typing.Union['CatalogsItemValidationDetails', Unset] = unset,
        TAX_INVALID: typing.Union['CatalogsItemValidationDetails', Unset] = unset,
        TITLE_LENGTH_TOO_LONG: typing.Union['CatalogsItemValidationDetails', Unset] = unset,
        TOO_MANY_ADDITIONAL_IMAGE_LINKS: typing.Union['CatalogsItemValidationDetails', Unset] = unset,
        UTM_SOURCE_AUTO_CORRECTED: typing.Union['CatalogsItemValidationDetails', Unset] = unset,
        WEIGHT_UNIT_INVALID: typing.Union['CatalogsItemValidationDetails', Unset] = unset,
        _configuration: typing.Optional[Configuration] = None,
        **kwargs: typing.Type[Schema],
    ) -> 'CatalogsItemValidationWarnings':
        return super().__new__(
            cls,
            *args,
            ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG=ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG,
            ADDITIONAL_IMAGE_LINK_WARNING=ADDITIONAL_IMAGE_LINK_WARNING,
            ADWORDS_FORMAT_WARNING=ADWORDS_FORMAT_WARNING,
            ADWORDS_SAME_AS_LINK=ADWORDS_SAME_AS_LINK,
            AGE_GROUP_INVALID=AGE_GROUP_INVALID,
            AGE_GROUP_NORMALIZED=AGE_GROUP_NORMALIZED,
            ANDROID_DEEP_LINK_INVALID=ANDROID_DEEP_LINK_INVALID,
            AVAILABILITY_DATE_INVALID=AVAILABILITY_DATE_INVALID,
            AVAILABILITY_NORMALIZED=AVAILABILITY_NORMALIZED,
            CONDITION_NORMALIZED=CONDITION_NORMALIZED,
            COUNTRY_DOES_NOT_MAP_TO_CURRENCY=COUNTRY_DOES_NOT_MAP_TO_CURRENCY,
            CUSTOM_LABEL_LENGTH_TOO_LONG=CUSTOM_LABEL_LENGTH_TOO_LONG,
            DESCRIPTION_LENGTH_TOO_LONG=DESCRIPTION_LENGTH_TOO_LONG,
            DUPLICATE_PRODUCTS=DUPLICATE_PRODUCTS,
            EXPIRATION_DATE_INVALID=EXPIRATION_DATE_INVALID,
            GENDER_INVALID=GENDER_INVALID,
            GENDER_NORMALIZED=GENDER_NORMALIZED,
            IMAGE_LINK_WARNING=IMAGE_LINK_WARNING,
            IOS_DEEP_LINK_INVALID=IOS_DEEP_LINK_INVALID,
            IS_BUNDLE_INVALID=IS_BUNDLE_INVALID,
            ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE=ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE,
            LINK_FORMAT_WARNING=LINK_FORMAT_WARNING,
            MIN_AD_PRICE_INVALID=MIN_AD_PRICE_INVALID,
            MULTIPACK_INVALID=MULTIPACK_INVALID,
            OPTIONAL_CONDITION_INVALID=OPTIONAL_CONDITION_INVALID,
            OPTIONAL_CONDITION_MISSING=OPTIONAL_CONDITION_MISSING,
            OPTIONAL_PRODUCT_CATEGORY_INVALID=OPTIONAL_PRODUCT_CATEGORY_INVALID,
            OPTIONAL_PRODUCT_CATEGORY_MISSING=OPTIONAL_PRODUCT_CATEGORY_MISSING,
            PRODUCT_CATEGORY_DEPTH_WARNING=PRODUCT_CATEGORY_DEPTH_WARNING,
            PRODUCT_TYPE_LENGTH_TOO_LONG=PRODUCT_TYPE_LENGTH_TOO_LONG,
            SALES_PRICE_INVALID=SALES_PRICE_INVALID,
            SALE_DATE_INVALID=SALE_DATE_INVALID,
            SHIPPING_INVALID=SHIPPING_INVALID,
            SHIPPING_WEIGHT_INVALID=SHIPPING_WEIGHT_INVALID,
            SIZE_TYPE_INVALID=SIZE_TYPE_INVALID,
            SIZE_TYPE_NORMALIZED=SIZE_TYPE_NORMALIZED,
            TAX_INVALID=TAX_INVALID,
            TITLE_LENGTH_TOO_LONG=TITLE_LENGTH_TOO_LONG,
            TOO_MANY_ADDITIONAL_IMAGE_LINKS=TOO_MANY_ADDITIONAL_IMAGE_LINKS,
            UTM_SOURCE_AUTO_CORRECTED=UTM_SOURCE_AUTO_CORRECTED,
            WEIGHT_UNIT_INVALID=WEIGHT_UNIT_INVALID,
            _configuration=_configuration,
            **kwargs,
        )

from openapi_client.model.catalogs_item_validation_details import CatalogsItemValidationDetails