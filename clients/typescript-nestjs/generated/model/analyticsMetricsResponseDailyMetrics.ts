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


export interface AnalyticsMetricsResponseDailyMetrics { 
    /**
     * Metrics availablity, e.g., \"READY\".
     */
    data_status?: AnalyticsMetricsResponseDailyMetrics.DataStatusEnum;
    /**
     * Metrics date (UTC): YYYY-MM-DD.
     */
    date?: string;
    /**
     * The metric name and daily value for each requested metric
     */
    metrics?: { [key: string]: number; };
}
export namespace AnalyticsMetricsResponseDailyMetrics {
    export type DataStatusEnum = 'PROCESSING' | 'READY' | 'ESTIMATE' | 'BEFORE_BUSINESS_CREATED' | 'BEFORE_DATA_RETENTION_PERIOD' | 'BEFORE_PIN_DATA_RETENTION_PERIOD' | 'BEFORE_METRIC_START_DATE' | 'BEFORE_CORE_METRIC_START_DATE' | 'BEFORE_PIN_FORMAT_METRIC_START_DATE' | 'BEFORE_AUDIENCE_METRIC_START_DATE' | 'BEFORE_AUDIENCE_MONTHLY_METRIC_START_DATE' | 'BEFORE_VIDEO_METRIC_START_DATE' | 'BEFORE_CONVERSION_METRIC_START_DATE' | 'PURCHASERS_METRIC_SMALLER_THAN_THRESHOLD' | 'IN_BAD_TAG_DATE' | 'BEFORE_PUBLISHED_METRIC_START_DATE' | 'BEFORE_ASSIST_METRIC_START_DATE' | 'BEFORE_PIN_CREATED' | 'BEFORE_ACCOUNT_CLAIMED' | 'BEFORE_DEMOGRAPHIC_FILTERS_START_DATE' | 'AUDIENCE_SEGMENT_SMALLER_THAN_THRESHOLD' | 'AUDIENCE_TOTAL_SMALLER_THAN_THRESHOLD' | 'BEFORE_PRODUCT_GROUP_FILTER_START_DATE';
    export const DataStatusEnum = {
        Processing: 'PROCESSING' as DataStatusEnum,
        Ready: 'READY' as DataStatusEnum,
        Estimate: 'ESTIMATE' as DataStatusEnum,
        BeforeBusinessCreated: 'BEFORE_BUSINESS_CREATED' as DataStatusEnum,
        BeforeDataRetentionPeriod: 'BEFORE_DATA_RETENTION_PERIOD' as DataStatusEnum,
        BeforePinDataRetentionPeriod: 'BEFORE_PIN_DATA_RETENTION_PERIOD' as DataStatusEnum,
        BeforeMetricStartDate: 'BEFORE_METRIC_START_DATE' as DataStatusEnum,
        BeforeCoreMetricStartDate: 'BEFORE_CORE_METRIC_START_DATE' as DataStatusEnum,
        BeforePinFormatMetricStartDate: 'BEFORE_PIN_FORMAT_METRIC_START_DATE' as DataStatusEnum,
        BeforeAudienceMetricStartDate: 'BEFORE_AUDIENCE_METRIC_START_DATE' as DataStatusEnum,
        BeforeAudienceMonthlyMetricStartDate: 'BEFORE_AUDIENCE_MONTHLY_METRIC_START_DATE' as DataStatusEnum,
        BeforeVideoMetricStartDate: 'BEFORE_VIDEO_METRIC_START_DATE' as DataStatusEnum,
        BeforeConversionMetricStartDate: 'BEFORE_CONVERSION_METRIC_START_DATE' as DataStatusEnum,
        PurchasersMetricSmallerThanThreshold: 'PURCHASERS_METRIC_SMALLER_THAN_THRESHOLD' as DataStatusEnum,
        InBadTagDate: 'IN_BAD_TAG_DATE' as DataStatusEnum,
        BeforePublishedMetricStartDate: 'BEFORE_PUBLISHED_METRIC_START_DATE' as DataStatusEnum,
        BeforeAssistMetricStartDate: 'BEFORE_ASSIST_METRIC_START_DATE' as DataStatusEnum,
        BeforePinCreated: 'BEFORE_PIN_CREATED' as DataStatusEnum,
        BeforeAccountClaimed: 'BEFORE_ACCOUNT_CLAIMED' as DataStatusEnum,
        BeforeDemographicFiltersStartDate: 'BEFORE_DEMOGRAPHIC_FILTERS_START_DATE' as DataStatusEnum,
        AudienceSegmentSmallerThanThreshold: 'AUDIENCE_SEGMENT_SMALLER_THAN_THRESHOLD' as DataStatusEnum,
        AudienceTotalSmallerThanThreshold: 'AUDIENCE_TOTAL_SMALLER_THAN_THRESHOLD' as DataStatusEnum,
        BeforeProductGroupFilterStartDate: 'BEFORE_PRODUCT_GROUP_FILTER_START_DATE' as DataStatusEnum
    };
}


