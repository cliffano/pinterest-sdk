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

import {
    AdCommonTrackingUrls,
    AdCommonTrackingUrlsFromJSON,
    AdCommonTrackingUrlsToJSON,
    CampaignSummaryStatus,
    CampaignSummaryStatusFromJSON,
    CampaignSummaryStatusToJSON,
    EntityStatus,
    EntityStatusFromJSON,
    EntityStatusToJSON,
    ObjectiveType,
    ObjectiveTypeFromJSON,
    ObjectiveTypeToJSON,
} from './';

/**
 * @type CampaignCreateResponseData
 * @export
 */
export interface CampaignCreateResponseData extends CampaignCreateCommon, CampaignResponse {
}

export function CampaignCreateResponseDataFromJSON(json: any): CampaignCreateResponseData {
    return {
        ...CampaignCreateCommonFromJSON(json),
        ...CampaignResponseFromJSON(json),
    };
}

export function CampaignCreateResponseDataToJSON(value?: CampaignCreateResponseData): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        ...CampaignCreateCommonToJSON(value),
        ...CampaignResponseToJSON(value),
    };
}
