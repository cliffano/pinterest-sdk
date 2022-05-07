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


case class AdGroupResponseAllOf (
  // Ad group name.
  name: Option[String] = None,
  // Ad group/entity status.
  status: Option[EntityStatus] = None,
  // Budget in micro currency. This field is **REQUIRED** for non-CBO (campaign budget optimization) campaigns.  A CBO campaign automatically generates ad group budgets from its campaign budget to maximize campaign outcome. A CBO campaign is limited to 70 or less ad groups.
  budgetInMicroCurrency: Option[Integer] = None,
  // Bid price in micro currency. This field is **REQUIRED** for the following campaign objective_type/billable_event combinations: AWARENESS/IMPRESSION, CONSIDERATION/CLICKTHROUGH, CATALOG_SALES/CLICKTHROUGH, VIDEO_VIEW/VIDEO_V_50_MRC.
  bidInMicroCurrency: Option[Integer] = None,
  // Budget type. If DAILY, an ad group's daily spend will not exceed the budget parameter value. If LIFETIME, the end_time parameter is **REQUIRED**, and the ad group spend is spread evenly between the ad group `start_time` and `end_time` range. A CBO campaign automatically generates ad group budgets from its campaign budget to maximize campaign outcome.
  budgetType: Option[String] = None,
  // Ad group start time. Unix timestamp in seconds. Defaults to current time.
  startTime: Option[Integer] = None,
  // Ad group end time. Unix timestamp in seconds.
  endTime: Option[Integer] = None,
  // Ad group targeting specification defining the ad group target audience. For example, '{\"APPTYPE\":[\"iphone\"], \"GENDER\":[\"male\"], \"LOCALE\":[\"en-US\"], \"LOCATION\":[\"501\"], \"AGE_BUCKET\":[\"25-34\"]}'
  targetingSpec: Option[Map[String, List[String]]] = None,
  // Set a limit to the number of times a promoted pin from this campaign can be impressed by a pinner within the past rolling 30 days. Only available for CPM (cost per mille (1000 impressions))  ad groups. A CPM ad group has an IMPRESSION <a href=\\\"/docs/redoc/#section/Billable-event\\\">billable_event</a> value. This field **REQUIRES** the `end_time` field.
  lifetimeFrequencyCap: Option[Integer] = None,
  // Third-party tracking URLs.<br> JSON object with the format: {\"<a href=\"https://developers.pinterest.com/docs/redoc/#section/Tracking-URL-event\">Tracking event enum</a>\":[URL string array],...}<br> For example: {\"impression\": [\"URL1\", \"URL2\"], \"click\": [\"URL1\", \"URL2\", \"URL3\"]}.<br>Up to three tracking URLs are supported for each event type. Tracking URLs set at the ad group or ad level can override those set at the campaign level. May be null. Pass in an empty object - {} - to remove tracking URLs.<br><br> For more information, see <a href=\"https://help.pinterest.com/en/business/article/third-party-and-dynamic-tracking\" target=\"_blank\">Third-party and dynamic tracking</a>.
  trackingUrls: Option[TrackingUrls] = None,
  // Enable auto-targeting for ad group. Also known as <a href=\"https://help.pinterest.com/en/business/article/expanded-targeting\" target=\"_blank\">\"expanded targeting\"</a>.
  autoTargetingEnabled: Option[Boolean] = None,
  // <a href=\\\"/docs/redoc/#section/Placement-group\\\">Placement group</a>.
  placementGroup: Option[PlacementGroupType] = None,
  // Pacing delivery type. With ACCELERATED, an ad group budget is spent as fast as possible. With STANDARD, an ad group budget is spent smoothly over a day.
  pacingDeliveryType: Option[PacingDeliveryType] = None,
  // oCPM learn mode
  conversionLearningModeType: Option[String] = None,
  // Ad group summary status.
  summaryStatus: Option[AdGroupSummaryStatus] = None,
  // Feed Profile ID associated to the adgroup.
  feedProfileId: Option[String] = None
)

