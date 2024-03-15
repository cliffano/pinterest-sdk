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

import model_audience_rule
import model_audience_update_operation_type

type AudienceUpdateRequest* = object
  ## 
  adAccountId*: string ## Ad account ID.
  name*: string ## Audience name.
  rule*: AudienceRule
  description*: string ## Audience description.
  operationType*: AudienceUpdateOperationType
