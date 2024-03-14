/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * OpenAPI spec version: 5.6.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#pragma once

#include "OpenAPIBaseModel.h"
#include "OpenAPIAdGroupSummaryStatus.h"
#include "OpenAPIAdsAnalyticsMetricsFilter.h"
#include "OpenAPIAdsAnalyticsTargetingType.h"
#include "OpenAPICampaignSummaryStatus.h"
#include "OpenAPIConversionAttributionWindowDays.h"
#include "OpenAPIConversionReportAttributionType.h"
#include "OpenAPIConversionReportTimeType.h"
#include "OpenAPIDataOutputFormat.h"
#include "OpenAPIGranularity.h"
#include "OpenAPIMetricsReportingLevel.h"
#include "OpenAPIObjectiveType.h"
#include "OpenAPIPinPromotionSummaryStatus.h"
#include "OpenAPIProductGroupSummaryStatus.h"
#include "OpenAPIReportingColumnAsync.h"

namespace OpenAPI
{

/*
 * OpenAPIAdsAnalyticsCreateAsyncRequest
 *
 * 
 */
class OPENAPI_API OpenAPIAdsAnalyticsCreateAsyncRequest : public Model
{
public:
    virtual ~OpenAPIAdsAnalyticsCreateAsyncRequest() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* Metric report start date (UTC). Format: YYYY-MM-DD */
	FString StartDate;
	/* Metric report end date (UTC). Format: YYYY-MM-DD */
	FString EndDate;
	/* TOTAL - metrics are aggregated over the specified date range.<br> DAY - metrics are broken down daily.<br> HOUR - metrics are broken down hourly.<br>WEEKLY - metrics are broken down weekly.<br>MONTHLY - metrics are broken down monthly */
	OpenAPIGranularity Granularity;
	/* Number of days to use as the conversion attribution window for a pin click action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `30` days. */
	TOptional<OpenAPIConversionAttributionWindowDays> ClickWindowDays;
	/* Number of days to use as the conversion attribution window for an engagement action. Engagements include saves, closeups, link clicks, and carousel card swipes. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `30` days. */
	TOptional<OpenAPIConversionAttributionWindowDays> EngagementWindowDays;
	/* Number of days to use as the conversion attribution window for a view action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `1` day. */
	TOptional<OpenAPIConversionAttributionWindowDays> ViewWindowDays;
	/* The date by which the conversion metrics returned from this endpoint will be reported. There are two dates associated with a conversion event: the date that the user interacted with the ad, and the date that the user completed a conversion event. */
	TOptional<OpenAPIConversionReportTimeType> ConversionReportTime;
	/* List of types of attribution for the conversion report */
	TOptional<TArray<OpenAPIConversionReportAttributionType>> AttributionTypes;
	/* List of campaign ids */
	TOptional<TArray<FString>> CampaignIds;
	/* List of status values for filtering */
	TOptional<TArray<OpenAPICampaignSummaryStatus>> CampaignStatuses;
	/* List of values for filtering. [\"WEB_SESSIONS\"] in BETA. */
	TOptional<TArray<OpenAPIObjectiveType>> CampaignObjectiveTypes;
	/* List of ad group ids */
	TOptional<TArray<FString>> AdGroupIds;
	/* List of values for filtering */
	TOptional<TArray<OpenAPIAdGroupSummaryStatus>> AdGroupStatuses;
	/* List of ad ids */
	TOptional<TArray<FString>> AdIds;
	/* List of values for filtering */
	TOptional<TArray<OpenAPIPinPromotionSummaryStatus>> AdStatuses;
	/* List of product group ids */
	TOptional<TArray<FString>> ProductGroupIds;
	/* List of values for filtering */
	TOptional<TArray<OpenAPIProductGroupSummaryStatus>> ProductGroupStatuses;
	/* List of product item ids */
	TOptional<TArray<FString>> ProductItemIds;
	/* List of targeting types */
	TOptional<TArray<OpenAPIAdsAnalyticsTargetingType>> TargetingTypes;
	/* List of metrics filters */
	TOptional<TArray<OpenAPIAdsAnalyticsMetricsFilter>> MetricsFilters;
	/* Metric and entity columns */
	TArray<OpenAPIReportingColumnAsync> Columns;
	/* Level of the report */
	OpenAPIMetricsReportingLevel Level;
	/* Specification for formatting report data */
	TOptional<OpenAPIDataOutputFormat> ReportFormat;
};

}
