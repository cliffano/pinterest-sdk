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
 * @param CUSTOM_LABEL_0 
 */
object CustomLabel0Filters : BaseTable<CustomLabel0Filter>("CustomLabel0Filter") {
    val CUSTOM_LABEL_0 = long("CUSTOM_LABEL_0")

    /**
     * Create an entity of type CustomLabel0Filter from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = CustomLabel0Filter(
        CUSTOM_LABEL_0 = CatalogsProductGroupMultipleStringCriterias.createEntity(row, withReferences) /* CatalogsProductGroupMultipleStringCriteria */
    )

    /**
    * Assign all the columns from the entity of type CustomLabel0Filter to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = CustomLabel0Filter()
    * database.update(CustomLabel0Filters, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: CustomLabel0Filter) {
        this.apply {
            set(CustomLabel0Filters.CUSTOM_LABEL_0, entity.CUSTOM_LABEL_0)
        }
    }

}


