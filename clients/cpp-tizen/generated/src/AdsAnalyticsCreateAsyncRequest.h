/*
 * AdsAnalyticsCreateAsyncRequest.h
 *
 * 
 */

#ifndef _AdsAnalyticsCreateAsyncRequest_H_
#define _AdsAnalyticsCreateAsyncRequest_H_


#include <string>
#include "AdGroupSummaryStatus.h"
#include "AdsAnalyticsCreateAsyncRequest_allOf.h"
#include "AdsAnalyticsCreateAsyncRequest_allOf_1.h"
#include "AdsAnalyticsMetricsFilter.h"
#include "AdsAnalyticsTargetingType.h"
#include "CampaignSummaryStatus.h"
#include "ConversionAttributionWindowDays.h"
#include "ConversionReportAttributionType.h"
#include "ConversionReportTimeType.h"
#include "DataOutputFormat.h"
#include "Granularity.h"
#include "MetricsReportingLevel.h"
#include "ObjectiveType.h"
#include "PinPromotionSummaryStatus.h"
#include "ProductGroupSummaryStatus.h"
#include "ReportingColumnAsync.h"
#include <list>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class AdsAnalyticsCreateAsyncRequest : public Object {
public:
	/*! \brief Constructor.
	 */
	AdsAnalyticsCreateAsyncRequest();
	AdsAnalyticsCreateAsyncRequest(char* str);

	/*! \brief Destructor.
	 */
	virtual ~AdsAnalyticsCreateAsyncRequest();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Metric report start date (UTC). Format: YYYY-MM-DD
	 */
	std::string getStartDate();

	/*! \brief Set Metric report start date (UTC). Format: YYYY-MM-DD
	 */
	void setStartDate(std::string  start_date);
	/*! \brief Get Metric report end date (UTC). Format: YYYY-MM-DD
	 */
	std::string getEndDate();

	/*! \brief Set Metric report end date (UTC). Format: YYYY-MM-DD
	 */
	void setEndDate(std::string  end_date);
	/*! \brief Get TOTAL - metrics are aggregated over the specified date range.<br> DAY - metrics are broken down daily.<br> HOUR - metrics are broken down hourly.<br>WEEKLY - metrics are broken down weekly.<br>MONTHLY - metrics are broken down monthly
	 */
	Granularity getGranularity();

	/*! \brief Set TOTAL - metrics are aggregated over the specified date range.<br> DAY - metrics are broken down daily.<br> HOUR - metrics are broken down hourly.<br>WEEKLY - metrics are broken down weekly.<br>MONTHLY - metrics are broken down monthly
	 */
	void setGranularity(Granularity  granularity);
	/*! \brief Get Number of days to use as the conversion attribution window for a pin click action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `30` days.
	 */
	ConversionAttributionWindowDays getClickWindowDays();

	/*! \brief Set Number of days to use as the conversion attribution window for a pin click action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `30` days.
	 */
	void setClickWindowDays(ConversionAttributionWindowDays  click_window_days);
	/*! \brief Get Number of days to use as the conversion attribution window for an engagement action. Engagements include saves, closeups, link clicks, and carousel card swipes. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `30` days.
	 */
	ConversionAttributionWindowDays getEngagementWindowDays();

	/*! \brief Set Number of days to use as the conversion attribution window for an engagement action. Engagements include saves, closeups, link clicks, and carousel card swipes. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `30` days.
	 */
	void setEngagementWindowDays(ConversionAttributionWindowDays  engagement_window_days);
	/*! \brief Get Number of days to use as the conversion attribution window for a view action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `1` day.
	 */
	ConversionAttributionWindowDays getViewWindowDays();

	/*! \brief Set Number of days to use as the conversion attribution window for a view action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `1` day.
	 */
	void setViewWindowDays(ConversionAttributionWindowDays  view_window_days);
	/*! \brief Get The date by which the conversion metrics returned from this endpoint will be reported. There are two dates associated with a conversion event: the date that the user interacted with the ad, and the date that the user completed a conversion event.
	 */
	ConversionReportTimeType getConversionReportTime();

	/*! \brief Set The date by which the conversion metrics returned from this endpoint will be reported. There are two dates associated with a conversion event: the date that the user interacted with the ad, and the date that the user completed a conversion event.
	 */
	void setConversionReportTime(ConversionReportTimeType  conversion_report_time);
	/*! \brief Get List of types of attribution for the conversion report
	 */
	std::list<ConversionReportAttributionType> getAttributionTypes();

	/*! \brief Set List of types of attribution for the conversion report
	 */
	void setAttributionTypes(std::list <ConversionReportAttributionType> attribution_types);
	/*! \brief Get Metric and entity columns
	 */
	std::list<ReportingColumnAsync> getColumns();

	/*! \brief Set Metric and entity columns
	 */
	void setColumns(std::list <ReportingColumnAsync> columns);
	/*! \brief Get Level of the report
	 */
	MetricsReportingLevel getLevel();

	/*! \brief Set Level of the report
	 */
	void setLevel(MetricsReportingLevel  level);
	/*! \brief Get Specification for formatting report data
	 */
	DataOutputFormat getReportFormat();

	/*! \brief Set Specification for formatting report data
	 */
	void setReportFormat(DataOutputFormat  report_format);
	/*! \brief Get List of campaign ids
	 */
	std::list<std::string> getCampaignIds();

	/*! \brief Set List of campaign ids
	 */
	void setCampaignIds(std::list <std::string> campaign_ids);
	/*! \brief Get List of status values for filtering
	 */
	std::list<CampaignSummaryStatus> getCampaignStatuses();

	/*! \brief Set List of status values for filtering
	 */
	void setCampaignStatuses(std::list <CampaignSummaryStatus> campaign_statuses);
	/*! \brief Get List of values for filtering
	 */
	std::list<ObjectiveType> getCampaignObjectiveTypes();

	/*! \brief Set List of values for filtering
	 */
	void setCampaignObjectiveTypes(std::list <ObjectiveType> campaign_objective_types);
	/*! \brief Get List of ad group ids
	 */
	std::list<std::string> getAdGroupIds();

	/*! \brief Set List of ad group ids
	 */
	void setAdGroupIds(std::list <std::string> ad_group_ids);
	/*! \brief Get List of values for filtering
	 */
	std::list<AdGroupSummaryStatus> getAdGroupStatuses();

	/*! \brief Set List of values for filtering
	 */
	void setAdGroupStatuses(std::list <AdGroupSummaryStatus> ad_group_statuses);
	/*! \brief Get List of ad ids
	 */
	std::list<std::string> getAdIds();

	/*! \brief Set List of ad ids
	 */
	void setAdIds(std::list <std::string> ad_ids);
	/*! \brief Get List of values for filtering
	 */
	std::list<PinPromotionSummaryStatus> getAdStatuses();

	/*! \brief Set List of values for filtering
	 */
	void setAdStatuses(std::list <PinPromotionSummaryStatus> ad_statuses);
	/*! \brief Get List of product group ids
	 */
	std::list<std::string> getProductGroupIds();

	/*! \brief Set List of product group ids
	 */
	void setProductGroupIds(std::list <std::string> product_group_ids);
	/*! \brief Get List of values for filtering
	 */
	std::list<ProductGroupSummaryStatus> getProductGroupStatuses();

	/*! \brief Set List of values for filtering
	 */
	void setProductGroupStatuses(std::list <ProductGroupSummaryStatus> product_group_statuses);
	/*! \brief Get List of product item ids
	 */
	std::list<std::string> getProductItemIds();

	/*! \brief Set List of product item ids
	 */
	void setProductItemIds(std::list <std::string> product_item_ids);
	/*! \brief Get List of targeting types
	 */
	std::list<AdsAnalyticsTargetingType> getTargetingTypes();

	/*! \brief Set List of targeting types
	 */
	void setTargetingTypes(std::list <AdsAnalyticsTargetingType> targeting_types);
	/*! \brief Get List of metrics filters
	 */
	std::list<AdsAnalyticsMetricsFilter> getMetricsFilters();

	/*! \brief Set List of metrics filters
	 */
	void setMetricsFilters(std::list <AdsAnalyticsMetricsFilter> metrics_filters);

private:
	std::string start_date;
	std::string end_date;
	Granularity granularity;
	ConversionAttributionWindowDays click_window_days;
	ConversionAttributionWindowDays engagement_window_days;
	ConversionAttributionWindowDays view_window_days;
	ConversionReportTimeType conversion_report_time;
	std::list <ConversionReportAttributionType>attribution_types;
	std::list <ReportingColumnAsync>columns;
	MetricsReportingLevel level;
	DataOutputFormat report_format;
	std::list <std::string>campaign_ids;
	std::list <CampaignSummaryStatus>campaign_statuses;
	std::list <ObjectiveType>campaign_objective_types;
	std::list <std::string>ad_group_ids;
	std::list <AdGroupSummaryStatus>ad_group_statuses;
	std::list <std::string>ad_ids;
	std::list <PinPromotionSummaryStatus>ad_statuses;
	std::list <std::string>product_group_ids;
	std::list <ProductGroupSummaryStatus>product_group_statuses;
	std::list <std::string>product_item_ids;
	std::list <AdsAnalyticsTargetingType>targeting_types;
	std::list <AdsAnalyticsMetricsFilter>metrics_filters;
	void __init();
	void __cleanup();

};
}
}

#endif /* _AdsAnalyticsCreateAsyncRequest_H_ */
