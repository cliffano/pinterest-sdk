/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 */

package org.openapitools.server.model

case class CampaignCommon(
  /* Campaign's Advertiser ID. */
  adAccountId: String,

  /* Campaign name. */
  name: Option[String],

  status: Option[EntityStatus],

  /* Campaign total spending cap. */
  lifetimeSpendCap: Option[Int],

  /* Campaign daily spending cap. */
  dailySpendCap: Option[Int],

  /* Order line ID that appears on the invoice. */
  orderLineId: Option[String],

  trackingUrls: Option[TrackingUrls],

  /* Campaign start time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns. */
  startTime: Option[Int],

  /* Campaign end time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns. */
  endTime: Option[Int]

 )