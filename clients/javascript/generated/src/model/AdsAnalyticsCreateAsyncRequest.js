/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 *
 */

import ApiClient from '../ApiClient';
import AdGroupSummaryStatus from './AdGroupSummaryStatus';
import AdsAnalyticsCreateAsyncRequestAllOf from './AdsAnalyticsCreateAsyncRequestAllOf';
import AdsAnalyticsCreateAsyncRequestAllOf1 from './AdsAnalyticsCreateAsyncRequestAllOf1';
import AdsAnalyticsMetricsFilter from './AdsAnalyticsMetricsFilter';
import AdsAnalyticsTargetingType from './AdsAnalyticsTargetingType';
import CampaignSummaryStatus from './CampaignSummaryStatus';
import ConversionAttributionWindowDays from './ConversionAttributionWindowDays';
import ConversionReportAttributionType from './ConversionReportAttributionType';
import ConversionReportTimeType from './ConversionReportTimeType';
import DataOutputFormat from './DataOutputFormat';
import Granularity from './Granularity';
import MetricsReportingLevel from './MetricsReportingLevel';
import ObjectiveType from './ObjectiveType';
import PinPromotionSummaryStatus from './PinPromotionSummaryStatus';
import ProductGroupSummaryStatus from './ProductGroupSummaryStatus';
import ReportingColumnAsync from './ReportingColumnAsync';

/**
 * The AdsAnalyticsCreateAsyncRequest model module.
 * @module model/AdsAnalyticsCreateAsyncRequest
 * @version 1.0.0-pre.0
 */
class AdsAnalyticsCreateAsyncRequest {
    /**
     * Constructs a new <code>AdsAnalyticsCreateAsyncRequest</code>.
     * @alias module:model/AdsAnalyticsCreateAsyncRequest
     * @implements module:model/AdsAnalyticsCreateAsyncRequestAllOf
     * @implements module:model/AdsAnalyticsCreateAsyncRequestAllOf1
     * @param startDate {String} Metric report start date (UTC). Format: YYYY-MM-DD
     * @param endDate {String} Metric report end date (UTC). Format: YYYY-MM-DD
     * @param granularity {module:model/Granularity} TOTAL - metrics are aggregated over the specified date range.<br> DAY - metrics are broken down daily.<br> HOUR - metrics are broken down hourly.<br>WEEKLY - metrics are broken down weekly.<br>MONTHLY - metrics are broken down monthly
     * @param columns {Array.<module:model/ReportingColumnAsync>} Metric and entity columns
     * @param level {module:model/MetricsReportingLevel} Level of the report
     */
    constructor(startDate, endDate, granularity, columns, level) { 
        AdsAnalyticsCreateAsyncRequestAllOf.initialize(this, startDate, endDate, granularity);AdsAnalyticsCreateAsyncRequestAllOf1.initialize(this, columns, level);
        AdsAnalyticsCreateAsyncRequest.initialize(this, startDate, endDate, granularity, columns, level);
    }

    /**
     * Initializes the fields of this object.
     * This method is used by the constructors of any subclasses, in order to implement multiple inheritance (mix-ins).
     * Only for internal use.
     */
    static initialize(obj, startDate, endDate, granularity, columns, level) { 
        obj['start_date'] = startDate;
        obj['end_date'] = endDate;
        obj['granularity'] = granularity;
        obj['columns'] = columns;
        obj['level'] = level;
    }

    /**
     * Constructs a <code>AdsAnalyticsCreateAsyncRequest</code> from a plain JavaScript object, optionally creating a new instance.
     * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
     * @param {Object} data The plain JavaScript object bearing properties of interest.
     * @param {module:model/AdsAnalyticsCreateAsyncRequest} obj Optional instance to populate.
     * @return {module:model/AdsAnalyticsCreateAsyncRequest} The populated <code>AdsAnalyticsCreateAsyncRequest</code> instance.
     */
    static constructFromObject(data, obj) {
        if (data) {
            obj = obj || new AdsAnalyticsCreateAsyncRequest();
            AdsAnalyticsCreateAsyncRequestAllOf.constructFromObject(data, obj);
            AdsAnalyticsCreateAsyncRequestAllOf1.constructFromObject(data, obj);

            if (data.hasOwnProperty('start_date')) {
                obj['start_date'] = ApiClient.convertToType(data['start_date'], 'String');
            }
            if (data.hasOwnProperty('end_date')) {
                obj['end_date'] = ApiClient.convertToType(data['end_date'], 'String');
            }
            if (data.hasOwnProperty('granularity')) {
                obj['granularity'] = ApiClient.convertToType(data['granularity'], Granularity);
            }
            if (data.hasOwnProperty('click_window_days')) {
                obj['click_window_days'] = ApiClient.convertToType(data['click_window_days'], ConversionAttributionWindowDays);
            }
            if (data.hasOwnProperty('engagement_window_days')) {
                obj['engagement_window_days'] = ApiClient.convertToType(data['engagement_window_days'], ConversionAttributionWindowDays);
            }
            if (data.hasOwnProperty('view_window_days')) {
                obj['view_window_days'] = ApiClient.convertToType(data['view_window_days'], ConversionAttributionWindowDays);
            }
            if (data.hasOwnProperty('conversion_report_time')) {
                obj['conversion_report_time'] = ApiClient.convertToType(data['conversion_report_time'], ConversionReportTimeType);
            }
            if (data.hasOwnProperty('attribution_types')) {
                obj['attribution_types'] = ApiClient.convertToType(data['attribution_types'], [ConversionReportAttributionType]);
            }
            if (data.hasOwnProperty('columns')) {
                obj['columns'] = ApiClient.convertToType(data['columns'], [ReportingColumnAsync]);
            }
            if (data.hasOwnProperty('level')) {
                obj['level'] = ApiClient.convertToType(data['level'], MetricsReportingLevel);
            }
            if (data.hasOwnProperty('report_format')) {
                obj['report_format'] = ApiClient.convertToType(data['report_format'], DataOutputFormat);
            }
            if (data.hasOwnProperty('campaign_ids')) {
                obj['campaign_ids'] = ApiClient.convertToType(data['campaign_ids'], ['String']);
            }
            if (data.hasOwnProperty('campaign_statuses')) {
                obj['campaign_statuses'] = ApiClient.convertToType(data['campaign_statuses'], [CampaignSummaryStatus]);
            }
            if (data.hasOwnProperty('campaign_objective_types')) {
                obj['campaign_objective_types'] = ApiClient.convertToType(data['campaign_objective_types'], [ObjectiveType]);
            }
            if (data.hasOwnProperty('ad_group_ids')) {
                obj['ad_group_ids'] = ApiClient.convertToType(data['ad_group_ids'], ['String']);
            }
            if (data.hasOwnProperty('ad_group_statuses')) {
                obj['ad_group_statuses'] = ApiClient.convertToType(data['ad_group_statuses'], [AdGroupSummaryStatus]);
            }
            if (data.hasOwnProperty('ad_ids')) {
                obj['ad_ids'] = ApiClient.convertToType(data['ad_ids'], ['String']);
            }
            if (data.hasOwnProperty('ad_statuses')) {
                obj['ad_statuses'] = ApiClient.convertToType(data['ad_statuses'], [PinPromotionSummaryStatus]);
            }
            if (data.hasOwnProperty('product_group_ids')) {
                obj['product_group_ids'] = ApiClient.convertToType(data['product_group_ids'], ['String']);
            }
            if (data.hasOwnProperty('product_group_statuses')) {
                obj['product_group_statuses'] = ApiClient.convertToType(data['product_group_statuses'], [ProductGroupSummaryStatus]);
            }
            if (data.hasOwnProperty('product_item_ids')) {
                obj['product_item_ids'] = ApiClient.convertToType(data['product_item_ids'], ['String']);
            }
            if (data.hasOwnProperty('targeting_types')) {
                obj['targeting_types'] = ApiClient.convertToType(data['targeting_types'], [AdsAnalyticsTargetingType]);
            }
            if (data.hasOwnProperty('metrics_filters')) {
                obj['metrics_filters'] = ApiClient.convertToType(data['metrics_filters'], [AdsAnalyticsMetricsFilter]);
            }
        }
        return obj;
    }


}

/**
 * Metric report start date (UTC). Format: YYYY-MM-DD
 * @member {String} start_date
 */
AdsAnalyticsCreateAsyncRequest.prototype['start_date'] = undefined;

/**
 * Metric report end date (UTC). Format: YYYY-MM-DD
 * @member {String} end_date
 */
AdsAnalyticsCreateAsyncRequest.prototype['end_date'] = undefined;

/**
 * TOTAL - metrics are aggregated over the specified date range.<br> DAY - metrics are broken down daily.<br> HOUR - metrics are broken down hourly.<br>WEEKLY - metrics are broken down weekly.<br>MONTHLY - metrics are broken down monthly
 * @member {module:model/Granularity} granularity
 */
AdsAnalyticsCreateAsyncRequest.prototype['granularity'] = undefined;

/**
 * Number of days to use as the conversion attribution window for a pin click action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `30` days.
 * @member {module:model/ConversionAttributionWindowDays} click_window_days
 * @default 30
 */
AdsAnalyticsCreateAsyncRequest.prototype['click_window_days'] = 30;

/**
 * Number of days to use as the conversion attribution window for an engagement action. Engagements include saves, closeups, link clicks, and carousel card swipes. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `30` days.
 * @member {module:model/ConversionAttributionWindowDays} engagement_window_days
 * @default 30
 */
AdsAnalyticsCreateAsyncRequest.prototype['engagement_window_days'] = 30;

/**
 * Number of days to use as the conversion attribution window for a view action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `1` day.
 * @member {module:model/ConversionAttributionWindowDays} view_window_days
 * @default 1
 */
AdsAnalyticsCreateAsyncRequest.prototype['view_window_days'] = 1;

/**
 * The date by which the conversion metrics returned from this endpoint will be reported. There are two dates associated with a conversion event: the date that the user interacted with the ad, and the date that the user completed a conversion event.
 * @member {module:model/ConversionReportTimeType} conversion_report_time
 * @default 'TIME_OF_AD_ACTION'
 */
AdsAnalyticsCreateAsyncRequest.prototype['conversion_report_time'] = 'TIME_OF_AD_ACTION';

/**
 * List of types of attribution for the conversion report
 * @member {Array.<module:model/ConversionReportAttributionType>} attribution_types
 */
AdsAnalyticsCreateAsyncRequest.prototype['attribution_types'] = undefined;

/**
 * Metric and entity columns
 * @member {Array.<module:model/ReportingColumnAsync>} columns
 */
AdsAnalyticsCreateAsyncRequest.prototype['columns'] = undefined;

/**
 * Level of the report
 * @member {module:model/MetricsReportingLevel} level
 */
AdsAnalyticsCreateAsyncRequest.prototype['level'] = undefined;

/**
 * Specification for formatting report data
 * @member {module:model/DataOutputFormat} report_format
 * @default 'JSON'
 */
AdsAnalyticsCreateAsyncRequest.prototype['report_format'] = 'JSON';

/**
 * List of campaign ids
 * @member {Array.<String>} campaign_ids
 */
AdsAnalyticsCreateAsyncRequest.prototype['campaign_ids'] = undefined;

/**
 * List of status values for filtering
 * @member {Array.<module:model/CampaignSummaryStatus>} campaign_statuses
 */
AdsAnalyticsCreateAsyncRequest.prototype['campaign_statuses'] = undefined;

/**
 * List of values for filtering
 * @member {Array.<module:model/ObjectiveType>} campaign_objective_types
 */
AdsAnalyticsCreateAsyncRequest.prototype['campaign_objective_types'] = undefined;

/**
 * List of ad group ids
 * @member {Array.<String>} ad_group_ids
 */
AdsAnalyticsCreateAsyncRequest.prototype['ad_group_ids'] = undefined;

/**
 * List of values for filtering
 * @member {Array.<module:model/AdGroupSummaryStatus>} ad_group_statuses
 */
AdsAnalyticsCreateAsyncRequest.prototype['ad_group_statuses'] = undefined;

/**
 * List of ad ids
 * @member {Array.<String>} ad_ids
 */
AdsAnalyticsCreateAsyncRequest.prototype['ad_ids'] = undefined;

/**
 * List of values for filtering
 * @member {Array.<module:model/PinPromotionSummaryStatus>} ad_statuses
 */
AdsAnalyticsCreateAsyncRequest.prototype['ad_statuses'] = undefined;

/**
 * List of product group ids
 * @member {Array.<String>} product_group_ids
 */
AdsAnalyticsCreateAsyncRequest.prototype['product_group_ids'] = undefined;

/**
 * List of values for filtering
 * @member {Array.<module:model/ProductGroupSummaryStatus>} product_group_statuses
 */
AdsAnalyticsCreateAsyncRequest.prototype['product_group_statuses'] = undefined;

/**
 * List of product item ids
 * @member {Array.<String>} product_item_ids
 */
AdsAnalyticsCreateAsyncRequest.prototype['product_item_ids'] = undefined;

/**
 * List of targeting types
 * @member {Array.<module:model/AdsAnalyticsTargetingType>} targeting_types
 */
AdsAnalyticsCreateAsyncRequest.prototype['targeting_types'] = undefined;

/**
 * List of metrics filters
 * @member {Array.<module:model/AdsAnalyticsMetricsFilter>} metrics_filters
 */
AdsAnalyticsCreateAsyncRequest.prototype['metrics_filters'] = undefined;


// Implement AdsAnalyticsCreateAsyncRequestAllOf interface:
/**
 * Metric report start date (UTC). Format: YYYY-MM-DD
 * @member {String} start_date
 */
AdsAnalyticsCreateAsyncRequestAllOf.prototype['start_date'] = undefined;
/**
 * Metric report end date (UTC). Format: YYYY-MM-DD
 * @member {String} end_date
 */
AdsAnalyticsCreateAsyncRequestAllOf.prototype['end_date'] = undefined;
/**
 * TOTAL - metrics are aggregated over the specified date range.<br> DAY - metrics are broken down daily.<br> HOUR - metrics are broken down hourly.<br>WEEKLY - metrics are broken down weekly.<br>MONTHLY - metrics are broken down monthly
 * @member {module:model/Granularity} granularity
 */
AdsAnalyticsCreateAsyncRequestAllOf.prototype['granularity'] = undefined;
/**
 * Number of days to use as the conversion attribution window for a pin click action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `30` days.
 * @member {module:model/ConversionAttributionWindowDays} click_window_days
 * @default 30
 */
AdsAnalyticsCreateAsyncRequestAllOf.prototype['click_window_days'] = 30;
/**
 * Number of days to use as the conversion attribution window for an engagement action. Engagements include saves, closeups, link clicks, and carousel card swipes. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `30` days.
 * @member {module:model/ConversionAttributionWindowDays} engagement_window_days
 * @default 30
 */
AdsAnalyticsCreateAsyncRequestAllOf.prototype['engagement_window_days'] = 30;
/**
 * Number of days to use as the conversion attribution window for a view action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `1` day.
 * @member {module:model/ConversionAttributionWindowDays} view_window_days
 * @default 1
 */
AdsAnalyticsCreateAsyncRequestAllOf.prototype['view_window_days'] = 1;
/**
 * The date by which the conversion metrics returned from this endpoint will be reported. There are two dates associated with a conversion event: the date that the user interacted with the ad, and the date that the user completed a conversion event.
 * @member {module:model/ConversionReportTimeType} conversion_report_time
 * @default 'TIME_OF_AD_ACTION'
 */
AdsAnalyticsCreateAsyncRequestAllOf.prototype['conversion_report_time'] = 'TIME_OF_AD_ACTION';
/**
 * List of types of attribution for the conversion report
 * @member {Array.<module:model/ConversionReportAttributionType>} attribution_types
 */
AdsAnalyticsCreateAsyncRequestAllOf.prototype['attribution_types'] = undefined;
// Implement AdsAnalyticsCreateAsyncRequestAllOf1 interface:
/**
 * Metric and entity columns
 * @member {Array.<module:model/ReportingColumnAsync>} columns
 */
AdsAnalyticsCreateAsyncRequestAllOf1.prototype['columns'] = undefined;
/**
 * Level of the report
 * @member {module:model/MetricsReportingLevel} level
 */
AdsAnalyticsCreateAsyncRequestAllOf1.prototype['level'] = undefined;
/**
 * Specification for formatting report data
 * @member {module:model/DataOutputFormat} report_format
 * @default 'JSON'
 */
AdsAnalyticsCreateAsyncRequestAllOf1.prototype['report_format'] = 'JSON';




export default AdsAnalyticsCreateAsyncRequest;

