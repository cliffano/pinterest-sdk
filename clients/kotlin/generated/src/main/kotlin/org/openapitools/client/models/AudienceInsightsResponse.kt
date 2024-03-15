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

import org.openapitools.client.models.AudienceCategory
import org.openapitools.client.models.AudienceDemographics
import org.openapitools.client.models.AudienceInsightType

import com.squareup.moshi.Json
import com.squareup.moshi.JsonClass

/**
 * Audience interests and demographics.
 *
 * @param categories Category interest distribution
 * @param demographics 
 * @param type 
 * @param date Generation date
 * @param propertySize Population count.
 * @param sizeIsUpperBound Indicates whether the audience size has been rounded up to the next highest upper boundary.
 */


data class AudienceInsightsResponse (

    /* Category interest distribution */
    @Json(name = "categories")
    val categories: kotlin.collections.List<AudienceCategory>? = null,

    @Json(name = "demographics")
    val demographics: AudienceDemographics? = null,

    @Json(name = "type")
    val type: AudienceInsightType? = AudienceInsightType.YOUR_TOTAL_AUDIENCE,

    /* Generation date */
    @Json(name = "date")
    val date: kotlin.String? = null,

    /* Population count. */
    @Json(name = "size")
    val propertySize: kotlin.Int? = null,

    /* Indicates whether the audience size has been rounded up to the next highest upper boundary. */
    @Json(name = "size_is_upper_bound")
    val sizeIsUpperBound: kotlin.Boolean? = null

)

