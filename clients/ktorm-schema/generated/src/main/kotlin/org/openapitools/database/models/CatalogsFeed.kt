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
package org.openapitools.database.models

import org.ktorm.dsl.*
import org.ktorm.schema.*
import org.ktorm.database.Database
import .*


/**
 * Catalogs Catalogs Feed object
 * @param defaultCountry 
 * @param defaultAvailability 
 * @param defaultCurrency 
 * @param name A human-friendly name associated to a given feed. This value is currently nullable due to historical reasons. It is expected to become non-nullable in the future.
 * @param format 
 * @param defaultLocale The locale used within a feed for product descriptions.
 * @param credentials 
 * @param location The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing.
 * @param preferredProcessingSchedule 
 * @param status 
 * @param createdAt 
 * @param id 
 * @param updatedAt 
 */
object CatalogsFeeds : BaseTable<CatalogsFeed>("CatalogsFeed") {
    val defaultCountry = long("default_country")
    val defaultAvailability = long("default_availability")
    val defaultCurrency = long("default_currency")
    val name = text("name") /* A human-friendly name associated to a given feed. This value is currently nullable due to historical reasons. It is expected to become non-nullable in the future. */
    val format = long("format")
    val defaultLocale = text("default_locale") /* The locale used within a feed for product descriptions. */
    val credentials = long("credentials")
    val location = text("location") /* The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing. */
    val preferredProcessingSchedule = long("preferred_processing_schedule")
    val status = long("status")
    val createdAt = datetime("created_at") /* null */
    val id = text("id") /* null */
    val updatedAt = datetime("updated_at") /* null */

    /**
     * Create an entity of type CatalogsFeed from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = CatalogsFeed(
        defaultCountry = Countrys.createEntity(row, withReferences) /* Country */,
        defaultAvailability = ProductAvailabilityTypes.createEntity(row, withReferences) /* ProductAvailabilityType */,
        defaultCurrency = NullableCurrencys.createEntity(row, withReferences) /* NullableCurrency */,
        name = row[name] ?: "" /* kotlin.String */ /* A human-friendly name associated to a given feed. This value is currently nullable due to historical reasons. It is expected to become non-nullable in the future. */,
        format = CatalogsFormats.createEntity(row, withReferences) /* CatalogsFormat */,
        defaultLocale = row[defaultLocale] ?: "" /* kotlin.String */ /* The locale used within a feed for product descriptions. */,
        credentials = CatalogsFeedCredentialss.createEntity(row, withReferences) /* CatalogsFeedCredentials */,
        location = row[location] ?: "" /* kotlin.String */ /* The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing. */,
        preferredProcessingSchedule = CatalogsFeedProcessingSchedules.createEntity(row, withReferences) /* CatalogsFeedProcessingSchedule */,
        status = CatalogsStatuss.createEntity(row, withReferences) /* CatalogsStatus */,
        createdAt = row[createdAt]  /* java.time.LocalDateTime? */,
        id = row[id]  /* kotlin.String? */,
        updatedAt = row[updatedAt]  /* java.time.LocalDateTime? */
    )

    /**
    * Assign all the columns from the entity of type CatalogsFeed to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = CatalogsFeed()
    * database.update(CatalogsFeeds, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: CatalogsFeed) {
        this.apply {
            set(CatalogsFeeds.defaultCountry, entity.defaultCountry)
            set(CatalogsFeeds.defaultAvailability, entity.defaultAvailability)
            set(CatalogsFeeds.defaultCurrency, entity.defaultCurrency)
            set(CatalogsFeeds.name, entity.name)
            set(CatalogsFeeds.format, entity.format)
            set(CatalogsFeeds.defaultLocale, entity.defaultLocale)
            set(CatalogsFeeds.credentials, entity.credentials)
            set(CatalogsFeeds.location, entity.location)
            set(CatalogsFeeds.preferredProcessingSchedule, entity.preferredProcessingSchedule)
            set(CatalogsFeeds.status, entity.status)
            set(CatalogsFeeds.createdAt, entity.createdAt)
            set(CatalogsFeeds.id, entity.id)
            set(CatalogsFeeds.updatedAt, entity.updatedAt)
        }
    }

}


