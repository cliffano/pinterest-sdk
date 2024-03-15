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
 * The main hotel image
 * @param link <p><= 2000 characters</p> <p>The link to the main hotel image. Image should be at least 75x75 pixels to avoid errors. Use the additional_image_link field to add more images of your hotel. The URL of your main_image.link must be accessible by the Pinterest user-agent, and send the accurate image. Please make sure there is no template or placeholder image at the link. Must start with http:// or https://.</p>
 * @param tag Tag appended to the image that identifies image category or details. There can be multiple tags associated with an image
 */
object CatalogsHotelAttributesAllOfMainImages : BaseTable<CatalogsHotelAttributesAllOfMainImage>("CatalogsHotelAttributes_allOf_main_image") {
    val link = text("link") /* null */ /* <p><= 2000 characters</p> <p>The link to the main hotel image. Image should be at least 75x75 pixels to avoid errors. Use the additional_image_link field to add more images of your hotel. The URL of your main_image.link must be accessible by the Pinterest user-agent, and send the accurate image. Please make sure there is no template or placeholder image at the link. Must start with http:// or https://.</p> */

    /**
     * Create an entity of type CatalogsHotelAttributesAllOfMainImage from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = CatalogsHotelAttributesAllOfMainImage(
        link = row[link]  /* kotlin.String? */ /* <p><= 2000 characters</p> <p>The link to the main hotel image. Image should be at least 75x75 pixels to avoid errors. Use the additional_image_link field to add more images of your hotel. The URL of your main_image.link must be accessible by the Pinterest user-agent, and send the accurate image. Please make sure there is no template or placeholder image at the link. Must start with http:// or https://.</p> */,
        tag = emptyList() /* kotlin.Array<kotlin.String>? */ /* Tag appended to the image that identifies image category or details. There can be multiple tags associated with an image */
    )

    /**
    * Assign all the columns from the entity of type CatalogsHotelAttributesAllOfMainImage to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = CatalogsHotelAttributesAllOfMainImage()
    * database.update(CatalogsHotelAttributesAllOfMainImages, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: CatalogsHotelAttributesAllOfMainImage) {
        this.apply {
            set(CatalogsHotelAttributesAllOfMainImages.link, entity.link)
        }
    }

}


object CatalogsHotelAttributesAllOfMainImageTag : BaseTable<Pair<kotlin.Long, kotlin.String>>("CatalogsHotelAttributesAllOfMainImageTag") {
    val catalogsHotelAttributesAllOfMainImage = long("catalogsHotelAttributesAllOfMainImage")
    val tag = text("tag")

    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean): Pair<kotlin.Long, kotlin.String> =
        Pair(row[catalogsHotelAttributesAllOfMainImage] ?: 0, row[tag] ?: "")

    fun AssignmentsBuilder.assignFrom(entity: Pair<kotlin.Long, kotlin.String>) {
        this.apply {
            set(CatalogsHotelAttributesAllOfMainImageTag.catalogsHotelAttributesAllOfMainImage, entity.first)
            set(CatalogsHotelAttributesAllOfMainImageTag.tag, entity.second)
        }
    }

}
