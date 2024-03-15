/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 */

package org.openapitools.server.model

case class CampaignUpdateRequest(
  /* Campaign ID. */
  id: String,

  /* Campaign's Advertiser ID. If you want to create a campaign in a Business Account shared account you need to specify the Business Access advertiser ID in both the query path param as well as the request body schema. */
  adAccountId: String,

  /* Campaign name. */
  name: Option[String],

  status: Option[EntityStatus],

  /* Campaign total spending cap. Required for Campaign Budget Optimization (CBO) campaigns. This and \"daily_spend_cap\" cannot be set at the same time. */
  lifetimeSpendCap: Option[Int],

  /* Campaign daily spending cap. Required for Campaign Budget Optimization (CBO) campaigns. This and \"lifetime_spend_cap\" cannot be set at the same time. */
  dailySpendCap: Option[Int],

  /* Order line ID that appears on the invoice. */
  orderLineId: Option[String],

  trackingUrls: Option[AdCommonTrackingUrls],

  /* Campaign start time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns. */
  startTime: Option[Int],

  /* Campaign end time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns. */
  endTime: Option[Int],

  summaryStatus: Option[CampaignSummaryStatus],

  /* Determine if a campaign has flexible daily budgets setup. */
  isFlexibleDailyBudgets: Option[Boolean],

  /* When transitioning from campaign budget optimization to non-campaign budget optimization, the default_ad_group_budget_in_micro_currency will propagate to each child ad groups daily budget. Unit is micro currency of the associated advertiser account. */
  defaultAdGroupBudgetInMicroCurrency: Option[Int],

  /* Specifies whether the campaign was created in the automated campaign flow */
  isAutomatedCampaign: Option[Boolean],

  /* Determines if a campaign automatically generate ad-group level budgets given a campaign budget to maximize campaign outcome. When transitioning from non-cbo to cbo, all previous child ad group budget will be cleared. */
  isCampaignBudgetOptimization: Option[Boolean],

  objectiveType: Option[ObjectiveType]

 )
