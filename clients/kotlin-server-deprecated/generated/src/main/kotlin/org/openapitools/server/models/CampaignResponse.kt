/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.3.0
* Contact: pinterest-api@pinterest.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
package org.openapitools.server.models

import org.openapitools.server.models.CampaignCommon
import org.openapitools.server.models.CampaignResponseAllOf
import org.openapitools.server.models.CampaignResponseAllOf1
import org.openapitools.server.models.EntityStatus
import org.openapitools.server.models.ObjectiveType
import org.openapitools.server.models.TrackingUrls

/**
 * 
 * @param id Campaign ID.
 * @param adAccountId Campaign's Advertiser ID.
 * @param name Campaign name.
 * @param status 
 * @param lifetimeSpendCap Campaign total spending cap.
 * @param dailySpendCap Campaign daily spending cap.
 * @param orderLineId Order line ID that appears on the invoice.
 * @param trackingUrls 
 * @param startTime Campaign start time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.
 * @param endTime Campaign end time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.
 * @param objectiveType 
 * @param createdTime Campaign creation time. Unix timestamp in seconds.
 * @param updatedTime UTC timestamp. Last update time.
 * @param type Always \"campaign\".
 */
data class CampaignResponse (
    /* Campaign ID. */
    val id: kotlin.String,
    /* Campaign's Advertiser ID. */
    val adAccountId: kotlin.String,
    /* Campaign name. */
    val name: kotlin.String? = null,
    val status: EntityStatus? = "ACTIVE",
    /* Campaign total spending cap. */
    val lifetimeSpendCap: kotlin.Int? = null,
    /* Campaign daily spending cap. */
    val dailySpendCap: kotlin.Int? = null,
    /* Order line ID that appears on the invoice. */
    val orderLineId: kotlin.String? = null,
    val trackingUrls: TrackingUrls? = null,
    /* Campaign start time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns. */
    val startTime: kotlin.Int? = null,
    /* Campaign end time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns. */
    val endTime: kotlin.Int? = null,
    val objectiveType: ObjectiveType? = null,
    /* Campaign creation time. Unix timestamp in seconds. */
    val createdTime: kotlin.Int? = null,
    /* UTC timestamp. Last update time. */
    val updatedTime: kotlin.Int? = null,
    /* Always \"campaign\". */
    val type: kotlin.String? = null
) 

