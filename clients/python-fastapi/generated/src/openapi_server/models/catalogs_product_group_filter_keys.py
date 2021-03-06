# coding: utf-8

from __future__ import annotations
from datetime import date, datetime  # noqa: F401

import re  # noqa: F401
from typing import Any, Dict, List, Optional  # noqa: F401

from pydantic import AnyUrl, BaseModel, EmailStr, validator  # noqa: F401
from openapi_server.models.availability_filter import AvailabilityFilter
from openapi_server.models.brand_filter import BrandFilter
from openapi_server.models.catalogs_product_group_currency_criteria import CatalogsProductGroupCurrencyCriteria
from openapi_server.models.catalogs_product_group_multiple_string_criteria import CatalogsProductGroupMultipleStringCriteria
from openapi_server.models.catalogs_product_group_multiple_string_list_criteria import CatalogsProductGroupMultipleStringListCriteria
from openapi_server.models.catalogs_product_group_pricing_criteria import CatalogsProductGroupPricingCriteria
from openapi_server.models.condition_filter import ConditionFilter
from openapi_server.models.currency_filter import CurrencyFilter
from openapi_server.models.custom_label0_filter import CustomLabel0Filter
from openapi_server.models.custom_label1_filter import CustomLabel1Filter
from openapi_server.models.custom_label2_filter import CustomLabel2Filter
from openapi_server.models.custom_label3_filter import CustomLabel3Filter
from openapi_server.models.custom_label4_filter import CustomLabel4Filter
from openapi_server.models.gender_filter import GenderFilter
from openapi_server.models.google_product_category0_filter import GoogleProductCategory0Filter
from openapi_server.models.google_product_category1_filter import GoogleProductCategory1Filter
from openapi_server.models.google_product_category2_filter import GoogleProductCategory2Filter
from openapi_server.models.google_product_category3_filter import GoogleProductCategory3Filter
from openapi_server.models.google_product_category4_filter import GoogleProductCategory4Filter
from openapi_server.models.google_product_category5_filter import GoogleProductCategory5Filter
from openapi_server.models.google_product_category6_filter import GoogleProductCategory6Filter
from openapi_server.models.item_group_id_filter import ItemGroupIdFilter
from openapi_server.models.item_id_filter import ItemIdFilter
from openapi_server.models.max_price_filter import MaxPriceFilter
from openapi_server.models.min_price_filter import MinPriceFilter
from openapi_server.models.product_type0_filter import ProductType0Filter
from openapi_server.models.product_type1_filter import ProductType1Filter
from openapi_server.models.product_type2_filter import ProductType2Filter
from openapi_server.models.product_type3_filter import ProductType3Filter
from openapi_server.models.product_type4_filter import ProductType4Filter


class CatalogsProductGroupFilterKeys(BaseModel):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.

    CatalogsProductGroupFilterKeys - a model defined in OpenAPI

        min_price: The min_price of this CatalogsProductGroupFilterKeys.
        max_price: The max_price of this CatalogsProductGroupFilterKeys.
        currency: The currency of this CatalogsProductGroupFilterKeys.
        item_id: The item_id of this CatalogsProductGroupFilterKeys.
        availability: The availability of this CatalogsProductGroupFilterKeys.
        brand: The brand of this CatalogsProductGroupFilterKeys.
        condition: The condition of this CatalogsProductGroupFilterKeys.
        custom_label_0: The custom_label_0 of this CatalogsProductGroupFilterKeys.
        custom_label_1: The custom_label_1 of this CatalogsProductGroupFilterKeys.
        custom_label_2: The custom_label_2 of this CatalogsProductGroupFilterKeys.
        custom_label_3: The custom_label_3 of this CatalogsProductGroupFilterKeys.
        custom_label_4: The custom_label_4 of this CatalogsProductGroupFilterKeys.
        item_group_id: The item_group_id of this CatalogsProductGroupFilterKeys.
        gender: The gender of this CatalogsProductGroupFilterKeys.
        product_type_4: The product_type_4 of this CatalogsProductGroupFilterKeys.
        product_type_3: The product_type_3 of this CatalogsProductGroupFilterKeys.
        product_type_2: The product_type_2 of this CatalogsProductGroupFilterKeys.
        product_type_1: The product_type_1 of this CatalogsProductGroupFilterKeys.
        product_type_0: The product_type_0 of this CatalogsProductGroupFilterKeys.
        google_product_category_6: The google_product_category_6 of this CatalogsProductGroupFilterKeys.
        google_product_category_5: The google_product_category_5 of this CatalogsProductGroupFilterKeys.
        google_product_category_4: The google_product_category_4 of this CatalogsProductGroupFilterKeys.
        google_product_category_3: The google_product_category_3 of this CatalogsProductGroupFilterKeys.
        google_product_category_2: The google_product_category_2 of this CatalogsProductGroupFilterKeys.
        google_product_category_1: The google_product_category_1 of this CatalogsProductGroupFilterKeys.
        google_product_category_0: The google_product_category_0 of this CatalogsProductGroupFilterKeys.
    """

    min_price: Dict[str, Any]
    max_price: Dict[str, Any]
    currency: Dict[str, Any]
    item_id: Dict[str, Any]
    availability: Dict[str, Any]
    brand: Dict[str, Any]
    condition: Dict[str, Any]
    custom_label_0: Dict[str, Any]
    custom_label_1: Dict[str, Any]
    custom_label_2: Dict[str, Any]
    custom_label_3: Dict[str, Any]
    custom_label_4: Dict[str, Any]
    item_group_id: Dict[str, Any]
    gender: Dict[str, Any]
    product_type_4: Dict[str, Any]
    product_type_3: Dict[str, Any]
    product_type_2: Dict[str, Any]
    product_type_1: Dict[str, Any]
    product_type_0: Dict[str, Any]
    google_product_category_6: Dict[str, Any]
    google_product_category_5: Dict[str, Any]
    google_product_category_4: Dict[str, Any]
    google_product_category_3: Dict[str, Any]
    google_product_category_2: Dict[str, Any]
    google_product_category_1: Dict[str, Any]
    google_product_category_0: Dict[str, Any]

CatalogsProductGroupFilterKeys.update_forward_refs()
