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

import {
    AdGroupSummaryStatus,
    AdGroupSummaryStatusFromJSON,
    AdGroupSummaryStatusToJSON,
    AdsAnalyticsCreateAsyncRequestAllOf,
    AdsAnalyticsCreateAsyncRequestAllOfFromJSON,
    AdsAnalyticsCreateAsyncRequestAllOfToJSON,
    AdsAnalyticsCreateAsyncRequestAllOf1,
    AdsAnalyticsCreateAsyncRequestAllOf1FromJSON,
    AdsAnalyticsCreateAsyncRequestAllOf1ToJSON,
    AdsAnalyticsMetricsFilter,
    AdsAnalyticsMetricsFilterFromJSON,
    AdsAnalyticsMetricsFilterToJSON,
    AdsAnalyticsTargetingType,
    AdsAnalyticsTargetingTypeFromJSON,
    AdsAnalyticsTargetingTypeToJSON,
    CampaignSummaryStatus,
    CampaignSummaryStatusFromJSON,
    CampaignSummaryStatusToJSON,
    ConversionAttributionWindowDays,
    ConversionAttributionWindowDaysFromJSON,
    ConversionAttributionWindowDaysToJSON,
    ConversionReportAttributionType,
    ConversionReportAttributionTypeFromJSON,
    ConversionReportAttributionTypeToJSON,
    ConversionReportTimeType,
    ConversionReportTimeTypeFromJSON,
    ConversionReportTimeTypeToJSON,
    DataOutputFormat,
    DataOutputFormatFromJSON,
    DataOutputFormatToJSON,
    Granularity,
    GranularityFromJSON,
    GranularityToJSON,
    MetricsReportingLevel,
    MetricsReportingLevelFromJSON,
    MetricsReportingLevelToJSON,
    ObjectiveType,
    ObjectiveTypeFromJSON,
    ObjectiveTypeToJSON,
    PinPromotionSummaryStatus,
    PinPromotionSummaryStatusFromJSON,
    PinPromotionSummaryStatusToJSON,
    ProductGroupSummaryStatus,
    ProductGroupSummaryStatusFromJSON,
    ProductGroupSummaryStatusToJSON,
    ReportingColumnAsync,
    ReportingColumnAsyncFromJSON,
    ReportingColumnAsyncToJSON,
} from './';

/**
 * @type AdsAnalyticsCreateAsyncRequest
 * @export
 */
export interface AdsAnalyticsCreateAsyncRequest extends AdsAnalyticsCreateAsyncRequestAllOf, AdsAnalyticsCreateAsyncRequestAllOf1 {
}

export function AdsAnalyticsCreateAsyncRequestFromJSON(json: any): AdsAnalyticsCreateAsyncRequest {
    return {
        ...AdsAnalyticsCreateAsyncRequestAllOfFromJSON(json),
        ...AdsAnalyticsCreateAsyncRequestAllOf1FromJSON(json),
    };
}

export function AdsAnalyticsCreateAsyncRequestToJSON(value?: AdsAnalyticsCreateAsyncRequest): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        ...AdsAnalyticsCreateAsyncRequestAllOfToJSON(value),
        ...AdsAnalyticsCreateAsyncRequestAllOf1ToJSON(value),
    };
}
