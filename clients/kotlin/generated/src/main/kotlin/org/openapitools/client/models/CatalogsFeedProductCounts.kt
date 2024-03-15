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
 * The counts can be null early in the process.
 *
 * @param original The number of products in the feed file.
 * @param ingested The number of products successfully ingested from the feed file.
 */


data class CatalogsFeedProductCounts (

    /* The number of products in the feed file. */
    @Json(name = "original")
    val original: kotlin.Int? = null,

    /* The number of products successfully ingested from the feed file. */
    @Json(name = "ingested")
    val ingested: kotlin.Int? = null

)

