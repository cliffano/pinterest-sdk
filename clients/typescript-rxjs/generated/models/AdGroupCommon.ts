// tslint:disable
/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import type {
    ActionType,
    AdGroupCommonOptimizationGoalMetadata,
    AdGroupCommonTrackingUrls,
    BudgetType,
    EntityStatus,
    PacingDeliveryType,
    PlacementGroupType,
    TargetingSpec,
} from './';

/**
 * @export
 * @interface AdGroupCommon
 */
export interface AdGroupCommon {
    /**
     * Ad group name.
     * @type {string}
     * @memberof AdGroupCommon
     */
    name?: string;
    /**
     * Ad group/entity status.
     * @type {EntityStatus}
     * @memberof AdGroupCommon
     */
    status?: EntityStatus;
    /**
     * Budget in micro currency. This field is **REQUIRED** for non-CBO (campaign budget optimization) campaigns.  A CBO campaign automatically generates ad group budgets from its campaign budget to maximize campaign outcome. A CBO campaign is limited to 70 or less ad groups.
     * @type {number}
     * @memberof AdGroupCommon
     */
    budget_in_micro_currency?: number | null;
    /**
     * Bid price in micro currency. This field is **REQUIRED** for the following campaign objective_type/billable_event combinations: AWARENESS/IMPRESSION, CONSIDERATION/CLICKTHROUGH, CATALOG_SALES/CLICKTHROUGH, VIDEO_VIEW/VIDEO_V_50_MRC.
     * @type {number}
     * @memberof AdGroupCommon
     */
    bid_in_micro_currency?: number | null;
    /**
     * @type {AdGroupCommonOptimizationGoalMetadata}
     * @memberof AdGroupCommon
     */
    optimization_goal_metadata?: AdGroupCommonOptimizationGoalMetadata | null;
    /**
     * @type {BudgetType}
     * @memberof AdGroupCommon
     */
    budget_type?: BudgetType;
    /**
     * Ad group start time. Unix timestamp in seconds. Defaults to current time.
     * @type {number}
     * @memberof AdGroupCommon
     */
    start_time?: number | null;
    /**
     * Ad group end time. Unix timestamp in seconds.
     * @type {number}
     * @memberof AdGroupCommon
     */
    end_time?: number | null;
    /**
     * @type {TargetingSpec}
     * @memberof AdGroupCommon
     */
    targeting_spec?: TargetingSpec;
    /**
     * Set a limit to the number of times a promoted pin from this campaign can be impressed by a pinner within the past rolling 30 days. Only available for CPM (cost per mille (1000 impressions))  ad groups. A CPM ad group has an IMPRESSION <a href=\"https://developers.pinterest.com/docs/redoc/#section/Billable-event\">billable_event</a> value. This field **REQUIRES** the `end_time` field.
     * @type {number}
     * @memberof AdGroupCommon
     */
    lifetime_frequency_cap?: number;
    /**
     * @type {AdGroupCommonTrackingUrls}
     * @memberof AdGroupCommon
     */
    tracking_urls?: AdGroupCommonTrackingUrls | null;
    /**
     * Enable auto-targeting for ad group. Also known as <a href=\"https://help.pinterest.com/en/business/article/expanded-targeting\" target=\"_blank\">\"expanded targeting\"</a>.
     * @type {boolean}
     * @memberof AdGroupCommon
     */
    auto_targeting_enabled?: boolean | null;
    /**
     * <a href=\"https://developers.pinterest.com/docs/redoc/#section/Placement-group\">Placement group</a>.
     * @type {PlacementGroupType}
     * @memberof AdGroupCommon
     */
    placement_group?: PlacementGroupType;
    /**
     * @type {PacingDeliveryType}
     * @memberof AdGroupCommon
     */
    pacing_delivery_type?: PacingDeliveryType;
    /**
     * Campaign ID of the ad group.
     * @type {string}
     * @memberof AdGroupCommon
     */
    campaign_id?: string;
    /**
     * @type {ActionType}
     * @memberof AdGroupCommon
     */
    billable_event?: ActionType;
    /**
     * Bid strategy type
     * @type {string}
     * @memberof AdGroupCommon
     */
    bid_strategy_type?: AdGroupCommonBidStrategyTypeEnum;
}

/**
 * @export
 * @enum {string}
 */
export enum AdGroupCommonBidStrategyTypeEnum {
    AutomaticBid = 'AUTOMATIC_BID',
    MaxBid = 'MAX_BID',
    TargetAvg = 'TARGET_AVG',
    Null = 'null'
}

