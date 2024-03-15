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


type AdAccountCreateSubscriptionResponse* = object
  ## 
  id*: string ## Subscription ID.
  cryptographicKey*: string ## Base64 encoded key for client to decrypt lead data.
  cryptographicAlgorithm*: string ## Lead data encryption algorithm.
  createdTime*: int ## Subscription creation time. Unix timestamp in milliseconds.
