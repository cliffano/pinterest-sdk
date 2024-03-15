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
package org.openapitools.client.model

import org.openapitools.client.core.ApiModel

case class CampaignUpdateRequest (
  /* Campaign ID. */
  id: String,
  /* Campaign's Advertiser ID. If you want to create a campaign in a Business Account shared account you need to specify the Business Access advertiser ID in both the query path param as well as the request body schema. */
  adAccountId: String,
  /* Campaign name. */
  name: Option[String] = None,
  status: Option[EntityStatus] = None,
  /* Campaign total spending cap. Required for Campaign Budget Optimization (CBO) campaigns. This and \"daily_spend_cap\" cannot be set at the same time. */
  lifetimeSpendCap: Option[Int] = None,
  /* Campaign daily spending cap. Required for Campaign Budget Optimization (CBO) campaigns. This and \"lifetime_spend_cap\" cannot be set at the same time. */
  dailySpendCap: Option[Int] = None,
  /* Order line ID that appears on the invoice. */
  orderLineId: Option[String] = None,
  trackingUrls: Option[AdCommonTrackingUrls] = None,
  /* Campaign start time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns. */
  startTime: Option[Int] = None,
  /* Campaign end time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns. */
  endTime: Option[Int] = None,
  summaryStatus: Option[CampaignSummaryStatus] = None,
  /* Determine if a campaign has flexible daily budgets setup. */
  isFlexibleDailyBudgets: Option[Boolean] = None,
  /* When transitioning from campaign budget optimization to non-campaign budget optimization, the default_ad_group_budget_in_micro_currency will propagate to each child ad groups daily budget. Unit is micro currency of the associated advertiser account. */
  defaultAdGroupBudgetInMicroCurrency: Option[Int] = None,
  /* Specifies whether the campaign was created in the automated campaign flow */
  isAutomatedCampaign: Option[Boolean] = None,
  /* Determines if a campaign automatically generate ad-group level budgets given a campaign budget to maximize campaign outcome. When transitioning from non-cbo to cbo, all previous child ad group budget will be cleared. */
  isCampaignBudgetOptimization: Option[Boolean] = None,
  objectiveType: Option[ObjectiveType] = None
) extends ApiModel

object CampaignUpdateRequestEnums {

}
