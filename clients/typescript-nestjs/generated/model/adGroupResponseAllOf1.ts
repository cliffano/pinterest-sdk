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
import { ActionType } from './actionType';


export interface AdGroupResponseAllOf1 { 
    /**
     * Campaign ID of the ad group.
     */
    campaign_id?: string;
    billable_event?: ActionType;
    /**
     * Ad group ID.
     */
    id?: string;
    /**
     * Always \"adgroup\".
     */
    type?: string;
    /**
     * Advertiser ID.
     */
    ad_account_id?: string;
    /**
     * Ad group creation time. Unix timestamp in seconds.
     */
    created_time?: number;
    /**
     * Ad group last update time. Unix timestamp in seconds.
     */
    updated_time?: number;
}

