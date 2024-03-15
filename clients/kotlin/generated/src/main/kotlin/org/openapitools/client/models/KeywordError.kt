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

import org.openapitools.client.models.Keyword

import com.squareup.moshi.Json
import com.squareup.moshi.JsonClass

/**
 * 
 *
 * @param `data` 
 * @param errorMessages 
 */


data class KeywordError (

    @Json(name = "data")
    val `data`: Keyword? = null,

    @Json(name = "error_messages")
    val errorMessages: kotlin.collections.List<kotlin.String>? = null

)

