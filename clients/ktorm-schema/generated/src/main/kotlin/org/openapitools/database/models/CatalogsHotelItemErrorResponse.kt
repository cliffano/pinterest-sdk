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
 * Object describing a hotel item error
 * @param catalogType 
 * @param hotelId The catalog hotel id in the merchant namespace
 * @param errors Array with the errors for the item id requested
 */
object CatalogsHotelItemErrorResponses : BaseTable<CatalogsHotelItemErrorResponse>("CatalogsHotelItemErrorResponse") {
    val catalogType = long("catalog_type")
    val hotelId = text("hotel_id") /* null */ /* The catalog hotel id in the merchant namespace */

    /**
     * Create an entity of type CatalogsHotelItemErrorResponse from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = CatalogsHotelItemErrorResponse(
        catalogType = CatalogsTypes.createEntity(row, withReferences) /* CatalogsType */,
        hotelId = row[hotelId]  /* kotlin.String? */ /* The catalog hotel id in the merchant namespace */,
        errors = emptyList() /* kotlin.Array<ItemValidationEvent>? */ /* Array with the errors for the item id requested */
    )

    /**
    * Assign all the columns from the entity of type CatalogsHotelItemErrorResponse to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = CatalogsHotelItemErrorResponse()
    * database.update(CatalogsHotelItemErrorResponses, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: CatalogsHotelItemErrorResponse) {
        this.apply {
            set(CatalogsHotelItemErrorResponses.catalogType, entity.catalogType)
            set(CatalogsHotelItemErrorResponses.hotelId, entity.hotelId)
        }
    }

}


object CatalogsHotelItemErrorResponseItemValidationEvent : BaseTable<Pair<kotlin.Long, kotlin.Long>>("CatalogsHotelItemErrorResponseItemValidationEvent") {
    val catalogsHotelItemErrorResponse = long("catalogsHotelItemErrorResponse")
    val itemValidationEvent = long("itemValidationEvent")

    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean): Pair<kotlin.Long, kotlin.Long> =
        Pair(row[catalogsHotelItemErrorResponse] ?: 0, row[itemValidationEvent] ?: 0)

    fun AssignmentsBuilder.assignFrom(entity: Pair<kotlin.Long, kotlin.Long>) {
        this.apply {
            set(CatalogsHotelItemErrorResponseItemValidationEvent.catalogsHotelItemErrorResponse, entity.first)
            set(CatalogsHotelItemErrorResponseItemValidationEvent.itemValidationEvent, entity.second)
        }
    }

}

