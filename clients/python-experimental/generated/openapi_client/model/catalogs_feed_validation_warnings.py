# coding: utf-8

"""
    Pinterest REST API

    Pinterest's REST API  # noqa: E501

    The version of the OpenAPI document: 5.3.0
    Contact: pinterest-api@pinterest.com
    Generated by: https://openapi-generator.tech
"""

import re  # noqa: F401
import sys  # noqa: F401
import typing  # noqa: F401

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
    DateSchema,
    DateTimeSchema,
    DecimalSchema,
    BoolSchema,
    BinarySchema,
    NoneSchema,
    none_type,
    InstantiationMetadata,
    Unset,
    unset,
    ComposedBase,
    ListBase,
    DictBase,
    NoneBase,
    StrBase,
    IntBase,
    NumberBase,
    DateBase,
    DateTimeBase,
    BoolBase,
    BinaryBase,
    Schema,
    _SchemaValidator,
    _SchemaTypeChecker,
    _SchemaEnumMaker
)


class CatalogsFeedValidationWarnings(
    DictSchema
):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.
    """
    title_length_too_long = IntSchema
    description_length_too_long = IntSchema
    gender_invalid = IntSchema
    age_group_invalid = IntSchema
    size_type_invalid = IntSchema
    link_format_warning = IntSchema
    duplicate_products = IntSchema
    duplicate_links = IntSchema
    sales_price_invalid = IntSchema
    product_category_depth_warning = IntSchema
    adwords_same_as_link = IntSchema
    duplicate_headers = IntSchema
    fetch_same_signature = IntSchema
    adwords_format_warning = IntSchema
    additional_image_link_warning = IntSchema
    image_link_warning = IntSchema
    shipping_invalid = IntSchema
    tax_invalid = IntSchema
    shipping_weight_invalid = IntSchema
    expiration_date_invalid = IntSchema
    availability_date_invalid = IntSchema
    sale_date_invalid = IntSchema
    weight_unit_invalid = IntSchema
    is_bundle_invalid = IntSchema
    updated_time_invalid = IntSchema
    custom_label_length_too_long = IntSchema
    product_type_length_too_long = IntSchema
    too_many_additional_image_links = IntSchema
    multipack_invalid = IntSchema
    indexed_product_count_large_delta = IntSchema
    item_additional_image_download_failure = IntSchema
    optional_product_category_missing = IntSchema
    optional_product_category_invalid = IntSchema
    optional_condition_missing = IntSchema
    optional_condition_invalid = IntSchema
    ios_deep_link_invalid = IntSchema
    android_deep_link_invalid = IntSchema
    availability_normalized = IntSchema
    condition_normalized = IntSchema
    gender_normalized = IntSchema
    size_type_normalized = IntSchema
    age_group_normalized = IntSchema
    utm_source_auto_corrected = IntSchema
    country_does_not_map_to_currency = IntSchema
    min_ad_price_invalid = IntSchema


    def __new__(
        cls,
        *args: typing.Union[dict, frozendict, ],
        title_length_too_long: typing.Union[title_length_too_long, Unset] = unset,
        description_length_too_long: typing.Union[description_length_too_long, Unset] = unset,
        gender_invalid: typing.Union[gender_invalid, Unset] = unset,
        age_group_invalid: typing.Union[age_group_invalid, Unset] = unset,
        size_type_invalid: typing.Union[size_type_invalid, Unset] = unset,
        link_format_warning: typing.Union[link_format_warning, Unset] = unset,
        duplicate_products: typing.Union[duplicate_products, Unset] = unset,
        duplicate_links: typing.Union[duplicate_links, Unset] = unset,
        sales_price_invalid: typing.Union[sales_price_invalid, Unset] = unset,
        product_category_depth_warning: typing.Union[product_category_depth_warning, Unset] = unset,
        adwords_same_as_link: typing.Union[adwords_same_as_link, Unset] = unset,
        duplicate_headers: typing.Union[duplicate_headers, Unset] = unset,
        fetch_same_signature: typing.Union[fetch_same_signature, Unset] = unset,
        adwords_format_warning: typing.Union[adwords_format_warning, Unset] = unset,
        additional_image_link_warning: typing.Union[additional_image_link_warning, Unset] = unset,
        image_link_warning: typing.Union[image_link_warning, Unset] = unset,
        shipping_invalid: typing.Union[shipping_invalid, Unset] = unset,
        tax_invalid: typing.Union[tax_invalid, Unset] = unset,
        shipping_weight_invalid: typing.Union[shipping_weight_invalid, Unset] = unset,
        expiration_date_invalid: typing.Union[expiration_date_invalid, Unset] = unset,
        availability_date_invalid: typing.Union[availability_date_invalid, Unset] = unset,
        sale_date_invalid: typing.Union[sale_date_invalid, Unset] = unset,
        weight_unit_invalid: typing.Union[weight_unit_invalid, Unset] = unset,
        is_bundle_invalid: typing.Union[is_bundle_invalid, Unset] = unset,
        updated_time_invalid: typing.Union[updated_time_invalid, Unset] = unset,
        custom_label_length_too_long: typing.Union[custom_label_length_too_long, Unset] = unset,
        product_type_length_too_long: typing.Union[product_type_length_too_long, Unset] = unset,
        too_many_additional_image_links: typing.Union[too_many_additional_image_links, Unset] = unset,
        multipack_invalid: typing.Union[multipack_invalid, Unset] = unset,
        indexed_product_count_large_delta: typing.Union[indexed_product_count_large_delta, Unset] = unset,
        item_additional_image_download_failure: typing.Union[item_additional_image_download_failure, Unset] = unset,
        optional_product_category_missing: typing.Union[optional_product_category_missing, Unset] = unset,
        optional_product_category_invalid: typing.Union[optional_product_category_invalid, Unset] = unset,
        optional_condition_missing: typing.Union[optional_condition_missing, Unset] = unset,
        optional_condition_invalid: typing.Union[optional_condition_invalid, Unset] = unset,
        ios_deep_link_invalid: typing.Union[ios_deep_link_invalid, Unset] = unset,
        android_deep_link_invalid: typing.Union[android_deep_link_invalid, Unset] = unset,
        availability_normalized: typing.Union[availability_normalized, Unset] = unset,
        condition_normalized: typing.Union[condition_normalized, Unset] = unset,
        gender_normalized: typing.Union[gender_normalized, Unset] = unset,
        size_type_normalized: typing.Union[size_type_normalized, Unset] = unset,
        age_group_normalized: typing.Union[age_group_normalized, Unset] = unset,
        utm_source_auto_corrected: typing.Union[utm_source_auto_corrected, Unset] = unset,
        country_does_not_map_to_currency: typing.Union[country_does_not_map_to_currency, Unset] = unset,
        min_ad_price_invalid: typing.Union[min_ad_price_invalid, Unset] = unset,
        _instantiation_metadata: typing.Optional[InstantiationMetadata] = None,
        **kwargs: typing.Type[Schema],
    ) -> 'CatalogsFeedValidationWarnings':
        return super().__new__(
            cls,
            *args,
            title_length_too_long=title_length_too_long,
            description_length_too_long=description_length_too_long,
            gender_invalid=gender_invalid,
            age_group_invalid=age_group_invalid,
            size_type_invalid=size_type_invalid,
            link_format_warning=link_format_warning,
            duplicate_products=duplicate_products,
            duplicate_links=duplicate_links,
            sales_price_invalid=sales_price_invalid,
            product_category_depth_warning=product_category_depth_warning,
            adwords_same_as_link=adwords_same_as_link,
            duplicate_headers=duplicate_headers,
            fetch_same_signature=fetch_same_signature,
            adwords_format_warning=adwords_format_warning,
            additional_image_link_warning=additional_image_link_warning,
            image_link_warning=image_link_warning,
            shipping_invalid=shipping_invalid,
            tax_invalid=tax_invalid,
            shipping_weight_invalid=shipping_weight_invalid,
            expiration_date_invalid=expiration_date_invalid,
            availability_date_invalid=availability_date_invalid,
            sale_date_invalid=sale_date_invalid,
            weight_unit_invalid=weight_unit_invalid,
            is_bundle_invalid=is_bundle_invalid,
            updated_time_invalid=updated_time_invalid,
            custom_label_length_too_long=custom_label_length_too_long,
            product_type_length_too_long=product_type_length_too_long,
            too_many_additional_image_links=too_many_additional_image_links,
            multipack_invalid=multipack_invalid,
            indexed_product_count_large_delta=indexed_product_count_large_delta,
            item_additional_image_download_failure=item_additional_image_download_failure,
            optional_product_category_missing=optional_product_category_missing,
            optional_product_category_invalid=optional_product_category_invalid,
            optional_condition_missing=optional_condition_missing,
            optional_condition_invalid=optional_condition_invalid,
            ios_deep_link_invalid=ios_deep_link_invalid,
            android_deep_link_invalid=android_deep_link_invalid,
            availability_normalized=availability_normalized,
            condition_normalized=condition_normalized,
            gender_normalized=gender_normalized,
            size_type_normalized=size_type_normalized,
            age_group_normalized=age_group_normalized,
            utm_source_auto_corrected=utm_source_auto_corrected,
            country_does_not_map_to_currency=country_does_not_map_to_currency,
            min_ad_price_invalid=min_ad_price_invalid,
            _instantiation_metadata=_instantiation_metadata,
            **kwargs,
        )
