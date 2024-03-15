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
 * The enhanced match status of the tag
 *
 * Values: UNKNOWN,NOT_VALIDATED,VALIDATING_IN_PROGRESS,VALIDATION_COMPLETE,`null`
 */

@JsonClass(generateAdapter = false)
enum class EnhancedMatchStatusType(val value: kotlin.String) {

    @Json(name = "UNKNOWN")
    UNKNOWN("UNKNOWN"),

    @Json(name = "NOT_VALIDATED")
    NOT_VALIDATED("NOT_VALIDATED"),

    @Json(name = "VALIDATING_IN_PROGRESS")
    VALIDATING_IN_PROGRESS("VALIDATING_IN_PROGRESS"),

    @Json(name = "VALIDATION_COMPLETE")
    VALIDATION_COMPLETE("VALIDATION_COMPLETE"),

    @Json(name = "null")
    `null`("null");

    /**
     * Override [toString()] to avoid using the enum variable name as the value, and instead use
     * the actual value defined in the API spec file.
     *
     * This solves a problem when the variable name and its value are different, and ensures that
     * the client sends the correct enum values to the server always.
     */
    override fun toString(): kotlin.String = value

    companion object {
        /**
         * Converts the provided [data] to a [String] on success, null otherwise.
         */
        fun encode(data: kotlin.Any?): kotlin.String? = if (data is EnhancedMatchStatusType) "$data" else null

        /**
         * Returns a valid [EnhancedMatchStatusType] for [data], null otherwise.
         */
        fun decode(data: kotlin.Any?): EnhancedMatchStatusType? = data?.let {
          val normalizedData = "$it".lowercase()
          values().firstOrNull { value ->
            it == value || normalizedData == "$value".lowercase()
          }
        }
    }
}

