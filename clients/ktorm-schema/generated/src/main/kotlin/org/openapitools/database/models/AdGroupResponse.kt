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
package org.openapitools.database.models

import org.ktorm.dsl.*
import org.ktorm.schema.*
import org.ktorm.database.Database
import .*


/**
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
object AdGroupResponses : BaseTable<AdGroupResponse>("AdGroupResponse") {
    val name = text("name") /* null */ /* Ad group name. */
    val status = long("status") /* null */ /* Ad group/entity status. */
    val budgetInMicroCurrency = int("budget_in_micro_currency") /* null */ /* Budget in micro currency. This field is **REQUIRED** for non-CBO (campaign budget optimization) campaigns.  A CBO campaign automatically generates ad group budgets from its campaign budget to maximize campaign outcome. A CBO campaign is limited to 70 or less ad groups. */
    val bidInMicroCurrency = int("bid_in_micro_currency") /* null */ /* Bid price in micro currency. This field is **REQUIRED** for the following campaign objective_type/billable_event combinations: AWARENESS/IMPRESSION, CONSIDERATION/CLICKTHROUGH, CATALOG_SALES/CLICKTHROUGH, VIDEO_VIEW/VIDEO_V_50_MRC. */
    val budgetType = text("budget_type").transform({ AdGroupResponse.BudgetType.valueOf(it ?: "DAILY") }, { it.value }) /* null */ /* Budget type. If DAILY, an ad group's daily spend will not exceed the budget parameter value. If LIFETIME, the end_time parameter is **REQUIRED**, and the ad group spend is spread evenly between the ad group `start_time` and `end_time` range. A CBO campaign automatically generates ad group budgets from its campaign budget to maximize campaign outcome. */

    val startTime = int("start_time") /* null */ /* Ad group start time. Unix timestamp in seconds. Defaults to current time. */
    val endTime = int("end_time") /* null */ /* Ad group end time. Unix timestamp in seconds. */
    val targetingSpec = blob("targeting_spec") /* null */ /* Ad group targeting specification defining the ad group target audience. For example, '{\"APPTYPE\":[\"iphone\"], \"GENDER\":[\"male\"], \"LOCALE\":[\"en-US\"], \"LOCATION\":[\"501\"], \"AGE_BUCKET\":[\"25-34\"]}' */
    val lifetimeFrequencyCap = int("lifetime_frequency_cap") /* null */ /* Set a limit to the number of times a promoted pin from this campaign can be impressed by a pinner within the past rolling 30 days. Only available for CPM (cost per mille (1000 impressions))  ad groups. A CPM ad group has an IMPRESSION <a href=\\\"/docs/redoc/#section/Billable-event\\\">billable_event</a> value. This field **REQUIRES** the `end_time` field. */
    val trackingUrls = long("tracking_urls") /* null */ /* Third-party tracking URLs.<br> JSON object with the format: {\"<a href=\"https://developers.pinterest.com/docs/redoc/#section/Tracking-URL-event\">Tracking event enum</a>\":[URL string array],...}<br> For example: {\"impression\": [\"URL1\", \"URL2\"], \"click\": [\"URL1\", \"URL2\", \"URL3\"]}.<br>Up to three tracking URLs are supported for each event type. Tracking URLs set at the ad group or ad level can override those set at the campaign level. May be null. Pass in an empty object - {} - to remove tracking URLs.<br><br> For more information, see <a href=\"https://help.pinterest.com/en/business/article/third-party-and-dynamic-tracking\" target=\"_blank\">Third-party and dynamic tracking</a>. */
    val autoTargetingEnabled = boolean("auto_targeting_enabled") /* null */ /* Enable auto-targeting for ad group. Also known as <a href=\"https://help.pinterest.com/en/business/article/expanded-targeting\" target=\"_blank\">\"expanded targeting\"</a>. */
    val placementGroup = long("placement_group") /* null */ /* <a href=\\\"/docs/redoc/#section/Placement-group\\\">Placement group</a>. */
    val pacingDeliveryType = long("pacing_delivery_type") /* null */ /* Pacing delivery type. With ACCELERATED, an ad group budget is spent as fast as possible. With STANDARD, an ad group budget is spent smoothly over a day. */
    val conversionLearningModeType = text("conversion_learning_mode_type").transform({ AdGroupResponse.ConversionLearningModeType.valueOf(it ?: "NOT_ACTIVE") }, { it.value }) /* null */ /* oCPM learn mode */

    val summaryStatus = long("summary_status") /* null */ /* Ad group summary status. */
    val feedProfileId = text("feed_profile_id") /* null */ /* Feed Profile ID associated to the adgroup. */
    val campaignId = text("campaign_id") /* null */ /* Campaign ID of the ad group. */
    val billableEvent = long("billable_event") /* null */
    val id = text("id") /* null */ /* Ad group ID. */
    val type = text("type") /* null */ /* Always \"adgroup\". */
    val adAccountId = text("ad_account_id") /* null */ /* Advertiser ID. */
    val createdTime = int("created_time") /* null */ /* Ad group creation time. Unix timestamp in seconds. */
    val updatedTime = int("updated_time") /* null */ /* Ad group last update time. Unix timestamp in seconds. */

    /**
     * Create an entity of type AdGroupResponse from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = AdGroupResponse(
        name = row[name]  /* kotlin.String? */ /* Ad group name. */,
        status = EntityStatuss.createEntity(row, withReferences) /* EntityStatus? */ /* Ad group/entity status. */,
        budgetInMicroCurrency = row[budgetInMicroCurrency]  /* kotlin.Int? */ /* Budget in micro currency. This field is **REQUIRED** for non-CBO (campaign budget optimization) campaigns.  A CBO campaign automatically generates ad group budgets from its campaign budget to maximize campaign outcome. A CBO campaign is limited to 70 or less ad groups. */,
        bidInMicroCurrency = row[bidInMicroCurrency]  /* kotlin.Int? */ /* Bid price in micro currency. This field is **REQUIRED** for the following campaign objective_type/billable_event combinations: AWARENESS/IMPRESSION, CONSIDERATION/CLICKTHROUGH, CATALOG_SALES/CLICKTHROUGH, VIDEO_VIEW/VIDEO_V_50_MRC. */,
        budgetType = row[budgetType]  /* kotlin.String? */ /* Budget type. If DAILY, an ad group's daily spend will not exceed the budget parameter value. If LIFETIME, the end_time parameter is **REQUIRED**, and the ad group spend is spread evenly between the ad group `start_time` and `end_time` range. A CBO campaign automatically generates ad group budgets from its campaign budget to maximize campaign outcome. */,
        startTime = row[startTime]  /* kotlin.Int? */ /* Ad group start time. Unix timestamp in seconds. Defaults to current time. */,
        endTime = row[endTime]  /* kotlin.Int? */ /* Ad group end time. Unix timestamp in seconds. */,
        targetingSpec = row[targetingSpec]  /* kotlin.collections.Map<kotlin.String, kotlin.Array<kotlin.String>>? */ /* Ad group targeting specification defining the ad group target audience. For example, '{\"APPTYPE\":[\"iphone\"], \"GENDER\":[\"male\"], \"LOCALE\":[\"en-US\"], \"LOCATION\":[\"501\"], \"AGE_BUCKET\":[\"25-34\"]}' */,
        lifetimeFrequencyCap = row[lifetimeFrequencyCap]  /* kotlin.Int? */ /* Set a limit to the number of times a promoted pin from this campaign can be impressed by a pinner within the past rolling 30 days. Only available for CPM (cost per mille (1000 impressions))  ad groups. A CPM ad group has an IMPRESSION <a href=\\\"/docs/redoc/#section/Billable-event\\\">billable_event</a> value. This field **REQUIRES** the `end_time` field. */,
        trackingUrls = TrackingUrlss.createEntity(row, withReferences) /* TrackingUrls? */ /* Third-party tracking URLs.<br> JSON object with the format: {\"<a href=\"https://developers.pinterest.com/docs/redoc/#section/Tracking-URL-event\">Tracking event enum</a>\":[URL string array],...}<br> For example: {\"impression\": [\"URL1\", \"URL2\"], \"click\": [\"URL1\", \"URL2\", \"URL3\"]}.<br>Up to three tracking URLs are supported for each event type. Tracking URLs set at the ad group or ad level can override those set at the campaign level. May be null. Pass in an empty object - {} - to remove tracking URLs.<br><br> For more information, see <a href=\"https://help.pinterest.com/en/business/article/third-party-and-dynamic-tracking\" target=\"_blank\">Third-party and dynamic tracking</a>. */,
        autoTargetingEnabled = row[autoTargetingEnabled]  /* kotlin.Boolean? */ /* Enable auto-targeting for ad group. Also known as <a href=\"https://help.pinterest.com/en/business/article/expanded-targeting\" target=\"_blank\">\"expanded targeting\"</a>. */,
        placementGroup = PlacementGroupTypes.createEntity(row, withReferences) /* PlacementGroupType? */ /* <a href=\\\"/docs/redoc/#section/Placement-group\\\">Placement group</a>. */,
        pacingDeliveryType = PacingDeliveryTypes.createEntity(row, withReferences) /* PacingDeliveryType? */ /* Pacing delivery type. With ACCELERATED, an ad group budget is spent as fast as possible. With STANDARD, an ad group budget is spent smoothly over a day. */,
        conversionLearningModeType = row[conversionLearningModeType]  /* kotlin.String? */ /* oCPM learn mode */,
        summaryStatus = AdGroupSummaryStatuss.createEntity(row, withReferences) /* AdGroupSummaryStatus? */ /* Ad group summary status. */,
        feedProfileId = row[feedProfileId]  /* kotlin.String? */ /* Feed Profile ID associated to the adgroup. */,
        campaignId = row[campaignId]  /* kotlin.String? */ /* Campaign ID of the ad group. */,
        billableEvent = ActionTypes.createEntity(row, withReferences) /* ActionType? */,
        id = row[id]  /* kotlin.String? */ /* Ad group ID. */,
        type = row[type]  /* kotlin.String? */ /* Always \"adgroup\". */,
        adAccountId = row[adAccountId]  /* kotlin.String? */ /* Advertiser ID. */,
        createdTime = row[createdTime]  /* kotlin.Int? */ /* Ad group creation time. Unix timestamp in seconds. */,
        updatedTime = row[updatedTime]  /* kotlin.Int? */ /* Ad group last update time. Unix timestamp in seconds. */
    )

    /**
    * Assign all the columns from the entity of type AdGroupResponse to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = AdGroupResponse()
    * database.update(AdGroupResponses, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: AdGroupResponse) {
        this.apply {
            set(AdGroupResponses.name, entity.name)
            set(AdGroupResponses.status, entity.status)
            set(AdGroupResponses.budgetInMicroCurrency, entity.budgetInMicroCurrency)
            set(AdGroupResponses.bidInMicroCurrency, entity.bidInMicroCurrency)
            set(AdGroupResponses.budgetType, entity.budgetType)
            set(AdGroupResponses.startTime, entity.startTime)
            set(AdGroupResponses.endTime, entity.endTime)
            set(AdGroupResponses.targetingSpec, entity.targetingSpec)
            set(AdGroupResponses.lifetimeFrequencyCap, entity.lifetimeFrequencyCap)
            set(AdGroupResponses.trackingUrls, entity.trackingUrls)
            set(AdGroupResponses.autoTargetingEnabled, entity.autoTargetingEnabled)
            set(AdGroupResponses.placementGroup, entity.placementGroup)
            set(AdGroupResponses.pacingDeliveryType, entity.pacingDeliveryType)
            set(AdGroupResponses.conversionLearningModeType, entity.conversionLearningModeType)
            set(AdGroupResponses.summaryStatus, entity.summaryStatus)
            set(AdGroupResponses.feedProfileId, entity.feedProfileId)
            set(AdGroupResponses.campaignId, entity.campaignId)
            set(AdGroupResponses.billableEvent, entity.billableEvent)
            set(AdGroupResponses.id, entity.id)
            set(AdGroupResponses.type, entity.type)
            set(AdGroupResponses.adAccountId, entity.adAccountId)
            set(AdGroupResponses.createdTime, entity.createdTime)
            set(AdGroupResponses.updatedTime, entity.updatedTime)
        }
    }

}


