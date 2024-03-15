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
import type { BillingProfilesResponse } from './BillingProfilesResponse';
import {
    BillingProfilesResponseFromJSON,
    BillingProfilesResponseFromJSONTyped,
    BillingProfilesResponseToJSON,
} from './BillingProfilesResponse';

/**
 * 
 * @export
 * @interface BillingProfilesGet200Response
 */
export interface BillingProfilesGet200Response {
    /**
     * 
     * @type {Array<BillingProfilesResponse>}
     * @memberof BillingProfilesGet200Response
     */
    items: Array<BillingProfilesResponse>;
    /**
     * 
     * @type {string}
     * @memberof BillingProfilesGet200Response
     */
    bookmark?: string;
}

/**
 * Check if a given object implements the BillingProfilesGet200Response interface.
 */
export function instanceOfBillingProfilesGet200Response(value: object): boolean {
    if (!('items' in value)) return false;
    return true;
}

export function BillingProfilesGet200ResponseFromJSON(json: any): BillingProfilesGet200Response {
    return BillingProfilesGet200ResponseFromJSONTyped(json, false);
}

export function BillingProfilesGet200ResponseFromJSONTyped(json: any, ignoreDiscriminator: boolean): BillingProfilesGet200Response {
    if (json == null) {
        return json;
    }
    return {
        
        'items': ((json['items'] as Array<any>).map(BillingProfilesResponseFromJSON)),
        'bookmark': json['bookmark'] == null ? undefined : json['bookmark'],
    };
}

export function BillingProfilesGet200ResponseToJSON(value?: BillingProfilesGet200Response | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'items': ((value['items'] as Array<any>).map(BillingProfilesResponseToJSON)),
        'bookmark': value['bookmark'],
    };
}

