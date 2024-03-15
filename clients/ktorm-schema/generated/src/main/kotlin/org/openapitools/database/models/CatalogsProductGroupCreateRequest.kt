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
 * Request object for creating a product group.
 * @param name 
 * @param filters 
 * @param feedId Catalog Feed id pertaining to the catalog product group.
 * @param description 
 * @param isFeatured boolean indicator of whether the product group is being featured or not
 */
object CatalogsProductGroupCreateRequests : BaseTable<CatalogsProductGroupCreateRequest>("CatalogsProductGroupCreateRequest") {
    val name = text("name")
    val filters = long("filters")
    val feedId = text("feed_id") /* Catalog Feed id pertaining to the catalog product group. */
    val description = text("description") /* null */
    val isFeatured = boolean("is_featured") /* null */ /* boolean indicator of whether the product group is being featured or not */

    /**
     * Create an entity of type CatalogsProductGroupCreateRequest from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = CatalogsProductGroupCreateRequest(
        name = row[name] ?: "" /* kotlin.String */,
        filters = CatalogsProductGroupFiltersRequests.createEntity(row, withReferences) /* CatalogsProductGroupFiltersRequest */,
        feedId = row[feedId] ?: "" /* kotlin.String */ /* Catalog Feed id pertaining to the catalog product group. */,
        description = row[description]  /* kotlin.String? */,
        isFeatured = row[isFeatured] ?: false /* kotlin.Boolean? */ /* boolean indicator of whether the product group is being featured or not */
    )

    /**
    * Assign all the columns from the entity of type CatalogsProductGroupCreateRequest to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = CatalogsProductGroupCreateRequest()
    * database.update(CatalogsProductGroupCreateRequests, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: CatalogsProductGroupCreateRequest) {
        this.apply {
            set(CatalogsProductGroupCreateRequests.name, entity.name)
            set(CatalogsProductGroupCreateRequests.filters, entity.filters)
            set(CatalogsProductGroupCreateRequests.feedId, entity.feedId)
            set(CatalogsProductGroupCreateRequests.description, entity.description)
            set(CatalogsProductGroupCreateRequests.isFeatured, entity.isFeatured)
        }
    }

}

