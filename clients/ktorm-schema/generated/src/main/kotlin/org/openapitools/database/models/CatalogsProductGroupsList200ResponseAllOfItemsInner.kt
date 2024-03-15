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
 * @param id ID of the catalog product group.
 * @param filters 
 * @param feedId id of the catalogs feed belonging to this catalog product group
 * @param catalogId 
 * @param name Name of catalog product group
 * @param description 
 * @param isFeatured boolean indicator of whether the product group is being featured or not
 * @param type 
 * @param status 
 * @param createdAt Unix timestamp in seconds of when catalog product group was created.
 * @param updatedAt Unix timestamp in seconds of last time catalog product group was updated.
 * @param catalogType 
 */
object CatalogsProductGroupsList200ResponseAllOfItemsInners : BaseTable<CatalogsProductGroupsList200ResponseAllOfItemsInner>("catalogs_product_groups_list_200_response_allOf_items_inner") {
    val id = text("id") /* ID of the catalog product group. */
    val filters = long("filters")
    val feedId = text("feed_id") /* id of the catalogs feed belonging to this catalog product group */
    val catalogId = text("catalog_id")
    val name = text("name") /* null */ /* Name of catalog product group */
    val description = text("description") /* null */
    val isFeatured = boolean("is_featured") /* null */ /* boolean indicator of whether the product group is being featured or not */
    val type = long("type") /* null */
    val status = long("status") /* null */
    val createdAt = int("created_at") /* null */ /* Unix timestamp in seconds of when catalog product group was created. */
    val updatedAt = int("updated_at") /* null */ /* Unix timestamp in seconds of last time catalog product group was updated. */
    val catalogType = text("catalog_type").transform({ CatalogsProductGroupsList200ResponseAllOfItemsInner.CatalogType.valueOf(it ?: "RETAIL") }, { it.value }) /* null */


    /**
     * Create an entity of type CatalogsProductGroupsList200ResponseAllOfItemsInner from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = CatalogsProductGroupsList200ResponseAllOfItemsInner(
        id = row[id] ?: "" /* kotlin.String */ /* ID of the catalog product group. */,
        filters = CatalogsProductGroupFilterss.createEntity(row, withReferences) /* CatalogsProductGroupFilters */,
        feedId = row[feedId] ?: "" /* kotlin.String */ /* id of the catalogs feed belonging to this catalog product group */,
        catalogId = row[catalogId] ?: "" /* kotlin.String */,
        name = row[name]  /* kotlin.String? */ /* Name of catalog product group */,
        description = row[description]  /* kotlin.String? */,
        isFeatured = row[isFeatured]  /* kotlin.Boolean? */ /* boolean indicator of whether the product group is being featured or not */,
        type = CatalogsProductGroupTypes.createEntity(row, withReferences) /* CatalogsProductGroupType? */,
        status = CatalogsProductGroupStatuss.createEntity(row, withReferences) /* CatalogsProductGroupStatus? */,
        createdAt = row[createdAt]  /* kotlin.Int? */ /* Unix timestamp in seconds of when catalog product group was created. */,
        updatedAt = row[updatedAt]  /* kotlin.Int? */ /* Unix timestamp in seconds of last time catalog product group was updated. */,
        catalogType = row[catalogType]  /* kotlin.String? */
    )

    /**
    * Assign all the columns from the entity of type CatalogsProductGroupsList200ResponseAllOfItemsInner to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = CatalogsProductGroupsList200ResponseAllOfItemsInner()
    * database.update(CatalogsProductGroupsList200ResponseAllOfItemsInners, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: CatalogsProductGroupsList200ResponseAllOfItemsInner) {
        this.apply {
            set(CatalogsProductGroupsList200ResponseAllOfItemsInners.id, entity.id)
            set(CatalogsProductGroupsList200ResponseAllOfItemsInners.filters, entity.filters)
            set(CatalogsProductGroupsList200ResponseAllOfItemsInners.feedId, entity.feedId)
            set(CatalogsProductGroupsList200ResponseAllOfItemsInners.catalogId, entity.catalogId)
            set(CatalogsProductGroupsList200ResponseAllOfItemsInners.name, entity.name)
            set(CatalogsProductGroupsList200ResponseAllOfItemsInners.description, entity.description)
            set(CatalogsProductGroupsList200ResponseAllOfItemsInners.isFeatured, entity.isFeatured)
            set(CatalogsProductGroupsList200ResponseAllOfItemsInners.type, entity.type)
            set(CatalogsProductGroupsList200ResponseAllOfItemsInners.status, entity.status)
            set(CatalogsProductGroupsList200ResponseAllOfItemsInners.createdAt, entity.createdAt)
            set(CatalogsProductGroupsList200ResponseAllOfItemsInners.updatedAt, entity.updatedAt)
            set(CatalogsProductGroupsList200ResponseAllOfItemsInners.catalogType, entity.catalogType)
        }
    }

}

