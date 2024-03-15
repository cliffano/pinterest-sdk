/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * OpenAPI spec version: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import { TopPinsAnalyticsResponseDateAvailability } from '../models/TopPinsAnalyticsResponseDateAvailability';
import { TopVideoPinsAnalyticsResponsePinsInner } from '../models/TopVideoPinsAnalyticsResponsePinsInner';
import { HttpFile } from '../http/http';

export class TopVideoPinsAnalyticsResponse {
    'dateAvailability'?: TopPinsAnalyticsResponseDateAvailability;
    'pins'?: Array<TopVideoPinsAnalyticsResponsePinsInner>;
    'sortBy'?: TopVideoPinsAnalyticsResponseSortByEnum;

    static readonly discriminator: string | undefined = undefined;

    static readonly attributeTypeMap: Array<{name: string, baseName: string, type: string, format: string}> = [
        {
            "name": "dateAvailability",
            "baseName": "date_availability",
            "type": "TopPinsAnalyticsResponseDateAvailability",
            "format": ""
        },
        {
            "name": "pins",
            "baseName": "pins",
            "type": "Array<TopVideoPinsAnalyticsResponsePinsInner>",
            "format": ""
        },
        {
            "name": "sortBy",
            "baseName": "sort_by",
            "type": "TopVideoPinsAnalyticsResponseSortByEnum",
            "format": ""
        }    ];

    static getAttributeTypeMap() {
        return TopVideoPinsAnalyticsResponse.attributeTypeMap;
    }

    public constructor() {
    }
}


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

