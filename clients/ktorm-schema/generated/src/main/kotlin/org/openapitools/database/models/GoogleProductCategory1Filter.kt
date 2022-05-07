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
 * @param GOOGLE_PRODUCT_CATEGORY_1 
 */
object GoogleProductCategory1Filters : BaseTable<GoogleProductCategory1Filter>("GoogleProductCategory1Filter") {
    val GOOGLE_PRODUCT_CATEGORY_1 = long("GOOGLE_PRODUCT_CATEGORY_1")

    /**
     * Create an entity of type GoogleProductCategory1Filter from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = GoogleProductCategory1Filter(
        GOOGLE_PRODUCT_CATEGORY_1 = CatalogsProductGroupMultipleStringListCriterias.createEntity(row, withReferences) /* CatalogsProductGroupMultipleStringListCriteria */
    )

    /**
    * Assign all the columns from the entity of type GoogleProductCategory1Filter to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = GoogleProductCategory1Filter()
    * database.update(GoogleProductCategory1Filters, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: GoogleProductCategory1Filter) {
        this.apply {
            set(GoogleProductCategory1Filters.GOOGLE_PRODUCT_CATEGORY_1, entity.GOOGLE_PRODUCT_CATEGORY_1)
        }
    }

}


