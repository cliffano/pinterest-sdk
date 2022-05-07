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

import model_ads_analytics_filter_column
import model_ads_analytics_filter_operator

type AdsAnalyticsMetricsFilter* = object
  ## 
  field*: AdsAnalyticsFilterColumn
  operator*: AdsAnalyticsFilterOperator
  values*: seq[float] ## List of values for filtering
