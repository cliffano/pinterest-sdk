/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * OpenAPI spec version: 5.6.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#pragma once

#include "OpenAPIBaseModel.h"
#include "OpenAPICampaignsApi.h"

#include "OpenAPIAdsAnalyticsTargetingType.h"
#include "OpenAPICampaignCreateRequest.h"
#include "OpenAPICampaignCreateResponse.h"
#include "OpenAPICampaignResponse.h"
#include "OpenAPICampaignUpdateRequest.h"
#include "OpenAPICampaignUpdateResponse.h"
#include "OpenAPICampaignsAnalyticsResponseInner.h"
#include "OpenAPICampaignsList200Response.h"
#include "OpenAPIConversionReportAttributionType.h"
#include "OpenAPIError.h"
#include "OpenAPIGranularity.h"
#include "OpenAPIMetricsResponse.h"

namespace OpenAPI
{

/* Get targeting analytics for campaigns
 *
 * Get targeting analytics for one or more campaigns. For the requested account and metrics, the response will include the requested metric information (e.g. SPEND_IN_DOLLAR) for the requested target type (e.g. \&quot;age_bucket\&quot;) for applicable values (e.g. \&quot;45-49\&quot;). &lt;p/&gt; - The token&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Analyst, Campaign Manager.
*/
class OPENAPI_API OpenAPICampaignsApi::CampaignTargetingAnalyticsGetRequest : public Request
{
public:
    virtual ~CampaignTargetingAnalyticsGetRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Unique identifier of an ad account. */
	FString AdAccountId;
	/* List of Campaign Ids to use to filter the results. */
	TArray<FString> CampaignIds;
	/* Metric report start date (UTC). Format: YYYY-MM-DD */
	FDateTime StartDate;
	/* Metric report end date (UTC). Format: YYYY-MM-DD */
	FDateTime EndDate;
	/* Targeting type breakdowns for the report. The reporting per targeting type <br> is independent from each other. */
	TArray<OpenAPIAdsAnalyticsTargetingType> TargetingTypes;
	enum class ColumnsEnum
	{
		AdvertiserId,
		PinPromotionId,
		AdAccountId,
		AdGroupEntityStatus,
		AdGroupId,
		AdId,
		CampaignDailySpendCap,
		CampaignEntityStatus,
		CampaignId,
		CampaignLifetimeSpendCap,
		CampaignName,
		CheckoutRoas,
		CLICKTHROUGH1,
		CLICKTHROUGH1GROSS,
		CLICKTHROUGH2,
		CpcInMicroDollar,
		CpmInDollar,
		CpmInMicroDollar,
		Ctr,
		CTR2,
		EcpcvInDollar,
		ECPCVP95INDOLLAR,
		EcpcInDollar,
		EcpcInMicroDollar,
		EcpeInDollar,
		EcpmInMicroDollar,
		EcpvInDollar,
		Ectr,
		EengagementRate,
		ENGAGEMENT1,
		ENGAGEMENT2,
		EngagementRate,
		IDEAPINPRODUCTTAGVISIT1,
		IDEAPINPRODUCTTAGVISIT2,
		IMPRESSION1,
		IMPRESSION1GROSS,
		IMPRESSION2,
		InappCheckoutCostPerAction,
		OUTBOUNDCLICK1,
		OUTBOUNDCLICK2,
		PageVisitCostPerAction,
		PageVisitRoas,
		PaidImpression,
		PinId,
		REPIN1,
		REPIN2,
		RepinRate,
		SpendInDollar,
		SpendInMicroDollar,
		TotalCheckout,
		TotalCheckoutValueInMicroDollar,
		TotalClickthrough,
		TotalClickAddToCart,
		TotalClickCheckout,
		TotalClickCheckoutValueInMicroDollar,
		TotalClickLead,
		TotalClickSignup,
		TotalClickSignupValueInMicroDollar,
		TotalConversions,
		TotalCustom,
		TotalEngagement,
		TotalEngagementCheckout,
		TotalEngagementCheckoutValueInMicroDollar,
		TotalEngagementLead,
		TotalEngagementSignup,
		TotalEngagementSignupValueInMicroDollar,
		TotalIdeaPinProductTagVisit,
		TotalImpressionFrequency,
		TotalImpressionUser,
		TotalLead,
		TotalOfflineCheckout,
		TotalPageVisit,
		TotalRepinRate,
		TotalSignup,
		TotalSignupValueInMicroDollar,
		TOTALVIDEO3SECVIEWS,
		TotalVideoAvgWatchtimeInSecond,
		TotalVideoMrcViews,
		TOTALVIDEOP0COMBINED,
		TOTALVIDEOP100COMPLETE,
		TOTALVIDEOP25COMBINED,
		TOTALVIDEOP50COMBINED,
		TOTALVIDEOP75COMBINED,
		TOTALVIDEOP95COMBINED,
		TotalViewAddToCart,
		TotalViewCheckout,
		TotalViewCheckoutValueInMicroDollar,
		TotalViewLead,
		TotalViewSignup,
		TotalViewSignupValueInMicroDollar,
		TotalWebCheckout,
		TotalWebCheckoutValueInMicroDollar,
		TotalWebClickCheckout,
		TotalWebClickCheckoutValueInMicroDollar,
		TotalWebEngagementCheckout,
		TotalWebEngagementCheckoutValueInMicroDollar,
		TotalWebSessions,
		TotalWebViewCheckout,
		TotalWebViewCheckoutValueInMicroDollar,
		VIDEO3SECVIEWS2,
		VideoLength,
		VIDEOMRCVIEWS2,
		VIDEOP0COMBINED2,
		VIDEOP100COMPLETE2,
		VIDEOP25COMBINED2,
		VIDEOP50COMBINED2,
		VIDEOP75COMBINED2,
		VIDEOP95COMBINED2,
		WebCheckoutCostPerAction,
		WebCheckoutRoas,
		WEBSESSIONS1,
		WEBSESSIONS2,
  	};

	static FString EnumToString(const ColumnsEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, ColumnsEnum& EnumValue);
	/* Columns to retrieve, encoded as a comma-separated string. **NOTE**: Any metrics defined as MICRO_DOLLARS returns a value based on the advertiser profile's currency field. For USD,($1/1,000,000, or $0.000001 - one one-ten-thousandth of a cent). it's microdollars. Otherwise, it's in microunits of the advertiser's currency.<br/>For example, if the advertiser's currency is GBP (British pound sterling), all MICRO_DOLLARS fields will be in GBP microunits (1/1,000,000 British pound).<br/>If a column has no value, it may not be returned */
	TArray<ColumnsEnum> Columns;
	/* TOTAL - metrics are aggregated over the specified date range.<br> DAY - metrics are broken down daily.<br> HOUR - metrics are broken down hourly.<br>WEEKLY - metrics are broken down weekly.<br>MONTHLY - metrics are broken down monthly */
	OpenAPIGranularity Granularity;
	enum class ClickWindowDaysEnum
	{
		_1,
		_7,
		_30,
		_60,
  	};

	static FString EnumToString(const ClickWindowDaysEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, ClickWindowDaysEnum& EnumValue);
	/* Number of days to use as the conversion attribution window for a pin click action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `30` days. */
	TOptional<ClickWindowDaysEnum> ClickWindowDays;
	enum class EngagementWindowDaysEnum
	{
		_1,
		_7,
		_30,
		_60,
  	};

	static FString EnumToString(const EngagementWindowDaysEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, EngagementWindowDaysEnum& EnumValue);
	/* Number of days to use as the conversion attribution window for an engagement action. Engagements include saves, closeups, link clicks, and carousel card swipes. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `30` days. */
	TOptional<EngagementWindowDaysEnum> EngagementWindowDays;
	enum class ViewWindowDaysEnum
	{
		_1,
		_7,
		_30,
		_60,
  	};

	static FString EnumToString(const ViewWindowDaysEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, ViewWindowDaysEnum& EnumValue);
	/* Number of days to use as the conversion attribution window for a view action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `1` day. */
	TOptional<ViewWindowDaysEnum> ViewWindowDays;
	enum class ConversionReportTimeEnum
	{
		AdAction,
		Conversion,
  	};

	static FString EnumToString(const ConversionReportTimeEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, ConversionReportTimeEnum& EnumValue);
	/* The date by which the conversion metrics returned from this endpoint will be reported. There are two dates associated with a conversion event: the date that the user interacted with the ad, and the date that the user completed a conversion event. */
	TOptional<ConversionReportTimeEnum> ConversionReportTime;
	/* List of types of attribution for the conversion report */
	TOptional<OpenAPIConversionReportAttributionType> AttributionTypes;
};

class OPENAPI_API OpenAPICampaignsApi::CampaignTargetingAnalyticsGetResponse : public Response
{
public:
    virtual ~CampaignTargetingAnalyticsGetResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIMetricsResponse Content;
};

/* Get campaign analytics
 *
 * Get analytics for the specified campaigns in the specified &lt;code&gt;ad_account_id&lt;/code&gt;, filtered by the specified options. - The token&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Analyst, Campaign Manager.
*/
class OPENAPI_API OpenAPICampaignsApi::CampaignsAnalyticsRequest : public Request
{
public:
    virtual ~CampaignsAnalyticsRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Unique identifier of an ad account. */
	FString AdAccountId;
	/* Metric report start date (UTC). Format: YYYY-MM-DD */
	FDateTime StartDate;
	/* Metric report end date (UTC). Format: YYYY-MM-DD */
	FDateTime EndDate;
	/* List of Campaign Ids to use to filter the results. */
	TArray<FString> CampaignIds;
	enum class ColumnsEnum
	{
		AdvertiserId,
		PinPromotionId,
		AdAccountId,
		AdGroupEntityStatus,
		AdGroupId,
		AdId,
		CampaignDailySpendCap,
		CampaignEntityStatus,
		CampaignId,
		CampaignLifetimeSpendCap,
		CampaignName,
		CheckoutRoas,
		CLICKTHROUGH1,
		CLICKTHROUGH1GROSS,
		CLICKTHROUGH2,
		CpcInMicroDollar,
		CpmInDollar,
		CpmInMicroDollar,
		Ctr,
		CTR2,
		EcpcvInDollar,
		ECPCVP95INDOLLAR,
		EcpcInDollar,
		EcpcInMicroDollar,
		EcpeInDollar,
		EcpmInMicroDollar,
		EcpvInDollar,
		Ectr,
		EengagementRate,
		ENGAGEMENT1,
		ENGAGEMENT2,
		EngagementRate,
		IDEAPINPRODUCTTAGVISIT1,
		IDEAPINPRODUCTTAGVISIT2,
		IMPRESSION1,
		IMPRESSION1GROSS,
		IMPRESSION2,
		InappCheckoutCostPerAction,
		OUTBOUNDCLICK1,
		OUTBOUNDCLICK2,
		PageVisitCostPerAction,
		PageVisitRoas,
		PaidImpression,
		PinId,
		REPIN1,
		REPIN2,
		RepinRate,
		SpendInDollar,
		SpendInMicroDollar,
		TotalCheckout,
		TotalCheckoutValueInMicroDollar,
		TotalClickthrough,
		TotalClickAddToCart,
		TotalClickCheckout,
		TotalClickCheckoutValueInMicroDollar,
		TotalClickLead,
		TotalClickSignup,
		TotalClickSignupValueInMicroDollar,
		TotalConversions,
		TotalCustom,
		TotalEngagement,
		TotalEngagementCheckout,
		TotalEngagementCheckoutValueInMicroDollar,
		TotalEngagementLead,
		TotalEngagementSignup,
		TotalEngagementSignupValueInMicroDollar,
		TotalIdeaPinProductTagVisit,
		TotalImpressionFrequency,
		TotalImpressionUser,
		TotalLead,
		TotalOfflineCheckout,
		TotalPageVisit,
		TotalRepinRate,
		TotalSignup,
		TotalSignupValueInMicroDollar,
		TOTALVIDEO3SECVIEWS,
		TotalVideoAvgWatchtimeInSecond,
		TotalVideoMrcViews,
		TOTALVIDEOP0COMBINED,
		TOTALVIDEOP100COMPLETE,
		TOTALVIDEOP25COMBINED,
		TOTALVIDEOP50COMBINED,
		TOTALVIDEOP75COMBINED,
		TOTALVIDEOP95COMBINED,
		TotalViewAddToCart,
		TotalViewCheckout,
		TotalViewCheckoutValueInMicroDollar,
		TotalViewLead,
		TotalViewSignup,
		TotalViewSignupValueInMicroDollar,
		TotalWebCheckout,
		TotalWebCheckoutValueInMicroDollar,
		TotalWebClickCheckout,
		TotalWebClickCheckoutValueInMicroDollar,
		TotalWebEngagementCheckout,
		TotalWebEngagementCheckoutValueInMicroDollar,
		TotalWebSessions,
		TotalWebViewCheckout,
		TotalWebViewCheckoutValueInMicroDollar,
		VIDEO3SECVIEWS2,
		VideoLength,
		VIDEOMRCVIEWS2,
		VIDEOP0COMBINED2,
		VIDEOP100COMPLETE2,
		VIDEOP25COMBINED2,
		VIDEOP50COMBINED2,
		VIDEOP75COMBINED2,
		VIDEOP95COMBINED2,
		WebCheckoutCostPerAction,
		WebCheckoutRoas,
		WEBSESSIONS1,
		WEBSESSIONS2,
  	};

	static FString EnumToString(const ColumnsEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, ColumnsEnum& EnumValue);
	/* Columns to retrieve, encoded as a comma-separated string. **NOTE**: Any metrics defined as MICRO_DOLLARS returns a value based on the advertiser profile's currency field. For USD,($1/1,000,000, or $0.000001 - one one-ten-thousandth of a cent). it's microdollars. Otherwise, it's in microunits of the advertiser's currency.<br/>For example, if the advertiser's currency is GBP (British pound sterling), all MICRO_DOLLARS fields will be in GBP microunits (1/1,000,000 British pound).<br/>If a column has no value, it may not be returned */
	TArray<ColumnsEnum> Columns;
	/* TOTAL - metrics are aggregated over the specified date range.<br> DAY - metrics are broken down daily.<br> HOUR - metrics are broken down hourly.<br>WEEKLY - metrics are broken down weekly.<br>MONTHLY - metrics are broken down monthly */
	OpenAPIGranularity Granularity;
	enum class ClickWindowDaysEnum
	{
		_1,
		_7,
		_30,
		_60,
  	};

	static FString EnumToString(const ClickWindowDaysEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, ClickWindowDaysEnum& EnumValue);
	/* Number of days to use as the conversion attribution window for a pin click action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `30` days. */
	TOptional<ClickWindowDaysEnum> ClickWindowDays;
	enum class EngagementWindowDaysEnum
	{
		_1,
		_7,
		_30,
		_60,
  	};

	static FString EnumToString(const EngagementWindowDaysEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, EngagementWindowDaysEnum& EnumValue);
	/* Number of days to use as the conversion attribution window for an engagement action. Engagements include saves, closeups, link clicks, and carousel card swipes. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `30` days. */
	TOptional<EngagementWindowDaysEnum> EngagementWindowDays;
	enum class ViewWindowDaysEnum
	{
		_1,
		_7,
		_30,
		_60,
  	};

	static FString EnumToString(const ViewWindowDaysEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, ViewWindowDaysEnum& EnumValue);
	/* Number of days to use as the conversion attribution window for a view action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `1` day. */
	TOptional<ViewWindowDaysEnum> ViewWindowDays;
	enum class ConversionReportTimeEnum
	{
		AdAction,
		Conversion,
  	};

	static FString EnumToString(const ConversionReportTimeEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, ConversionReportTimeEnum& EnumValue);
	/* The date by which the conversion metrics returned from this endpoint will be reported. There are two dates associated with a conversion event: the date that the user interacted with the ad, and the date that the user completed a conversion event. */
	TOptional<ConversionReportTimeEnum> ConversionReportTime;
};

class OPENAPI_API OpenAPICampaignsApi::CampaignsAnalyticsResponse : public Response
{
public:
    virtual ~CampaignsAnalyticsResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    TArray<OpenAPICampaignsAnalyticsResponseInner> Content;
};

/* Create campaigns
 *
 * Create multiple new campaigns. Every campaign has its own campaign_id and houses one or more ad groups, which contain one or more ads. For more, see &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/set-up-your-campaign/\&quot;&gt;Set up your campaign&lt;/a&gt;. &lt;p/&gt; &lt;strong&gt;Note:&lt;/strong&gt; - The values for &#39;lifetime_spend_cap&#39; and &#39;daily_spend_cap&#39; are microcurrency amounts based on the currency field set in the advertiser&#39;s profile. (e.g. USD) &lt;p/&gt; &lt;p&gt;Microcurrency is used to track very small transactions, based on the currency set in the advertiser’s profile.&lt;/p&gt; &lt;p&gt;A microcurrency unit is 10^(-6) of the standard unit of currency selected in the advertiser’s profile.&lt;/p&gt; &lt;p&gt;&lt;strong&gt;Equivalency equations&lt;/strong&gt;, using dollars as an example currency:&lt;/p&gt; &lt;ul&gt;   &lt;li&gt;$1 &#x3D; 1,000,000 microdollars&lt;/li&gt;   &lt;li&gt;1 microdollar &#x3D; $0.000001 &lt;/li&gt; &lt;/ul&gt; &lt;p&gt;&lt;strong&gt;To convert between currency and microcurrency&lt;/strong&gt;, using dollars as an example currency:&lt;/p&gt; &lt;ul&gt;   &lt;li&gt;To convert dollars to microdollars, mutiply dollars by 1,000,000&lt;/li&gt;   &lt;li&gt;To convert microdollars to dollars, divide microdollars by 1,000,000&lt;/li&gt; &lt;/ul&gt;
*/
class OPENAPI_API OpenAPICampaignsApi::CampaignsCreateRequest : public Request
{
public:
    virtual ~CampaignsCreateRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Unique identifier of an ad account. */
	FString AdAccountId;
	/* Array of campaigns. */
	TArray<OpenAPICampaignCreateRequest> OpenAPICampaignCreateRequest;
};

class OPENAPI_API OpenAPICampaignsApi::CampaignsCreateResponse : public Response
{
public:
    virtual ~CampaignsCreateResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPICampaignCreateResponse Content;
};

/* Get campaign
 *
 * Get a specific campaign given the campaign ID.
*/
class OPENAPI_API OpenAPICampaignsApi::CampaignsGetRequest : public Request
{
public:
    virtual ~CampaignsGetRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Unique identifier of an ad account. */
	FString AdAccountId;
	/* Campaign ID, must be associated with the ad account ID provided in the path. */
	FString CampaignId;
};

class OPENAPI_API OpenAPICampaignsApi::CampaignsGetResponse : public Response
{
public:
    virtual ~CampaignsGetResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPICampaignResponse Content;
};

/* List campaigns
 *
 * Get a list of the campaigns in the specified &lt;code&gt;ad_account_id&lt;/code&gt;, filtered by the specified options. - The token&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Analyst, Campaign Manager.
*/
class OPENAPI_API OpenAPICampaignsApi::CampaignsListRequest : public Request
{
public:
    virtual ~CampaignsListRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Unique identifier of an ad account. */
	FString AdAccountId;
	/* List of Campaign Ids to use to filter the results. */
	TOptional<TArray<FString>> CampaignIds;
	enum class EntityStatusesEnum
	{
		Active,
		Paused,
		Archived,
  	};

	static FString EnumToString(const EntityStatusesEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, EntityStatusesEnum& EnumValue);
	/* Entity status */
	TOptional<TArray<EntityStatusesEnum>> EntityStatuses;
	/* Maximum number of items to include in a single page of the response. See documentation on <a href='/docs/getting-started/pagination/'>Pagination</a> for more information. */
	TOptional<int32> PageSize;
	enum class OrderEnum
	{
		Ascending,
		Descending,
  	};

	static FString EnumToString(const OrderEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, OrderEnum& EnumValue);
	/* The order in which to sort the items returned: “ASCENDING” or “DESCENDING” by ID. Note that higher-value IDs are associated with more-recently added items. */
	TOptional<OrderEnum> Order;
	/* Cursor used to fetch the next page of items */
	TOptional<FString> Bookmark;
};

class OPENAPI_API OpenAPICampaignsApi::CampaignsListResponse : public Response
{
public:
    virtual ~CampaignsListResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPICampaignsList200Response Content;
};

/* Update campaigns
 *
 * Update multiple ad campaigns based on campaign_ids. &lt;p/&gt; &lt;strong&gt;Note:&lt;/strong&gt;&lt;p/&gt; - &lt;p&gt;The values for &#39;lifetime_spend_cap&#39; and &#39;daily_spend_cap&#39; are microcurrency amounts based on the currency field set in the advertiser&#39;s profile. (e.g. USD) &lt;p/&gt; &lt;p&gt;Microcurrency is used to track very small transactions, based on the currency set in the advertiser’s profile.&lt;/p&gt; &lt;p&gt;A microcurrency unit is 10^(-6) of the standard unit of currency selected in the advertiser’s profile.&lt;/p&gt; &lt;p&gt;&lt;strong&gt;Equivalency equations&lt;/strong&gt;, using dollars as an example currency:&lt;/p&gt; &lt;ul&gt;   &lt;li&gt;$1 &#x3D; 1,000,000 microdollars&lt;/li&gt;   &lt;li&gt;1 microdollar &#x3D; $0.000001 &lt;/li&gt; &lt;/ul&gt; &lt;p&gt;&lt;strong&gt;To convert between currency and microcurrency&lt;/strong&gt;, using dollars as an example currency:&lt;/p&gt; &lt;ul&gt;   &lt;li&gt;To convert dollars to microdollars, mutiply dollars by 1,000,000&lt;/li&gt;   &lt;li&gt;To convert microdollars to dollars, divide microdollars by 1,000,000&lt;/li&gt; &lt;/ul&gt;
*/
class OPENAPI_API OpenAPICampaignsApi::CampaignsUpdateRequest : public Request
{
public:
    virtual ~CampaignsUpdateRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Unique identifier of an ad account. */
	FString AdAccountId;
	/* Array of campaigns. */
	TArray<OpenAPICampaignUpdateRequest> OpenAPICampaignUpdateRequest;
};

class OPENAPI_API OpenAPICampaignsApi::CampaignsUpdateResponse : public Response
{
public:
    virtual ~CampaignsUpdateResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPICampaignUpdateResponse Content;
};

}
