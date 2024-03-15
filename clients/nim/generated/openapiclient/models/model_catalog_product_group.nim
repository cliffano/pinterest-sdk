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

import model_board
import model_entity_status
import model_object

type CatalogProductGroup* = object
  ## non-promoted catalog product group entity
  id*: string ## ID of the catalog product group.
  merchantId*: string ## Merchant ID pertaining to the owner of the catalog product group.
  name*: string ## Name of catalog product group
  filters*: object ## Object holding a list of filters
  filterV2*: object ## Object holding a list of filters
  `type`*: Board
  status*: EntityStatus
  feedProfileId*: string ## id of the feed profile belonging to this catalog product group
  createdAt*: int ## Unix timestamp in seconds of when catalog product group was created.
  lastUpdate*: int ## Unix timestamp in seconds of last time catalog product group was updated.
  productCount*: int ## Amount of products in the catalog product group
  featuredPosition*: int ## index of the featured position of the catalog product group
