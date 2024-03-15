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


type Category* {.pure.} = enum
  ADS
  ORGANIC

type DeliveryMetricsResponseItemsInner* = object
  ## 
  name*: string ## Metric's name.
  category*: Category ## Category name
  definition*: string ## How the metric is defined.
  displayName*: string ## Display name, when available. If unavaible it will not be returned. Matches how the metric is named in our native tools like Pinterest Ads Manager.

func `%`*(v: Category): JsonNode =
  let str = case v:
    of Category.ADS: "ADS"
    of Category.ORGANIC: "ORGANIC"

  JsonNode(kind: JString, str: str)

func `$`*(v: Category): string =
  result = case v:
    of Category.ADS: "ADS"
    of Category.ORGANIC: "ORGANIC"