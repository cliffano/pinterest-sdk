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
 * Campaign objective type. If set as one of [\"AWARENESS\", \"CONSIDERATION\", \"WEB_CONVERSION\", \"CATALOG_SALES\"] the campaign is considered as a Campaign Budget Optimization (CBO) campaign, meaning budget needs to be set at the campaign level rather than at the ad group level. [\"WEB_SESSIONS\"] in BETA. For update, only draft campaigns may update objective type.
 *
 * Values: AWARENESS,CONSIDERATION,VIDEO_VIEW,WEB_CONVERSION,CATALOG_SALES,WEB_SESSIONS
 */

@JsonClass(generateAdapter = false)
enum class ObjectiveType(val value: kotlin.String) {

    @Json(name = "AWARENESS")
    AWARENESS("AWARENESS"),

    @Json(name = "CONSIDERATION")
    CONSIDERATION("CONSIDERATION"),

    @Json(name = "VIDEO_VIEW")
    VIDEO_VIEW("VIDEO_VIEW"),

    @Json(name = "WEB_CONVERSION")
    WEB_CONVERSION("WEB_CONVERSION"),

    @Json(name = "CATALOG_SALES")
    CATALOG_SALES("CATALOG_SALES"),

    @Json(name = "WEB_SESSIONS")
    WEB_SESSIONS("WEB_SESSIONS");

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
        fun encode(data: kotlin.Any?): kotlin.String? = if (data is ObjectiveType) "$data" else null

        /**
         * Returns a valid [ObjectiveType] for [data], null otherwise.
         */
        fun decode(data: kotlin.Any?): ObjectiveType? = data?.let {
          val normalizedData = "$it".lowercase()
          values().firstOrNull { value ->
            it == value || normalizedData == "$value".lowercase()
          }
        }
    }
}

