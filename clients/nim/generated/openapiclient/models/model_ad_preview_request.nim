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

import model_ad_preview_create_from_image
import model_ad_preview_create_from_pin

type AdPreviewRequest* = object
  ## 
  imageUrl*: string ## Image URL.
  title*: string ## Title displayed below ad.
  pinId*: string ## Pin ID.
