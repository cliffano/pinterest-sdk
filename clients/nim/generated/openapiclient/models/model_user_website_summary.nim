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


type UserWebsiteSummary* = object
  ## 
  website*: string ## Website with path or domain only
  status*: string ## Status of the verification process
  verifiedAt*: string ## UTC timestamp when the verification happened - sometimes missing