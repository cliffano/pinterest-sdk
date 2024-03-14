/* tslint:disable */
/* eslint-disable */
/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import { mapValues } from '../runtime';
import type { CampaignSummaryStatus } from './CampaignSummaryStatus';
import {
    CampaignSummaryStatusFromJSON,
    CampaignSummaryStatusFromJSONTyped,
    CampaignSummaryStatusToJSON,
} from './CampaignSummaryStatus';
import type { ObjectiveType } from './ObjectiveType';
import {
    ObjectiveTypeFromJSON,
    ObjectiveTypeFromJSONTyped,
    ObjectiveTypeToJSON,
} from './ObjectiveType';

/**
 * 
 * @export
 * @interface BulkDownloadRequestCampaignFilter
 */
export interface BulkDownloadRequestCampaignFilter {
    /**
     * Unix UTC timestamp.
     * @type {string}
     * @memberof BulkDownloadRequestCampaignFilter
     */
    startTime?: string;
    /**
     * Unix UTC timestamp.
     * @type {string}
     * @memberof BulkDownloadRequestCampaignFilter
     */
    endTime?: string;
    /**
     * Campaign name
     * @type {string}
     * @memberof BulkDownloadRequestCampaignFilter
     */
    name?: string;
    /**
     * 
     * @type {Array<CampaignSummaryStatus>}
     * @memberof BulkDownloadRequestCampaignFilter
     */
    campaignStatus?: Array<CampaignSummaryStatus>;
    /**
     * 
     * @type {Array<ObjectiveType>}
     * @memberof BulkDownloadRequestCampaignFilter
     */
    objectiveType?: Array<ObjectiveType>;
}

/**
 * Check if a given object implements the BulkDownloadRequestCampaignFilter interface.
 */
export function instanceOfBulkDownloadRequestCampaignFilter(value: object): boolean {
    return true;
}

export function BulkDownloadRequestCampaignFilterFromJSON(json: any): BulkDownloadRequestCampaignFilter {
    return BulkDownloadRequestCampaignFilterFromJSONTyped(json, false);
}

export function BulkDownloadRequestCampaignFilterFromJSONTyped(json: any, ignoreDiscriminator: boolean): BulkDownloadRequestCampaignFilter {
    if (json == null) {
        return json;
    }
    return {
        
        'startTime': json['start_time'] == null ? undefined : json['start_time'],
        'endTime': json['end_time'] == null ? undefined : json['end_time'],
        'name': json['name'] == null ? undefined : json['name'],
        'campaignStatus': json['campaign_status'] == null ? undefined : ((json['campaign_status'] as Array<any>).map(CampaignSummaryStatusFromJSON)),
        'objectiveType': json['objective_type'] == null ? undefined : ((json['objective_type'] as Array<any>).map(ObjectiveTypeFromJSON)),
    };
}

export function BulkDownloadRequestCampaignFilterToJSON(value?: BulkDownloadRequestCampaignFilter | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'start_time': value['startTime'],
        'end_time': value['endTime'],
        'name': value['name'],
        'campaign_status': value['campaignStatus'] == null ? undefined : ((value['campaignStatus'] as Array<any>).map(CampaignSummaryStatusToJSON)),
        'objective_type': value['objectiveType'] == null ? undefined : ((value['objectiveType'] as Array<any>).map(ObjectiveTypeToJSON)),
    };
}

