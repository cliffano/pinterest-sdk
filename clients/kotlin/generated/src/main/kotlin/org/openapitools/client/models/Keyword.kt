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

import org.openapitools.client.models.MatchTypeResponse

import com.squareup.moshi.Json
import com.squareup.moshi.JsonClass

/**
 * 
 *
 * @param matchType 
 * @param `value` Keyword value (120 chars max).
 * @param bid Keyword custom bid in microcurrency - null if inherited from parent ad group.
 */


data class Keyword (

    @Json(name = "match_type")
    val matchType: MatchTypeResponse?,

    /* Keyword value (120 chars max). */
    @Json(name = "value")
    val `value`: kotlin.String,

    /* Keyword custom bid in microcurrency - null if inherited from parent ad group. */
    @Json(name = "bid")
    val bid: kotlin.Int? = null

)

