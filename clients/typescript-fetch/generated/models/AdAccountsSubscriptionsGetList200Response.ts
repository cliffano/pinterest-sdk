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
import type { AdAccountGetSubscriptionResponse } from './AdAccountGetSubscriptionResponse';
import {
    AdAccountGetSubscriptionResponseFromJSON,
    AdAccountGetSubscriptionResponseFromJSONTyped,
    AdAccountGetSubscriptionResponseToJSON,
} from './AdAccountGetSubscriptionResponse';

/**
 * 
 * @export
 * @interface AdAccountsSubscriptionsGetList200Response
 */
export interface AdAccountsSubscriptionsGetList200Response {
    /**
     * 
     * @type {Array<AdAccountGetSubscriptionResponse>}
     * @memberof AdAccountsSubscriptionsGetList200Response
     */
    items: Array<AdAccountGetSubscriptionResponse>;
    /**
     * 
     * @type {string}
     * @memberof AdAccountsSubscriptionsGetList200Response
     */
    bookmark?: string;
}

/**
 * Check if a given object implements the AdAccountsSubscriptionsGetList200Response interface.
 */
export function instanceOfAdAccountsSubscriptionsGetList200Response(value: object): boolean {
    if (!('items' in value)) return false;
    return true;
}

export function AdAccountsSubscriptionsGetList200ResponseFromJSON(json: any): AdAccountsSubscriptionsGetList200Response {
    return AdAccountsSubscriptionsGetList200ResponseFromJSONTyped(json, false);
}

export function AdAccountsSubscriptionsGetList200ResponseFromJSONTyped(json: any, ignoreDiscriminator: boolean): AdAccountsSubscriptionsGetList200Response {
    if (json == null) {
        return json;
    }
    return {
        
        'items': ((json['items'] as Array<any>).map(AdAccountGetSubscriptionResponseFromJSON)),
        'bookmark': json['bookmark'] == null ? undefined : json['bookmark'],
    };
}

export function AdAccountsSubscriptionsGetList200ResponseToJSON(value?: AdAccountsSubscriptionsGetList200Response | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'items': ((value['items'] as Array<any>).map(AdAccountGetSubscriptionResponseToJSON)),
        'bookmark': value['bookmark'],
    };
}

