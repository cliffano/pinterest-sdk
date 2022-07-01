// tslint:disable
/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import {
    AnalyticsMetricsResponseDailyMetrics,
} from './';

/**
 * @export
 * @interface AnalyticsMetricsResponse
 */
export interface AnalyticsMetricsResponse {
    /**
     * Array with the requested daily metric records
     * @type {Array<AnalyticsMetricsResponseDailyMetrics>}
     * @memberof AnalyticsMetricsResponse
     */
    daily_metrics?: Array<AnalyticsMetricsResponseDailyMetrics>;
    /**
     * The metric name and value over the requested period for each requested metric
     * @type {{ [key: string]: number; }}
     * @memberof AnalyticsMetricsResponse
     */
    summary_metrics?: { [key: string]: number; };
}
