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


type BoardMedia* = object
  ## Board media.
  imageCoverUrl*: string ## Board cover image.
  pinThumbnailUrls*: seq[string] ## Board pin thumbnail urls.
