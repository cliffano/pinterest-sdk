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
 * @param createdAt 
 * @param id 
 * @param updatedAt 
 */


data class CatalogsDbItem (

    @Json(name = "created_at")
    val createdAt: java.time.OffsetDateTime? = null,

    @Json(name = "id")
    val id: kotlin.String? = null,

    @Json(name = "updated_at")
    val updatedAt: java.time.OffsetDateTime? = null

)

