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
import { MMMReportingColumn } from './mMMReportingColumn';
import { MMMReportingTargetingType } from './mMMReportingTargetingType';
import { TargetingAdvertiserCountry } from './targetingAdvertiserCountry';


export interface CreateMMMReportRequest { 
    /**
     * Name of the Marketing Mix Modeling (MMM) report
     */
    report_name: string;
    /**
     * Metric report start date (UTC). Format: YYYY-MM-DD
     */
    start_date: string;
    /**
     * Metric report end date (UTC). Format: YYYY-MM-DD
     */
    end_date: string;
    /**
     * DAY - metrics are broken down daily.<br> WEEK - metrics are broken down weekly.
     */
    granularity: CreateMMMReportRequest.GranularityEnum;
    /**
     * Level of the report
     */
    level: CreateMMMReportRequest.LevelEnum;
    /**
     * List of targeting types
     */
    targeting_types: Array<MMMReportingTargetingType>;
    /**
     * Metric and entity columns
     */
    columns: Array<MMMReportingColumn>;
    /**
     * A List of countries for filtering
     */
    countries?: Array<TargetingAdvertiserCountry>;
}
export namespace CreateMMMReportRequest {
    export type GranularityEnum = 'DAY' | 'WEEK';
    export const GranularityEnum = {
        Day: 'DAY' as GranularityEnum,
        Week: 'WEEK' as GranularityEnum
    }
    export type LevelEnum = 'CAMPAIGN_TARGETING' | 'AD_GROUP_TARGETING';
    export const LevelEnum = {
        CampaignTargeting: 'CAMPAIGN_TARGETING' as LevelEnum,
        AdGroupTargeting: 'AD_GROUP_TARGETING' as LevelEnum
    }
}