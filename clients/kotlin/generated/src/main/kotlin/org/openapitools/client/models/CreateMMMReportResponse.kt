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

import org.openapitools.client.models.CreateMMMReportResponseData

import com.squareup.moshi.Json
import com.squareup.moshi.JsonClass

/**
 * 
 *
 * @param code 
 * @param `data` 
 */


data class CreateMMMReportResponse (

    @Json(name = "code")
    val code: java.math.BigDecimal? = null,

    @Json(name = "data")
    val `data`: CreateMMMReportResponseData? = null

)
