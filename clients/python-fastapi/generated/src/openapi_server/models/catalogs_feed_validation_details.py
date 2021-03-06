# coding: utf-8

from __future__ import annotations
from datetime import date, datetime  # noqa: F401

import re  # noqa: F401
from typing import Any, Dict, List, Optional  # noqa: F401

from pydantic import AnyUrl, BaseModel, EmailStr, validator  # noqa: F401
from openapi_server.models.catalogs_feed_validation_errors import CatalogsFeedValidationErrors
from openapi_server.models.catalogs_feed_validation_warnings import CatalogsFeedValidationWarnings


class CatalogsFeedValidationDetails(BaseModel):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.

    CatalogsFeedValidationDetails - a model defined in OpenAPI

        errors: The errors of this CatalogsFeedValidationDetails.
        warnings: The warnings of this CatalogsFeedValidationDetails.
    """

    errors: CatalogsFeedValidationErrors
    warnings: CatalogsFeedValidationWarnings

CatalogsFeedValidationDetails.update_forward_refs()
