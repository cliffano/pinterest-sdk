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

import { RequestFile } from './models';
import { TopPinsAnalyticsResponseDateAvailability } from './topPinsAnalyticsResponseDateAvailability';
import { TopVideoPinsAnalyticsResponsePinsInner } from './topVideoPinsAnalyticsResponsePinsInner';

export class TopVideoPinsAnalyticsResponse {
    'dateAvailability'?: TopPinsAnalyticsResponseDateAvailability;
    'pins'?: Array<TopVideoPinsAnalyticsResponsePinsInner>;
    'sortBy'?: TopVideoPinsAnalyticsResponse.SortByEnum;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "dateAvailability",
            "baseName": "date_availability",
            "type": "TopPinsAnalyticsResponseDateAvailability"
        },
        {
            "name": "pins",
            "baseName": "pins",
            "type": "Array<TopVideoPinsAnalyticsResponsePinsInner>"
        },
        {
            "name": "sortBy",
            "baseName": "sort_by",
            "type": "TopVideoPinsAnalyticsResponse.SortByEnum"
        }    ];

    static getAttributeTypeMap() {
        return TopVideoPinsAnalyticsResponse.attributeTypeMap;
    }
}

export namespace TopVideoPinsAnalyticsResponse {
    export enum SortByEnum {
        Save = <any> 'SAVE',
        Impression = <any> 'IMPRESSION',
        OutboundClick = <any> 'OUTBOUND_CLICK',
        VideoMrcView = <any> 'VIDEO_MRC_VIEW',
        VideoAvgWatchTime = <any> 'VIDEO_AVG_WATCH_TIME',
        VideoV50WatchTime = <any> 'VIDEO_V50_WATCH_TIME',
        Quartile95PercentView = <any> 'QUARTILE_95_PERCENT_VIEW',
        Video10SView = <any> 'VIDEO_10S_VIEW',
        VideoStart = <any> 'VIDEO_START'
    }
}