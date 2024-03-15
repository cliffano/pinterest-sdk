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


type PinMediaSourceImagesURLItemsInner* = object
  ## 
  title*: string
  description*: string
  link*: string ## Destination link for the image.
  url*: string ## URL of image to upload.
