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

import model_catalogs_feed_credentials
import model_catalogs_feed_processing_schedule
import model_catalogs_feeds_create_request_default_locale
import model_catalogs_format
import model_catalogs_type
import model_nullable_currency

type CatalogsHotelFeedsCreateRequest* = object
  ## Request object for creating a feed. Please, be aware that \"default_country\" and \"default_locale\" are not required in the spec for forward compatibility but for now the API will not accept requests without those fields.
  defaultCurrency*: NullableCurrency
  name*: string ## A human-friendly name associated to a given feed.
  format*: CatalogsFormat
  defaultLocale*: CatalogsFeedsCreateRequest_default_locale
  credentials*: CatalogsFeedCredentials
  location*: string ## The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing.
  preferredProcessingSchedule*: CatalogsFeedProcessingSchedule
  catalogType*: CatalogsType
  catalogId*: string ## Catalog id pertaining to the feed. If not provided, feed will use a default catalog based on type. At the moment a catalog can not have multiple hotel feeds but this will change in the future.
