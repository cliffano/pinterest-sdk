/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.12.0
* Contact: blah+oapicf@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
package org.openapitools.server.models

import org.openapitools.server.models.AdCommonTrackingUrls
import org.openapitools.server.models.CampaignSummaryStatus
import org.openapitools.server.models.EntityStatus
import org.openapitools.server.models.ObjectiveType

/**
 * 
 * @param adAccountId Campaign's Advertiser ID. If you want to create a campaign in a Business Account shared account you need to specify the Business Access advertiser ID in both the query path param as well as the request body schema.
 * @param name Campaign name.
 * @param status 
 * @param lifetimeSpendCap Campaign total spending cap. Required for Campaign Budget Optimization (CBO) campaigns. This and \"daily_spend_cap\" cannot be set at the same time.
 * @param dailySpendCap Campaign daily spending cap. Required for Campaign Budget Optimization (CBO) campaigns. This and \"lifetime_spend_cap\" cannot be set at the same time.
 * @param orderLineId Order line ID that appears on the invoice.
 * @param trackingUrls 
 * @param startTime Campaign start time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.
 * @param endTime Campaign end time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.
 * @param summaryStatus 
 * @param isFlexibleDailyBudgets Determines if a campaign has flexible daily budgets setup.
 * @param defaultAdGroupBudgetInMicroCurrency When transitioning from campaign budget optimization to non-campaign budget optimization, the default_ad_group_budget_in_micro_currency will propagate to each child ad groups daily budget. Unit is micro currency of the associated advertiser account.
 * @param isAutomatedCampaign Specifies whether the campaign was created in the automated campaign flow
 * @param id Campaign ID.
 * @param objectiveType 
 * @param createdTime Campaign creation time. Unix timestamp in seconds.
 * @param updatedTime UTC timestamp. Last update time.
 * @param type Always \"campaign\".
 * @param isCampaignBudgetOptimization Determines if a campaign automatically generate ad-group level budgets given a campaign budget to maximize campaign outcome. When transitioning from non-cbo to cbo, all previous child ad group budget will be cleared.
 */
data class CampaignCreateResponseData(
    /* Campaign's Advertiser ID. If you want to create a campaign in a Business Account shared account you need to specify the Business Access advertiser ID in both the query path param as well as the request body schema. */
    val adAccountId: kotlin.String? = null,
    /* Campaign name. */
    val name: kotlin.String? = null,
    val status: EntityStatus? = null,
    /* Campaign total spending cap. Required for Campaign Budget Optimization (CBO) campaigns. This and \"daily_spend_cap\" cannot be set at the same time. */
    val lifetimeSpendCap: kotlin.Int? = null,
    /* Campaign daily spending cap. Required for Campaign Budget Optimization (CBO) campaigns. This and \"lifetime_spend_cap\" cannot be set at the same time. */
    val dailySpendCap: kotlin.Int? = null,
    /* Order line ID that appears on the invoice. */
    val orderLineId: kotlin.String? = null,
    val trackingUrls: AdCommonTrackingUrls? = null,
    /* Campaign start time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns. */
    val startTime: kotlin.Int? = null,
    /* Campaign end time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns. */
    val endTime: kotlin.Int? = null,
    val summaryStatus: CampaignSummaryStatus? = null,
    /* Determines if a campaign has flexible daily budgets setup. */
    val isFlexibleDailyBudgets: kotlin.Boolean? = null,
    /* When transitioning from campaign budget optimization to non-campaign budget optimization, the default_ad_group_budget_in_micro_currency will propagate to each child ad groups daily budget. Unit is micro currency of the associated advertiser account. */
    val defaultAdGroupBudgetInMicroCurrency: kotlin.Int? = null,
    /* Specifies whether the campaign was created in the automated campaign flow */
    val isAutomatedCampaign: kotlin.Boolean? = false,
    /* Campaign ID. */
    val id: kotlin.String? = null,
    val objectiveType: ObjectiveType? = null,
    /* Campaign creation time. Unix timestamp in seconds. */
    val createdTime: kotlin.Int? = null,
    /* UTC timestamp. Last update time. */
    val updatedTime: kotlin.Int? = null,
    /* Always \"campaign\". */
    val type: kotlin.String? = null,
    /* Determines if a campaign automatically generate ad-group level budgets given a campaign budget to maximize campaign outcome. When transitioning from non-cbo to cbo, all previous child ad group budget will be cleared. */
    val isCampaignBudgetOptimization: kotlin.Boolean? = null
) 

