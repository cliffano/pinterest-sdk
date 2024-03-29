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
 * Metrics availablity, e.g., \"READY\".
 *
 * Values: PROCESSING,READY,ESTIMATE,BEFORE_BUSINESS_CREATED,BEFORE_DATA_RETENTION_PERIOD,BEFORE_PIN_DATA_RETENTION_PERIOD,BEFORE_METRIC_START_DATE,BEFORE_CORE_METRIC_START_DATE,BEFORE_PIN_FORMAT_METRIC_START_DATE,BEFORE_AUDIENCE_METRIC_START_DATE,BEFORE_AUDIENCE_MONTHLY_METRIC_START_DATE,BEFORE_VIDEO_METRIC_START_DATE,BEFORE_CONVERSION_METRIC_START_DATE,PURCHASERS_METRIC_SMALLER_THAN_THRESHOLD,IN_BAD_TAG_DATE,BEFORE_PUBLISHED_METRIC_START_DATE,BEFORE_ASSIST_METRIC_START_DATE,BEFORE_PIN_CREATED,BEFORE_ACCOUNT_CLAIMED,BEFORE_DEMOGRAPHIC_FILTERS_START_DATE,AUDIENCE_SEGMENT_SMALLER_THAN_THRESHOLD,AUDIENCE_TOTAL_SMALLER_THAN_THRESHOLD,BEFORE_PRODUCT_GROUP_FILTER_START_DATE
 */

@JsonClass(generateAdapter = false)
enum class DataStatus(val value: kotlin.String) {

    @Json(name = "PROCESSING")
    PROCESSING("PROCESSING"),

    @Json(name = "READY")
    READY("READY"),

    @Json(name = "ESTIMATE")
    ESTIMATE("ESTIMATE"),

    @Json(name = "BEFORE_BUSINESS_CREATED")
    BEFORE_BUSINESS_CREATED("BEFORE_BUSINESS_CREATED"),

    @Json(name = "BEFORE_DATA_RETENTION_PERIOD")
    BEFORE_DATA_RETENTION_PERIOD("BEFORE_DATA_RETENTION_PERIOD"),

    @Json(name = "BEFORE_PIN_DATA_RETENTION_PERIOD")
    BEFORE_PIN_DATA_RETENTION_PERIOD("BEFORE_PIN_DATA_RETENTION_PERIOD"),

    @Json(name = "BEFORE_METRIC_START_DATE")
    BEFORE_METRIC_START_DATE("BEFORE_METRIC_START_DATE"),

    @Json(name = "BEFORE_CORE_METRIC_START_DATE")
    BEFORE_CORE_METRIC_START_DATE("BEFORE_CORE_METRIC_START_DATE"),

    @Json(name = "BEFORE_PIN_FORMAT_METRIC_START_DATE")
    BEFORE_PIN_FORMAT_METRIC_START_DATE("BEFORE_PIN_FORMAT_METRIC_START_DATE"),

    @Json(name = "BEFORE_AUDIENCE_METRIC_START_DATE")
    BEFORE_AUDIENCE_METRIC_START_DATE("BEFORE_AUDIENCE_METRIC_START_DATE"),

    @Json(name = "BEFORE_AUDIENCE_MONTHLY_METRIC_START_DATE")
    BEFORE_AUDIENCE_MONTHLY_METRIC_START_DATE("BEFORE_AUDIENCE_MONTHLY_METRIC_START_DATE"),

    @Json(name = "BEFORE_VIDEO_METRIC_START_DATE")
    BEFORE_VIDEO_METRIC_START_DATE("BEFORE_VIDEO_METRIC_START_DATE"),

    @Json(name = "BEFORE_CONVERSION_METRIC_START_DATE")
    BEFORE_CONVERSION_METRIC_START_DATE("BEFORE_CONVERSION_METRIC_START_DATE"),

    @Json(name = "PURCHASERS_METRIC_SMALLER_THAN_THRESHOLD")
    PURCHASERS_METRIC_SMALLER_THAN_THRESHOLD("PURCHASERS_METRIC_SMALLER_THAN_THRESHOLD"),

    @Json(name = "IN_BAD_TAG_DATE")
    IN_BAD_TAG_DATE("IN_BAD_TAG_DATE"),

    @Json(name = "BEFORE_PUBLISHED_METRIC_START_DATE")
    BEFORE_PUBLISHED_METRIC_START_DATE("BEFORE_PUBLISHED_METRIC_START_DATE"),

    @Json(name = "BEFORE_ASSIST_METRIC_START_DATE")
    BEFORE_ASSIST_METRIC_START_DATE("BEFORE_ASSIST_METRIC_START_DATE"),

    @Json(name = "BEFORE_PIN_CREATED")
    BEFORE_PIN_CREATED("BEFORE_PIN_CREATED"),

    @Json(name = "BEFORE_ACCOUNT_CLAIMED")
    BEFORE_ACCOUNT_CLAIMED("BEFORE_ACCOUNT_CLAIMED"),

    @Json(name = "BEFORE_DEMOGRAPHIC_FILTERS_START_DATE")
    BEFORE_DEMOGRAPHIC_FILTERS_START_DATE("BEFORE_DEMOGRAPHIC_FILTERS_START_DATE"),

    @Json(name = "AUDIENCE_SEGMENT_SMALLER_THAN_THRESHOLD")
    AUDIENCE_SEGMENT_SMALLER_THAN_THRESHOLD("AUDIENCE_SEGMENT_SMALLER_THAN_THRESHOLD"),

    @Json(name = "AUDIENCE_TOTAL_SMALLER_THAN_THRESHOLD")
    AUDIENCE_TOTAL_SMALLER_THAN_THRESHOLD("AUDIENCE_TOTAL_SMALLER_THAN_THRESHOLD"),

    @Json(name = "BEFORE_PRODUCT_GROUP_FILTER_START_DATE")
    BEFORE_PRODUCT_GROUP_FILTER_START_DATE("BEFORE_PRODUCT_GROUP_FILTER_START_DATE");

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
        fun encode(data: kotlin.Any?): kotlin.String? = if (data is DataStatus) "$data" else null

        /**
         * Returns a valid [DataStatus] for [data], null otherwise.
         */
        fun decode(data: kotlin.Any?): DataStatus? = data?.let {
          val normalizedData = "$it".lowercase()
          values().firstOrNull { value ->
            it == value || normalizedData == "$value".lowercase()
          }
        }
    }
}

