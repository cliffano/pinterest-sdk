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
 *  This field contains multiple options to a quiz question.
 *
 * @param id 
 * @param text 
 */


data class QuizPinOption (

    @Json(name = "id")
    val id: java.math.BigDecimal? = null,

    @Json(name = "text")
    val text: kotlin.String? = null

)
