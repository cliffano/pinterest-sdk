# coding: utf-8

from __future__ import annotations
from datetime import date, datetime  # noqa: F401

import re  # noqa: F401
from typing import Any, Dict, List, Optional  # noqa: F401

from pydantic import AnyUrl, BaseModel, EmailStr, validator  # noqa: F401
from openapi_server.models.catalogs_db_item import CatalogsDbItem
from openapi_server.models.catalogs_feed_credentials import CatalogsFeedCredentials
from openapi_server.models.catalogs_feed_processing_schedule import CatalogsFeedProcessingSchedule
from openapi_server.models.catalogs_format import CatalogsFormat
from openapi_server.models.catalogs_status import CatalogsStatus
from openapi_server.models.country import Country
from openapi_server.models.feed_fields import FeedFields
from openapi_server.models.nullable_currency import NullableCurrency
from openapi_server.models.product_availability_type import ProductAvailabilityType


class CatalogsFeed(BaseModel):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.

    CatalogsFeed - a model defined in OpenAPI

        created_at: The created_at of this CatalogsFeed [Optional].
        id: The id of this CatalogsFeed [Optional].
        updated_at: The updated_at of this CatalogsFeed [Optional].
        default_country: The default_country of this CatalogsFeed.
        default_availability: The default_availability of this CatalogsFeed.
        default_currency: The default_currency of this CatalogsFeed.
        name: The name of this CatalogsFeed.
        format: The format of this CatalogsFeed.
        default_locale: The default_locale of this CatalogsFeed.
        credentials: The credentials of this CatalogsFeed.
        location: The location of this CatalogsFeed.
        preferred_processing_schedule: The preferred_processing_schedule of this CatalogsFeed.
        status: The status of this CatalogsFeed.
    """

    created_at: Optional[datetime] = None
    id: Optional[str] = None
    updated_at: Optional[datetime] = None
    default_country: Country
    default_availability: ProductAvailabilityType
    default_currency: NullableCurrency
    name: str
    format: CatalogsFormat
    default_locale: str
    credentials: CatalogsFeedCredentials
    location: str
    preferred_processing_schedule: CatalogsFeedProcessingSchedule
    status: CatalogsStatus

CatalogsFeed.update_forward_refs()
