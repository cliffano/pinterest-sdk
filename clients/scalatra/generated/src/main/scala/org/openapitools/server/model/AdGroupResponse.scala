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

case class AdGroupResponse(
  /* Ad group name. */
  name: Option[String],

  /* Ad group/entity status. */
  status: Option[EntityStatus],

  /* Budget in micro currency. This field is **REQUIRED** for non-CBO (campaign budget optimization) campaigns.  A CBO campaign automatically generates ad group budgets from its campaign budget to maximize campaign outcome. A CBO campaign is limited to 70 or less ad groups. */
  budgetInMicroCurrency: Option[Int],

  /* Bid price in micro currency. This field is **REQUIRED** for the following campaign objective_type/billable_event combinations: AWARENESS/IMPRESSION, CONSIDERATION/CLICKTHROUGH, CATALOG_SALES/CLICKTHROUGH, VIDEO_VIEW/VIDEO_V_50_MRC. */
  bidInMicroCurrency: Option[Int],

  /* Budget type. If DAILY, an ad group's daily spend will not exceed the budget parameter value. If LIFETIME, the end_time parameter is **REQUIRED**, and the ad group spend is spread evenly between the ad group `start_time` and `end_time` range. A CBO campaign automatically generates ad group budgets from its campaign budget to maximize campaign outcome. */
  budgetType: Option[String],

  /* Ad group start time. Unix timestamp in seconds. Defaults to current time. */
  startTime: Option[Int],

  /* Ad group end time. Unix timestamp in seconds. */
  endTime: Option[Int],

  /* Ad group targeting specification defining the ad group target audience. For example, '{\"APPTYPE\":[\"iphone\"], \"GENDER\":[\"male\"], \"LOCALE\":[\"en-US\"], \"LOCATION\":[\"501\"], \"AGE_BUCKET\":[\"25-34\"]}' */
  targetingSpec: Option[Map[String, List[String]]],

  /* Set a limit to the number of times a promoted pin from this campaign can be impressed by a pinner within the past rolling 30 days. Only available for CPM (cost per mille (1000 impressions))  ad groups. A CPM ad group has an IMPRESSION <a href=\\\"/docs/redoc/#section/Billable-event\\\">billable_event</a> value. This field **REQUIRES** the `end_time` field. */
  lifetimeFrequencyCap: Option[Int],

  /* Third-party tracking URLs.<br> JSON object with the format: {\"<a href=\"https://developers.pinterest.com/docs/redoc/#section/Tracking-URL-event\">Tracking event enum</a>\":[URL string array],...}<br> For example: {\"impression\": [\"URL1\", \"URL2\"], \"click\": [\"URL1\", \"URL2\", \"URL3\"]}.<br>Up to three tracking URLs are supported for each event type. Tracking URLs set at the ad group or ad level can override those set at the campaign level. May be null. Pass in an empty object - {} - to remove tracking URLs.<br><br> For more information, see <a href=\"https://help.pinterest.com/en/business/article/third-party-and-dynamic-tracking\" target=\"_blank\">Third-party and dynamic tracking</a>. */
  trackingUrls: Option[TrackingUrls],

  /* Enable auto-targeting for ad group. Also known as <a href=\"https://help.pinterest.com/en/business/article/expanded-targeting\" target=\"_blank\">\"expanded targeting\"</a>. */
  autoTargetingEnabled: Option[Boolean],

  /* <a href=\\\"/docs/redoc/#section/Placement-group\\\">Placement group</a>. */
  placementGroup: Option[PlacementGroupType],

  /* Pacing delivery type. With ACCELERATED, an ad group budget is spent as fast as possible. With STANDARD, an ad group budget is spent smoothly over a day. */
  pacingDeliveryType: Option[PacingDeliveryType],

  /* oCPM learn mode */
  conversionLearningModeType: Option[String],

  /* Ad group summary status. */
  summaryStatus: Option[AdGroupSummaryStatus],

  /* Feed Profile ID associated to the adgroup. */
  feedProfileId: Option[String],

  /* Campaign ID of the ad group. */
  campaignId: Option[String],

  billableEvent: Option[ActionType],

  /* Ad group ID. */
  id: Option[String],

  /* Always \"adgroup\". */
  `type`: Option[String],

  /* Advertiser ID. */
  adAccountId: Option[String],

  /* Ad group creation time. Unix timestamp in seconds. */
  createdTime: Option[Int],

  /* Ad group last update time. Unix timestamp in seconds. */
  updatedTime: Option[Int]

 )
