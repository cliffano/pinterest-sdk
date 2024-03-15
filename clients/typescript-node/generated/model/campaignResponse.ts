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
import { AdCommonTrackingUrls } from './adCommonTrackingUrls';
import { CampaignSummaryStatus } from './campaignSummaryStatus';
import { EntityStatus } from './entityStatus';
import { ObjectiveType } from './objectiveType';

export class CampaignResponse {
    /**
    * Campaign ID.
    */
    'id'?: string;
    /**
    * Campaign\'s Advertiser ID. If you want to create a campaign in a Business Account shared account you need to specify the Business Access advertiser ID in both the query path param as well as the request body schema.
    */
    'adAccountId'?: string;
    /**
    * Campaign name.
    */
    'name'?: string;
    'status'?: EntityStatus;
    /**
    * Campaign total spending cap. Required for Campaign Budget Optimization (CBO) campaigns. This and \"daily_spend_cap\" cannot be set at the same time.
    */
    'lifetimeSpendCap'?: number | null;
    /**
    * Campaign daily spending cap. Required for Campaign Budget Optimization (CBO) campaigns. This and \"lifetime_spend_cap\" cannot be set at the same time.
    */
    'dailySpendCap'?: number | null;
    /**
    * Order line ID that appears on the invoice.
    */
    'orderLineId'?: string | null;
    'trackingUrls'?: AdCommonTrackingUrls | null;
    /**
    * Campaign start time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.
    */
    'startTime'?: number | null;
    /**
    * Campaign end time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.
    */
    'endTime'?: number | null;
    'summaryStatus'?: CampaignSummaryStatus;
    'objectiveType'?: ObjectiveType;
    /**
    * Campaign creation time. Unix timestamp in seconds.
    */
    'createdTime'?: number;
    /**
    * UTC timestamp. Last update time.
    */
    'updatedTime'?: number;
    /**
    * Always \"campaign\".
    */
    'type'?: string;
    /**
    * Determines if a campaign has flexible daily budgets setup.
    */
    'isFlexibleDailyBudgets'?: boolean | null;
    /**
    * Determines if a campaign automatically generate ad-group level budgets given a campaign budget to maximize campaign outcome. When transitioning from non-cbo to cbo, all previous child ad group budget will be cleared.
    */
    'isCampaignBudgetOptimization'?: boolean | null;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "id",
            "baseName": "id",
            "type": "string"
        },
        {
            "name": "adAccountId",
            "baseName": "ad_account_id",
            "type": "string"
        },
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
            "name": "lifetimeSpendCap",
            "baseName": "lifetime_spend_cap",
            "type": "number"
        },
        {
            "name": "dailySpendCap",
            "baseName": "daily_spend_cap",
            "type": "number"
        },
        {
            "name": "orderLineId",
            "baseName": "order_line_id",
            "type": "string"
        },
        {
            "name": "trackingUrls",
            "baseName": "tracking_urls",
            "type": "AdCommonTrackingUrls"
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
            "name": "summaryStatus",
            "baseName": "summary_status",
            "type": "CampaignSummaryStatus"
        },
        {
            "name": "objectiveType",
            "baseName": "objective_type",
            "type": "ObjectiveType"
        },
        {
            "name": "createdTime",
            "baseName": "created_time",
            "type": "number"
        },
        {
            "name": "updatedTime",
            "baseName": "updated_time",
            "type": "number"
        },
        {
            "name": "type",
            "baseName": "type",
            "type": "string"
        },
        {
            "name": "isFlexibleDailyBudgets",
            "baseName": "is_flexible_daily_budgets",
            "type": "boolean"
        },
        {
            "name": "isCampaignBudgetOptimization",
            "baseName": "is_campaign_budget_optimization",
            "type": "boolean"
        }    ];

    static getAttributeTypeMap() {
        return CampaignResponse.attributeTypeMap;
    }
}

export namespace CampaignResponse {
}
