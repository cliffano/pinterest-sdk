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
import model_item_create_batch_record
import model_item_delete_batch_record
import model_item_delete_discontinued_batch_record
import model_item_update_batch_record
import model_item_upsert_batch_record
import model_update_mask_field_type

type ItemBatchRecord* = object
  ## Object describing an item batch record
  itemId*: string ## The catalog item id in the merchant namespace
  attributes*: ItemAttributes
  updateMask*: seq[UpdateMaskFieldType] ## The list of product attributes to be updated. Attributes specified in the update mask without a value specified in the body will be deleted from the product item.
