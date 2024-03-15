package org.openapitools.server.model


/**
 * = feeds_retail_create_request =
 *
 * Request object for creating a retail feed.
 *
 * @param defaultCurrency  for example: ''null''
 * @param name A human-friendly name associated to a given feed. for example: ''null''
 * @param format  for example: ''null''
 * @param defaultLocale  for example: ''null''
 * @param credentials  for example: ''null''
 * @param location The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing. for example: ''null''
 * @param preferredProcessingSchedule  for example: ''null''
 * @param catalogType  for example: ''null''
 * @param defaultCountry  for example: ''null''
 * @param defaultAvailability  for example: ''null''
*/
final case class CatalogsRetailFeedsCreateRequest (
  defaultCurrency: Option[NullableCurrency] = None,
  name: String,
  format: CatalogsFormat,
  defaultLocale: CatalogsFeedsCreateRequestDefaultLocale,
  credentials: Option[CatalogsFeedCredentials] = None,
  location: String,
  preferredProcessingSchedule: Option[CatalogsFeedProcessingSchedule] = None,
  catalogType: CatalogsType,
  defaultCountry: Country,
  defaultAvailability: Option[ProductAvailabilityType] = None
)

