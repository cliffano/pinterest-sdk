/* tslint:disable */
/* eslint-disable */
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
 * @interface CampaignCreateResponse
 */
export interface CampaignCreateResponse {
    /**
     * 
     * @type {Array<CampaignCreateResponseItem>}
     * @memberof CampaignCreateResponse
     */
    items?: Array<CampaignCreateResponseItem>;
}

/**
 * Check if a given object implements the CampaignCreateResponse interface.
 */
export function instanceOfCampaignCreateResponse(value: object): boolean {
    return true;
}

export function CampaignCreateResponseFromJSON(json: any): CampaignCreateResponse {
    return CampaignCreateResponseFromJSONTyped(json, false);
}

export function CampaignCreateResponseFromJSONTyped(json: any, ignoreDiscriminator: boolean): CampaignCreateResponse {
    if (json == null) {
        return json;
    }
    return {
        
        'items': json['items'] == null ? undefined : ((json['items'] as Array<any>).map(CampaignCreateResponseItemFromJSON)),
    };
}

export function CampaignCreateResponseToJSON(value?: CampaignCreateResponse | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'items': value['items'] == null ? undefined : ((value['items'] as Array<any>).map(CampaignCreateResponseItemToJSON)),
    };
}

