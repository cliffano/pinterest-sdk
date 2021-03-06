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

import model_item_attributes

type ItemBatchRecord* = object
  ## Object describing an item batch record
  itemId*: string ## The catalog item id in the merchant namespace
  attributes*: ItemAttributes
