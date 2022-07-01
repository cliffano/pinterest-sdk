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
import { ConversionAttributionWindowDays } from './conversionAttributionWindowDays';
import { ConversionReportAttributionType } from './conversionReportAttributionType';
import { ConversionReportTimeType } from './conversionReportTimeType';
import { Granularity } from './granularity';


export interface AdsAnalyticsCreateAsyncRequestAllOf { 
    /**
     * Metric report start date (UTC). Format: YYYY-MM-DD
     */
    start_date: string;
    /**
     * Metric report end date (UTC). Format: YYYY-MM-DD
     */
    end_date: string;
    /**
     * TOTAL - metrics are aggregated over the specified date range.<br> DAY - metrics are broken down daily.<br> HOUR - metrics are broken down hourly.<br>WEEKLY - metrics are broken down weekly.<br>MONTHLY - metrics are broken down monthly
     */
    granularity: Granularity;
    /**
     * Number of days to use as the conversion attribution window for a pin click action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `30` days.
     */
    click_window_days?: ConversionAttributionWindowDays;
    /**
     * Number of days to use as the conversion attribution window for an engagement action. Engagements include saves, closeups, link clicks, and carousel card swipes. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `30` days.
     */
    engagement_window_days?: ConversionAttributionWindowDays;
    /**
     * Number of days to use as the conversion attribution window for a view action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `1` day.
     */
    view_window_days?: ConversionAttributionWindowDays;
    /**
     * The date by which the conversion metrics returned from this endpoint will be reported. There are two dates associated with a conversion event: the date that the user interacted with the ad, and the date that the user completed a conversion event.
     */
    conversion_report_time?: ConversionReportTimeType;
    /**
     * List of types of attribution for the conversion report
     */
    attribution_types?: Array<ConversionReportAttributionType>;
}
