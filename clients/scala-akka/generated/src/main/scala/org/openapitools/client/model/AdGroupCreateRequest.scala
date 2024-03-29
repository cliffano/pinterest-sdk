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

case class AdGroupCreateRequest (
  /* Ad group name. */
  name: String,
  /* Ad group/entity status. */
  status: Option[EntityStatus] = None,
  /* Budget in micro currency. This field is **REQUIRED** for non-CBO (campaign budget optimization) campaigns.  A CBO campaign automatically generates ad group budgets from its campaign budget to maximize campaign outcome. A CBO campaign is limited to 70 or less ad groups. */
  budgetInMicroCurrency: Option[Int] = None,
  /* Bid price in micro currency. This field is **REQUIRED** for the following campaign objective_type/billable_event combinations: AWARENESS/IMPRESSION, CONSIDERATION/CLICKTHROUGH, CATALOG_SALES/CLICKTHROUGH, VIDEO_VIEW/VIDEO_V_50_MRC. */
  bidInMicroCurrency: Option[Int] = None,
  optimizationGoalMetadata: Option[AdGroupCommonOptimizationGoalMetadata] = None,
  budgetType: Option[BudgetType] = None,
  /* Ad group start time. Unix timestamp in seconds. Defaults to current time. */
  startTime: Option[Int] = None,
  /* Ad group end time. Unix timestamp in seconds. */
  endTime: Option[Int] = None,
  targetingSpec: Option[TargetingSpec] = None,
  /* Set a limit to the number of times a promoted pin from this campaign can be impressed by a pinner within the past rolling 30 days. Only available for CPM (cost per mille (1000 impressions))  ad groups. A CPM ad group has an IMPRESSION <a href=\"https://developers.pinterest.com/docs/redoc/#section/Billable-event\">billable_event</a> value. This field **REQUIRES** the `end_time` field. */
  lifetimeFrequencyCap: Option[Int] = None,
  trackingUrls: Option[AdGroupCommonTrackingUrls] = None,
  /* Enable auto-targeting for ad group.Default value is True. Also known as <a href=\"https://help.pinterest.com/en/business/article/expanded-targeting\" target=\"_blank\">\"expanded targeting\"</a>. */
  autoTargetingEnabled: Option[Boolean] = None,
  /* <a href=\"https://developers.pinterest.com/docs/redoc/#section/Placement-group\">Placement group</a>. */
  placementGroup: Option[PlacementGroupType] = None,
  pacingDeliveryType: Option[PacingDeliveryType] = None,
  /* Campaign ID of the ad group. */
  campaignId: String,
  billableEvent: ActionType,
  /* Bid strategy type */
  bidStrategyType: Option[AdGroupCreateRequestEnums.BidStrategyType] = None
) extends ApiModel

object AdGroupCreateRequestEnums {

  type BidStrategyType = BidStrategyType.Value
  object BidStrategyType extends Enumeration {
    val AUTOMATICBID = Value("AUTOMATIC_BID")
    val MAXBID = Value("MAX_BID")
    val TARGETAVG = Value("TARGET_AVG")
    val `Null` = Value("null")
  }

}
