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

import model_ad_group_audience_sizing_request_keywords_inner
import model_placement_group_type
import model_targeting_spec

type CreativeTypes* {.pure.} = enum
  REGULAR
  VIDEO
  SHOPPING
  CAROUSEL
  MAXVIDEO
  SHOPTHEPIN
  COLLECTION
  IDEA

type AdGroupAudienceSizingRequest* = object
  ## 
  autoTargetingEnabled*: bool ## Enable auto-targeting for ad group. Also known as <a href=\"https://help.pinterest.com/en/business/article/expanded-targeting\" target=\"_blank\">\"expanded targeting\"</a>.
  placementGroup*: PlacementGroupType ## <a href=\"/docs/redoc/#section/Placement-group\">Placement group</a>.
  creativeTypes*: CreativeTypes ## Pin creative types filter. </p><strong>Note:</strong> SHOP_THE_PIN has been deprecated. Please use COLLECTION instead.
  targetingSpec*: TargetingSpec
  productGroupIds*: seq[string] ## Targeted product group IDs. </p><strong>Note:</strong> This can only be combined with shopping/catalog sales campaigns. For more information, <a href=\"https://help.pinterest.com/en/business/article/shopping-ads#section-14571\" target=\"_blank\">click here</a>. SHOPPING_RETARGETING must be included in targeting_spec object or this field will be ignored.
  keywords*: seq[AdGroupAudienceSizingRequest_keywords_inner] ## Array of keyword objects. If the keywords field is missing, all keywords will be targeted.

func `%`*(v: CreativeTypes): JsonNode =
  let str = case v:
    of CreativeTypes.REGULAR: "REGULAR"
    of CreativeTypes.VIDEO: "VIDEO"
    of CreativeTypes.SHOPPING: "SHOPPING"
    of CreativeTypes.CAROUSEL: "CAROUSEL"
    of CreativeTypes.MAXVIDEO: "MAX_VIDEO"
    of CreativeTypes.SHOPTHEPIN: "SHOP_THE_PIN"
    of CreativeTypes.COLLECTION: "COLLECTION"
    of CreativeTypes.IDEA: "IDEA"

  JsonNode(kind: JString, str: str)

func `$`*(v: CreativeTypes): string =
  result = case v:
    of CreativeTypes.REGULAR: "REGULAR"
    of CreativeTypes.VIDEO: "VIDEO"
    of CreativeTypes.SHOPPING: "SHOPPING"
    of CreativeTypes.CAROUSEL: "CAROUSEL"
    of CreativeTypes.MAXVIDEO: "MAX_VIDEO"
    of CreativeTypes.SHOPTHEPIN: "SHOP_THE_PIN"
    of CreativeTypes.COLLECTION: "COLLECTION"
    of CreativeTypes.IDEA: "IDEA"