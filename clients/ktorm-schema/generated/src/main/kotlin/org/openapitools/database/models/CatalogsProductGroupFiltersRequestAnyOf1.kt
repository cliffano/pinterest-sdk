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
 * @param allOf 
 */
object CatalogsProductGroupFiltersRequestAnyOf1s : BaseTable<CatalogsProductGroupFiltersRequestAnyOf1>("CatalogsProductGroupFiltersRequest_anyOf_1") {

    /**
     * Create an entity of type CatalogsProductGroupFiltersRequestAnyOf1 from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = CatalogsProductGroupFiltersRequestAnyOf1(
        allOf = emptyList() /* kotlin.Array<CatalogsProductGroupFilterKeys> */
    )

    /**
    * Assign all the columns from the entity of type CatalogsProductGroupFiltersRequestAnyOf1 to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = CatalogsProductGroupFiltersRequestAnyOf1()
    * database.update(CatalogsProductGroupFiltersRequestAnyOf1s, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: CatalogsProductGroupFiltersRequestAnyOf1) {
        this.apply {
        }
    }

}


object CatalogsProductGroupFiltersRequestAnyOf1CatalogsProductGroupFilterKeys : BaseTable<Pair<kotlin.Long, kotlin.Long>>("CatalogsProductGroupFiltersRequestAnyOf1CatalogsProductGroupFilterKeys") {
    val catalogsProductGroupFiltersRequestAnyOf1 = long("catalogsProductGroupFiltersRequestAnyOf1")
    val catalogsProductGroupFilterKeys = long("catalogsProductGroupFilterKeys")

    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean): Pair<kotlin.Long, kotlin.Long> =
        Pair(row[catalogsProductGroupFiltersRequestAnyOf1] ?: 0, row[catalogsProductGroupFilterKeys] ?: 0)

    fun AssignmentsBuilder.assignFrom(entity: Pair<kotlin.Long, kotlin.Long>) {
        this.apply {
            set(CatalogsProductGroupFiltersRequestAnyOf1CatalogsProductGroupFilterKeys.catalogsProductGroupFiltersRequestAnyOf1, entity.first)
            set(CatalogsProductGroupFiltersRequestAnyOf1CatalogsProductGroupFilterKeys.catalogsProductGroupFilterKeys, entity.second)
        }
    }

}

