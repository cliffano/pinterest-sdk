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
package org.openapitools.server.models

import org.openapitools.server.models.CatalogsFeedCredentials
import org.openapitools.server.models.CatalogsFeedProcessingSchedule
import org.openapitools.server.models.CatalogsFormat
import org.openapitools.server.models.CatalogsHotelFeed
import org.openapitools.server.models.CatalogsRetailFeed
import org.openapitools.server.models.CatalogsStatus
import org.openapitools.server.models.CatalogsType
import org.openapitools.server.models.Country
import org.openapitools.server.models.NullableCurrency
import org.openapitools.server.models.ProductAvailabilityType

/**
 * Catalogs Feed object
 * @param name A human-friendly name associated to a given feed. This value is currently nullable due to historical reasons. It is expected to become non-nullable in the future.
 * @param format 
 * @param catalogType 
 * @param credentials 
 * @param location The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing.
 * @param preferredProcessingSchedule 
 * @param status 
 * @param defaultCurrency 
 * @param defaultLocale The locale used within a feed for product descriptions.
 * @param defaultCountry 
 * @param defaultAvailability 
 * @param catalogId Catalog id pertaining to the feed. If not provided, feed will use a default catalog based on type.
 * @param createdAt 
 * @param id 
 * @param updatedAt 
 */
data class CatalogsFeed(
    /* A human-friendly name associated to a given feed. This value is currently nullable due to historical reasons. It is expected to become non-nullable in the future. */
    val name: kotlin.String,
    val format: CatalogsFormat,
    val catalogType: CatalogsType,
    val credentials: CatalogsFeedCredentials,
    /* The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing. */
    val location: kotlin.String,
    val preferredProcessingSchedule: CatalogsFeedProcessingSchedule,
    val status: CatalogsStatus,
    val defaultCurrency: NullableCurrency,
    /* The locale used within a feed for product descriptions. */
    val defaultLocale: kotlin.String,
    val defaultCountry: Country,
    val defaultAvailability: ProductAvailabilityType,
    /* Catalog id pertaining to the feed. If not provided, feed will use a default catalog based on type. */
    val catalogId: kotlin.String,
    val createdAt: java.time.OffsetDateTime? = null,
    val id: kotlin.String? = null,
    val updatedAt: java.time.OffsetDateTime? = null
) 
{
}

