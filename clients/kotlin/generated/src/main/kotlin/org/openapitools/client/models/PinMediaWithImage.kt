/**
 *
 * Please note:
 * This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * Do not edit this file manually.
 *
 */

@file:Suppress(
    "ArrayInDataClass",
    "EnumEntryName",
    "RemoveRedundantQualifierName",
    "UnusedImport"
)

package org.openapitools.client.models

import org.openapitools.client.models.ImageMetadataImages
import org.openapitools.client.models.PinMedia

import com.squareup.moshi.Json
import com.squareup.moshi.JsonClass

/**
 * Pin with image.
 *
 * @param mediaType 
 * @param images 
 */


data class PinMediaWithImage (

    @Json(name = "media_type")
    override val mediaType: kotlin.String? = null,

    @Json(name = "images")
    val images: ImageMetadataImages? = null

) : PinMedia

