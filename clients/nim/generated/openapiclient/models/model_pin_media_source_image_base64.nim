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
  ImageBase64

type ContentType* {.pure.} = enum
  Jpeg
  Png

type PinMediaSourceImageBase64* = object
  ## Base64-encoded image media source
  sourceType*: SourceType
  contentType*: ContentType
  data*: string
  isStandard*: bool ## Set the parameter to false to create the new simplified Pin instead of the standard pin. Currently the field is only available to a list of beta users.

func `%`*(v: SourceType): JsonNode =
  let str = case v:
    of SourceType.ImageBase64: "image_base64"

  JsonNode(kind: JString, str: str)

func `$`*(v: SourceType): string =
  result = case v:
    of SourceType.ImageBase64: "image_base64"

func `%`*(v: ContentType): JsonNode =
  let str = case v:
    of ContentType.Jpeg: "image/jpeg"
    of ContentType.Png: "image/png"

  JsonNode(kind: JString, str: str)

func `$`*(v: ContentType): string =
  result = case v:
    of ContentType.Jpeg: "image/jpeg"
    of ContentType.Png: "image/png"
