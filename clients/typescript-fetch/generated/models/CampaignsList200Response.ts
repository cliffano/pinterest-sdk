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
import type { CampaignResponse } from './CampaignResponse';
import {
    CampaignResponseFromJSON,
    CampaignResponseFromJSONTyped,
    CampaignResponseToJSON,
} from './CampaignResponse';

/**
 * 
 * @export
 * @interface CampaignsList200Response
 */
export interface CampaignsList200Response {
    /**
     * 
     * @type {Array<CampaignResponse>}
     * @memberof CampaignsList200Response
     */
    items: Array<CampaignResponse>;
    /**
     * 
     * @type {string}
     * @memberof CampaignsList200Response
     */
    bookmark?: string;
}

/**
 * Check if a given object implements the CampaignsList200Response interface.
 */
export function instanceOfCampaignsList200Response(value: object): boolean {
    if (!('items' in value)) return false;
    return true;
}

export function CampaignsList200ResponseFromJSON(json: any): CampaignsList200Response {
    return CampaignsList200ResponseFromJSONTyped(json, false);
}

export function CampaignsList200ResponseFromJSONTyped(json: any, ignoreDiscriminator: boolean): CampaignsList200Response {
    if (json == null) {
        return json;
    }
    return {
        
        'items': ((json['items'] as Array<any>).map(CampaignResponseFromJSON)),
        'bookmark': json['bookmark'] == null ? undefined : json['bookmark'],
    };
}

export function CampaignsList200ResponseToJSON(value?: CampaignsList200Response | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'items': ((value['items'] as Array<any>).map(CampaignResponseToJSON)),
        'bookmark': value['bookmark'],
    };
}

