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

import { RequestFile } from './models';
import { ActionType } from './actionType';
import { AdGroupCommonOptimizationGoalMetadata } from './adGroupCommonOptimizationGoalMetadata';
import { AdGroupCommonTrackingUrls } from './adGroupCommonTrackingUrls';
import { BudgetType } from './budgetType';
import { EntityStatus } from './entityStatus';
import { PacingDeliveryType } from './pacingDeliveryType';
import { PlacementGroupType } from './placementGroupType';
import { TargetingSpec } from './targetingSpec';

export class AdGroupCreateRequest {
    /**
    * Ad group name.
    */
    'name': string;
    /**
    * Ad group/entity status.
    */
    'status'?: EntityStatus;
    /**
    * Budget in micro currency. This field is **REQUIRED** for non-CBO (campaign budget optimization) campaigns.  A CBO campaign automatically generates ad group budgets from its campaign budget to maximize campaign outcome. A CBO campaign is limited to 70 or less ad groups.
    */
    'budgetInMicroCurrency'?: number | null;
    /**
    * Bid price in micro currency. This field is **REQUIRED** for the following campaign objective_type/billable_event combinations: AWARENESS/IMPRESSION, CONSIDERATION/CLICKTHROUGH, CATALOG_SALES/CLICKTHROUGH, VIDEO_VIEW/VIDEO_V_50_MRC.
    */
    'bidInMicroCurrency'?: number | null;
    'optimizationGoalMetadata'?: AdGroupCommonOptimizationGoalMetadata | null;
    'budgetType'?: BudgetType = BudgetType.Daily;
    /**
    * Ad group start time. Unix timestamp in seconds. Defaults to current time.
    */
    'startTime'?: number | null;
    /**
    * Ad group end time. Unix timestamp in seconds.
    */
    'endTime'?: number | null;
    'targetingSpec'?: TargetingSpec;
    /**
    * Set a limit to the number of times a promoted pin from this campaign can be impressed by a pinner within the past rolling 30 days. Only available for CPM (cost per mille (1000 impressions))  ad groups. A CPM ad group has an IMPRESSION <a href=\"https://developers.pinterest.com/docs/redoc/#section/Billable-event\">billable_event</a> value. This field **REQUIRES** the `end_time` field.
    */
    'lifetimeFrequencyCap'?: number;
    'trackingUrls'?: AdGroupCommonTrackingUrls | null;
    /**
    * Enable auto-targeting for ad group.Default value is True. Also known as <a href=\"https://help.pinterest.com/en/business/article/expanded-targeting\" target=\"_blank\">\"expanded targeting\"</a>.
    */
    'autoTargetingEnabled'?: boolean;
    /**
    * <a href=\"https://developers.pinterest.com/docs/redoc/#section/Placement-group\">Placement group</a>.
    */
    'placementGroup'?: PlacementGroupType;
    'pacingDeliveryType'?: PacingDeliveryType = PacingDeliveryType.Standard;
    /**
    * Campaign ID of the ad group.
    */
    'campaignId': string;
    'billableEvent': ActionType;
    /**
    * Bid strategy type
    */
    'bidStrategyType'?: AdGroupCreateRequest.BidStrategyTypeEnum;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "name",
            "baseName": "name",
            "type": "string"
        },
        {
            "name": "status",
            "baseName": "status",
            "type": "EntityStatus"
        },
        {
            "name": "budgetInMicroCurrency",
            "baseName": "budget_in_micro_currency",
            "type": "number"
        },
        {
            "name": "bidInMicroCurrency",
            "baseName": "bid_in_micro_currency",
            "type": "number"
        },
        {
            "name": "optimizationGoalMetadata",
            "baseName": "optimization_goal_metadata",
            "type": "AdGroupCommonOptimizationGoalMetadata"
        },
        {
            "name": "budgetType",
            "baseName": "budget_type",
            "type": "BudgetType"
        },
        {
            "name": "startTime",
            "baseName": "start_time",
            "type": "number"
        },
        {
            "name": "endTime",
            "baseName": "end_time",
            "type": "number"
        },
        {
            "name": "targetingSpec",
            "baseName": "targeting_spec",
            "type": "TargetingSpec"
        },
        {
            "name": "lifetimeFrequencyCap",
            "baseName": "lifetime_frequency_cap",
            "type": "number"
        },
        {
            "name": "trackingUrls",
            "baseName": "tracking_urls",
            "type": "AdGroupCommonTrackingUrls"
        },
        {
            "name": "autoTargetingEnabled",
            "baseName": "auto_targeting_enabled",
            "type": "boolean"
        },
        {
            "name": "placementGroup",
            "baseName": "placement_group",
            "type": "PlacementGroupType"
        },
        {
            "name": "pacingDeliveryType",
            "baseName": "pacing_delivery_type",
            "type": "PacingDeliveryType"
        },
        {
            "name": "campaignId",
            "baseName": "campaign_id",
            "type": "string"
        },
        {
            "name": "billableEvent",
            "baseName": "billable_event",
            "type": "ActionType"
        },
        {
            "name": "bidStrategyType",
            "baseName": "bid_strategy_type",
            "type": "AdGroupCreateRequest.BidStrategyTypeEnum"
        }    ];

    static getAttributeTypeMap() {
        return AdGroupCreateRequest.attributeTypeMap;
    }
}

export namespace AdGroupCreateRequest {
    export enum BidStrategyTypeEnum {
        AutomaticBid = <any> 'AUTOMATIC_BID',
        MaxBid = <any> 'MAX_BID',
        TargetAvg = <any> 'TARGET_AVG',
        Null = <any> 'null'
    }
}
