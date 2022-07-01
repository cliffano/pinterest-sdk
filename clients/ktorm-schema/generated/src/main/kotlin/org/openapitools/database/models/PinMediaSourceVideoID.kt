/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.3.0
* Contact: blah@cliffano.com
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
 * Video ID-based media source
 * @param sourceType 
 * @param coverImageUrl 
 * @param mediaId 
 */
object PinMediaSourceVideoIDs : BaseTable<PinMediaSourceVideoID>("PinMediaSourceVideoID") {
    val sourceType = text("source_type").transform({ PinMediaSourceVideoID.SourceType.valueOf(it) }, { it.value })
    val coverImageUrl = text("cover_image_url")
    val mediaId = text("media_id")

    /**
     * Create an entity of type PinMediaSourceVideoID from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = PinMediaSourceVideoID(
        sourceType = row[sourceType] ?: PinMediaSourceVideoID.SourceType.valueOf("") /* kotlin.String */,
        coverImageUrl = row[coverImageUrl] ?: "" /* kotlin.String */,
        mediaId = row[mediaId] ?: "" /* kotlin.String */
    )

    /**
    * Assign all the columns from the entity of type PinMediaSourceVideoID to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = PinMediaSourceVideoID()
    * database.update(PinMediaSourceVideoIDs, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: PinMediaSourceVideoID) {
        this.apply {
            set(PinMediaSourceVideoIDs.sourceType, entity.sourceType)
            set(PinMediaSourceVideoIDs.coverImageUrl, entity.coverImageUrl)
            set(PinMediaSourceVideoIDs.mediaId, entity.mediaId)
        }
    }

}


