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

import model_ad_response

type AdsList200Response* = object
  ## 
  items*: seq[AdResponse]
  bookmark*: string
