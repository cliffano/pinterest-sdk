/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.3.0
* Contact: blah@cliffano.com
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
 * Request object of catalogs items batch
 * @param country 
 * @param language 
 * @param operation 
 * @param items Array with catalogs items
 */
object CatalogsItemsBatchRequests : BaseTable<CatalogsItemsBatchRequest>("CatalogsItemsBatchRequest") {
    val country = long("country") /* null */
    val language = long("language") /* null */
    val operation = long("operation") /* null */

    /**
     * Create an entity of type CatalogsItemsBatchRequest from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = CatalogsItemsBatchRequest(
        country = Countrys.createEntity(row, withReferences) /* Country? */,
        language = Languages.createEntity(row, withReferences) /* Language? */,
        operation = BatchOperations.createEntity(row, withReferences) /* BatchOperation? */,
        items = emptyList() /* kotlin.Array<ItemBatchRecord>? */ /* Array with catalogs items */
    )

    /**
    * Assign all the columns from the entity of type CatalogsItemsBatchRequest to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = CatalogsItemsBatchRequest()
    * database.update(CatalogsItemsBatchRequests, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: CatalogsItemsBatchRequest) {
        this.apply {
            set(CatalogsItemsBatchRequests.country, entity.country)
            set(CatalogsItemsBatchRequests.language, entity.language)
            set(CatalogsItemsBatchRequests.operation, entity.operation)
        }
    }

}


object CatalogsItemsBatchRequestItemBatchRecord : BaseTable<Pair<kotlin.Long, kotlin.Long>>("CatalogsItemsBatchRequestItemBatchRecord") {
    val catalogsItemsBatchRequest = long("catalogsItemsBatchRequest")
    val itemBatchRecord = long("itemBatchRecord")

    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean): Pair<kotlin.Long, kotlin.Long> =
        Pair(row[catalogsItemsBatchRequest] ?: 0, row[itemBatchRecord] ?: 0)

    fun AssignmentsBuilder.assignFrom(entity: Pair<kotlin.Long, kotlin.Long>) {
        this.apply {
            set(CatalogsItemsBatchRequestItemBatchRecord.catalogsItemsBatchRequest, entity.first)
            set(CatalogsItemsBatchRequestItemBatchRecord.itemBatchRecord, entity.second)
        }
    }

}

