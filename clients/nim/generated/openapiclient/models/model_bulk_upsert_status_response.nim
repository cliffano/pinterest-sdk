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

import model_bulk_upsert_status

type BulkUpsertStatusResponse* = object
  ## ID of the bulk request.
  status*: BulkUpsertStatus
  resultUrl*: string
