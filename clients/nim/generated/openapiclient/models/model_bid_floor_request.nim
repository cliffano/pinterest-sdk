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

import model_bid_floor_spec
import model_targeting_spec

type BidFloorRequest* = object
  ## 
  bidFloorSpecs*: seq[BidFloorSpec]
  targetingSpec*: TargetingSpec
