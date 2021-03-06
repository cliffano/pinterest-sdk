/**
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * Please note:
 * This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * Do not edit this file manually.
 */

@file:Suppress(
    "ArrayInDataClass",
    "EnumEntryName",
    "RemoveRedundantQualifierName",
    "UnusedImport"
)

package org.openapitools.client.models


import com.squareup.moshi.Json

/**
 * Ad group billable event type.
 *
 * Values: cLICKTHROUGH,iMPRESSION,vIDEOV50MRC,bILLABLEENGAGEMENT
 */

enum class ActionType(val value: kotlin.String) {

    @Json(name = "CLICKTHROUGH")
    cLICKTHROUGH("CLICKTHROUGH"),

    @Json(name = "IMPRESSION")
    iMPRESSION("IMPRESSION"),

    @Json(name = "VIDEO_V_50_MRC")
    vIDEOV50MRC("VIDEO_V_50_MRC"),

    @Json(name = "BILLABLE_ENGAGEMENT")
    bILLABLEENGAGEMENT("BILLABLE_ENGAGEMENT");

    /**
     * Override toString() to avoid using the enum variable name as the value, and instead use
     * the actual value defined in the API spec file.
     *
     * This solves a problem when the variable name and its value are different, and ensures that
     * the client sends the correct enum values to the server always.
     */
    override fun toString(): String = value

    companion object {
        /**
         * Converts the provided [data] to a [String] on success, null otherwise.
         */
        fun encode(data: kotlin.Any?): kotlin.String? = if (data is ActionType) "$data" else null

        /**
         * Returns a valid [ActionType] for [data], null otherwise.
         */
        fun decode(data: kotlin.Any?): ActionType? = data?.let {
          val normalizedData = "$it".lowercase()
          values().firstOrNull { value ->
            it == value || normalizedData == "$value".lowercase()
          }
        }
    }
}

