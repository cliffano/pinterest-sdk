# coding: utf-8

from __future__ import annotations
from datetime import date, datetime  # noqa: F401

import re  # noqa: F401
from typing import Any, Dict, List, Optional  # noqa: F401

from pydantic import AnyUrl, BaseModel, EmailStr, validator  # noqa: F401
from openapi_server.models.ad_group_summary_status import AdGroupSummaryStatus
from openapi_server.models.ads_analytics_create_async_request_all_of import AdsAnalyticsCreateAsyncRequestAllOf
from openapi_server.models.ads_analytics_create_async_request_all_of1 import AdsAnalyticsCreateAsyncRequestAllOf1
from openapi_server.models.ads_analytics_metrics_filter import AdsAnalyticsMetricsFilter
from openapi_server.models.ads_analytics_targeting_type import AdsAnalyticsTargetingType
from openapi_server.models.campaign_summary_status import CampaignSummaryStatus
from openapi_server.models.conversion_attribution_window_days import ConversionAttributionWindowDays
from openapi_server.models.conversion_report_attribution_type import ConversionReportAttributionType
from openapi_server.models.conversion_report_time_type import ConversionReportTimeType
from openapi_server.models.data_output_format import DataOutputFormat
from openapi_server.models.granularity import Granularity
from openapi_server.models.metrics_reporting_level import MetricsReportingLevel
from openapi_server.models.objective_type import ObjectiveType
from openapi_server.models.pin_promotion_summary_status import PinPromotionSummaryStatus
from openapi_server.models.product_group_summary_status import ProductGroupSummaryStatus
from openapi_server.models.reporting_column_async import ReportingColumnAsync


class AdsAnalyticsCreateAsyncRequest(BaseModel):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.

    AdsAnalyticsCreateAsyncRequest - a model defined in OpenAPI

        start_date: The start_date of this AdsAnalyticsCreateAsyncRequest.
        end_date: The end_date of this AdsAnalyticsCreateAsyncRequest.
        granularity: The granularity of this AdsAnalyticsCreateAsyncRequest.
        click_window_days: The click_window_days of this AdsAnalyticsCreateAsyncRequest [Optional].
        engagement_window_days: The engagement_window_days of this AdsAnalyticsCreateAsyncRequest [Optional].
        view_window_days: The view_window_days of this AdsAnalyticsCreateAsyncRequest [Optional].
        conversion_report_time: The conversion_report_time of this AdsAnalyticsCreateAsyncRequest [Optional].
        attribution_types: The attribution_types of this AdsAnalyticsCreateAsyncRequest [Optional].
        columns: The columns of this AdsAnalyticsCreateAsyncRequest.
        level: The level of this AdsAnalyticsCreateAsyncRequest.
        report_format: The report_format of this AdsAnalyticsCreateAsyncRequest [Optional].
        campaign_ids: The campaign_ids of this AdsAnalyticsCreateAsyncRequest [Optional].
        campaign_statuses: The campaign_statuses of this AdsAnalyticsCreateAsyncRequest [Optional].
        campaign_objective_types: The campaign_objective_types of this AdsAnalyticsCreateAsyncRequest [Optional].
        ad_group_ids: The ad_group_ids of this AdsAnalyticsCreateAsyncRequest [Optional].
        ad_group_statuses: The ad_group_statuses of this AdsAnalyticsCreateAsyncRequest [Optional].
        ad_ids: The ad_ids of this AdsAnalyticsCreateAsyncRequest [Optional].
        ad_statuses: The ad_statuses of this AdsAnalyticsCreateAsyncRequest [Optional].
        product_group_ids: The product_group_ids of this AdsAnalyticsCreateAsyncRequest [Optional].
        product_group_statuses: The product_group_statuses of this AdsAnalyticsCreateAsyncRequest [Optional].
        product_item_ids: The product_item_ids of this AdsAnalyticsCreateAsyncRequest [Optional].
        targeting_types: The targeting_types of this AdsAnalyticsCreateAsyncRequest [Optional].
        metrics_filters: The metrics_filters of this AdsAnalyticsCreateAsyncRequest [Optional].
    """

    start_date: str
    end_date: str
    granularity: Granularity
    click_window_days: Optional[ConversionAttributionWindowDays] = None
    engagement_window_days: Optional[ConversionAttributionWindowDays] = None
    view_window_days: Optional[ConversionAttributionWindowDays] = None
    conversion_report_time: Optional[ConversionReportTimeType] = None
    attribution_types: Optional[List[ConversionReportAttributionType]] = None
    columns: List[ReportingColumnAsync]
    level: MetricsReportingLevel
    report_format: Optional[DataOutputFormat] = None
    campaign_ids: Optional[List[str]] = None
    campaign_statuses: Optional[List[CampaignSummaryStatus]] = None
    campaign_objective_types: Optional[List[ObjectiveType]] = None
    ad_group_ids: Optional[List[str]] = None
    ad_group_statuses: Optional[List[AdGroupSummaryStatus]] = None
    ad_ids: Optional[List[str]] = None
    ad_statuses: Optional[List[PinPromotionSummaryStatus]] = None
    product_group_ids: Optional[List[str]] = None
    product_group_statuses: Optional[List[ProductGroupSummaryStatus]] = None
    product_item_ids: Optional[List[str]] = None
    targeting_types: Optional[List[AdsAnalyticsTargetingType]] = None
    metrics_filters: Optional[List[AdsAnalyticsMetricsFilter]] = None

    @validator("start_date")
    def start_date_pattern(cls, value):
        assert value is not None and re.match(r"^(\d{4})-(\d{2})-(\d{2})$", value)
        return value

    @validator("end_date")
    def end_date_pattern(cls, value):
        assert value is not None and re.match(r"^(\d{4})-(\d{2})-(\d{2})$", value)
        return value

AdsAnalyticsCreateAsyncRequest.update_forward_refs()
