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
 * @param campaignId Campaign ID of the ad group.
 * @param billableEvent 
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
 * @param autoTargetingEnabled Enable auto-targeting for ad group.Default value is True. Also known as <a href=\"https://help.pinterest.com/en/business/article/expanded-targeting\" target=\"_blank\">\"expanded targeting\"</a>.
 * @param placementGroup <a href=\"https://developers.pinterest.com/docs/redoc/#section/Placement-group\">Placement group</a>.
 * @param pacingDeliveryType 
 * @param bidStrategyType Bid strategy type
 */
@JsonInclude(JsonInclude.Include.NON_NULL)
@JsonIgnoreProperties(ignoreUnknown = true)
data class AdGroupCreateRequest (
    /* Ad group name. */
    @SerializedName("name") private val _name: kotlin.String?,
    /* Campaign ID of the ad group. */
    @SerializedName("campaignId") private val _campaignId: kotlin.String?,
    @SerializedName("billableEvent") private val _billableEvent: ActionType?,
    /* Ad group/entity status. */
    val status: EntityStatus? = null,
    /* Budget in micro currency. This field is **REQUIRED** for non-CBO (campaign budget optimization) campaigns.  A CBO campaign automatically generates ad group budgets from its campaign budget to maximize campaign outcome. A CBO campaign is limited to 70 or less ad groups. */
    val budgetInMicroCurrency: kotlin.Int? = null,
    /* Bid price in micro currency. This field is **REQUIRED** for the following campaign objective_type/billable_event combinations: AWARENESS/IMPRESSION, CONSIDERATION/CLICKTHROUGH, CATALOG_SALES/CLICKTHROUGH, VIDEO_VIEW/VIDEO_V_50_MRC. */
    val bidInMicroCurrency: kotlin.Int? = null,
    val optimizationGoalMetadata: AdGroupCommonOptimizationGoalMetadata? = null,
    val budgetType: BudgetType? = "DAILY",
    /* Ad group start time. Unix timestamp in seconds. Defaults to current time. */
    val startTime: kotlin.Int? = null,
    /* Ad group end time. Unix timestamp in seconds. */
    val endTime: kotlin.Int? = null,
    val targetingSpec: TargetingSpec? = null,
    /* Set a limit to the number of times a promoted pin from this campaign can be impressed by a pinner within the past rolling 30 days. Only available for CPM (cost per mille (1000 impressions))  ad groups. A CPM ad group has an IMPRESSION <a href=\"https://developers.pinterest.com/docs/redoc/#section/Billable-event\">billable_event</a> value. This field **REQUIRES** the `end_time` field. */
    val lifetimeFrequencyCap: kotlin.Int? = null,
    val trackingUrls: AdGroupCommonTrackingUrls? = null,
    /* Enable auto-targeting for ad group.Default value is True. Also known as <a href=\"https://help.pinterest.com/en/business/article/expanded-targeting\" target=\"_blank\">\"expanded targeting\"</a>. */
    val autoTargetingEnabled: kotlin.Boolean? = null,
    /* <a href=\"https://developers.pinterest.com/docs/redoc/#section/Placement-group\">Placement group</a>. */
    val placementGroup: PlacementGroupType? = null,
    val pacingDeliveryType: PacingDeliveryType? = "STANDARD",
    /* Bid strategy type */
    val bidStrategyType: AdGroupCreateRequest.BidStrategyType? = null
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

        val name get() = _name ?: throw IllegalArgumentException("name is required")
                    
        val campaignId get() = _campaignId ?: throw IllegalArgumentException("campaignId is required")
                    
        val billableEvent get() = _billableEvent ?: throw IllegalArgumentException("billableEvent is required")
                    
}
