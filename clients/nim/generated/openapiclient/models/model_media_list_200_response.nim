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

import model_media_upload_details

type MediaList200Response* = object
  ## 
  items*: seq[MediaUploadDetails] ## Media
  bookmark*: string
