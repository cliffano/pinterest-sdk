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

import type {
    TopPinsAnalyticsResponseDateAvailability,
    TopVideoPinsAnalyticsResponsePinsInner,
} from './';

/**
 * @export
 * @interface TopVideoPinsAnalyticsResponse
 */
export interface TopVideoPinsAnalyticsResponse {
    /**
     * @type {TopPinsAnalyticsResponseDateAvailability}
     * @memberof TopVideoPinsAnalyticsResponse
     */
    date_availability?: TopPinsAnalyticsResponseDateAvailability;
    /**
     * @type {Array<TopVideoPinsAnalyticsResponsePinsInner>}
     * @memberof TopVideoPinsAnalyticsResponse
     */
    pins?: Array<TopVideoPinsAnalyticsResponsePinsInner>;
    /**
     * @type {string}
     * @memberof TopVideoPinsAnalyticsResponse
     */
    sort_by?: TopVideoPinsAnalyticsResponseSortByEnum;
}

/**
 * @export
 * @enum {string}
 */
export enum TopVideoPinsAnalyticsResponseSortByEnum {
    Save = 'SAVE',
    Impression = 'IMPRESSION',
    OutboundClick = 'OUTBOUND_CLICK',
    VideoMrcView = 'VIDEO_MRC_VIEW',
    VideoAvgWatchTime = 'VIDEO_AVG_WATCH_TIME',
    VideoV50WatchTime = 'VIDEO_V50_WATCH_TIME',
    Quartile95PercentView = 'QUARTILE_95_PERCENT_VIEW',
    Video10SView = 'VIDEO_10S_VIEW',
    VideoStart = 'VIDEO_START'
}

