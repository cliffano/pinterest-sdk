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

import model_media_upload_type

type MediaUploadRequest* = object
  ## Media upload request
  mediaType*: MediaUploadType
