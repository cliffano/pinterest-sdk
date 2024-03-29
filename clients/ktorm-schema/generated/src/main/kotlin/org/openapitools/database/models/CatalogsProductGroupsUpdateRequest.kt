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
 * 
 * @param name 
 * @param description 
 * @param isFeatured boolean indicator of whether the product group is being featured or not
 * @param filters 
 * @param catalogType 
 */
object CatalogsProductGroupsUpdateRequests : BaseTable<CatalogsProductGroupsUpdateRequest>("catalogs_product_groups_update_request") {
    val name = text("name") /* null */
    val description = text("description") /* null */
    val isFeatured = boolean("is_featured") /* null */ /* boolean indicator of whether the product group is being featured or not */
    val filters = long("filters") /* null */
    val catalogType = text("catalog_type").transform({ CatalogsProductGroupsUpdateRequest.CatalogType.valueOf(it ?: "HOTEL") }, { it.value }) /* null */


    /**
     * Create an entity of type CatalogsProductGroupsUpdateRequest from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = CatalogsProductGroupsUpdateRequest(
        name = row[name]  /* kotlin.String? */,
        description = row[description]  /* kotlin.String? */,
        isFeatured = row[isFeatured]  /* kotlin.Boolean? */ /* boolean indicator of whether the product group is being featured or not */,
        filters = CatalogsProductGroupFiltersRequests.createEntity(row, withReferences) /* CatalogsProductGroupFiltersRequest? */,
        catalogType = row[catalogType]  /* kotlin.String? */
    )

    /**
    * Assign all the columns from the entity of type CatalogsProductGroupsUpdateRequest to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = CatalogsProductGroupsUpdateRequest()
    * database.update(CatalogsProductGroupsUpdateRequests, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: CatalogsProductGroupsUpdateRequest) {
        this.apply {
            set(CatalogsProductGroupsUpdateRequests.name, entity.name)
            set(CatalogsProductGroupsUpdateRequests.description, entity.description)
            set(CatalogsProductGroupsUpdateRequests.isFeatured, entity.isFeatured)
            set(CatalogsProductGroupsUpdateRequests.filters, entity.filters)
            set(CatalogsProductGroupsUpdateRequests.catalogType, entity.catalogType)
        }
    }

}


