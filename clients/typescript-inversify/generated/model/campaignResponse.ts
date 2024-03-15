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
import { AdCommonTrackingUrls } from './adCommonTrackingUrls';
import { CampaignSummaryStatus } from './campaignSummaryStatus';
import { EntityStatus } from './entityStatus';
import { ObjectiveType } from './objectiveType';


export interface CampaignResponse { 
    /**
     * Campaign ID.
     */
    id?: string;
    /**
     * Campaign\'s Advertiser ID. If you want to create a campaign in a Business Account shared account you need to specify the Business Access advertiser ID in both the query path param as well as the request body schema.
     */
    ad_account_id?: string;
    /**
     * Campaign name.
     */
    name?: string;
    status?: EntityStatus;
    /**
     * Campaign total spending cap. Required for Campaign Budget Optimization (CBO) campaigns. This and \"daily_spend_cap\" cannot be set at the same time.
     */
    lifetime_spend_cap?: number | null;
    /**
     * Campaign daily spending cap. Required for Campaign Budget Optimization (CBO) campaigns. This and \"lifetime_spend_cap\" cannot be set at the same time.
     */
    daily_spend_cap?: number | null;
    /**
     * Order line ID that appears on the invoice.
     */
    order_line_id?: string | null;
    tracking_urls?: AdCommonTrackingUrls | null;
    /**
     * Campaign start time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.
     */
    start_time?: number | null;
    /**
     * Campaign end time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.
     */
    end_time?: number | null;
    summary_status?: CampaignSummaryStatus;
    objective_type?: ObjectiveType;
    /**
     * Campaign creation time. Unix timestamp in seconds.
     */
    created_time?: number;
    /**
     * UTC timestamp. Last update time.
     */
    updated_time?: number;
    /**
     * Always \"campaign\".
     */
    type?: string;
    /**
     * Determines if a campaign has flexible daily budgets setup.
     */
    is_flexible_daily_budgets?: boolean | null;
    /**
     * Determines if a campaign automatically generate ad-group level budgets given a campaign budget to maximize campaign outcome. When transitioning from non-cbo to cbo, all previous child ad group budget will be cleared.
     */
    is_campaign_budget_optimization?: boolean | null;
}
export namespace CampaignResponse {
}
