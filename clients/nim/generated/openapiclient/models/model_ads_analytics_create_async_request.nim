#
# Pinterest REST API
# 
# Pinterest's REST API
# The version of the OpenAPI document: 5.3.0
# Contact: pinterest-api@pinterest.com
# Generated by: https://openapi-generator.tech
#

import json
import tables

import model_ad_group_summary_status
import model_ads_analytics_create_async_request_all_of
import model_ads_analytics_create_async_request_all_of1
import model_ads_analytics_metrics_filter
import model_ads_analytics_targeting_type
import model_campaign_summary_status
import model_conversion_attribution_window_days
import model_conversion_report_attribution_type
import model_conversion_report_time_type
import model_data_output_format
import model_granularity
import model_metrics_reporting_level
import model_objective_type
import model_pin_promotion_summary_status
import model_product_group_summary_status
import model_reporting_column_async

type AdsAnalyticsCreateAsyncRequest* = object
  ## 
  startDate*: string ## Metric report start date (UTC). Format: YYYY-MM-DD
  endDate*: string ## Metric report end date (UTC). Format: YYYY-MM-DD
  granularity*: Granularity ## TOTAL - metrics are aggregated over the specified date range.<br> DAY - metrics are broken down daily.<br> HOUR - metrics are broken down hourly.<br>WEEKLY - metrics are broken down weekly.<br>MONTHLY - metrics are broken down monthly
  clickWindowDays*: ConversionAttributionWindowDays ## Number of days to use as the conversion attribution window for a pin click action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `30` days.
  engagementWindowDays*: ConversionAttributionWindowDays ## Number of days to use as the conversion attribution window for an engagement action. Engagements include saves, closeups, link clicks, and carousel card swipes. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `30` days.
  viewWindowDays*: ConversionAttributionWindowDays ## Number of days to use as the conversion attribution window for a view action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `1` day.
  conversionReportTime*: ConversionReportTimeType ## The date by which the conversion metrics returned from this endpoint will be reported. There are two dates associated with a conversion event: the date that the user interacted with the ad, and the date that the user completed a conversion event.
  attributionTypes*: seq[ConversionReportAttributionType] ## List of types of attribution for the conversion report
  columns*: seq[ReportingColumnAsync] ## Metric and entity columns
  level*: MetricsReportingLevel ## Level of the report
  reportFormat*: DataOutputFormat ## Specification for formatting report data
  campaignIds*: seq[string] ## List of campaign ids
  campaignStatuses*: seq[CampaignSummaryStatus] ## List of status values for filtering
  campaignObjectiveTypes*: seq[ObjectiveType] ## List of values for filtering
  adGroupIds*: seq[string] ## List of ad group ids
  adGroupStatuses*: seq[AdGroupSummaryStatus] ## List of values for filtering
  adIds*: seq[string] ## List of ad ids
  adStatuses*: seq[PinPromotionSummaryStatus] ## List of values for filtering
  productGroupIds*: seq[string] ## List of product group ids
  productGroupStatuses*: seq[ProductGroupSummaryStatus] ## List of values for filtering
  productItemIds*: seq[string] ## List of product item ids
  targetingTypes*: seq[AdsAnalyticsTargetingType] ## List of targeting types
  metricsFilters*: seq[AdsAnalyticsMetricsFilter] ## List of metrics filters
