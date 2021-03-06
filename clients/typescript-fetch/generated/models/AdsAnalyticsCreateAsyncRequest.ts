/* tslint:disable */
/* eslint-disable */
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

import { exists, mapValues } from '../runtime';
import {
    AdGroupSummaryStatus,
    AdGroupSummaryStatusFromJSON,
    AdGroupSummaryStatusFromJSONTyped,
    AdGroupSummaryStatusToJSON,
} from './AdGroupSummaryStatus';
import {
    AdsAnalyticsCreateAsyncRequestAllOf,
    AdsAnalyticsCreateAsyncRequestAllOfFromJSON,
    AdsAnalyticsCreateAsyncRequestAllOfFromJSONTyped,
    AdsAnalyticsCreateAsyncRequestAllOfToJSON,
} from './AdsAnalyticsCreateAsyncRequestAllOf';
import {
    AdsAnalyticsCreateAsyncRequestAllOf1,
    AdsAnalyticsCreateAsyncRequestAllOf1FromJSON,
    AdsAnalyticsCreateAsyncRequestAllOf1FromJSONTyped,
    AdsAnalyticsCreateAsyncRequestAllOf1ToJSON,
} from './AdsAnalyticsCreateAsyncRequestAllOf1';
import {
    AdsAnalyticsMetricsFilter,
    AdsAnalyticsMetricsFilterFromJSON,
    AdsAnalyticsMetricsFilterFromJSONTyped,
    AdsAnalyticsMetricsFilterToJSON,
} from './AdsAnalyticsMetricsFilter';
import {
    AdsAnalyticsTargetingType,
    AdsAnalyticsTargetingTypeFromJSON,
    AdsAnalyticsTargetingTypeFromJSONTyped,
    AdsAnalyticsTargetingTypeToJSON,
} from './AdsAnalyticsTargetingType';
import {
    CampaignSummaryStatus,
    CampaignSummaryStatusFromJSON,
    CampaignSummaryStatusFromJSONTyped,
    CampaignSummaryStatusToJSON,
} from './CampaignSummaryStatus';
import {
    ConversionAttributionWindowDays,
    ConversionAttributionWindowDaysFromJSON,
    ConversionAttributionWindowDaysFromJSONTyped,
    ConversionAttributionWindowDaysToJSON,
} from './ConversionAttributionWindowDays';
import {
    ConversionReportAttributionType,
    ConversionReportAttributionTypeFromJSON,
    ConversionReportAttributionTypeFromJSONTyped,
    ConversionReportAttributionTypeToJSON,
} from './ConversionReportAttributionType';
import {
    ConversionReportTimeType,
    ConversionReportTimeTypeFromJSON,
    ConversionReportTimeTypeFromJSONTyped,
    ConversionReportTimeTypeToJSON,
} from './ConversionReportTimeType';
import {
    DataOutputFormat,
    DataOutputFormatFromJSON,
    DataOutputFormatFromJSONTyped,
    DataOutputFormatToJSON,
} from './DataOutputFormat';
import {
    Granularity,
    GranularityFromJSON,
    GranularityFromJSONTyped,
    GranularityToJSON,
} from './Granularity';
import {
    MetricsReportingLevel,
    MetricsReportingLevelFromJSON,
    MetricsReportingLevelFromJSONTyped,
    MetricsReportingLevelToJSON,
} from './MetricsReportingLevel';
import {
    ObjectiveType,
    ObjectiveTypeFromJSON,
    ObjectiveTypeFromJSONTyped,
    ObjectiveTypeToJSON,
} from './ObjectiveType';
import {
    PinPromotionSummaryStatus,
    PinPromotionSummaryStatusFromJSON,
    PinPromotionSummaryStatusFromJSONTyped,
    PinPromotionSummaryStatusToJSON,
} from './PinPromotionSummaryStatus';
import {
    ProductGroupSummaryStatus,
    ProductGroupSummaryStatusFromJSON,
    ProductGroupSummaryStatusFromJSONTyped,
    ProductGroupSummaryStatusToJSON,
} from './ProductGroupSummaryStatus';
import {
    ReportingColumnAsync,
    ReportingColumnAsyncFromJSON,
    ReportingColumnAsyncFromJSONTyped,
    ReportingColumnAsyncToJSON,
} from './ReportingColumnAsync';

/**
 * 
 * @export
 * @interface AdsAnalyticsCreateAsyncRequest
 */
export interface AdsAnalyticsCreateAsyncRequest {
    /**
     * Metric report start date (UTC). Format: YYYY-MM-DD
     * @type {string}
     * @memberof AdsAnalyticsCreateAsyncRequest
     */
    startDate: string;
    /**
     * Metric report end date (UTC). Format: YYYY-MM-DD
     * @type {string}
     * @memberof AdsAnalyticsCreateAsyncRequest
     */
    endDate: string;
    /**
     * TOTAL - metrics are aggregated over the specified date range.<br> DAY - metrics are broken down daily.<br> HOUR - metrics are broken down hourly.<br>WEEKLY - metrics are broken down weekly.<br>MONTHLY - metrics are broken down monthly
     * @type {Granularity}
     * @memberof AdsAnalyticsCreateAsyncRequest
     */
    granularity: Granularity;
    /**
     * Number of days to use as the conversion attribution window for a pin click action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `30` days.
     * @type {ConversionAttributionWindowDays}
     * @memberof AdsAnalyticsCreateAsyncRequest
     */
    clickWindowDays?: ConversionAttributionWindowDays;
    /**
     * Number of days to use as the conversion attribution window for an engagement action. Engagements include saves, closeups, link clicks, and carousel card swipes. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `30` days.
     * @type {ConversionAttributionWindowDays}
     * @memberof AdsAnalyticsCreateAsyncRequest
     */
    engagementWindowDays?: ConversionAttributionWindowDays;
    /**
     * Number of days to use as the conversion attribution window for a view action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `1` day.
     * @type {ConversionAttributionWindowDays}
     * @memberof AdsAnalyticsCreateAsyncRequest
     */
    viewWindowDays?: ConversionAttributionWindowDays;
    /**
     * The date by which the conversion metrics returned from this endpoint will be reported. There are two dates associated with a conversion event: the date that the user interacted with the ad, and the date that the user completed a conversion event.
     * @type {ConversionReportTimeType}
     * @memberof AdsAnalyticsCreateAsyncRequest
     */
    conversionReportTime?: ConversionReportTimeType;
    /**
     * List of types of attribution for the conversion report
     * @type {Array<ConversionReportAttributionType>}
     * @memberof AdsAnalyticsCreateAsyncRequest
     */
    attributionTypes?: Array<ConversionReportAttributionType>;
    /**
     * Metric and entity columns
     * @type {Array<ReportingColumnAsync>}
     * @memberof AdsAnalyticsCreateAsyncRequest
     */
    columns: Array<ReportingColumnAsync>;
    /**
     * Level of the report
     * @type {MetricsReportingLevel}
     * @memberof AdsAnalyticsCreateAsyncRequest
     */
    level: MetricsReportingLevel;
    /**
     * Specification for formatting report data
     * @type {DataOutputFormat}
     * @memberof AdsAnalyticsCreateAsyncRequest
     */
    reportFormat?: DataOutputFormat;
    /**
     * List of campaign ids
     * @type {Array<string>}
     * @memberof AdsAnalyticsCreateAsyncRequest
     */
    campaignIds?: Array<string>;
    /**
     * List of status values for filtering
     * @type {Array<CampaignSummaryStatus>}
     * @memberof AdsAnalyticsCreateAsyncRequest
     */
    campaignStatuses?: Array<CampaignSummaryStatus>;
    /**
     * List of values for filtering
     * @type {Array<ObjectiveType>}
     * @memberof AdsAnalyticsCreateAsyncRequest
     */
    campaignObjectiveTypes?: Array<ObjectiveType>;
    /**
     * List of ad group ids
     * @type {Array<string>}
     * @memberof AdsAnalyticsCreateAsyncRequest
     */
    adGroupIds?: Array<string>;
    /**
     * List of values for filtering
     * @type {Array<AdGroupSummaryStatus>}
     * @memberof AdsAnalyticsCreateAsyncRequest
     */
    adGroupStatuses?: Array<AdGroupSummaryStatus>;
    /**
     * List of ad ids
     * @type {Array<string>}
     * @memberof AdsAnalyticsCreateAsyncRequest
     */
    adIds?: Array<string>;
    /**
     * List of values for filtering
     * @type {Array<PinPromotionSummaryStatus>}
     * @memberof AdsAnalyticsCreateAsyncRequest
     */
    adStatuses?: Array<PinPromotionSummaryStatus>;
    /**
     * List of product group ids
     * @type {Array<string>}
     * @memberof AdsAnalyticsCreateAsyncRequest
     */
    productGroupIds?: Array<string>;
    /**
     * List of values for filtering
     * @type {Array<ProductGroupSummaryStatus>}
     * @memberof AdsAnalyticsCreateAsyncRequest
     */
    productGroupStatuses?: Array<ProductGroupSummaryStatus>;
    /**
     * List of product item ids
     * @type {Array<string>}
     * @memberof AdsAnalyticsCreateAsyncRequest
     */
    productItemIds?: Array<string>;
    /**
     * List of targeting types
     * @type {Array<AdsAnalyticsTargetingType>}
     * @memberof AdsAnalyticsCreateAsyncRequest
     */
    targetingTypes?: Array<AdsAnalyticsTargetingType>;
    /**
     * List of metrics filters
     * @type {Array<AdsAnalyticsMetricsFilter>}
     * @memberof AdsAnalyticsCreateAsyncRequest
     */
    metricsFilters?: Array<AdsAnalyticsMetricsFilter>;
}

export function AdsAnalyticsCreateAsyncRequestFromJSON(json: any): AdsAnalyticsCreateAsyncRequest {
    return AdsAnalyticsCreateAsyncRequestFromJSONTyped(json, false);
}

export function AdsAnalyticsCreateAsyncRequestFromJSONTyped(json: any, ignoreDiscriminator: boolean): AdsAnalyticsCreateAsyncRequest {
    if ((json === undefined) || (json === null)) {
        return json;
    }
    return {
        
        'startDate': json['start_date'],
        'endDate': json['end_date'],
        'granularity': GranularityFromJSON(json['granularity']),
        'clickWindowDays': !exists(json, 'click_window_days') ? undefined : ConversionAttributionWindowDaysFromJSON(json['click_window_days']),
        'engagementWindowDays': !exists(json, 'engagement_window_days') ? undefined : ConversionAttributionWindowDaysFromJSON(json['engagement_window_days']),
        'viewWindowDays': !exists(json, 'view_window_days') ? undefined : ConversionAttributionWindowDaysFromJSON(json['view_window_days']),
        'conversionReportTime': !exists(json, 'conversion_report_time') ? undefined : ConversionReportTimeTypeFromJSON(json['conversion_report_time']),
        'attributionTypes': !exists(json, 'attribution_types') ? undefined : ((json['attribution_types'] as Array<any>).map(ConversionReportAttributionTypeFromJSON)),
        'columns': ((json['columns'] as Array<any>).map(ReportingColumnAsyncFromJSON)),
        'level': MetricsReportingLevelFromJSON(json['level']),
        'reportFormat': !exists(json, 'report_format') ? undefined : DataOutputFormatFromJSON(json['report_format']),
        'campaignIds': !exists(json, 'campaign_ids') ? undefined : json['campaign_ids'],
        'campaignStatuses': !exists(json, 'campaign_statuses') ? undefined : ((json['campaign_statuses'] as Array<any>).map(CampaignSummaryStatusFromJSON)),
        'campaignObjectiveTypes': !exists(json, 'campaign_objective_types') ? undefined : ((json['campaign_objective_types'] as Array<any>).map(ObjectiveTypeFromJSON)),
        'adGroupIds': !exists(json, 'ad_group_ids') ? undefined : json['ad_group_ids'],
        'adGroupStatuses': !exists(json, 'ad_group_statuses') ? undefined : ((json['ad_group_statuses'] as Array<any>).map(AdGroupSummaryStatusFromJSON)),
        'adIds': !exists(json, 'ad_ids') ? undefined : json['ad_ids'],
        'adStatuses': !exists(json, 'ad_statuses') ? undefined : ((json['ad_statuses'] as Array<any>).map(PinPromotionSummaryStatusFromJSON)),
        'productGroupIds': !exists(json, 'product_group_ids') ? undefined : json['product_group_ids'],
        'productGroupStatuses': !exists(json, 'product_group_statuses') ? undefined : ((json['product_group_statuses'] as Array<any>).map(ProductGroupSummaryStatusFromJSON)),
        'productItemIds': !exists(json, 'product_item_ids') ? undefined : json['product_item_ids'],
        'targetingTypes': !exists(json, 'targeting_types') ? undefined : ((json['targeting_types'] as Array<any>).map(AdsAnalyticsTargetingTypeFromJSON)),
        'metricsFilters': !exists(json, 'metrics_filters') ? undefined : ((json['metrics_filters'] as Array<any>).map(AdsAnalyticsMetricsFilterFromJSON)),
    };
}

export function AdsAnalyticsCreateAsyncRequestToJSON(value?: AdsAnalyticsCreateAsyncRequest | null): any {
    if (value === undefined) {
        return undefined;
    }
    if (value === null) {
        return null;
    }
    return {
        
        'start_date': value.startDate,
        'end_date': value.endDate,
        'granularity': GranularityToJSON(value.granularity),
        'click_window_days': ConversionAttributionWindowDaysToJSON(value.clickWindowDays),
        'engagement_window_days': ConversionAttributionWindowDaysToJSON(value.engagementWindowDays),
        'view_window_days': ConversionAttributionWindowDaysToJSON(value.viewWindowDays),
        'conversion_report_time': ConversionReportTimeTypeToJSON(value.conversionReportTime),
        'attribution_types': value.attributionTypes === undefined ? undefined : ((value.attributionTypes as Array<any>).map(ConversionReportAttributionTypeToJSON)),
        'columns': ((value.columns as Array<any>).map(ReportingColumnAsyncToJSON)),
        'level': MetricsReportingLevelToJSON(value.level),
        'report_format': DataOutputFormatToJSON(value.reportFormat),
        'campaign_ids': value.campaignIds,
        'campaign_statuses': value.campaignStatuses === undefined ? undefined : ((value.campaignStatuses as Array<any>).map(CampaignSummaryStatusToJSON)),
        'campaign_objective_types': value.campaignObjectiveTypes === undefined ? undefined : ((value.campaignObjectiveTypes as Array<any>).map(ObjectiveTypeToJSON)),
        'ad_group_ids': value.adGroupIds,
        'ad_group_statuses': value.adGroupStatuses === undefined ? undefined : ((value.adGroupStatuses as Array<any>).map(AdGroupSummaryStatusToJSON)),
        'ad_ids': value.adIds,
        'ad_statuses': value.adStatuses === undefined ? undefined : ((value.adStatuses as Array<any>).map(PinPromotionSummaryStatusToJSON)),
        'product_group_ids': value.productGroupIds,
        'product_group_statuses': value.productGroupStatuses === undefined ? undefined : ((value.productGroupStatuses as Array<any>).map(ProductGroupSummaryStatusToJSON)),
        'product_item_ids': value.productItemIds,
        'targeting_types': value.targetingTypes === undefined ? undefined : ((value.targetingTypes as Array<any>).map(AdsAnalyticsTargetingTypeToJSON)),
        'metrics_filters': value.metricsFilters === undefined ? undefined : ((value.metricsFilters as Array<any>).map(AdsAnalyticsMetricsFilterToJSON)),
    };
}

