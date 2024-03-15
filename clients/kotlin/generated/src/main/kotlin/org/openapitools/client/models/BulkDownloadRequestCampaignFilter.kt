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

import org.openapitools.client.models.CampaignSummaryStatus
import org.openapitools.client.models.ObjectiveType

import com.squareup.moshi.Json
import com.squareup.moshi.JsonClass

/**
 * 
 *
 * @param startTime Unix UTC timestamp.
 * @param endTime Unix UTC timestamp.
 * @param name Campaign name
 * @param campaignStatus 
 * @param objectiveType 
 */


data class BulkDownloadRequestCampaignFilter (

    /* Unix UTC timestamp. */
    @Json(name = "start_time")
    val startTime: kotlin.String? = null,

    /* Unix UTC timestamp. */
    @Json(name = "end_time")
    val endTime: kotlin.String? = null,

    /* Campaign name */
    @Json(name = "name")
    val name: kotlin.String? = null,

    @Json(name = "campaign_status")
    val campaignStatus: kotlin.collections.List<CampaignSummaryStatus>? = null,

    @Json(name = "objective_type")
    val objectiveType: kotlin.collections.List<ObjectiveType>? = null

)
