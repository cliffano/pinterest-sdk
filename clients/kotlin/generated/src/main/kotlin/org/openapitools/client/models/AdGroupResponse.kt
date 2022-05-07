/**
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * Please note:
 * This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * Do not edit this file manually.
 */

@file:Suppress(
    "ArrayInDataClass",
    "EnumEntryName",
    "RemoveRedundantQualifierName",
    "UnusedImport"
)

package org.openapitools.client.models

import org.openapitools.client.models.ActionType
import org.openapitools.client.models.AdGroupResponseAllOf
import org.openapitools.client.models.AdGroupResponseAllOf1
import org.openapitools.client.models.AdGroupSummaryStatus
import org.openapitools.client.models.EntityStatus
import org.openapitools.client.models.PacingDeliveryType
import org.openapitools.client.models.PlacementGroupType
import org.openapitools.client.models.TrackingUrls

import com.squareup.moshi.Json

/**
 * 
 *
 * @param name Ad group name.
 * @param status Ad group/entity status.
 * @param budgetInMicroCurrency Budget in micro currency. This field is **REQUIRED** for non-CBO (campaign budget optimization) campaigns.  A CBO campaign automatically generates ad group budgets from its campaign budget to maximize campaign outcome. A CBO campaign is limited to 70 or less ad groups.
 * @param bidInMicroCurrency Bid price in micro currency. This field is **REQUIRED** for the following campaign objective_type/billable_event combinations: AWARENESS/IMPRESSION, CONSIDERATION/CLICKTHROUGH, CATALOG_SALES/CLICKTHROUGH, VIDEO_VIEW/VIDEO_V_50_MRC.
 * @param budgetType Budget type. If DAILY, an ad group's daily spend will not exceed the budget parameter value. If LIFETIME, the end_time parameter is **REQUIRED**, and the ad group spend is spread evenly between the ad group `start_time` and `end_time` range. A CBO campaign automatically generates ad group budgets from its campaign budget to maximize campaign outcome.
 * @param startTime Ad group start time. Unix timestamp in seconds. Defaults to current time.
 * @param endTime Ad group end time. Unix timestamp in seconds.
 * @param targetingSpec Ad group targeting specification defining the ad group target audience. For example, '{\"APPTYPE\":[\"iphone\"], \"GENDER\":[\"male\"], \"LOCALE\":[\"en-US\"], \"LOCATION\":[\"501\"], \"AGE_BUCKET\":[\"25-34\"]}'
 * @param lifetimeFrequencyCap Set a limit to the number of times a promoted pin from this campaign can be impressed by a pinner within the past rolling 30 days. Only available for CPM (cost per mille (1000 impressions))  ad groups. A CPM ad group has an IMPRESSION <a href=\\\"/docs/redoc/#section/Billable-event\\\">billable_event</a> value. This field **REQUIRES** the `end_time` field.
 * @param trackingUrls Third-party tracking URLs.<br> JSON object with the format: {\"<a href=\"https://developers.pinterest.com/docs/redoc/#section/Tracking-URL-event\">Tracking event enum</a>\":[URL string array],...}<br> For example: {\"impression\": [\"URL1\", \"URL2\"], \"click\": [\"URL1\", \"URL2\", \"URL3\"]}.<br>Up to three tracking URLs are supported for each event type. Tracking URLs set at the ad group or ad level can override those set at the campaign level. May be null. Pass in an empty object - {} - to remove tracking URLs.<br><br> For more information, see <a href=\"https://help.pinterest.com/en/business/article/third-party-and-dynamic-tracking\" target=\"_blank\">Third-party and dynamic tracking</a>.
 * @param autoTargetingEnabled Enable auto-targeting for ad group. Also known as <a href=\"https://help.pinterest.com/en/business/article/expanded-targeting\" target=\"_blank\">\"expanded targeting\"</a>.
 * @param placementGroup <a href=\\\"/docs/redoc/#section/Placement-group\\\">Placement group</a>.
 * @param pacingDeliveryType Pacing delivery type. With ACCELERATED, an ad group budget is spent as fast as possible. With STANDARD, an ad group budget is spent smoothly over a day.
 * @param conversionLearningModeType oCPM learn mode
 * @param summaryStatus Ad group summary status.
 * @param feedProfileId Feed Profile ID associated to the adgroup.
 * @param campaignId Campaign ID of the ad group.
 * @param billableEvent 
 * @param id Ad group ID.
 * @param type Always \"adgroup\".
 * @param adAccountId Advertiser ID.
 * @param createdTime Ad group creation time. Unix timestamp in seconds.
 * @param updatedTime Ad group last update time. Unix timestamp in seconds.
 */

data class AdGroupResponse (

    /* Ad group name. */
    @Json(name = "name")
    val name: kotlin.String? = null,

    /* Ad group/entity status. */
    @Json(name = "status")
    val status: EntityStatus? = null,

    /* Budget in micro currency. This field is **REQUIRED** for non-CBO (campaign budget optimization) campaigns.  A CBO campaign automatically generates ad group budgets from its campaign budget to maximize campaign outcome. A CBO campaign is limited to 70 or less ad groups. */
    @Json(name = "budget_in_micro_currency")
    val budgetInMicroCurrency: kotlin.Int? = null,

    /* Bid price in micro currency. This field is **REQUIRED** for the following campaign objective_type/billable_event combinations: AWARENESS/IMPRESSION, CONSIDERATION/CLICKTHROUGH, CATALOG_SALES/CLICKTHROUGH, VIDEO_VIEW/VIDEO_V_50_MRC. */
    @Json(name = "bid_in_micro_currency")
    val bidInMicroCurrency: kotlin.Int? = null,

    /* Budget type. If DAILY, an ad group's daily spend will not exceed the budget parameter value. If LIFETIME, the end_time parameter is **REQUIRED**, and the ad group spend is spread evenly between the ad group `start_time` and `end_time` range. A CBO campaign automatically generates ad group budgets from its campaign budget to maximize campaign outcome. */
    @Json(name = "budget_type")
    val budgetType: AdGroupResponse.BudgetType? = null,

    /* Ad group start time. Unix timestamp in seconds. Defaults to current time. */
    @Json(name = "start_time")
    val startTime: kotlin.Int? = null,

    /* Ad group end time. Unix timestamp in seconds. */
    @Json(name = "end_time")
    val endTime: kotlin.Int? = null,

    /* Ad group targeting specification defining the ad group target audience. For example, '{\"APPTYPE\":[\"iphone\"], \"GENDER\":[\"male\"], \"LOCALE\":[\"en-US\"], \"LOCATION\":[\"501\"], \"AGE_BUCKET\":[\"25-34\"]}' */
    @Json(name = "targeting_spec")
    val targetingSpec: kotlin.collections.Map<kotlin.String, kotlin.collections.List<kotlin.String>>? = null,

    /* Set a limit to the number of times a promoted pin from this campaign can be impressed by a pinner within the past rolling 30 days. Only available for CPM (cost per mille (1000 impressions))  ad groups. A CPM ad group has an IMPRESSION <a href=\\\"/docs/redoc/#section/Billable-event\\\">billable_event</a> value. This field **REQUIRES** the `end_time` field. */
    @Json(name = "lifetime_frequency_cap")
    val lifetimeFrequencyCap: kotlin.Int? = null,

    /* Third-party tracking URLs.<br> JSON object with the format: {\"<a href=\"https://developers.pinterest.com/docs/redoc/#section/Tracking-URL-event\">Tracking event enum</a>\":[URL string array],...}<br> For example: {\"impression\": [\"URL1\", \"URL2\"], \"click\": [\"URL1\", \"URL2\", \"URL3\"]}.<br>Up to three tracking URLs are supported for each event type. Tracking URLs set at the ad group or ad level can override those set at the campaign level. May be null. Pass in an empty object - {} - to remove tracking URLs.<br><br> For more information, see <a href=\"https://help.pinterest.com/en/business/article/third-party-and-dynamic-tracking\" target=\"_blank\">Third-party and dynamic tracking</a>. */
    @Json(name = "tracking_urls")
    val trackingUrls: TrackingUrls? = null,

    /* Enable auto-targeting for ad group. Also known as <a href=\"https://help.pinterest.com/en/business/article/expanded-targeting\" target=\"_blank\">\"expanded targeting\"</a>. */
    @Json(name = "auto_targeting_enabled")
    val autoTargetingEnabled: kotlin.Boolean? = null,

    /* <a href=\\\"/docs/redoc/#section/Placement-group\\\">Placement group</a>. */
    @Json(name = "placement_group")
    val placementGroup: PlacementGroupType? = null,

    /* Pacing delivery type. With ACCELERATED, an ad group budget is spent as fast as possible. With STANDARD, an ad group budget is spent smoothly over a day. */
    @Json(name = "pacing_delivery_type")
    val pacingDeliveryType: PacingDeliveryType? = null,

    /* oCPM learn mode */
    @Json(name = "conversion_learning_mode_type")
    val conversionLearningModeType: AdGroupResponse.ConversionLearningModeType? = null,

    /* Ad group summary status. */
    @Json(name = "summary_status")
    val summaryStatus: AdGroupSummaryStatus? = null,

    /* Feed Profile ID associated to the adgroup. */
    @Json(name = "feed_profile_id")
    val feedProfileId: kotlin.String? = null,

    /* Campaign ID of the ad group. */
    @Json(name = "campaign_id")
    val campaignId: kotlin.String? = null,

    @Json(name = "billable_event")
    val billableEvent: ActionType? = null,

    /* Ad group ID. */
    @Json(name = "id")
    val id: kotlin.String? = null,

    /* Always \"adgroup\". */
    @Json(name = "type")
    val type: kotlin.String? = null,

    /* Advertiser ID. */
    @Json(name = "ad_account_id")
    val adAccountId: kotlin.String? = null,

    /* Ad group creation time. Unix timestamp in seconds. */
    @Json(name = "created_time")
    val createdTime: kotlin.Int? = null,

    /* Ad group last update time. Unix timestamp in seconds. */
    @Json(name = "updated_time")
    val updatedTime: kotlin.Int? = null

) {

    /**
     * Budget type. If DAILY, an ad group's daily spend will not exceed the budget parameter value. If LIFETIME, the end_time parameter is **REQUIRED**, and the ad group spend is spread evenly between the ad group `start_time` and `end_time` range. A CBO campaign automatically generates ad group budgets from its campaign budget to maximize campaign outcome.
     *
     * Values: dAILY,lIFETIME,cBOADGROUP
     */
    enum class BudgetType(val value: kotlin.String) {
        @Json(name = "DAILY") dAILY("DAILY"),
        @Json(name = "LIFETIME") lIFETIME("LIFETIME"),
        @Json(name = "CBO_ADGROUP") cBOADGROUP("CBO_ADGROUP");
    }
    /**
     * oCPM learn mode
     *
     * Values: nOTACTIVE,aCTIVE,`null`
     */
    enum class ConversionLearningModeType(val value: kotlin.String) {
        @Json(name = "NOT_ACTIVE") nOTACTIVE("NOT_ACTIVE"),
        @Json(name = "ACTIVE") aCTIVE("ACTIVE"),
        @Json(name = "null") `null`("null");
    }
}

