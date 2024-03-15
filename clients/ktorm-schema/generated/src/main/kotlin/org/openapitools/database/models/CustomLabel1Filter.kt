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
 * @param CUSTOM_LABEL_1 
 */
object CustomLabel1Filters : BaseTable<CustomLabel1Filter>("CustomLabel1Filter") {
    val CUSTOM_LABEL_1 = long("CUSTOM_LABEL_1")

    /**
     * Create an entity of type CustomLabel1Filter from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = CustomLabel1Filter(
        CUSTOM_LABEL_1 = CatalogsProductGroupMultipleStringCriterias.createEntity(row, withReferences) /* CatalogsProductGroupMultipleStringCriteria */
    )

    /**
    * Assign all the columns from the entity of type CustomLabel1Filter to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = CustomLabel1Filter()
    * database.update(CustomLabel1Filters, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: CustomLabel1Filter) {
        this.apply {
            set(CustomLabel1Filters.CUSTOM_LABEL_1, entity.CUSTOM_LABEL_1)
        }
    }

}


