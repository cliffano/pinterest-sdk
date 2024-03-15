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
 * Request object to upsert catalogs items
 * @param country 
 * @param language 
 * @param operation 
 * @param items Array with catalogs items
 */
object CatalogsItemsUpsertBatchRequests : BaseTable<CatalogsItemsUpsertBatchRequest>("CatalogsItemsUpsertBatchRequest") {
    val country = long("country")
    val language = long("language")
    val operation = long("operation")

    /**
     * Create an entity of type CatalogsItemsUpsertBatchRequest from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = CatalogsItemsUpsertBatchRequest(
        country = Countrys.createEntity(row, withReferences) /* Country */,
        language = Languages.createEntity(row, withReferences) /* Language */,
        operation = BatchOperations.createEntity(row, withReferences) /* BatchOperation */,
        items = emptyList() /* kotlin.Array<ItemUpsertBatchRecord> */ /* Array with catalogs items */
    )

    /**
    * Assign all the columns from the entity of type CatalogsItemsUpsertBatchRequest to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = CatalogsItemsUpsertBatchRequest()
    * database.update(CatalogsItemsUpsertBatchRequests, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: CatalogsItemsUpsertBatchRequest) {
        this.apply {
            set(CatalogsItemsUpsertBatchRequests.country, entity.country)
            set(CatalogsItemsUpsertBatchRequests.language, entity.language)
            set(CatalogsItemsUpsertBatchRequests.operation, entity.operation)
        }
    }

}


object CatalogsItemsUpsertBatchRequestItemUpsertBatchRecord : BaseTable<Pair<kotlin.Long, kotlin.Long>>("CatalogsItemsUpsertBatchRequestItemUpsertBatchRecord") {
    val catalogsItemsUpsertBatchRequest = long("catalogsItemsUpsertBatchRequest")
    val itemUpsertBatchRecord = long("itemUpsertBatchRecord")

    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean): Pair<kotlin.Long, kotlin.Long> =
        Pair(row[catalogsItemsUpsertBatchRequest] ?: 0, row[itemUpsertBatchRecord] ?: 0)

    fun AssignmentsBuilder.assignFrom(entity: Pair<kotlin.Long, kotlin.Long>) {
        this.apply {
            set(CatalogsItemsUpsertBatchRequestItemUpsertBatchRecord.catalogsItemsUpsertBatchRequest, entity.first)
            set(CatalogsItemsUpsertBatchRequestItemUpsertBatchRecord.itemUpsertBatchRecord, entity.second)
        }
    }

}
