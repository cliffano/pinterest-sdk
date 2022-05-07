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
package org.openapitools.client.model

import org.openapitools.client.model.EntityStatus._

  /**
   * Campaign Data
   */
case class CampaignCommon(
  /* Campaign's Advertiser ID. */
  adAccountId: String,
  /* Campaign name. */
  name: Option[String] = None,
  status: Option[EntityStatus] = None,
  /* Campaign total spending cap. */
  lifetimeSpendCap: Option[Int] = None,
  /* Campaign daily spending cap. */
  dailySpendCap: Option[Int] = None,
  /* Order line ID that appears on the invoice. */
  orderLineId: Option[String] = None,
  trackingUrls: Option[TrackingUrls] = None,
  /* Campaign start time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns. */
  startTime: Option[Int] = None,
  /* Campaign end time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns. */
  endTime: Option[Int] = None
)

