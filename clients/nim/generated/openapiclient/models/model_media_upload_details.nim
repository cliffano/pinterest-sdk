#
# Pinterest REST API
# 
# Pinterest's REST API
# The version of the OpenAPI document: 5.3.0
# Contact: pinterest-api@pinterest.com
# Generated by: https://openapi-generator.tech
#

import json
import tables

import model_media_upload_status
import model_media_upload_type

type MediaUploadDetails* = object
  ## Media upload details
  mediaId*: string
  mediaType*: MediaUploadType
  status*: MediaUploadStatus
