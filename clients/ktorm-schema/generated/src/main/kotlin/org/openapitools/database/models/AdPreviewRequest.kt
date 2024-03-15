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
 * @param imageUrl Image URL.
 * @param title Title displayed below ad.
 * @param pinId Pin ID.
 */
object AdPreviewRequests : BaseTable<AdPreviewRequest>("AdPreviewRequest") {
    val imageUrl = text("image_url") /* Image URL. */
    val title = text("title") /* Title displayed below ad. */
    val pinId = text("pin_id") /* Pin ID. */

    /**
     * Create an entity of type AdPreviewRequest from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = AdPreviewRequest(
        imageUrl = row[imageUrl] ?: "" /* kotlin.String */ /* Image URL. */,
        title = row[title] ?: "" /* kotlin.String */ /* Title displayed below ad. */,
        pinId = row[pinId] ?: "" /* kotlin.String */ /* Pin ID. */
    )

    /**
    * Assign all the columns from the entity of type AdPreviewRequest to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = AdPreviewRequest()
    * database.update(AdPreviewRequests, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: AdPreviewRequest) {
        this.apply {
            set(AdPreviewRequests.imageUrl, entity.imageUrl)
            set(AdPreviewRequests.title, entity.title)
            set(AdPreviewRequests.pinId, entity.pinId)
        }
    }

}


