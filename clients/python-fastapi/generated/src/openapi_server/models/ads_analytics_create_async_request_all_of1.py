# coding: utf-8

from __future__ import annotations
from datetime import date, datetime  # noqa: F401

import re  # noqa: F401
from typing import Any, Dict, List, Optional  # noqa: F401

from pydantic import AnyUrl, BaseModel, EmailStr, validator  # noqa: F401
from openapi_server.models.data_output_format import DataOutputFormat
from openapi_server.models.metrics_reporting_level import MetricsReportingLevel
from openapi_server.models.reporting_column_async import ReportingColumnAsync


class AdsAnalyticsCreateAsyncRequestAllOf1(BaseModel):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.

    AdsAnalyticsCreateAsyncRequestAllOf1 - a model defined in OpenAPI

        columns: The columns of this AdsAnalyticsCreateAsyncRequestAllOf1.
        level: The level of this AdsAnalyticsCreateAsyncRequestAllOf1.
        report_format: The report_format of this AdsAnalyticsCreateAsyncRequestAllOf1 [Optional].
    """

    columns: List[ReportingColumnAsync]
    level: MetricsReportingLevel
    report_format: Optional[DataOutputFormat] = None

AdsAnalyticsCreateAsyncRequestAllOf1.update_forward_refs()
