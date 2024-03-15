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

import org.openapitools.client.models.IntegrationLogsInvalidLogResponseRejectedLogsInner

import com.squareup.moshi.Json
import com.squareup.moshi.JsonClass

/**
 * Schema describing the response when a log has invalid fields.
 *
 * @param rejectedLogs 
 */


data class IntegrationLogsInvalidLogResponse (

    @Json(name = "rejected_logs")
    val rejectedLogs: kotlin.collections.List<IntegrationLogsInvalidLogResponseRejectedLogsInner>? = null

)

