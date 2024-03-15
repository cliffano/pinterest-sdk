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
 * @param pinId Pin ID.
 */
object AdPreviewCreateFromPins : BaseTable<AdPreviewCreateFromPin>("AdPreviewCreateFromPin") {
    val pinId = text("pin_id") /* Pin ID. */

    /**
     * Create an entity of type AdPreviewCreateFromPin from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = AdPreviewCreateFromPin(
        pinId = row[pinId] ?: "" /* kotlin.String */ /* Pin ID. */
    )

    /**
    * Assign all the columns from the entity of type AdPreviewCreateFromPin to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = AdPreviewCreateFromPin()
    * database.update(AdPreviewCreateFromPins, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: AdPreviewCreateFromPin) {
        this.apply {
            set(AdPreviewCreateFromPins.pinId, entity.pinId)
        }
    }

}

