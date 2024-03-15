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

import * as models from './models';

export interface PinAnalyticsMetricsResponseDailyMetricsInner {
    data_status?: models.DataStatus;

    /**
     * Metrics date (UTC): YYYY-MM-DD.
     */
    date?: string;

    /**
     * The metric name and daily value for each requested metric
     */
    metrics?: { [key: string]: number; };

}
export namespace PinAnalyticsMetricsResponseDailyMetricsInner {
}
