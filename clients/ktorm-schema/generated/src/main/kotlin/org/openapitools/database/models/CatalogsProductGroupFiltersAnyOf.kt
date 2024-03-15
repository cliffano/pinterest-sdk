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
object CatalogsProductGroupFiltersAnyOfs : BaseTable<CatalogsProductGroupFiltersAnyOf>("CatalogsProductGroupFiltersAnyOf") {

    /**
     * Create an entity of type CatalogsProductGroupFiltersAnyOf from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = CatalogsProductGroupFiltersAnyOf(
        anyOf = emptyList() /* kotlin.Array<CatalogsProductGroupFilterKeys> */
    )

    /**
    * Assign all the columns from the entity of type CatalogsProductGroupFiltersAnyOf to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = CatalogsProductGroupFiltersAnyOf()
    * database.update(CatalogsProductGroupFiltersAnyOfs, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: CatalogsProductGroupFiltersAnyOf) {
        this.apply {
        }
    }

}


object CatalogsProductGroupFiltersAnyOfCatalogsProductGroupFilterKeys : BaseTable<Pair<kotlin.Long, kotlin.Long>>("CatalogsProductGroupFiltersAnyOfCatalogsProductGroupFilterKeys") {
    val catalogsProductGroupFiltersAnyOf = long("catalogsProductGroupFiltersAnyOf")
    val catalogsProductGroupFilterKeys = long("catalogsProductGroupFilterKeys")

    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean): Pair<kotlin.Long, kotlin.Long> =
        Pair(row[catalogsProductGroupFiltersAnyOf] ?: 0, row[catalogsProductGroupFilterKeys] ?: 0)

    fun AssignmentsBuilder.assignFrom(entity: Pair<kotlin.Long, kotlin.Long>) {
        this.apply {
            set(CatalogsProductGroupFiltersAnyOfCatalogsProductGroupFilterKeys.catalogsProductGroupFiltersAnyOf, entity.first)
            set(CatalogsProductGroupFiltersAnyOfCatalogsProductGroupFilterKeys.catalogsProductGroupFilterKeys, entity.second)
        }
    }

}

