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
 * Object describing a retail item record
 * @param catalogType 
 * @param itemId The catalog retail item id in the merchant namespace
 * @param pins The pins mapped to the item
 * @param attributes 
 */
object CatalogsRetailItemResponses : BaseTable<CatalogsRetailItemResponse>("CatalogsRetailItemResponse") {
    val catalogType = long("catalog_type")
    val itemId = text("item_id") /* null */ /* The catalog retail item id in the merchant namespace */
    val attributes = long("attributes") /* null */

    /**
     * Create an entity of type CatalogsRetailItemResponse from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = CatalogsRetailItemResponse(
        catalogType = CatalogsTypes.createEntity(row, withReferences) /* CatalogsType */,
        itemId = row[itemId]  /* kotlin.String? */ /* The catalog retail item id in the merchant namespace */,
        pins = emptyList() /* kotlin.Array<Pin>? */ /* The pins mapped to the item */,
        attributes = ItemAttributess.createEntity(row, withReferences) /* ItemAttributes? */
    )

    /**
    * Assign all the columns from the entity of type CatalogsRetailItemResponse to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = CatalogsRetailItemResponse()
    * database.update(CatalogsRetailItemResponses, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: CatalogsRetailItemResponse) {
        this.apply {
            set(CatalogsRetailItemResponses.catalogType, entity.catalogType)
            set(CatalogsRetailItemResponses.itemId, entity.itemId)
            set(CatalogsRetailItemResponses.attributes, entity.attributes)
        }
    }

}


object CatalogsRetailItemResponsePin : BaseTable<Pair<kotlin.Long, kotlin.Long>>("CatalogsRetailItemResponsePin") {
    val catalogsRetailItemResponse = long("catalogsRetailItemResponse")
    val pin = long("pin")

    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean): Pair<kotlin.Long, kotlin.Long> =
        Pair(row[catalogsRetailItemResponse] ?: 0, row[pin] ?: 0)

    fun AssignmentsBuilder.assignFrom(entity: Pair<kotlin.Long, kotlin.Long>) {
        this.apply {
            set(CatalogsRetailItemResponsePin.catalogsRetailItemResponse, entity.first)
            set(CatalogsRetailItemResponsePin.pin, entity.second)
        }
    }

}
