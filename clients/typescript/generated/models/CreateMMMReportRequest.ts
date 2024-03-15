/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * OpenAPI spec version: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import { MMMReportingColumn } from '../models/MMMReportingColumn';
import { MMMReportingTargetingType } from '../models/MMMReportingTargetingType';
import { TargetingAdvertiserCountry } from '../models/TargetingAdvertiserCountry';
import { HttpFile } from '../http/http';

export class CreateMMMReportRequest {
    /**
    * Name of the Marketing Mix Modeling (MMM) report
    */
    'reportName': string;
    /**
    * Metric report start date (UTC). Format: YYYY-MM-DD
    */
    'startDate': string;
    /**
    * Metric report end date (UTC). Format: YYYY-MM-DD
    */
    'endDate': string;
    /**
    * DAY - metrics are broken down daily.<br> WEEK - metrics are broken down weekly.
    */
    'granularity': CreateMMMReportRequestGranularityEnum;
    /**
    * Level of the report
    */
    'level': CreateMMMReportRequestLevelEnum;
    /**
    * List of targeting types
    */
    'targetingTypes': Array<MMMReportingTargetingType>;
    /**
    * Metric and entity columns
    */
    'columns': Array<MMMReportingColumn>;
    /**
    * A List of countries for filtering
    */
    'countries'?: Array<TargetingAdvertiserCountry>;

    static readonly discriminator: string | undefined = undefined;

    static readonly attributeTypeMap: Array<{name: string, baseName: string, type: string, format: string}> = [
        {
            "name": "reportName",
            "baseName": "report_name",
            "type": "string",
            "format": ""
        },
        {
            "name": "startDate",
            "baseName": "start_date",
            "type": "string",
            "format": ""
        },
        {
            "name": "endDate",
            "baseName": "end_date",
            "type": "string",
            "format": ""
        },
        {
            "name": "granularity",
            "baseName": "granularity",
            "type": "CreateMMMReportRequestGranularityEnum",
            "format": ""
        },
        {
            "name": "level",
            "baseName": "level",
            "type": "CreateMMMReportRequestLevelEnum",
            "format": ""
        },
        {
            "name": "targetingTypes",
            "baseName": "targeting_types",
            "type": "Array<MMMReportingTargetingType>",
            "format": ""
        },
        {
            "name": "columns",
            "baseName": "columns",
            "type": "Array<MMMReportingColumn>",
            "format": ""
        },
        {
            "name": "countries",
            "baseName": "countries",
            "type": "Array<TargetingAdvertiserCountry>",
            "format": ""
        }    ];

    static getAttributeTypeMap() {
        return CreateMMMReportRequest.attributeTypeMap;
    }

    public constructor() {
    }
}


export enum CreateMMMReportRequestGranularityEnum {
    Day = 'DAY',
    Week = 'WEEK'
}
export enum CreateMMMReportRequestLevelEnum {
    CampaignTargeting = 'CAMPAIGN_TARGETING',
    AdGroupTargeting = 'AD_GROUP_TARGETING'
}

