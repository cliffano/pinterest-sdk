/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */
package org.openapitools.client.model

import java.time.OffsetDateTime
import org.openapitools.client.core.ApiModel

case class CatalogsFeed (
  createdAt: Option[OffsetDateTime] = None,
  id: Option[String] = None,
  updatedAt: Option[OffsetDateTime] = None,
  defaultCountry: Country,
  defaultAvailability: ProductAvailabilityType,
  defaultCurrency: NullableCurrency,
  /* A human-friendly name associated to a given feed. This value is currently nullable due to historical reasons. It is expected to become non-nullable in the future. */
  name: String,
  format: CatalogsFormat,
  /* The locale used within a feed for product descriptions. */
  defaultLocale: String,
  credentials: CatalogsFeedCredentials,
  /* The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing. */
  location: String,
  preferredProcessingSchedule: CatalogsFeedProcessingSchedule,
  status: CatalogsStatus
) extends ApiModel

