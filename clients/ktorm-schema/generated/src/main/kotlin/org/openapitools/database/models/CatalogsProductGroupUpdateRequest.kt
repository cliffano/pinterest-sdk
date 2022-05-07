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
 * Request object for updating a product group.
 * @param feedId Catalog Feed id pertaining to the catalog product group.
 * @param name 
 * @param filters 
 * @param description 
 */
object CatalogsProductGroupUpdateRequests : BaseTable<CatalogsProductGroupUpdateRequest>("CatalogsProductGroupUpdateRequest") {
    val feedId = text("feed_id") /* Catalog Feed id pertaining to the catalog product group. */
    val name = text("name")
    val filters = long("filters")
    val description = text("description") /* null */

    /**
     * Create an entity of type CatalogsProductGroupUpdateRequest from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = CatalogsProductGroupUpdateRequest(
        feedId = row[feedId] ?: "" /* kotlin.String */ /* Catalog Feed id pertaining to the catalog product group. */,
        name = row[name] ?: "" /* kotlin.String */,
        filters = CatalogsProductGroupFilterss.createEntity(row, withReferences) /* CatalogsProductGroupFilters */,
        description = row[description]  /* kotlin.String? */
    )

    /**
    * Assign all the columns from the entity of type CatalogsProductGroupUpdateRequest to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = CatalogsProductGroupUpdateRequest()
    * database.update(CatalogsProductGroupUpdateRequests, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: CatalogsProductGroupUpdateRequest) {
        this.apply {
            set(CatalogsProductGroupUpdateRequests.feedId, entity.feedId)
            set(CatalogsProductGroupUpdateRequests.name, entity.name)
            set(CatalogsProductGroupUpdateRequests.filters, entity.filters)
            set(CatalogsProductGroupUpdateRequests.description, entity.description)
        }
    }

}


