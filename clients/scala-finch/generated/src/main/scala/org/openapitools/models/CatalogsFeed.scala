package org.openapitools.models

import io.circe._
import io.finch.circe._
import io.circe.generic.semiauto._
import io.circe.java8.time._
import org.openapitools._
import java.time.ZonedDateTime
import org.openapitools.models.CatalogsFeedCredentials
import org.openapitools.models.CatalogsFeedProcessingSchedule
import org.openapitools.models.CatalogsFormat
import org.openapitools.models.CatalogsHotelFeed
import org.openapitools.models.CatalogsRetailFeed
import org.openapitools.models.CatalogsStatus
import org.openapitools.models.CatalogsType
import org.openapitools.models.Country
import org.openapitools.models.NullableCurrency
import org.openapitools.models.ProductAvailabilityType

/**
 * Catalogs Feed object
 * @param createdUnderscoreat 
 * @param id 
 * @param updatedUnderscoreat 
 * @param name A human-friendly name associated to a given feed. This value is currently nullable due to historical reasons. It is expected to become non-nullable in the future.
 * @param format 
 * @param catalogUnderscoretype 
 * @param credentials 
 * @param location The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing.
 * @param preferredUnderscoreprocessingUnderscoreschedule 
 * @param status 
 * @param defaultUnderscorecurrency 
 * @param defaultUnderscorelocale The locale used within a feed for product descriptions.
 * @param defaultUnderscorecountry 
 * @param defaultUnderscoreavailability 
 * @param catalogUnderscoreid Catalog id pertaining to the feed. If not provided, feed will use a default catalog based on type.
 */
case class CatalogsFeed(createdUnderscoreat: Option[ZonedDateTime],
                id: Option[String],
                updatedUnderscoreat: Option[ZonedDateTime],
                name: String,
                format: CatalogsFormat,
                catalogUnderscoretype: CatalogsType,
                credentials: CatalogsFeedCredentials,
                location: String,
                preferredUnderscoreprocessingUnderscoreschedule: CatalogsFeedProcessingSchedule,
                status: CatalogsStatus,
                defaultUnderscorecurrency: NullableCurrency,
                defaultUnderscorelocale: String,
                defaultUnderscorecountry: Country,
                defaultUnderscoreavailability: ProductAvailabilityType,
                catalogUnderscoreid: String
                )

object CatalogsFeed {
    /**
     * Creates the codec for converting CatalogsFeed from and to JSON.
     */
    implicit val decoder: Decoder[CatalogsFeed] = deriveDecoder
    implicit val encoder: ObjectEncoder[CatalogsFeed] = deriveEncoder
}
