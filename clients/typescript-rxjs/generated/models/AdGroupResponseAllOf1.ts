// tslint:disable
/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import {
    ActionType,
} from './';

/**
 * @export
 * @interface AdGroupResponseAllOf1
 */
export interface AdGroupResponseAllOf1 {
    /**
     * Campaign ID of the ad group.
     * @type {string}
     * @memberof AdGroupResponseAllOf1
     */
    campaign_id?: string;
    /**
     * @type {ActionType}
     * @memberof AdGroupResponseAllOf1
     */
    billable_event?: ActionType;
    /**
     * Ad group ID.
     * @type {string}
     * @memberof AdGroupResponseAllOf1
     */
    id?: string;
    /**
     * Always \"adgroup\".
     * @type {string}
     * @memberof AdGroupResponseAllOf1
     */
    type?: string;
    /**
     * Advertiser ID.
     * @type {string}
     * @memberof AdGroupResponseAllOf1
     */
    ad_account_id?: string;
    /**
     * Ad group creation time. Unix timestamp in seconds.
     * @type {number}
     * @memberof AdGroupResponseAllOf1
     */
    created_time?: number;
    /**
     * Ad group last update time. Unix timestamp in seconds.
     * @type {number}
     * @memberof AdGroupResponseAllOf1
     */
    updated_time?: number;
}
