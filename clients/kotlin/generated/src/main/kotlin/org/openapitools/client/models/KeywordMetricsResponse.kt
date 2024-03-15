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

import org.openapitools.client.models.KeywordMetrics

import com.squareup.moshi.Json
import com.squareup.moshi.JsonClass

/**
 * 
 *
 * @param keyword Keyword name, e.g., \"keyword\":\"fashion outfits\"
 * @param metrics 
 */


data class KeywordMetricsResponse (

    /* Keyword name, e.g., \"keyword\":\"fashion outfits\" */
    @Json(name = "keyword")
    val keyword: kotlin.String? = null,

    @Json(name = "metrics")
    val metrics: KeywordMetrics? = null

)

