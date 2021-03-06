# coding: utf-8

from __future__ import annotations
from datetime import date, datetime  # noqa: F401

import re  # noqa: F401
from typing import Any, Dict, List, Optional  # noqa: F401

from pydantic import AnyUrl, BaseModel, EmailStr, validator  # noqa: F401


class AnalyticsMetricsResponseDailyMetrics(BaseModel):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.

    AnalyticsMetricsResponseDailyMetrics - a model defined in OpenAPI

        data_status: The data_status of this AnalyticsMetricsResponseDailyMetrics [Optional].
        date: The date of this AnalyticsMetricsResponseDailyMetrics [Optional].
        metrics: The metrics of this AnalyticsMetricsResponseDailyMetrics [Optional].
    """

    data_status: Optional[str] = None
    date: Optional[str] = None
    metrics: Optional[Dict[str, float]] = None

AnalyticsMetricsResponseDailyMetrics.update_forward_refs()
