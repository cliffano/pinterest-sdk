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
 * @param PRODUCT_TYPE_0 
 */
object ProductType0Filters : BaseTable<ProductType0Filter>("ProductType0Filter") {
    val PRODUCT_TYPE_0 = long("PRODUCT_TYPE_0")

    /**
     * Create an entity of type ProductType0Filter from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = ProductType0Filter(
        PRODUCT_TYPE_0 = CatalogsProductGroupMultipleStringListCriterias.createEntity(row, withReferences) /* CatalogsProductGroupMultipleStringListCriteria */
    )

    /**
    * Assign all the columns from the entity of type ProductType0Filter to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = ProductType0Filter()
    * database.update(ProductType0Filters, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: ProductType0Filter) {
        this.apply {
            set(ProductType0Filters.PRODUCT_TYPE_0, entity.PRODUCT_TYPE_0)
        }
    }

}


