# coding: utf-8

from __future__ import annotations
from datetime import date, datetime  # noqa: F401

import re  # noqa: F401
from typing import Any, Dict, List, Optional  # noqa: F401

from pydantic import AnyUrl, BaseModel, EmailStr, validator  # noqa: F401
from openapi_server.models.catalogs_product_group_multiple_string_criteria import CatalogsProductGroupMultipleStringCriteria


class GenderFilter(BaseModel):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.

    GenderFilter - a model defined in OpenAPI

        gender: The gender of this GenderFilter.
    """

    gender: Dict[str, Any]

GenderFilter.update_forward_refs()
