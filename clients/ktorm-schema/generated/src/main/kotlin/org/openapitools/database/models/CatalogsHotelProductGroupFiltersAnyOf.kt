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
 * @param anyOf 
 */
object CatalogsHotelProductGroupFiltersAnyOfs : BaseTable<CatalogsHotelProductGroupFiltersAnyOf>("CatalogsHotelProductGroupFiltersAnyOf") {

    /**
     * Create an entity of type CatalogsHotelProductGroupFiltersAnyOf from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = CatalogsHotelProductGroupFiltersAnyOf(
        anyOf = emptyList() /* kotlin.Array<CatalogsHotelProductGroupFilterKeys> */
    )

    /**
    * Assign all the columns from the entity of type CatalogsHotelProductGroupFiltersAnyOf to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = CatalogsHotelProductGroupFiltersAnyOf()
    * database.update(CatalogsHotelProductGroupFiltersAnyOfs, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: CatalogsHotelProductGroupFiltersAnyOf) {
        this.apply {
        }
    }

}


object CatalogsHotelProductGroupFiltersAnyOfCatalogsHotelProductGroupFilterKeys : BaseTable<Pair<kotlin.Long, kotlin.Long>>("CatalogsHotelProductGroupFiltersAnyOfCatalogsHotelProductGroupFilterKeys") {
    val catalogsHotelProductGroupFiltersAnyOf = long("catalogsHotelProductGroupFiltersAnyOf")
    val catalogsHotelProductGroupFilterKeys = long("catalogsHotelProductGroupFilterKeys")

    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean): Pair<kotlin.Long, kotlin.Long> =
        Pair(row[catalogsHotelProductGroupFiltersAnyOf] ?: 0, row[catalogsHotelProductGroupFilterKeys] ?: 0)

    fun AssignmentsBuilder.assignFrom(entity: Pair<kotlin.Long, kotlin.Long>) {
        this.apply {
            set(CatalogsHotelProductGroupFiltersAnyOfCatalogsHotelProductGroupFilterKeys.catalogsHotelProductGroupFiltersAnyOf, entity.first)
            set(CatalogsHotelProductGroupFiltersAnyOfCatalogsHotelProductGroupFilterKeys.catalogsHotelProductGroupFilterKeys, entity.second)
        }
    }

}

