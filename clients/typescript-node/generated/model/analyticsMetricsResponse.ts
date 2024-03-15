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
import { AnalyticsDailyMetrics } from './analyticsDailyMetrics';

export class AnalyticsMetricsResponse {
    /**
    * The metric name and value over the requested period for each requested metric
    */
    'summaryMetrics'?: { [key: string]: number; };
    /**
    * Array with the requested daily metric records
    */
    'dailyMetrics'?: Array<AnalyticsDailyMetrics>;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "summaryMetrics",
            "baseName": "summary_metrics",
            "type": "{ [key: string]: number; }"
        },
        {
            "name": "dailyMetrics",
            "baseName": "daily_metrics",
            "type": "Array<AnalyticsDailyMetrics>"
        }    ];

    static getAttributeTypeMap() {
        return AnalyticsMetricsResponse.attributeTypeMap;
    }
}
