/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

package org.openapitools.client.model


case class CatalogsFeedsUpdateRequest (
  defaultAvailability: Option[ProductAvailabilityType] = None,
  defaultCurrency: Option[NullableCurrency] = None,
  // A human-friendly name associated to a given feed.
  name: Option[String] = None,
  format: Option[CatalogsFormat] = None,
  credentials: Option[CatalogsFeedCredentials] = None,
  // The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing.
  location: Option[String] = None,
  preferredProcessingSchedule: Option[CatalogsFeedProcessingSchedule] = None,
  status: Option[CatalogsStatus] = None
)

