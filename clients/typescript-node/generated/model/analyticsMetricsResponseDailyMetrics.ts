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

import { RequestFile } from './models';

export class AnalyticsMetricsResponseDailyMetrics {
    /**
    * Metrics availablity, e.g., \"READY\".
    */
    'dataStatus'?: AnalyticsMetricsResponseDailyMetrics.DataStatusEnum;
    /**
    * Metrics date (UTC): YYYY-MM-DD.
    */
    'date'?: string;
    /**
    * The metric name and daily value for each requested metric
    */
    'metrics'?: { [key: string]: number; };

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "dataStatus",
            "baseName": "data_status",
            "type": "AnalyticsMetricsResponseDailyMetrics.DataStatusEnum"
        },
        {
            "name": "date",
            "baseName": "date",
            "type": "string"
        },
        {
            "name": "metrics",
            "baseName": "metrics",
            "type": "{ [key: string]: number; }"
        }    ];

    static getAttributeTypeMap() {
        return AnalyticsMetricsResponseDailyMetrics.attributeTypeMap;
    }
}

export namespace AnalyticsMetricsResponseDailyMetrics {
    export enum DataStatusEnum {
        Processing = <any> 'PROCESSING',
        Ready = <any> 'READY',
        Estimate = <any> 'ESTIMATE',
        BeforeBusinessCreated = <any> 'BEFORE_BUSINESS_CREATED',
        BeforeDataRetentionPeriod = <any> 'BEFORE_DATA_RETENTION_PERIOD',
        BeforePinDataRetentionPeriod = <any> 'BEFORE_PIN_DATA_RETENTION_PERIOD',
        BeforeMetricStartDate = <any> 'BEFORE_METRIC_START_DATE',
        BeforeCoreMetricStartDate = <any> 'BEFORE_CORE_METRIC_START_DATE',
        BeforePinFormatMetricStartDate = <any> 'BEFORE_PIN_FORMAT_METRIC_START_DATE',
        BeforeAudienceMetricStartDate = <any> 'BEFORE_AUDIENCE_METRIC_START_DATE',
        BeforeAudienceMonthlyMetricStartDate = <any> 'BEFORE_AUDIENCE_MONTHLY_METRIC_START_DATE',
        BeforeVideoMetricStartDate = <any> 'BEFORE_VIDEO_METRIC_START_DATE',
        BeforeConversionMetricStartDate = <any> 'BEFORE_CONVERSION_METRIC_START_DATE',
        PurchasersMetricSmallerThanThreshold = <any> 'PURCHASERS_METRIC_SMALLER_THAN_THRESHOLD',
        InBadTagDate = <any> 'IN_BAD_TAG_DATE',
        BeforePublishedMetricStartDate = <any> 'BEFORE_PUBLISHED_METRIC_START_DATE',
        BeforeAssistMetricStartDate = <any> 'BEFORE_ASSIST_METRIC_START_DATE',
        BeforePinCreated = <any> 'BEFORE_PIN_CREATED',
        BeforeAccountClaimed = <any> 'BEFORE_ACCOUNT_CLAIMED',
        BeforeDemographicFiltersStartDate = <any> 'BEFORE_DEMOGRAPHIC_FILTERS_START_DATE',
        AudienceSegmentSmallerThanThreshold = <any> 'AUDIENCE_SEGMENT_SMALLER_THAN_THRESHOLD',
        AudienceTotalSmallerThanThreshold = <any> 'AUDIENCE_TOTAL_SMALLER_THAN_THRESHOLD',
        BeforeProductGroupFilterStartDate = <any> 'BEFORE_PRODUCT_GROUP_FILTER_START_DATE'
    }
}
