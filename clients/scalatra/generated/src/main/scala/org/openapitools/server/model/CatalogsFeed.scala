/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 */

package org.openapitools.server.model
import java.time.OffsetDateTime

case class CatalogsFeed(
  createdAt: Option[OffsetDateTime],

  id: Option[String],

  updatedAt: Option[OffsetDateTime],

  /* A human-friendly name associated to a given feed. This value is currently nullable due to historical reasons. It is expected to become non-nullable in the future. */
  name: String,

  format: CatalogsFormat,

  catalogType: CatalogsType,

  credentials: CatalogsFeedCredentials,

  /* The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing. */
  location: String,

  preferredProcessingSchedule: CatalogsFeedProcessingSchedule,

  status: CatalogsStatus,

  defaultCurrency: NullableCurrency,

  /* The locale used within a feed for product descriptions. */
  defaultLocale: String,

  defaultCountry: Country,

  defaultAvailability: ProductAvailabilityType,

  /* Catalog id pertaining to the feed. If not provided, feed will use a default catalog based on type. */
  catalogId: String

 )
