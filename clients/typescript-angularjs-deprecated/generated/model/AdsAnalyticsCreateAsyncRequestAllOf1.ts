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

import * as models from './models';

export interface AdsAnalyticsCreateAsyncRequestAllOf1 {
    /**
     * Metric and entity columns
     */
    "columns": Array<models.ReportingColumnAsync>;
    /**
     * Level of the report
     */
    "level": models.models.MetricsReportingLevel;
    /**
     * Specification for formatting report data
     */
    "report_format"?: models.models.DataOutputFormat;
}

