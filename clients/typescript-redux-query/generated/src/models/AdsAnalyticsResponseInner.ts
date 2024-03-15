// tslint:disable
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

import { exists, mapValues } from '../runtime';
/**
 * 
 * @export
 * @interface AdsAnalyticsResponseInner
 */
export interface AdsAnalyticsResponseInner  {
    [key: string]: any | any;
    /**
     * The ID of the ad that this metrics belongs to.
     * @type {string}
     * @memberof AdsAnalyticsResponseInner
     */
    aDID: string;
    /**
     * Current metrics date. Only returned when granularity is a time-based value (`DAY`, `HOUR`, `WEEK`, `MONTH`)
     * @type {Date}
     * @memberof AdsAnalyticsResponseInner
     */
    dATE?: Date;
}

export function AdsAnalyticsResponseInnerFromJSON(json: any): AdsAnalyticsResponseInner {
    return {
            ...json,
        'aDID': json['AD_ID'],
        'dATE': !exists(json, 'DATE') ? undefined : new Date(json['DATE']),
    };
}

export function AdsAnalyticsResponseInnerToJSON(value?: AdsAnalyticsResponseInner): any {
    if (value === undefined) {
        return undefined;
    }
    return {
            ...value,
        'AD_ID': value.aDID,
        'DATE': value.dATE === undefined ? undefined : value.dATE.toISOString().substring(0,10),
    };
}

