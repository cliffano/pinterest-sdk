/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

package org.openapitools.client.model


case class CampaignResponse (
  // Campaign ID.
  id: String,
  // Campaign's Advertiser ID.
  adAccountId: String,
  // Campaign name.
  name: Option[String] = None,
  status: Option[EntityStatus] = None,
  // Campaign total spending cap.
  lifetimeSpendCap: Option[Integer] = None,
  // Campaign daily spending cap.
  dailySpendCap: Option[Integer] = None,
  // Order line ID that appears on the invoice.
  orderLineId: Option[String] = None,
  trackingUrls: Option[TrackingUrls] = None,
  // Campaign start time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.
  startTime: Option[Integer] = None,
  // Campaign end time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.
  endTime: Option[Integer] = None,
  objectiveType: Option[ObjectiveType] = None,
  // Campaign creation time. Unix timestamp in seconds.
  createdTime: Option[Integer] = None,
  // UTC timestamp. Last update time.
  updatedTime: Option[Integer] = None,
  // Always \"campaign\".
  `type`: Option[String] = None
)

