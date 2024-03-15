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

import model_audience_create_request_1_audience_type
import model_audience_rule

type AudienceCreateRequest* = object
  ## 
  adAccountId*: string ## Ad account ID.
  name*: string ## Audience name.
  rule*: AudienceRule
  description*: string ## Audience description.
  audienceType*: AudienceCreateRequest_1_audience_type