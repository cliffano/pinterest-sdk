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
 * Reporting targeting type
 *
 * Values: KEYWORD,APPTYPE,GENDER,LOCATION,PLACEMENT,COUNTRY,TARGETED_INTEREST,PINNER_INTEREST,AUDIENCE_INCLUDE,GEO,AGE_BUCKET,REGION
 */

@JsonClass(generateAdapter = false)
enum class AdsAnalyticsTargetingType(val value: kotlin.String) {

    @Json(name = "KEYWORD")
    KEYWORD("KEYWORD"),

    @Json(name = "APPTYPE")
    APPTYPE("APPTYPE"),

    @Json(name = "GENDER")
    GENDER("GENDER"),

    @Json(name = "LOCATION")
    LOCATION("LOCATION"),

    @Json(name = "PLACEMENT")
    PLACEMENT("PLACEMENT"),

    @Json(name = "COUNTRY")
    COUNTRY("COUNTRY"),

    @Json(name = "TARGETED_INTEREST")
    TARGETED_INTEREST("TARGETED_INTEREST"),

    @Json(name = "PINNER_INTEREST")
    PINNER_INTEREST("PINNER_INTEREST"),

    @Json(name = "AUDIENCE_INCLUDE")
    AUDIENCE_INCLUDE("AUDIENCE_INCLUDE"),

    @Json(name = "GEO")
    GEO("GEO"),

    @Json(name = "AGE_BUCKET")
    AGE_BUCKET("AGE_BUCKET"),

    @Json(name = "REGION")
    REGION("REGION");

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
        fun encode(data: kotlin.Any?): kotlin.String? = if (data is AdsAnalyticsTargetingType) "$data" else null

        /**
         * Returns a valid [AdsAnalyticsTargetingType] for [data], null otherwise.
         */
        fun decode(data: kotlin.Any?): AdsAnalyticsTargetingType? = data?.let {
          val normalizedData = "$it".lowercase()
          values().firstOrNull { value ->
            it == value || normalizedData == "$value".lowercase()
          }
        }
    }
}

