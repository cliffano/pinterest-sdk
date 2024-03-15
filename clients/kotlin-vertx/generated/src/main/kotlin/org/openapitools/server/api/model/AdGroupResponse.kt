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
package org.openapitools.server.api.model

import org.openapitools.server.api.model.ActionType
import org.openapitools.server.api.model.AdGroupCommonOptimizationGoalMetadata
import org.openapitools.server.api.model.AdGroupCommonTrackingUrls
import org.openapitools.server.api.model.AdGroupSummaryStatus
import org.openapitools.server.api.model.BudgetType
import org.openapitools.server.api.model.EntityStatus
import org.openapitools.server.api.model.PacingDeliveryType
import org.openapitools.server.api.model.PlacementGroupType
import org.openapitools.server.api.model.TargetingSpec

        
import com.google.gson.annotations.SerializedName
import com.fasterxml.jackson.annotation.JsonIgnoreProperties
import com.fasterxml.jackson.annotation.JsonInclude
/**
 * 
 * @param name Ad group name.
 * @param status Ad group/entity status.
 * @param budgetInMicroCurrency Budget in micro currency. This field is **REQUIRED** for non-CBO (campaign budget optimization) campaigns.  A CBO campaign automatically generates ad group budgets from its campaign budget to maximize campaign outcome. A CBO campaign is limited to 70 or less ad groups.
 * @param bidInMicroCurrency Bid price in micro currency. This field is **REQUIRED** for the following campaign objective_type/billable_event combinations: AWARENESS/IMPRESSION, CONSIDERATION/CLICKTHROUGH, CATALOG_SALES/CLICKTHROUGH, VIDEO_VIEW/VIDEO_V_50_MRC.
 * @param optimizationGoalMetadata 
 * @param budgetType 
 * @param startTime Ad group start time. Unix timestamp in seconds. Defaults to current time.
 * @param endTime Ad group end time. Unix timestamp in seconds.
 * @param targetingSpec 
 * @param lifetimeFrequencyCap Set a limit to the number of times a promoted pin from this campaign can be impressed by a pinner within the past rolling 30 days. Only available for CPM (cost per mille (1000 impressions))  ad groups. A CPM ad group has an IMPRESSION <a href=\"https://developers.pinterest.com/docs/redoc/#section/Billable-event\">billable_event</a> value. This field **REQUIRES** the `end_time` field.
 * @param trackingUrls 
 * @param autoTargetingEnabled Enable auto-targeting for ad group. Also known as <a href=\"https://help.pinterest.com/en/business/article/expanded-targeting\" target=\"_blank\">\"expanded targeting\"</a>.
 * @param placementGroup <a href=\"https://developers.pinterest.com/docs/redoc/#section/Placement-group\">Placement group</a>.
 * @param pacingDeliveryType 
 * @param campaignId Campaign ID of the ad group.
 * @param billableEvent 
 * @param bidStrategyType Bid strategy type
 * @param id Ad group ID.
 * @param adAccountId Advertiser ID.
 * @param createdTime Ad group creation time. Unix timestamp in seconds.
 * @param updatedTime Ad group last update time. Unix timestamp in seconds.
 * @param type Always \"adgroup\".
 * @param conversionLearningModeType oCPM learn mode
 * @param summaryStatus Ad group summary status.
 * @param feedProfileId Feed Profile ID associated to the adgroup.
 * @param dcaAssets [DCA] The Dynamic creative assets to use for DCA. Dynamic Creative Assembly (DCA) accepts basic creative assets of an ad (image, video, title, call to action, logo etc). Then it automatically generates optimized ad combinations based on these assets.
 */
@JsonInclude(JsonInclude.Include.NON_NULL)
@JsonIgnoreProperties(ignoreUnknown = true)
data class AdGroupResponse (
    /* Ad group name. */
    val name: kotlin.String? = null,
    /* Ad group/entity status. */
    val status: EntityStatus? = null,
    /* Budget in micro currency. This field is **REQUIRED** for non-CBO (campaign budget optimization) campaigns.  A CBO campaign automatically generates ad group budgets from its campaign budget to maximize campaign outcome. A CBO campaign is limited to 70 or less ad groups. */
    val budgetInMicroCurrency: kotlin.Int? = null,
    /* Bid price in micro currency. This field is **REQUIRED** for the following campaign objective_type/billable_event combinations: AWARENESS/IMPRESSION, CONSIDERATION/CLICKTHROUGH, CATALOG_SALES/CLICKTHROUGH, VIDEO_VIEW/VIDEO_V_50_MRC. */
    val bidInMicroCurrency: kotlin.Int? = null,
    val optimizationGoalMetadata: AdGroupCommonOptimizationGoalMetadata? = null,
    val budgetType: BudgetType? = null,
    /* Ad group start time. Unix timestamp in seconds. Defaults to current time. */
    val startTime: kotlin.Int? = null,
    /* Ad group end time. Unix timestamp in seconds. */
    val endTime: kotlin.Int? = null,
    val targetingSpec: TargetingSpec? = null,
    /* Set a limit to the number of times a promoted pin from this campaign can be impressed by a pinner within the past rolling 30 days. Only available for CPM (cost per mille (1000 impressions))  ad groups. A CPM ad group has an IMPRESSION <a href=\"https://developers.pinterest.com/docs/redoc/#section/Billable-event\">billable_event</a> value. This field **REQUIRES** the `end_time` field. */
    val lifetimeFrequencyCap: kotlin.Int? = null,
    val trackingUrls: AdGroupCommonTrackingUrls? = null,
    /* Enable auto-targeting for ad group. Also known as <a href=\"https://help.pinterest.com/en/business/article/expanded-targeting\" target=\"_blank\">\"expanded targeting\"</a>. */
    val autoTargetingEnabled: kotlin.Boolean? = null,
    /* <a href=\"https://developers.pinterest.com/docs/redoc/#section/Placement-group\">Placement group</a>. */
    val placementGroup: PlacementGroupType? = null,
    val pacingDeliveryType: PacingDeliveryType? = null,
    /* Campaign ID of the ad group. */
    val campaignId: kotlin.String? = null,
    val billableEvent: ActionType? = null,
    /* Bid strategy type */
    val bidStrategyType: AdGroupResponse.BidStrategyType? = null,
    /* Ad group ID. */
    val id: kotlin.String? = null,
    /* Advertiser ID. */
    val adAccountId: kotlin.String? = null,
    /* Ad group creation time. Unix timestamp in seconds. */
    val createdTime: kotlin.Int? = null,
    /* Ad group last update time. Unix timestamp in seconds. */
    val updatedTime: kotlin.Int? = null,
    /* Always \"adgroup\". */
    val type: kotlin.String? = "adgroup",
    /* oCPM learn mode */
    val conversionLearningModeType: AdGroupResponse.ConversionLearningModeType? = null,
    /* Ad group summary status. */
    val summaryStatus: AdGroupSummaryStatus? = null,
    /* Feed Profile ID associated to the adgroup. */
    val feedProfileId: kotlin.String? = null,
    /* [DCA] The Dynamic creative assets to use for DCA. Dynamic Creative Assembly (DCA) accepts basic creative assets of an ad (image, video, title, call to action, logo etc). Then it automatically generates optimized ad combinations based on these assets. */
    val dcaAssets: kotlin.Any? = null
) {

    /**
    * Bid strategy type
    * Values: AUTOMATIC_BID,MAX_BID,TARGET_AVG,`null`
    */
    enum class BidStrategyType(val value: kotlin.String){
    
        AUTOMATIC_BID("AUTOMATIC_BID"),
    
        MAX_BID("MAX_BID"),
    
        TARGET_AVG("TARGET_AVG"),
    
        `null`("null");
    
    }

    /**
    * oCPM learn mode
    * Values: NOT_ACTIVE,ACTIVE,`null`
    */
    enum class ConversionLearningModeType(val value: kotlin.String){
    
        NOT_ACTIVE("NOT_ACTIVE"),
    
        ACTIVE("ACTIVE"),
    
        `null`("null");
    
    }

}

