# coding: utf-8

from __future__ import annotations
from datetime import date, datetime  # noqa: F401

import re  # noqa: F401
from typing import Any, Dict, List, Optional  # noqa: F401

from pydantic import AnyUrl, BaseModel, EmailStr, validator  # noqa: F401
from openapi_server.models.catalogs_product_group_multiple_string_criteria import CatalogsProductGroupMultipleStringCriteria


class CustomLabel2Filter(BaseModel):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.

    CustomLabel2Filter - a model defined in OpenAPI

        custom_label_2: The custom_label_2 of this CustomLabel2Filter.
    """

    custom_label_2: Dict[str, Any]

CustomLabel2Filter.update_forward_refs()
