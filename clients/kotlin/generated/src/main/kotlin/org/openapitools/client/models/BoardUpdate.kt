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
 * Board fields for updates
 *
 * @param name 
 * @param description 
 * @param privacy 
 */


data class BoardUpdate (

    @Json(name = "name")
    val name: kotlin.String? = null,

    @Json(name = "description")
    val description: kotlin.String? = null,

    @Json(name = "privacy")
    val privacy: BoardUpdate.Privacy? = null

) {

    /**
     * 
     *
     * Values: PUBLIC,SECRET
     */
    @JsonClass(generateAdapter = false)
    enum class Privacy(val value: kotlin.String) {
        @Json(name = "PUBLIC") PUBLIC("PUBLIC"),
        @Json(name = "SECRET") SECRET("SECRET");
    }
}
