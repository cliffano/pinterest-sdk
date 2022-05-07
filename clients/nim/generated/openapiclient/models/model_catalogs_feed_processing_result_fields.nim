#
# Pinterest REST API
# 
# Pinterest's REST API
# The version of the OpenAPI document: 5.3.0
# Contact: pinterest-api@pinterest.com
# Generated by: https://openapi-generator.tech
#

import json
import tables

import model_catalogs_feed_ingestion_details
import model_catalogs_feed_processing_status
import model_catalogs_feed_product_counts
import model_catalogs_feed_validation_details

type CatalogsFeedProcessingResultFields* = object
  ## 
  ingestionDetails*: CatalogsFeedIngestionDetails
  status*: CatalogsFeedProcessingStatus
  productCounts*: CatalogsFeedProductCounts
  validationDetails*: CatalogsFeedValidationDetails
