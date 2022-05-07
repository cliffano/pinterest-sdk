# coding: utf-8

from __future__ import annotations
from datetime import date, datetime  # noqa: F401

import re  # noqa: F401
from typing import Any, Dict, List, Optional  # noqa: F401

from pydantic import AnyUrl, BaseModel, EmailStr, validator  # noqa: F401


class CatalogsFeedValidationErrors(BaseModel):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.

    CatalogsFeedValidationErrors - a model defined in OpenAPI

        fetch_error: The fetch_error of this CatalogsFeedValidationErrors [Optional].
        fetch_inactive_feed_error: The fetch_inactive_feed_error of this CatalogsFeedValidationErrors [Optional].
        encoding_error: The encoding_error of this CatalogsFeedValidationErrors [Optional].
        delimiter_error: The delimiter_error of this CatalogsFeedValidationErrors [Optional].
        required_columns_missing: The required_columns_missing of this CatalogsFeedValidationErrors [Optional].
        image_link_invalid: The image_link_invalid of this CatalogsFeedValidationErrors [Optional].
        itemid_missing: The itemid_missing of this CatalogsFeedValidationErrors [Optional].
        title_missing: The title_missing of this CatalogsFeedValidationErrors [Optional].
        description_missing: The description_missing of this CatalogsFeedValidationErrors [Optional].
        product_category_invalid: The product_category_invalid of this CatalogsFeedValidationErrors [Optional].
        product_link_missing: The product_link_missing of this CatalogsFeedValidationErrors [Optional].
        image_link_missing: The image_link_missing of this CatalogsFeedValidationErrors [Optional].
        availability_invalid: The availability_invalid of this CatalogsFeedValidationErrors [Optional].
        product_price_invalid: The product_price_invalid of this CatalogsFeedValidationErrors [Optional].
        link_format_invalid: The link_format_invalid of this CatalogsFeedValidationErrors [Optional].
        parse_line_error: The parse_line_error of this CatalogsFeedValidationErrors [Optional].
        adwords_format_invalid: The adwords_format_invalid of this CatalogsFeedValidationErrors [Optional].
        product_category_missing: The product_category_missing of this CatalogsFeedValidationErrors [Optional].
        internal_service_error: The internal_service_error of this CatalogsFeedValidationErrors [Optional].
        no_verified_domain: The no_verified_domain of this CatalogsFeedValidationErrors [Optional].
        adult_invalid: The adult_invalid of this CatalogsFeedValidationErrors [Optional].
        invalid_domain: The invalid_domain of this CatalogsFeedValidationErrors [Optional].
        feed_length_too_long: The feed_length_too_long of this CatalogsFeedValidationErrors [Optional].
        link_length_too_long: The link_length_too_long of this CatalogsFeedValidationErrors [Optional].
        malformed_xml: The malformed_xml of this CatalogsFeedValidationErrors [Optional].
        redirect_invalid: The redirect_invalid of this CatalogsFeedValidationErrors [Optional].
        price_missing: The price_missing of this CatalogsFeedValidationErrors [Optional].
        feed_too_small: The feed_too_small of this CatalogsFeedValidationErrors [Optional].
        condition_invalid: The condition_invalid of this CatalogsFeedValidationErrors [Optional].
        shopify_no_products: The shopify_no_products of this CatalogsFeedValidationErrors [Optional].
        max_items_per_item_group_exceeded: The max_items_per_item_group_exceeded of this CatalogsFeedValidationErrors [Optional].
        item_main_image_download_failure: The item_main_image_download_failure of this CatalogsFeedValidationErrors [Optional].
        pinjoin_content_unsafe: The pinjoin_content_unsafe of this CatalogsFeedValidationErrors [Optional].
        blocklisted_image_signature: The blocklisted_image_signature of this CatalogsFeedValidationErrors [Optional].
    """

    fetch_error: Optional[int] = None
    fetch_inactive_feed_error: Optional[int] = None
    encoding_error: Optional[int] = None
    delimiter_error: Optional[int] = None
    required_columns_missing: Optional[int] = None
    image_link_invalid: Optional[int] = None
    itemid_missing: Optional[int] = None
    title_missing: Optional[int] = None
    description_missing: Optional[int] = None
    product_category_invalid: Optional[int] = None
    product_link_missing: Optional[int] = None
    image_link_missing: Optional[int] = None
    availability_invalid: Optional[int] = None
    product_price_invalid: Optional[int] = None
    link_format_invalid: Optional[int] = None
    parse_line_error: Optional[int] = None
    adwords_format_invalid: Optional[int] = None
    product_category_missing: Optional[int] = None
    internal_service_error: Optional[int] = None
    no_verified_domain: Optional[int] = None
    adult_invalid: Optional[int] = None
    invalid_domain: Optional[int] = None
    feed_length_too_long: Optional[int] = None
    link_length_too_long: Optional[int] = None
    malformed_xml: Optional[int] = None
    redirect_invalid: Optional[int] = None
    price_missing: Optional[int] = None
    feed_too_small: Optional[int] = None
    condition_invalid: Optional[int] = None
    shopify_no_products: Optional[int] = None
    max_items_per_item_group_exceeded: Optional[int] = None
    item_main_image_download_failure: Optional[int] = None
    pinjoin_content_unsafe: Optional[int] = None
    blocklisted_image_signature: Optional[int] = None

CatalogsFeedValidationErrors.update_forward_refs()
