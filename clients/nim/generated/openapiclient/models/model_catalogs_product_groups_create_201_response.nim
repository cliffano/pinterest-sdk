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

import model_catalogs_product_group
import model_catalogs_product_group_filters
import model_catalogs_product_group_status
import model_catalogs_product_group_type
import model_catalogs_vertical_product_group

type FeedId* {.pure.} = enum
  Null

type CatalogType* {.pure.} = enum
  RETAIL

type CatalogsProductGroupsCreate201Response* = object
  ## 
  id*: string ## ID of the catalog product group.
  name*: string ## Name of catalog product group
  description*: string
  filters*: CatalogsProductGroupFilters
  isFeatured*: bool ## boolean indicator of whether the product group is being featured or not
  `type`*: CatalogsProductGroupType
  status*: CatalogsProductGroupStatus
  createdAt*: int ## Unix timestamp in seconds of when catalog product group was created.
  updatedAt*: int ## Unix timestamp in seconds of last time catalog product group was updated.
  feedId*: FeedId
  catalogType*: CatalogType
  catalogId*: string

func `%`*(v: FeedId): JsonNode =
  let str = case v:
    of FeedId.Null: "null"

  JsonNode(kind: JString, str: str)

func `$`*(v: FeedId): string =
  result = case v:
    of FeedId.Null: "null"

func `%`*(v: CatalogType): JsonNode =
  let str = case v:
    of CatalogType.RETAIL: "RETAIL"

  JsonNode(kind: JString, str: str)

func `$`*(v: CatalogType): string =
  result = case v:
    of CatalogType.RETAIL: "RETAIL"
