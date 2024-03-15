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


type SourceType* {.pure.} = enum
  PinUrl

type PinMediaSourcePinURL* = object
  ## Pin URL-based media source for product pin creation. Currently the field is only available to a list of beta users.
  sourceType*: SourceType
  isAffiliateLink*: bool ## This is an affiliate link or sponsored product. The FTC requires disclosure for paid partnerships and affiliate products.

func `%`*(v: SourceType): JsonNode =
  let str = case v:
    of SourceType.PinUrl: "pin_url"

  JsonNode(kind: JString, str: str)

func `$`*(v: SourceType): string =
  result = case v:
    of SourceType.PinUrl: "pin_url"