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
 * Response object of catalogs items
 * @param items Array with catalogs items
 */
object CatalogsItemss : BaseTable<CatalogsItems>("CatalogsItems") {

    /**
     * Create an entity of type CatalogsItems from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = CatalogsItems(
        items = emptyList() /* kotlin.Array<ItemResponse>? */ /* Array with catalogs items */
    )

    /**
    * Assign all the columns from the entity of type CatalogsItems to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = CatalogsItems()
    * database.update(CatalogsItemss, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: CatalogsItems) {
        this.apply {
        }
    }

}


object CatalogsItemsItemResponse : BaseTable<Pair<kotlin.Long, kotlin.Long>>("CatalogsItemsItemResponse") {
    val catalogsItems = long("catalogsItems")
    val itemResponse = long("itemResponse")

    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean): Pair<kotlin.Long, kotlin.Long> =
        Pair(row[catalogsItems] ?: 0, row[itemResponse] ?: 0)

    fun AssignmentsBuilder.assignFrom(entity: Pair<kotlin.Long, kotlin.Long>) {
        this.apply {
            set(CatalogsItemsItemResponse.catalogsItems, entity.first)
            set(CatalogsItemsItemResponse.itemResponse, entity.second)
        }
    }

}
