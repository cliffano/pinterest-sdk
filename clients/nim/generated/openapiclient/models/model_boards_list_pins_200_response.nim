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

import model_pin

type BoardsListPins200Response* = object
  ## 
  items*: seq[Pin] ## Pins
  bookmark*: string
