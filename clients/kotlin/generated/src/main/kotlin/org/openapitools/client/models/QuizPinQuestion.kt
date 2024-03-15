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

import org.openapitools.client.models.QuizPinOption

import com.squareup.moshi.Json
import com.squareup.moshi.JsonClass

/**
 * A specific quiz inquiry.
 *
 * @param questionId 
 * @param questionText 
 * @param options 
 */


data class QuizPinQuestion (

    @Json(name = "question_id")
    val questionId: java.math.BigDecimal? = null,

    @Json(name = "question_text")
    val questionText: kotlin.String? = null,

    @Json(name = "options")
    val options: kotlin.collections.List<QuizPinOption>? = null

)
