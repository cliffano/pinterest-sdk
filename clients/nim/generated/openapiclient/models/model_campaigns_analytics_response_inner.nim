#
# Pinterest REST API
# 
# Pinterest's REST API
# The version of the OpenAPI document: 5.12.0
# Contact: blah+oapicf@cliffano.com
# Generated by: https://openapi-generator.tech
#

import json
import tables

import model_any_type

type CampaignsAnalyticsResponseInner* = object
  ## 
  CAMPAIGN_ID*: string ## The ID of the campaing that this metrics belongs to.
  DATE*: string ## Current metrics date. Only returned when granularity is a time-based value (`DAY`, `HOUR`, `WEEK`, `MONTH`)
