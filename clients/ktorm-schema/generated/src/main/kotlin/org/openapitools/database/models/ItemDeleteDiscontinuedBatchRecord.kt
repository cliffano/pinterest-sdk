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
 * Object describing an item batch record to discontinue items
 * @param itemId The catalog item id in the merchant namespace
 */
object ItemDeleteDiscontinuedBatchRecords : BaseTable<ItemDeleteDiscontinuedBatchRecord>("ItemDeleteDiscontinuedBatchRecord") {
    val itemId = text("item_id") /* null */ /* The catalog item id in the merchant namespace */

    /**
     * Create an entity of type ItemDeleteDiscontinuedBatchRecord from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = ItemDeleteDiscontinuedBatchRecord(
        itemId = row[itemId]  /* kotlin.String? */ /* The catalog item id in the merchant namespace */
    )

    /**
    * Assign all the columns from the entity of type ItemDeleteDiscontinuedBatchRecord to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = ItemDeleteDiscontinuedBatchRecord()
    * database.update(ItemDeleteDiscontinuedBatchRecords, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: ItemDeleteDiscontinuedBatchRecord) {
        this.apply {
            set(ItemDeleteDiscontinuedBatchRecords.itemId, entity.itemId)
        }
    }

}


