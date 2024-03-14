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
import type { TopPinsAnalyticsResponseDateAvailability } from './TopPinsAnalyticsResponseDateAvailability';
import {
    TopPinsAnalyticsResponseDateAvailabilityFromJSON,
    TopPinsAnalyticsResponseDateAvailabilityFromJSONTyped,
    TopPinsAnalyticsResponseDateAvailabilityToJSON,
} from './TopPinsAnalyticsResponseDateAvailability';
import type { TopVideoPinsAnalyticsResponsePinsInner } from './TopVideoPinsAnalyticsResponsePinsInner';
import {
    TopVideoPinsAnalyticsResponsePinsInnerFromJSON,
    TopVideoPinsAnalyticsResponsePinsInnerFromJSONTyped,
    TopVideoPinsAnalyticsResponsePinsInnerToJSON,
} from './TopVideoPinsAnalyticsResponsePinsInner';

/**
 * 
 * @export
 * @interface TopVideoPinsAnalyticsResponse
 */
export interface TopVideoPinsAnalyticsResponse {
    /**
     * 
     * @type {TopPinsAnalyticsResponseDateAvailability}
     * @memberof TopVideoPinsAnalyticsResponse
     */
    dateAvailability?: TopPinsAnalyticsResponseDateAvailability;
    /**
     * 
     * @type {Array<TopVideoPinsAnalyticsResponsePinsInner>}
     * @memberof TopVideoPinsAnalyticsResponse
     */
    pins?: Array<TopVideoPinsAnalyticsResponsePinsInner>;
    /**
     * 
     * @type {string}
     * @memberof TopVideoPinsAnalyticsResponse
     */
    sortBy?: TopVideoPinsAnalyticsResponseSortByEnum;
}


/**
 * @export
 */
export const TopVideoPinsAnalyticsResponseSortByEnum = {
    Save: 'SAVE',
    Impression: 'IMPRESSION',
    OutboundClick: 'OUTBOUND_CLICK',
    VideoMrcView: 'VIDEO_MRC_VIEW',
    VideoAvgWatchTime: 'VIDEO_AVG_WATCH_TIME',
    VideoV50WatchTime: 'VIDEO_V50_WATCH_TIME',
    Quartile95PercentView: 'QUARTILE_95_PERCENT_VIEW',
    Video10SView: 'VIDEO_10S_VIEW',
    VideoStart: 'VIDEO_START'
} as const;
export type TopVideoPinsAnalyticsResponseSortByEnum = typeof TopVideoPinsAnalyticsResponseSortByEnum[keyof typeof TopVideoPinsAnalyticsResponseSortByEnum];


/**
 * Check if a given object implements the TopVideoPinsAnalyticsResponse interface.
 */
export function instanceOfTopVideoPinsAnalyticsResponse(value: object): boolean {
    return true;
}

export function TopVideoPinsAnalyticsResponseFromJSON(json: any): TopVideoPinsAnalyticsResponse {
    return TopVideoPinsAnalyticsResponseFromJSONTyped(json, false);
}

export function TopVideoPinsAnalyticsResponseFromJSONTyped(json: any, ignoreDiscriminator: boolean): TopVideoPinsAnalyticsResponse {
    if (json == null) {
        return json;
    }
    return {
        
        'dateAvailability': json['date_availability'] == null ? undefined : TopPinsAnalyticsResponseDateAvailabilityFromJSON(json['date_availability']),
        'pins': json['pins'] == null ? undefined : ((json['pins'] as Array<any>).map(TopVideoPinsAnalyticsResponsePinsInnerFromJSON)),
        'sortBy': json['sort_by'] == null ? undefined : json['sort_by'],
    };
}

export function TopVideoPinsAnalyticsResponseToJSON(value?: TopVideoPinsAnalyticsResponse | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'date_availability': TopPinsAnalyticsResponseDateAvailabilityToJSON(value['dateAvailability']),
        'pins': value['pins'] == null ? undefined : ((value['pins'] as Array<any>).map(TopVideoPinsAnalyticsResponsePinsInnerToJSON)),
        'sort_by': value['sortBy'],
    };
}
