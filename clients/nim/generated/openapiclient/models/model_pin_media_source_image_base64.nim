#
# Pinterest REST API
# 
# Pinterest's REST API
# The version of the OpenAPI document: 5.3.0
# Contact: blah@cliffano.com
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
