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
 * @param propertyValues 
 * @param inclusion 
 * @param negated 
 */
object CatalogsProductGroupPricingCriterias : BaseTable<CatalogsProductGroupPricingCriteria>("CatalogsProductGroupPricingCriteria") {
    val propertyValues = decimal("values")
    val inclusion = boolean("inclusion") /* null */
    val negated = boolean("negated") /* null */

    /**
     * Create an entity of type CatalogsProductGroupPricingCriteria from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = CatalogsProductGroupPricingCriteria(
        propertyValues = row[propertyValues] ?: 0 /* java.math.BigDecimal */,
        inclusion = row[inclusion] ?: true /* kotlin.Boolean? */,
        negated = row[negated] ?: false /* kotlin.Boolean? */
    )

    /**
    * Assign all the columns from the entity of type CatalogsProductGroupPricingCriteria to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = CatalogsProductGroupPricingCriteria()
    * database.update(CatalogsProductGroupPricingCriterias, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: CatalogsProductGroupPricingCriteria) {
        this.apply {
            set(CatalogsProductGroupPricingCriterias.propertyValues, entity.propertyValues)
            set(CatalogsProductGroupPricingCriterias.inclusion, entity.inclusion)
            set(CatalogsProductGroupPricingCriterias.negated, entity.negated)
        }
    }

}


