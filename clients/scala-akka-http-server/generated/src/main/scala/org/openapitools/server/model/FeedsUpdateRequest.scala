package org.openapitools.server.model


/**
 * @param defaultCurrency  for example: ''null''
 * @param name A human-friendly name associated to a given feed. for example: ''null''
 * @param format  for example: ''null''
 * @param credentials  for example: ''null''
 * @param location The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing. for example: ''null''
 * @param preferredProcessingSchedule  for example: ''null''
 * @param status  for example: ''null''
 * @param catalogType  for example: ''null''
 * @param defaultAvailability  for example: ''null''
*/
final case class FeedsUpdateRequest (
  defaultCurrency: Option[NullableCurrency] = None,
  name: Option[String] = None,
  format: Option[CatalogsFormat] = None,
  credentials: Option[CatalogsFeedCredentials] = None,
  location: Option[String] = None,
  preferredProcessingSchedule: Option[CatalogsFeedProcessingSchedule] = None,
  status: Option[CatalogsStatus] = None,
  catalogType: CatalogsType,
  defaultAvailability: Option[ProductAvailabilityType] = None
)

