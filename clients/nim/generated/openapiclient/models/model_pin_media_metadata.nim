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

import model_image_metadata
import model_image_metadata_images
import model_video_metadata

type PinMediaMetadata* = object
  ## 
  itemType*: string
  title*: string
  description*: string
  link*: string
  images*: ImageMetadata_images
  coverImageUrl*: string
  videoUrl*: string ## Video url (720p). </p><strong>Note:</strong> This field is limited and not available to all apps.
  duration*: float ## Duration (in milliseconds)
  height*: int ## Height (in pixels)
  width*: int ## Width (in pixels)