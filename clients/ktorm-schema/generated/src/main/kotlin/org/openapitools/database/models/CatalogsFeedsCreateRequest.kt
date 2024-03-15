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
 * Request object for creating a feed. Please, be aware that \"default_country\" and \"default_locale\" are not required in the spec for forward compatibility but for now the API will not accept requests without those fields.
 * @param name A human-friendly name associated to a given feed.
 * @param format 
 * @param location The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing.
 * @param defaultCurrency 
 * @param defaultLocale 
 * @param credentials 
 * @param preferredProcessingSchedule 
 * @param defaultCountry 
 * @param defaultAvailability 
 */
object CatalogsFeedsCreateRequests : BaseTable<CatalogsFeedsCreateRequest>("CatalogsFeedsCreateRequest") {
    val name = text("name") /* A human-friendly name associated to a given feed. */
    val format = long("format")
    val location = text("location") /* The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing. */
    val defaultCurrency = long("default_currency") /* null */
    val defaultLocale = long("default_locale") /* null */
    val credentials = long("credentials") /* null */
    val preferredProcessingSchedule = long("preferred_processing_schedule") /* null */
    val defaultCountry = long("default_country") /* null */
    val defaultAvailability = long("default_availability") /* null */

    /**
     * Create an entity of type CatalogsFeedsCreateRequest from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = CatalogsFeedsCreateRequest(
        name = row[name] ?: "" /* kotlin.String */ /* A human-friendly name associated to a given feed. */,
        format = CatalogsFormats.createEntity(row, withReferences) /* CatalogsFormat */,
        location = row[location] ?: "" /* kotlin.String */ /* The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing. */,
        defaultCurrency = NullableCurrencys.createEntity(row, withReferences) /* NullableCurrency? */,
        defaultLocale = CatalogsFeedsCreateRequestDefaultLocales.createEntity(row, withReferences) /* CatalogsFeedsCreateRequestDefaultLocale? */,
        credentials = CatalogsFeedCredentialss.createEntity(row, withReferences) /* CatalogsFeedCredentials? */,
        preferredProcessingSchedule = CatalogsFeedProcessingSchedules.createEntity(row, withReferences) /* CatalogsFeedProcessingSchedule? */,
        defaultCountry = Countrys.createEntity(row, withReferences) /* Country? */,
        defaultAvailability = ProductAvailabilityTypes.createEntity(row, withReferences) /* ProductAvailabilityType? */
    )

    /**
    * Assign all the columns from the entity of type CatalogsFeedsCreateRequest to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = CatalogsFeedsCreateRequest()
    * database.update(CatalogsFeedsCreateRequests, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: CatalogsFeedsCreateRequest) {
        this.apply {
            set(CatalogsFeedsCreateRequests.name, entity.name)
            set(CatalogsFeedsCreateRequests.format, entity.format)
            set(CatalogsFeedsCreateRequests.location, entity.location)
            set(CatalogsFeedsCreateRequests.defaultCurrency, entity.defaultCurrency)
            set(CatalogsFeedsCreateRequests.defaultLocale, entity.defaultLocale)
            set(CatalogsFeedsCreateRequests.credentials, entity.credentials)
            set(CatalogsFeedsCreateRequests.preferredProcessingSchedule, entity.preferredProcessingSchedule)
            set(CatalogsFeedsCreateRequests.defaultCountry, entity.defaultCountry)
            set(CatalogsFeedsCreateRequests.defaultAvailability, entity.defaultAvailability)
        }
    }

}


