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
/**
 * 
 * @export
 * @interface AdsAnalyticsGetAsyncResponse
 */
export interface AdsAnalyticsGetAsyncResponse {
    /**
     * 
     * @type {string}
     * @memberof AdsAnalyticsGetAsyncResponse
     */
    reportStatus?: string;
    /**
     * 
     * @type {string}
     * @memberof AdsAnalyticsGetAsyncResponse
     */
    url?: string;
    /**
     * 
     * @type {number}
     * @memberof AdsAnalyticsGetAsyncResponse
     */
    size?: number;
}

/**
 * Check if a given object implements the AdsAnalyticsGetAsyncResponse interface.
 */
export function instanceOfAdsAnalyticsGetAsyncResponse(value: object): boolean {
    return true;
}

export function AdsAnalyticsGetAsyncResponseFromJSON(json: any): AdsAnalyticsGetAsyncResponse {
    return AdsAnalyticsGetAsyncResponseFromJSONTyped(json, false);
}

export function AdsAnalyticsGetAsyncResponseFromJSONTyped(json: any, ignoreDiscriminator: boolean): AdsAnalyticsGetAsyncResponse {
    if (json == null) {
        return json;
    }
    return {
        
        'reportStatus': json['report_status'] == null ? undefined : json['report_status'],
        'url': json['url'] == null ? undefined : json['url'],
        'size': json['size'] == null ? undefined : json['size'],
    };
}

export function AdsAnalyticsGetAsyncResponseToJSON(value?: AdsAnalyticsGetAsyncResponse | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'report_status': value['reportStatus'],
        'url': value['url'],
        'size': value['size'],
    };
}
