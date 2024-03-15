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
 * @param GOOGLE_PRODUCT_CATEGORY_0 
 */
object GoogleProductCategory0Filters : BaseTable<GoogleProductCategory0Filter>("GoogleProductCategory0Filter") {
    val GOOGLE_PRODUCT_CATEGORY_0 = long("GOOGLE_PRODUCT_CATEGORY_0")

    /**
     * Create an entity of type GoogleProductCategory0Filter from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = GoogleProductCategory0Filter(
        GOOGLE_PRODUCT_CATEGORY_0 = CatalogsProductGroupMultipleStringListCriterias.createEntity(row, withReferences) /* CatalogsProductGroupMultipleStringListCriteria */
    )

    /**
    * Assign all the columns from the entity of type GoogleProductCategory0Filter to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = GoogleProductCategory0Filter()
    * database.update(GoogleProductCategory0Filters, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: GoogleProductCategory0Filter) {
        this.apply {
            set(GoogleProductCategory0Filters.GOOGLE_PRODUCT_CATEGORY_0, entity.GOOGLE_PRODUCT_CATEGORY_0)
        }
    }

}


