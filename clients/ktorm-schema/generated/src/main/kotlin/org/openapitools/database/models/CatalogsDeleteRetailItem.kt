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
 * An item to be deleted
 * @param itemId The catalog item id in the merchant namespace
 * @param operation 
 */
object CatalogsDeleteRetailItems : BaseTable<CatalogsDeleteRetailItem>("CatalogsDeleteRetailItem") {
    val itemId = text("item_id") /* The catalog item id in the merchant namespace */
    val operation = text("operation").transform({ CatalogsDeleteRetailItem.Operation.valueOf(it) }, { it.value })

    /**
     * Create an entity of type CatalogsDeleteRetailItem from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = CatalogsDeleteRetailItem(
        itemId = row[itemId] ?: "" /* kotlin.String */ /* The catalog item id in the merchant namespace */,
        operation = row[operation] ?: CatalogsDeleteRetailItem.Operation.valueOf("") /* kotlin.String */
    )

    /**
    * Assign all the columns from the entity of type CatalogsDeleteRetailItem to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = CatalogsDeleteRetailItem()
    * database.update(CatalogsDeleteRetailItems, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: CatalogsDeleteRetailItem) {
        this.apply {
            set(CatalogsDeleteRetailItems.itemId, entity.itemId)
            set(CatalogsDeleteRetailItems.operation, entity.operation)
        }
    }

}

