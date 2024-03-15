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

import model_trending_keywords_response_trends_inner

type TrendingKeywordsResponse* = object
  ## 
  trends*: seq[TrendingKeywordsResponse_trends_inner] ## The top trending keywords for the specified trend type in the requested region.<br /> Results are ordered, with the first element in the array representing the #1 top trend.
