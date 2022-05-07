# coding: utf-8

from __future__ import annotations
from datetime import date, datetime  # noqa: F401

import re  # noqa: F401
from typing import Any, Dict, List, Optional  # noqa: F401

from pydantic import AnyUrl, BaseModel, EmailStr, validator  # noqa: F401


class AdsAnalyticsCreateAsyncResponse(BaseModel):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.

    AdsAnalyticsCreateAsyncResponse - a model defined in OpenAPI

        report_status: The report_status of this AdsAnalyticsCreateAsyncResponse [Optional].
        token: The token of this AdsAnalyticsCreateAsyncResponse [Optional].
        message: The message of this AdsAnalyticsCreateAsyncResponse [Optional].
    """

    report_status: Optional[str] = None
    token: Optional[str] = None
    message: Optional[str] = None

AdsAnalyticsCreateAsyncResponse.update_forward_refs()
