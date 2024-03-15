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

import model_item_attributes

type Operation* {.pure.} = enum
  CREATE
  UPDATE
  UPSERT
  DELETE

type CatalogsUpsertRetailItem* = object
  ## An item to be upserted
  itemId*: string ## The catalog item id in the merchant namespace
  operation*: Operation
  attributes*: ItemAttributes

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
