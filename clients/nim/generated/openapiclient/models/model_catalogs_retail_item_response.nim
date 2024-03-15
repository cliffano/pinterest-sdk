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

import model_catalogs_type
import model_item_attributes
import model_pin

type CatalogsRetailItemResponse* = object
  ## Object describing a retail item record
  catalogType*: CatalogsType
  itemId*: string ## The catalog retail item id in the merchant namespace
  pins*: seq[Pin] ## The pins mapped to the item
  attributes*: ItemAttributes
