/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.3.0
* Contact: pinterest-api@pinterest.com
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
 * Base64-encoded image media source
 * @param sourceType 
 * @param contentType 
 * @param data 
 */
object PinMediaSourceImageBase64s : BaseTable<PinMediaSourceImageBase64>("PinMediaSourceImageBase64") {
    val sourceType = text("source_type").transform({ PinMediaSourceImageBase64.SourceType.valueOf(it) }, { it.value })
    val contentType = text("content_type").transform({ PinMediaSourceImageBase64.ContentType.valueOf(it) }, { it.value })
    val data = text("data")

    /**
     * Create an entity of type PinMediaSourceImageBase64 from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = PinMediaSourceImageBase64(
        sourceType = row[sourceType] ?: PinMediaSourceImageBase64.SourceType.valueOf("") /* kotlin.String */,
        contentType = row[contentType] ?: PinMediaSourceImageBase64.ContentType.valueOf("") /* kotlin.String */,
        data = row[data] ?: "" /* kotlin.String */
    )

    /**
    * Assign all the columns from the entity of type PinMediaSourceImageBase64 to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = PinMediaSourceImageBase64()
    * database.update(PinMediaSourceImageBase64s, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: PinMediaSourceImageBase64) {
        this.apply {
            set(PinMediaSourceImageBase64s.sourceType, entity.sourceType)
            set(PinMediaSourceImageBase64s.contentType, entity.contentType)
            set(PinMediaSourceImageBase64s.data, entity.data)
        }
    }

}

