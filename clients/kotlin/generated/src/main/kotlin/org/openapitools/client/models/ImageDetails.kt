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


import com.squareup.moshi.Json
import com.squareup.moshi.JsonClass

/**
 * 
 *
 * @param width 
 * @param height 
 * @param url 
 */


data class ImageDetails (

    @Json(name = "width")
    val width: kotlin.Int,

    @Json(name = "height")
    val height: kotlin.Int?,

    @Json(name = "url")
    val url: kotlin.String

)
