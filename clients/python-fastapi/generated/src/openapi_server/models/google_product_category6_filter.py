# coding: utf-8

from __future__ import annotations
from datetime import date, datetime  # noqa: F401

import re  # noqa: F401
from typing import Any, Dict, List, Optional  # noqa: F401

from pydantic import AnyUrl, BaseModel, EmailStr, validator  # noqa: F401
from openapi_server.models.catalogs_product_group_multiple_string_list_criteria import CatalogsProductGroupMultipleStringListCriteria


class GoogleProductCategory6Filter(BaseModel):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.

    GoogleProductCategory6Filter - a model defined in OpenAPI

        google_product_category_6: The google_product_category_6 of this GoogleProductCategory6Filter.
    """

    google_product_category_6: Dict[str, Any]

GoogleProductCategory6Filter.update_forward_refs()
