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
import type { CampaignCreateResponseItem } from './CampaignCreateResponseItem';
import {
    CampaignCreateResponseItemFromJSON,
    CampaignCreateResponseItemFromJSONTyped,
    CampaignCreateResponseItemToJSON,
} from './CampaignCreateResponseItem';

/**
 * 
 * @export
 * @interface CampaignUpdateResponse
 */
export interface CampaignUpdateResponse {
    /**
     * 
     * @type {Array<CampaignCreateResponseItem>}
     * @memberof CampaignUpdateResponse
     */
    items?: Array<CampaignCreateResponseItem>;
}

/**
 * Check if a given object implements the CampaignUpdateResponse interface.
 */
export function instanceOfCampaignUpdateResponse(value: object): boolean {
    return true;
}

export function CampaignUpdateResponseFromJSON(json: any): CampaignUpdateResponse {
    return CampaignUpdateResponseFromJSONTyped(json, false);
}

export function CampaignUpdateResponseFromJSONTyped(json: any, ignoreDiscriminator: boolean): CampaignUpdateResponse {
    if (json == null) {
        return json;
    }
    return {
        
        'items': json['items'] == null ? undefined : ((json['items'] as Array<any>).map(CampaignCreateResponseItemFromJSON)),
    };
}

export function CampaignUpdateResponseToJSON(value?: CampaignUpdateResponse | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'items': value['items'] == null ? undefined : ((value['items'] as Array<any>).map(CampaignCreateResponseItemToJSON)),
    };
}
