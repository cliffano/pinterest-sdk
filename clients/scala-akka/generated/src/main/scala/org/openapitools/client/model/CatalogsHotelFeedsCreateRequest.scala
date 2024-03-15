/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */
package org.openapitools.client.model

import org.openapitools.client.core.ApiModel

case class CatalogsHotelFeedsCreateRequest (
  defaultCurrency: Option[NullableCurrency] = None,
  /* A human-friendly name associated to a given feed. */
  name: String,
  format: CatalogsFormat,
  defaultLocale: CatalogsFeedsCreateRequestDefaultLocale,
  credentials: Option[CatalogsFeedCredentials] = None,
  /* The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing. */
  location: String,
  preferredProcessingSchedule: Option[CatalogsFeedProcessingSchedule] = None,
  catalogType: CatalogsType,
  /* Catalog id pertaining to the feed. If not provided, feed will use a default catalog based on type. At the moment a catalog can not have multiple hotel feeds but this will change in the future. */
  catalogId: Option[String] = None
) extends ApiModel

object CatalogsHotelFeedsCreateRequestEnums {

}
