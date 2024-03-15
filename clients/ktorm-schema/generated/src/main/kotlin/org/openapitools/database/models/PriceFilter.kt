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
 * @param PRICE 
 */
object PriceFilters : BaseTable<PriceFilter>("PriceFilter") {
    val PRICE = long("PRICE")

    /**
     * Create an entity of type PriceFilter from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = PriceFilter(
        PRICE = CatalogsProductGroupPricingCurrencyCriterias.createEntity(row, withReferences) /* CatalogsProductGroupPricingCurrencyCriteria */
    )

    /**
    * Assign all the columns from the entity of type PriceFilter to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = PriceFilter()
    * database.update(PriceFilters, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: PriceFilter) {
        this.apply {
            set(PriceFilters.PRICE, entity.PRICE)
        }
    }

}


