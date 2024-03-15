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
 * A currency filter. This filter cannot be negated
 * @param propertyValues 
 * @param negated 
 */
object CatalogsProductGroupCurrencyCriterias : BaseTable<CatalogsProductGroupCurrencyCriteria>("CatalogsProductGroupCurrencyCriteria") {
    val propertyValues = long("values")
    val negated = boolean("negated") /* null */

    /**
     * Create an entity of type CatalogsProductGroupCurrencyCriteria from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = CatalogsProductGroupCurrencyCriteria(
        propertyValues = NonNullableCatalogsCurrencys.createEntity(row, withReferences) /* NonNullableCatalogsCurrency */,
        negated = row[negated] ?: false /* kotlin.Boolean? */
    )

    /**
    * Assign all the columns from the entity of type CatalogsProductGroupCurrencyCriteria to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = CatalogsProductGroupCurrencyCriteria()
    * database.update(CatalogsProductGroupCurrencyCriterias, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: CatalogsProductGroupCurrencyCriteria) {
        this.apply {
            set(CatalogsProductGroupCurrencyCriterias.propertyValues, entity.propertyValues)
            set(CatalogsProductGroupCurrencyCriterias.negated, entity.negated)
        }
    }

}

