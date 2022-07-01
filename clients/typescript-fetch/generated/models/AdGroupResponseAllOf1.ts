/* tslint:disable */
/* eslint-disable */
/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import { exists, mapValues } from '../runtime';
import {
    ActionType,
    ActionTypeFromJSON,
    ActionTypeFromJSONTyped,
    ActionTypeToJSON,
} from './ActionType';

/**
 * 
 * @export
 * @interface AdGroupResponseAllOf1
 */
export interface AdGroupResponseAllOf1 {
    /**
     * Campaign ID of the ad group.
     * @type {string}
     * @memberof AdGroupResponseAllOf1
     */
    campaignId?: string;
    /**
     * 
     * @type {ActionType}
     * @memberof AdGroupResponseAllOf1
     */
    billableEvent?: ActionType;
    /**
     * Ad group ID.
     * @type {string}
     * @memberof AdGroupResponseAllOf1
     */
    id?: string;
    /**
     * Always "adgroup".
     * @type {string}
     * @memberof AdGroupResponseAllOf1
     */
    type?: string;
    /**
     * Advertiser ID.
     * @type {string}
     * @memberof AdGroupResponseAllOf1
     */
    adAccountId?: string;
    /**
     * Ad group creation time. Unix timestamp in seconds.
     * @type {number}
     * @memberof AdGroupResponseAllOf1
     */
    createdTime?: number;
    /**
     * Ad group last update time. Unix timestamp in seconds.
     * @type {number}
     * @memberof AdGroupResponseAllOf1
     */
    updatedTime?: number;
}

export function AdGroupResponseAllOf1FromJSON(json: any): AdGroupResponseAllOf1 {
    return AdGroupResponseAllOf1FromJSONTyped(json, false);
}

export function AdGroupResponseAllOf1FromJSONTyped(json: any, ignoreDiscriminator: boolean): AdGroupResponseAllOf1 {
    if ((json === undefined) || (json === null)) {
        return json;
    }
    return {
        
        'campaignId': !exists(json, 'campaign_id') ? undefined : json['campaign_id'],
        'billableEvent': !exists(json, 'billable_event') ? undefined : ActionTypeFromJSON(json['billable_event']),
        'id': !exists(json, 'id') ? undefined : json['id'],
        'type': !exists(json, 'type') ? undefined : json['type'],
        'adAccountId': !exists(json, 'ad_account_id') ? undefined : json['ad_account_id'],
        'createdTime': !exists(json, 'created_time') ? undefined : json['created_time'],
        'updatedTime': !exists(json, 'updated_time') ? undefined : json['updated_time'],
    };
}

export function AdGroupResponseAllOf1ToJSON(value?: AdGroupResponseAllOf1 | null): any {
    if (value === undefined) {
        return undefined;
    }
    if (value === null) {
        return null;
    }
    return {
        
        'campaign_id': value.campaignId,
        'billable_event': ActionTypeToJSON(value.billableEvent),
        'id': value.id,
        'type': value.type,
        'ad_account_id': value.adAccountId,
        'created_time': value.createdTime,
        'updated_time': value.updatedTime,
    };
}

