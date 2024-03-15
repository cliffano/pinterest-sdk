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
 * @param key Interest unique key (same as ID).
 * @param name Subinterest name.
 * @param ratio Subinterest's percent of category's total audience.
 * @param index Subinterest affinity index.
 * @param id Subinterest ID.
 */
object AudienceSubcategorys : BaseTable<AudienceSubcategory>("AudienceSubcategory") {
    val key = text("key") /* null */ /* Interest unique key (same as ID). */
    val name = text("name") /* null */ /* Subinterest name. */
    val ratio = decimal("ratio") /* null */ /* Subinterest's percent of category's total audience. */
    val index = decimal("index") /* null */ /* Subinterest affinity index. */
    val id = text("id") /* null */ /* Subinterest ID. */

    /**
     * Create an entity of type AudienceSubcategory from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = AudienceSubcategory(
        key = row[key]  /* kotlin.String? */ /* Interest unique key (same as ID). */,
        name = row[name]  /* kotlin.String? */ /* Subinterest name. */,
        ratio = row[ratio]  /* java.math.BigDecimal? */ /* Subinterest's percent of category's total audience. */,
        index = row[index]  /* java.math.BigDecimal? */ /* Subinterest affinity index. */,
        id = row[id]  /* kotlin.String? */ /* Subinterest ID. */
    )

    /**
    * Assign all the columns from the entity of type AudienceSubcategory to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = AudienceSubcategory()
    * database.update(AudienceSubcategorys, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: AudienceSubcategory) {
        this.apply {
            set(AudienceSubcategorys.key, entity.key)
            set(AudienceSubcategorys.name, entity.name)
            set(AudienceSubcategorys.ratio, entity.ratio)
            set(AudienceSubcategorys.index, entity.index)
            set(AudienceSubcategorys.id, entity.id)
        }
    }

}

