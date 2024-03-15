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

import model_catalogs_product_group_filter_keys
import model_catalogs_product_group_filters_all_of
import model_catalogs_product_group_filters_any_of

type CatalogsProductGroupFilters* = object
  ## Object holding a group of filters for a catalog product group
  anyOf*: seq[CatalogsProductGroupFilterKeys]
  allOf*: seq[CatalogsProductGroupFilterKeys]
