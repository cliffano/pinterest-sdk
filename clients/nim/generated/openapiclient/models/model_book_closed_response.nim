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


type BookClosedResponse* = object
  ## Creation fields
  conversionMetricsReady*: bool ## Are conversion metrics ready?
  nonConversionMetricsReady*: bool ## Are non-conversion metrics ready?
