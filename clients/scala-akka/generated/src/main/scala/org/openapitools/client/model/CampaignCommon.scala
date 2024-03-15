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

case class CampaignCommon (
  /* Campaign's Advertiser ID. If you want to create a campaign in a Business Account shared account you need to specify the Business Access advertiser ID in both the query path param as well as the request body schema. */
  adAccountId: Option[String] = None,
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
  summaryStatus: Option[CampaignSummaryStatus] = None
) extends ApiModel

object CampaignCommonEnums {

}