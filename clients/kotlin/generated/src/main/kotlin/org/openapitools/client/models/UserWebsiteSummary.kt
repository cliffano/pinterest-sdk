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
 * @param website Website with path or domain only
 * @param status Status of the verification process
 * @param verifiedAt UTC timestamp when the verification happened - sometimes missing
 */


data class UserWebsiteSummary (

    /* Website with path or domain only */
    @Json(name = "website")
    val website: kotlin.String? = null,

    /* Status of the verification process */
    @Json(name = "status")
    val status: kotlin.String? = null,

    /* UTC timestamp when the verification happened - sometimes missing */
    @Json(name = "verified_at")
    val verifiedAt: kotlin.String? = null

)

