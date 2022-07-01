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

import model_image_details
import model_map
import model_pin_media
import model_pin_media_with_image_all_of

type PinMediaWithImage* = object
  ## Pin with image.
  images*: Table[string, ImageDetails]
  mediaType*: string
