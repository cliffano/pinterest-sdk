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
import {
    AnalyticsMetricsResponseDailyMetrics,
    AnalyticsMetricsResponseDailyMetricsFromJSON,
    AnalyticsMetricsResponseDailyMetricsToJSON,
} from './';

/**
 * 
 * @export
 * @interface AnalyticsMetricsResponse
 */
export interface AnalyticsMetricsResponse  {
    /**
     * Array with the requested daily metric records
     * @type {Array<AnalyticsMetricsResponseDailyMetrics>}
     * @memberof AnalyticsMetricsResponse
     */
    dailyMetrics?: Array<AnalyticsMetricsResponseDailyMetrics>;
    /**
     * The metric name and value over the requested period for each requested metric
     * @type {{ [key: string]: number; }}
     * @memberof AnalyticsMetricsResponse
     */
    summaryMetrics?: { [key: string]: number; };
}

export function AnalyticsMetricsResponseFromJSON(json: any): AnalyticsMetricsResponse {
    return {
        'dailyMetrics': !exists(json, 'daily_metrics') ? undefined : (json['daily_metrics'] as Array<any>).map(AnalyticsMetricsResponseDailyMetricsFromJSON),
        'summaryMetrics': !exists(json, 'summary_metrics') ? undefined : json['summary_metrics'],
    };
}

export function AnalyticsMetricsResponseToJSON(value?: AnalyticsMetricsResponse): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        'daily_metrics': value.dailyMetrics === undefined ? undefined : (value.dailyMetrics as Array<any>).map(AnalyticsMetricsResponseDailyMetricsToJSON),
        'summary_metrics': value.summaryMetrics,
    };
}


