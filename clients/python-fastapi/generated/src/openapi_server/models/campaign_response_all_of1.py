# coding: utf-8

from __future__ import annotations
from datetime import date, datetime  # noqa: F401

import re  # noqa: F401
from typing import Any, Dict, List, Optional  # noqa: F401

from pydantic import AnyUrl, BaseModel, EmailStr, validator  # noqa: F401
from openapi_server.models.objective_type import ObjectiveType


class CampaignResponseAllOf1(BaseModel):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.

    CampaignResponseAllOf1 - a model defined in OpenAPI

        objective_type: The objective_type of this CampaignResponseAllOf1 [Optional].
        created_time: The created_time of this CampaignResponseAllOf1 [Optional].
        updated_time: The updated_time of this CampaignResponseAllOf1 [Optional].
        type: The type of this CampaignResponseAllOf1 [Optional].
    """

    objective_type: Optional[ObjectiveType] = None
    created_time: Optional[int] = None
    updated_time: Optional[int] = None
    type: Optional[str] = None

CampaignResponseAllOf1.update_forward_refs()
