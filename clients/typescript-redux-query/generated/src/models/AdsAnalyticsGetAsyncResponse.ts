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

import { exists, mapValues } from '../runtime';
/**
 * 
 * @export
 * @interface AdsAnalyticsGetAsyncResponse
 */
export interface AdsAnalyticsGetAsyncResponse  {
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

export function AdsAnalyticsGetAsyncResponseFromJSON(json: any): AdsAnalyticsGetAsyncResponse {
    return {
        'reportStatus': !exists(json, 'report_status') ? undefined : json['report_status'],
        'url': !exists(json, 'url') ? undefined : json['url'],
        'size': !exists(json, 'size') ? undefined : json['size'],
    };
}

export function AdsAnalyticsGetAsyncResponseToJSON(value?: AdsAnalyticsGetAsyncResponse): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        'report_status': value.reportStatus,
        'url': value.url,
        'size': value.size,
    };
}

