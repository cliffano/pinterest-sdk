/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.3.0
* Contact: blah@cliffano.com
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
 * @param GENDER 
 */
object GenderFilters : BaseTable<GenderFilter>("GenderFilter") {
    val GENDER = long("GENDER")

    /**
     * Create an entity of type GenderFilter from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = GenderFilter(
        GENDER = CatalogsProductGroupMultipleStringCriterias.createEntity(row, withReferences) /* CatalogsProductGroupMultipleStringCriteria */
    )

    /**
    * Assign all the columns from the entity of type GenderFilter to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = GenderFilter()
    * database.update(GenderFilters, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: GenderFilter) {
        this.apply {
            set(GenderFilters.GENDER, entity.GENDER)
        }
    }

}


