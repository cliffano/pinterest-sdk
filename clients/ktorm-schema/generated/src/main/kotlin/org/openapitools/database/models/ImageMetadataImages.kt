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
 * @param 150x150 
 * @param 400x300 
 * @param 600x 
 * @param 1200x 
 */
object ImageMetadataImagess : BaseTable<ImageMetadataImages>("ImageMetadata_images") {
    val 150x150 = long("150x150") /* null */
    val 400x300 = long("400x300") /* null */
    val 600x = long("600x") /* null */
    val 1200x = long("1200x") /* null */

    /**
     * Create an entity of type ImageMetadataImages from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = ImageMetadataImages(
        150x150 = ImageDetailss.createEntity(row, withReferences) /* ImageDetails? */,
        400x300 = ImageDetailss.createEntity(row, withReferences) /* ImageDetails? */,
        600x = ImageDetailss.createEntity(row, withReferences) /* ImageDetails? */,
        1200x = ImageDetailss.createEntity(row, withReferences) /* ImageDetails? */
    )

    /**
    * Assign all the columns from the entity of type ImageMetadataImages to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = ImageMetadataImages()
    * database.update(ImageMetadataImagess, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: ImageMetadataImages) {
        this.apply {
            set(ImageMetadataImagess.150x150, entity.150x150)
            set(ImageMetadataImagess.400x300, entity.400x300)
            set(ImageMetadataImagess.600x, entity.600x)
            set(ImageMetadataImagess.1200x, entity.1200x)
        }
    }

}


