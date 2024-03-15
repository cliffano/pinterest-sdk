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
 * Granularity
 *
 * Values: TOTAL,DAY,HOUR,WEEK,MONTH
 */

@JsonClass(generateAdapter = false)
enum class Granularity(val value: kotlin.String) {

    @Json(name = "TOTAL")
    TOTAL("TOTAL"),

    @Json(name = "DAY")
    DAY("DAY"),

    @Json(name = "HOUR")
    HOUR("HOUR"),

    @Json(name = "WEEK")
    WEEK("WEEK"),

    @Json(name = "MONTH")
    MONTH("MONTH");

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
        fun encode(data: kotlin.Any?): kotlin.String? = if (data is Granularity) "$data" else null

        /**
         * Returns a valid [Granularity] for [data], null otherwise.
         */
        fun decode(data: kotlin.Any?): Granularity? = data?.let {
          val normalizedData = "$it".lowercase()
          values().firstOrNull { value ->
            it == value || normalizedData == "$value".lowercase()
          }
        }
    }
}
