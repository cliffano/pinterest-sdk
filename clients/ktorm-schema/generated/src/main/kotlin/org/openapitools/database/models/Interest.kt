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
 * @param canonicalUrl 
 * @param id 
 * @param key 
 * @param name 
 */
object Interests : BaseTable<Interest>("Interest") {
    val canonicalUrl = text("canonical_url") /* null */
    val id = text("id") /* null */
    val key = text("key") /* null */
    val name = text("name") /* null */

    /**
     * Create an entity of type Interest from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = Interest(
        canonicalUrl = row[canonicalUrl]  /* kotlin.String? */,
        id = row[id]  /* kotlin.String? */,
        key = row[key]  /* kotlin.String? */,
        name = row[name]  /* kotlin.String? */
    )

    /**
    * Assign all the columns from the entity of type Interest to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = Interest()
    * database.update(Interests, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: Interest) {
        this.apply {
            set(Interests.canonicalUrl, entity.canonicalUrl)
            set(Interests.id, entity.id)
            set(Interests.key, entity.key)
            set(Interests.name, entity.name)
        }
    }

}


