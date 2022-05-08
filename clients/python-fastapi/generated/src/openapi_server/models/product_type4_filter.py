# coding: utf-8

from __future__ import annotations
from datetime import date, datetime  # noqa: F401

import re  # noqa: F401
from typing import Any, Dict, List, Optional  # noqa: F401

from pydantic import AnyUrl, BaseModel, EmailStr, validator  # noqa: F401
from openapi_server.models.catalogs_product_group_multiple_string_list_criteria import CatalogsProductGroupMultipleStringListCriteria


class ProductType4Filter(BaseModel):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.

    ProductType4Filter - a model defined in OpenAPI

        product_type_4: The product_type_4 of this ProductType4Filter.
    """

    product_type_4: Dict[str, Any]

ProductType4Filter.update_forward_refs()