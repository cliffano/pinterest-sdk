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
package org.openapitools.database.models

import org.ktorm.dsl.*
import org.ktorm.schema.*
import org.ktorm.database.Database
import .*


/**
 * 
 * @param name A human-friendly name associated to a given feed.
 * @param format 
 * @param location The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing.
 * @param catalogType 
 * @param defaultCurrency 
 * @param defaultLocale 
 * @param credentials 
 * @param preferredProcessingSchedule 
 * @param defaultCountry 
 * @param defaultAvailability 
 * @param catalogId Catalog id pertaining to the feed. If not provided, feed will use a default catalog based on type. At the moment a catalog can not have multiple hotel feeds but this will change in the future.
 */
object FeedsCreateRequests : BaseTable<FeedsCreateRequest>("feeds_create_request") {
    val name = text("name") /* A human-friendly name associated to a given feed. */
    val format = long("format")
    val location = text("location") /* The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing. */
    val catalogType = long("catalog_type")
    val defaultCurrency = long("default_currency") /* null */
    val defaultLocale = long("default_locale") /* null */
    val credentials = long("credentials") /* null */
    val preferredProcessingSchedule = long("preferred_processing_schedule") /* null */
    val defaultCountry = long("default_country") /* null */
    val defaultAvailability = long("default_availability") /* null */
    val catalogId = text("catalog_id") /* null */ /* Catalog id pertaining to the feed. If not provided, feed will use a default catalog based on type. At the moment a catalog can not have multiple hotel feeds but this will change in the future. */

    /**
     * Create an entity of type FeedsCreateRequest from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = FeedsCreateRequest(
        name = row[name] ?: "" /* kotlin.String */ /* A human-friendly name associated to a given feed. */,
        format = CatalogsFormats.createEntity(row, withReferences) /* CatalogsFormat */,
        location = row[location] ?: "" /* kotlin.String */ /* The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing. */,
        catalogType = CatalogsTypes.createEntity(row, withReferences) /* CatalogsType */,
        defaultCurrency = NullableCurrencys.createEntity(row, withReferences) /* NullableCurrency? */,
        defaultLocale = CatalogsFeedsCreateRequestDefaultLocales.createEntity(row, withReferences) /* CatalogsFeedsCreateRequestDefaultLocale? */,
        credentials = CatalogsFeedCredentialss.createEntity(row, withReferences) /* CatalogsFeedCredentials? */,
        preferredProcessingSchedule = CatalogsFeedProcessingSchedules.createEntity(row, withReferences) /* CatalogsFeedProcessingSchedule? */,
        defaultCountry = Countrys.createEntity(row, withReferences) /* Country? */,
        defaultAvailability = ProductAvailabilityTypes.createEntity(row, withReferences) /* ProductAvailabilityType? */,
        catalogId = row[catalogId]  /* kotlin.String? */ /* Catalog id pertaining to the feed. If not provided, feed will use a default catalog based on type. At the moment a catalog can not have multiple hotel feeds but this will change in the future. */
    )

    /**
    * Assign all the columns from the entity of type FeedsCreateRequest to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = FeedsCreateRequest()
    * database.update(FeedsCreateRequests, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: FeedsCreateRequest) {
        this.apply {
            set(FeedsCreateRequests.name, entity.name)
            set(FeedsCreateRequests.format, entity.format)
            set(FeedsCreateRequests.location, entity.location)
            set(FeedsCreateRequests.catalogType, entity.catalogType)
            set(FeedsCreateRequests.defaultCurrency, entity.defaultCurrency)
            set(FeedsCreateRequests.defaultLocale, entity.defaultLocale)
            set(FeedsCreateRequests.credentials, entity.credentials)
            set(FeedsCreateRequests.preferredProcessingSchedule, entity.preferredProcessingSchedule)
            set(FeedsCreateRequests.defaultCountry, entity.defaultCountry)
            set(FeedsCreateRequests.defaultAvailability, entity.defaultAvailability)
            set(FeedsCreateRequests.catalogId, entity.catalogId)
        }
    }

}


