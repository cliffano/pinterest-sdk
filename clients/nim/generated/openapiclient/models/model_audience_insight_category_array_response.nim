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

import model_audience_insight_category_common

type AudienceInsightCategoryArrayResponse* = object
  ## 
  items*: seq[AudienceInsightCategoryCommon]
