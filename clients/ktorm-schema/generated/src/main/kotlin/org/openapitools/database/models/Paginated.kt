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
 * 
 * @param items 
 * @param bookmark 
 */
object Paginateds : BaseTable<Paginated>("Paginated") {
    val bookmark = text("bookmark") /* null */

    /**
     * Create an entity of type Paginated from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = Paginated(
        items = emptyList() /* kotlin.Array<kotlin.Any> */,
        bookmark = row[bookmark]  /* kotlin.String? */
    )

    /**
    * Assign all the columns from the entity of type Paginated to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = Paginated()
    * database.update(Paginateds, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: Paginated) {
        this.apply {
            set(Paginateds.bookmark, entity.bookmark)
        }
    }

}


object PaginatedItems : BaseTable<Pair<kotlin.Long, kotlin.Any>>("PaginatedItems") {
    val paginated = long("paginated")
    val items = blob("items")

    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean): Pair<kotlin.Long, kotlin.Any> =
        Pair(row[paginated] ?: 0, row[items] ?: )

    fun AssignmentsBuilder.assignFrom(entity: Pair<kotlin.Long, kotlin.Any>) {
        this.apply {
            set(PaginatedItems.paginated, entity.first)
            set(PaginatedItems.items, entity.second)
        }
    }

}

