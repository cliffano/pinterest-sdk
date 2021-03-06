# coding: utf-8

from __future__ import annotations
from datetime import date, datetime  # noqa: F401

import re  # noqa: F401
from typing import Any, Dict, List, Optional  # noqa: F401

from pydantic import AnyUrl, BaseModel, EmailStr, validator  # noqa: F401


class CatalogsFeedProcessingSchedule(BaseModel):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.

    CatalogsFeedProcessingSchedule - a model defined in OpenAPI

        time: The time of this CatalogsFeedProcessingSchedule.
        timezone: The timezone of this CatalogsFeedProcessingSchedule.
    """

    time: str
    timezone: str

    @validator("time")
    def time_pattern(cls, value):
        assert value is not None and re.match(r"^(0[0-9]|1[0-9]|2[0-3]):[0-5][0-9]$", value)
        return value

CatalogsFeedProcessingSchedule.update_forward_refs()
