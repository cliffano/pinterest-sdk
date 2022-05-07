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
*/
/*
 * AdsAnalyticsCreateAsyncRequest.h
 *
 * 
 */

#ifndef AdsAnalyticsCreateAsyncRequest_H_
#define AdsAnalyticsCreateAsyncRequest_H_


#include "ConversionReportTimeType.h"
#include "ConversionReportAttributionType.h"
#include <string>
#include "AdsAnalyticsCreateAsyncRequest_allOf_1.h"
#include "PinPromotionSummaryStatus.h"
#include "ReportingColumnAsync.h"
#include "MetricsReportingLevel.h"
#include <vector>
#include "AdsAnalyticsMetricsFilter.h"
#include "Granularity.h"
#include "AdsAnalyticsTargetingType.h"
#include "ProductGroupSummaryStatus.h"
#include "AdsAnalyticsCreateAsyncRequest_allOf.h"
#include "CampaignSummaryStatus.h"
#include "DataOutputFormat.h"
#include "ObjectiveType.h"
#include "AdGroupSummaryStatus.h"
#include "ConversionAttributionWindowDays.h"
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  AdsAnalyticsCreateAsyncRequest
{
public:
    AdsAnalyticsCreateAsyncRequest();
    virtual ~AdsAnalyticsCreateAsyncRequest() = default;


    /// <summary>
    /// Validate the current data in the model. Throws a ValidationException on failure.
    /// </summary>
    void validate() const;

    /// <summary>
    /// Validate the current data in the model. Returns false on error and writes an error
    /// message into the given stringstream.
    /// </summary>
    bool validate(std::stringstream& msg) const;

    /// <summary>
    /// Helper overload for validate. Used when one model stores another model and calls it's validate.
    /// Not meant to be called outside that case.
    /// </summary>
    bool validate(std::stringstream& msg, const std::string& pathPrefix) const;

    bool operator==(const AdsAnalyticsCreateAsyncRequest& rhs) const;
    bool operator!=(const AdsAnalyticsCreateAsyncRequest& rhs) const;

    /////////////////////////////////////////////
    /// AdsAnalyticsCreateAsyncRequest members

    /// <summary>
    /// Metric report start date (UTC). Format: YYYY-MM-DD
    /// </summary>
    std::string getStartDate() const;
    void setStartDate(std::string const& value);
    /// <summary>
    /// Metric report end date (UTC). Format: YYYY-MM-DD
    /// </summary>
    std::string getEndDate() const;
    void setEndDate(std::string const& value);
    /// <summary>
    /// TOTAL - metrics are aggregated over the specified date range.&lt;br&gt; DAY - metrics are broken down daily.&lt;br&gt; HOUR - metrics are broken down hourly.&lt;br&gt;WEEKLY - metrics are broken down weekly.&lt;br&gt;MONTHLY - metrics are broken down monthly
    /// </summary>
    Granularity getGranularity() const;
    void setGranularity(Granularity const& value);
    /// <summary>
    /// Number of days to use as the conversion attribution window for a pin click action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;30&#x60; days.
    /// </summary>
    ConversionAttributionWindowDays getClickWindowDays() const;
    void setClickWindowDays(ConversionAttributionWindowDays const& value);
    bool clickWindowDaysIsSet() const;
    void unsetClick_window_days();
    /// <summary>
    /// Number of days to use as the conversion attribution window for an engagement action. Engagements include saves, closeups, link clicks, and carousel card swipes. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;30&#x60; days.
    /// </summary>
    ConversionAttributionWindowDays getEngagementWindowDays() const;
    void setEngagementWindowDays(ConversionAttributionWindowDays const& value);
    bool engagementWindowDaysIsSet() const;
    void unsetEngagement_window_days();
    /// <summary>
    /// Number of days to use as the conversion attribution window for a view action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;1&#x60; day.
    /// </summary>
    ConversionAttributionWindowDays getViewWindowDays() const;
    void setViewWindowDays(ConversionAttributionWindowDays const& value);
    bool viewWindowDaysIsSet() const;
    void unsetView_window_days();
    /// <summary>
    /// The date by which the conversion metrics returned from this endpoint will be reported. There are two dates associated with a conversion event: the date that the user interacted with the ad, and the date that the user completed a conversion event.
    /// </summary>
    ConversionReportTimeType getConversionReportTime() const;
    void setConversionReportTime(ConversionReportTimeType const& value);
    bool conversionReportTimeIsSet() const;
    void unsetConversion_report_time();
    /// <summary>
    /// List of types of attribution for the conversion report
    /// </summary>
    std::vector<ConversionReportAttributionType> getAttributionTypes() const;
    void setAttributionTypes(std::vector<ConversionReportAttributionType> const& value);
    bool attributionTypesIsSet() const;
    void unsetAttribution_types();
    /// <summary>
    /// Metric and entity columns
    /// </summary>
    std::vector<ReportingColumnAsync> getColumns() const;
    void setColumns(std::vector<ReportingColumnAsync> const& value);
    /// <summary>
    /// Level of the report
    /// </summary>
    MetricsReportingLevel getLevel() const;
    void setLevel(MetricsReportingLevel const& value);
    /// <summary>
    /// Specification for formatting report data
    /// </summary>
    DataOutputFormat getReportFormat() const;
    void setReportFormat(DataOutputFormat const& value);
    bool reportFormatIsSet() const;
    void unsetReport_format();
    /// <summary>
    /// List of campaign ids
    /// </summary>
    std::vector<std::string> getCampaignIds() const;
    void setCampaignIds(std::vector<std::string> const& value);
    bool campaignIdsIsSet() const;
    void unsetCampaign_ids();
    /// <summary>
    /// List of status values for filtering
    /// </summary>
    std::vector<CampaignSummaryStatus> getCampaignStatuses() const;
    void setCampaignStatuses(std::vector<CampaignSummaryStatus> const& value);
    bool campaignStatusesIsSet() const;
    void unsetCampaign_statuses();
    /// <summary>
    /// List of values for filtering
    /// </summary>
    std::vector<ObjectiveType> getCampaignObjectiveTypes() const;
    void setCampaignObjectiveTypes(std::vector<ObjectiveType> const& value);
    bool campaignObjectiveTypesIsSet() const;
    void unsetCampaign_objective_types();
    /// <summary>
    /// List of ad group ids
    /// </summary>
    std::vector<std::string> getAdGroupIds() const;
    void setAdGroupIds(std::vector<std::string> const& value);
    bool adGroupIdsIsSet() const;
    void unsetAd_group_ids();
    /// <summary>
    /// List of values for filtering
    /// </summary>
    std::vector<AdGroupSummaryStatus> getAdGroupStatuses() const;
    void setAdGroupStatuses(std::vector<AdGroupSummaryStatus> const& value);
    bool adGroupStatusesIsSet() const;
    void unsetAd_group_statuses();
    /// <summary>
    /// List of ad ids
    /// </summary>
    std::vector<std::string> getAdIds() const;
    void setAdIds(std::vector<std::string> const& value);
    bool adIdsIsSet() const;
    void unsetAd_ids();
    /// <summary>
    /// List of values for filtering
    /// </summary>
    std::vector<PinPromotionSummaryStatus> getAdStatuses() const;
    void setAdStatuses(std::vector<PinPromotionSummaryStatus> const& value);
    bool adStatusesIsSet() const;
    void unsetAd_statuses();
    /// <summary>
    /// List of product group ids
    /// </summary>
    std::vector<std::string> getProductGroupIds() const;
    void setProductGroupIds(std::vector<std::string> const& value);
    bool productGroupIdsIsSet() const;
    void unsetProduct_group_ids();
    /// <summary>
    /// List of values for filtering
    /// </summary>
    std::vector<ProductGroupSummaryStatus> getProductGroupStatuses() const;
    void setProductGroupStatuses(std::vector<ProductGroupSummaryStatus> const& value);
    bool productGroupStatusesIsSet() const;
    void unsetProduct_group_statuses();
    /// <summary>
    /// List of product item ids
    /// </summary>
    std::vector<std::string> getProductItemIds() const;
    void setProductItemIds(std::vector<std::string> const& value);
    bool productItemIdsIsSet() const;
    void unsetProduct_item_ids();
    /// <summary>
    /// List of targeting types
    /// </summary>
    std::vector<AdsAnalyticsTargetingType> getTargetingTypes() const;
    void setTargetingTypes(std::vector<AdsAnalyticsTargetingType> const& value);
    bool targetingTypesIsSet() const;
    void unsetTargeting_types();
    /// <summary>
    /// List of metrics filters
    /// </summary>
    std::vector<AdsAnalyticsMetricsFilter> getMetricsFilters() const;
    void setMetricsFilters(std::vector<AdsAnalyticsMetricsFilter> const& value);
    bool metricsFiltersIsSet() const;
    void unsetMetrics_filters();

    friend void to_json(nlohmann::json& j, const AdsAnalyticsCreateAsyncRequest& o);
    friend void from_json(const nlohmann::json& j, AdsAnalyticsCreateAsyncRequest& o);
protected:
    std::string m_Start_date;

    std::string m_End_date;

    Granularity m_Granularity;

    ConversionAttributionWindowDays m_Click_window_days;
    bool m_Click_window_daysIsSet;
    ConversionAttributionWindowDays m_Engagement_window_days;
    bool m_Engagement_window_daysIsSet;
    ConversionAttributionWindowDays m_View_window_days;
    bool m_View_window_daysIsSet;
    ConversionReportTimeType m_Conversion_report_time;
    bool m_Conversion_report_timeIsSet;
    std::vector<ConversionReportAttributionType> m_Attribution_types;
    bool m_Attribution_typesIsSet;
    std::vector<ReportingColumnAsync> m_Columns;

    MetricsReportingLevel m_Level;

    DataOutputFormat m_Report_format;
    bool m_Report_formatIsSet;
    std::vector<std::string> m_Campaign_ids;
    bool m_Campaign_idsIsSet;
    std::vector<CampaignSummaryStatus> m_Campaign_statuses;
    bool m_Campaign_statusesIsSet;
    std::vector<ObjectiveType> m_Campaign_objective_types;
    bool m_Campaign_objective_typesIsSet;
    std::vector<std::string> m_Ad_group_ids;
    bool m_Ad_group_idsIsSet;
    std::vector<AdGroupSummaryStatus> m_Ad_group_statuses;
    bool m_Ad_group_statusesIsSet;
    std::vector<std::string> m_Ad_ids;
    bool m_Ad_idsIsSet;
    std::vector<PinPromotionSummaryStatus> m_Ad_statuses;
    bool m_Ad_statusesIsSet;
    std::vector<std::string> m_Product_group_ids;
    bool m_Product_group_idsIsSet;
    std::vector<ProductGroupSummaryStatus> m_Product_group_statuses;
    bool m_Product_group_statusesIsSet;
    std::vector<std::string> m_Product_item_ids;
    bool m_Product_item_idsIsSet;
    std::vector<AdsAnalyticsTargetingType> m_Targeting_types;
    bool m_Targeting_typesIsSet;
    std::vector<AdsAnalyticsMetricsFilter> m_Metrics_filters;
    bool m_Metrics_filtersIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* AdsAnalyticsCreateAsyncRequest_H_ */
