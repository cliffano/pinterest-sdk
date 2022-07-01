#
# Pinterest REST API
# 
# Pinterest's REST API
# The version of the OpenAPI document: 5.3.0
# Contact: blah@cliffano.com
# Generated by: https://openapi-generator.tech
#

import json
import tables

import model_data_output_format
import model_metrics_reporting_level
import model_reporting_column_async

type AdsAnalyticsCreateAsyncRequestAllOf1* = object
  ## 
  columns*: seq[ReportingColumnAsync] ## Metric and entity columns
  level*: MetricsReportingLevel ## Level of the report
  reportFormat*: DataOutputFormat ## Specification for formatting report data
