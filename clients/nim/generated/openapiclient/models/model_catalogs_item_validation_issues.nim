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

import model_catalogs_item_validation_errors
import model_catalogs_item_validation_warnings

type CatalogsItemValidationIssues* = object
  ## 
  itemNumber*: int ## Item number based on order of appearance in the Catalogs Feed. For example, '0' refers to first item found in a feed that was downloaded from a 'location' specified during feed creation.
  itemId*: string ## The merchant-created unique ID that represents the product.
  errors*: CatalogsItemValidationErrors
  warnings*: CatalogsItemValidationWarnings
