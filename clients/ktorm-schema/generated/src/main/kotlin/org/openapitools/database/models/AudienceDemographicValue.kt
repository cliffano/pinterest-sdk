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
 * Demographic detail for a single audience demographic
 * @param key Unique key for demographic item
 * @param name Display name for demographic
 * @param ratio Value of demographic item as a percent of total audience
 */
object AudienceDemographicValues : BaseTable<AudienceDemographicValue>("AudienceDemographicValue") {
    val key = text("key") /* null */ /* Unique key for demographic item */
    val name = text("name") /* null */ /* Display name for demographic */
    val ratio = decimal("ratio") /* null */ /* Value of demographic item as a percent of total audience */

    /**
     * Create an entity of type AudienceDemographicValue from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = AudienceDemographicValue(
        key = row[key]  /* kotlin.String? */ /* Unique key for demographic item */,
        name = row[name]  /* kotlin.String? */ /* Display name for demographic */,
        ratio = row[ratio]  /* java.math.BigDecimal? */ /* Value of demographic item as a percent of total audience */
    )

    /**
    * Assign all the columns from the entity of type AudienceDemographicValue to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = AudienceDemographicValue()
    * database.update(AudienceDemographicValues, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: AudienceDemographicValue) {
        this.apply {
            set(AudienceDemographicValues.key, entity.key)
            set(AudienceDemographicValues.name, entity.name)
            set(AudienceDemographicValues.ratio, entity.ratio)
        }
    }

}


