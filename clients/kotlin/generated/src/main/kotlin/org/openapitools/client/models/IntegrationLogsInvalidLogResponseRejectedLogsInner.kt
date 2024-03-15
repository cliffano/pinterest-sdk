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
 * @param `field` The field name containing an invalid value.
 * @param `value` The value that is invalid.
 * @param reason The reason the value is invalid.
 * @param logIndex Index of the log in the batch.
 */


data class IntegrationLogsInvalidLogResponseRejectedLogsInner (

    /* The field name containing an invalid value. */
    @Json(name = "field")
    val `field`: kotlin.String,

    /* The value that is invalid. */
    @Json(name = "value")
    val `value`: kotlin.String,

    /* The reason the value is invalid. */
    @Json(name = "reason")
    val reason: kotlin.String,

    /* Index of the log in the batch. */
    @Json(name = "log_index")
    val logIndex: kotlin.Int? = null

)

