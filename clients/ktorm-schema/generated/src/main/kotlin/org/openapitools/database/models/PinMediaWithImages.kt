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
 * Pin with multiple images.
 * @param mediaType 
 * @param items 
 */
object PinMediaWithImagess : BaseTable<PinMediaWithImages>("PinMediaWithImages") {
    val mediaType = text("media_type") /* null */

    /**
     * Create an entity of type PinMediaWithImages from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = PinMediaWithImages(
        mediaType = row[mediaType]  /* kotlin.String? */,
        items = emptyList() /* kotlin.Array<ImageMetadata>? */
    )

    /**
    * Assign all the columns from the entity of type PinMediaWithImages to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = PinMediaWithImages()
    * database.update(PinMediaWithImagess, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: PinMediaWithImages) {
        this.apply {
            set(PinMediaWithImagess.mediaType, entity.mediaType)
        }
    }

}


object PinMediaWithImagesImageMetadata : BaseTable<Pair<kotlin.Long, kotlin.Long>>("PinMediaWithImagesImageMetadata") {
    val pinMediaWithImages = long("pinMediaWithImages")
    val imageMetadata = long("imageMetadata")

    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean): Pair<kotlin.Long, kotlin.Long> =
        Pair(row[pinMediaWithImages] ?: 0, row[imageMetadata] ?: 0)

    fun AssignmentsBuilder.assignFrom(entity: Pair<kotlin.Long, kotlin.Long>) {
        this.apply {
            set(PinMediaWithImagesImageMetadata.pinMediaWithImages, entity.first)
            set(PinMediaWithImagesImageMetadata.imageMetadata, entity.second)
        }
    }

}

