# coding: utf-8

from __future__ import annotations
from datetime import date, datetime  # noqa: F401

import re  # noqa: F401
from typing import Any, Dict, List, Optional  # noqa: F401

from pydantic import AnyUrl, BaseModel, EmailStr, validator  # noqa: F401


class CatalogsFeedIngestionErrors(BaseModel):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.

    CatalogsFeedIngestionErrors - a model defined in OpenAPI

        image_download_error: The image_download_error of this CatalogsFeedIngestionErrors [Optional].
        image_download_connection_timeout: The image_download_connection_timeout of this CatalogsFeedIngestionErrors [Optional].
        image_format_unrecognize: The image_format_unrecognize of this CatalogsFeedIngestionErrors [Optional].
        line_level_internal_error: The line_level_internal_error of this CatalogsFeedIngestionErrors [Optional].
        large_product_count_decrease: The large_product_count_decrease of this CatalogsFeedIngestionErrors [Optional].
    """

    image_download_error: Optional[int] = None
    image_download_connection_timeout: Optional[int] = None
    image_format_unrecognize: Optional[int] = None
    line_level_internal_error: Optional[int] = None
    large_product_count_decrease: Optional[int] = None

CatalogsFeedIngestionErrors.update_forward_refs()
