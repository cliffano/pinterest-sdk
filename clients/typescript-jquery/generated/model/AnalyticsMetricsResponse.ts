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

export interface AnalyticsMetricsResponse {
    /**
     * The metric name and value over the requested period for each requested metric
     */
    summary_metrics?: { [key: string]: number; };

    /**
     * Array with the requested daily metric records
     */
    daily_metrics?: Array<models.AnalyticsDailyMetrics>;

}
