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

import model_updatable_item_attributes
import model_update_mask_field_type

type Operation* {.pure.} = enum
  CREATE
  UPDATE
  UPSERT
  DELETE

type CatalogsUpdateRetailItem* = object
  ## An item to be updated
  itemId*: string ## The catalog item id in the merchant namespace
  operation*: Operation
  attributes*: UpdatableItemAttributes
  updateMask*: seq[UpdateMaskFieldType] ## The list of product attributes to be updated. Attributes specified in the update mask without a value specified in the body will be deleted from the product item.

func `%`*(v: Operation): JsonNode =
  let str = case v:
    of Operation.CREATE: "CREATE"
    of Operation.UPDATE: "UPDATE"
    of Operation.UPSERT: "UPSERT"
    of Operation.DELETE: "DELETE"

  JsonNode(kind: JString, str: str)

func `$`*(v: Operation): string =
  result = case v:
    of Operation.CREATE: "CREATE"
    of Operation.UPDATE: "UPDATE"
    of Operation.UPSERT: "UPSERT"
    of Operation.DELETE: "DELETE"
