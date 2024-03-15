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
    DataStatus,
} from './';

/**
 * @export
 * @interface PinAnalyticsMetricsResponseDailyMetricsInner
 */
export interface PinAnalyticsMetricsResponseDailyMetricsInner {
    /**
     * @type {DataStatus}
     * @memberof PinAnalyticsMetricsResponseDailyMetricsInner
     */
    data_status?: DataStatus;
    /**
     * Metrics date (UTC): YYYY-MM-DD.
     * @type {string}
     * @memberof PinAnalyticsMetricsResponseDailyMetricsInner
     */
    date?: string;
    /**
     * The metric name and daily value for each requested metric
     * @type {{ [key: string]: number; }}
     * @memberof PinAnalyticsMetricsResponseDailyMetricsInner
     */
    metrics?: { [key: string]: number; };
}


