/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * OpenAPI spec version: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#pragma once

#include "OpenAPIBaseModel.h"
#include "OpenAPIAdAccountsApi.h"

#include "OpenAPIAdAccount.h"
#include "OpenAPIAdAccountAnalyticsResponseInner.h"
#include "OpenAPIAdAccountCreateRequest.h"
#include "OpenAPIAdAccountsList200Response.h"
#include "OpenAPIAdsAnalyticsCreateAsyncRequest.h"
#include "OpenAPIAdsAnalyticsCreateAsyncResponse.h"
#include "OpenAPIAdsAnalyticsGetAsyncResponse.h"
#include "OpenAPIAdsAnalyticsTargetingType.h"
#include "OpenAPIConversionReportAttributionType.h"
#include "OpenAPICreateMMMReportRequest.h"
#include "OpenAPICreateMMMReportResponse.h"
#include "OpenAPIError.h"
#include "OpenAPIGetMMMReportResponse.h"
#include "OpenAPIGranularity.h"
#include "OpenAPIMetricsResponse.h"
#include "OpenAPITemplatesList200Response.h"

namespace OpenAPI
{

/* Get targeting analytics for an ad account
 *
 * Get targeting analytics for an ad account. For the requested account and metrics, the response will include the requested metric information (e.g. SPEND_IN_DOLLAR) for the requested target type (e.g. \&quot;age_bucket\&quot;) for applicable values (e.g. \&quot;45-49\&quot;). &lt;p/&gt; - The token&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Analyst, Campaign Manager. - If granularity is not HOUR, the furthest back you can are allowed to pull data is 90 days before the current date in UTC time and the max time range supported is 90 days. - If granularity is HOUR, the furthest back you can are allowed to pull data is 8 days before the current date in UTC time and the max time range supported is 3 days.
*/
class OPENAPI_API OpenAPIAdAccountsApi::AdAccountTargetingAnalyticsGetRequest : public Request
{
public:
    virtual ~AdAccountTargetingAnalyticsGetRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Unique identifier of an ad account. */
	FString AdAccountId;
	/* Metric report start date (UTC). Format: YYYY-MM-DD. Cannot be more than 90 days back from today. */
	FDateTime StartDate;
	/* Metric report end date (UTC). Format: YYYY-MM-DD. Cannot be more than 90 days past start_date. */
	FDateTime EndDate;
	/* Targeting type breakdowns for the report. The reporting per targeting type <br> is independent from each other. */
	TArray<OpenAPIAdsAnalyticsTargetingType> TargetingTypes;
	enum class ColumnsEnum
	{
		SpendInMicroDollar,
		PaidImpression,
		SpendInDollar,
		CpcInMicroDollar,
		EcpcInMicroDollar,
		EcpcInDollar,
		Ctr,
		Ectr,
		CampaignName,
		PinId,
		TotalEngagement,
		ENGAGEMENT1,
		ENGAGEMENT2,
		EcpeInDollar,
		EngagementRate,
		EengagementRate,
		EcpmInMicroDollar,
		RepinRate,
		CTR2,
		CampaignId,
		AdvertiserId,
		AdAccountId,
		PinPromotionId,
		AdId,
		AdGroupId,
		CampaignEntityStatus,
		CampaignObjectiveType,
		CpmInMicroDollar,
		CpmInDollar,
		AdGroupEntityStatus,
		OrderLineId,
		OrderLineName,
		CLICKTHROUGH1,
		REPIN1,
		IMPRESSION1,
		IMPRESSION1GROSS,
		CLICKTHROUGH1GROSS,
		OUTBOUNDCLICK1,
		CLICKTHROUGH2,
		REPIN2,
		IMPRESSION2,
		OUTBOUNDCLICK2,
		TotalClickthrough,
		TotalImpression,
		TotalImpressionUser,
		TotalImpressionFrequency,
		CostPerOutboundClickInDollar,
		TotalEngagementSignup,
		TotalEngagementCheckout,
		TotalEngagementLead,
		TotalClickSignup,
		TotalClickCheckout,
		TotalClickAddToCart,
		TotalClickLead,
		TotalViewSignup,
		TotalViewCheckout,
		TotalViewAddToCart,
		TotalViewLead,
		TotalConversions,
		TotalEngagementSignupValueInMicroDollar,
		TotalEngagementCheckoutValueInMicroDollar,
		TotalClickSignupValueInMicroDollar,
		TotalClickCheckoutValueInMicroDollar,
		TotalViewSignupValueInMicroDollar,
		TotalViewCheckoutValueInMicroDollar,
		TotalWebSessions,
		WEBSESSIONS1,
		WEBSESSIONS2,
		CampaignLifetimeSpendCap,
		CampaignDailySpendCap,
		TotalPageVisit,
		TotalSignup,
		TotalCheckout,
		TotalCustom,
		TotalLead,
		TotalSignupValueInMicroDollar,
		TotalCheckoutValueInMicroDollar,
		TotalCustomValueInMicroDollar,
		PageVisitCostPerAction,
		PageVisitRoas,
		CheckoutRoas,
		CustomRoas,
		VIDEOMRCVIEWS1,
		VIDEO3SECVIEWS2,
		VIDEOP100COMPLETE2,
		VIDEOP0COMBINED2,
		VIDEOP25COMBINED2,
		VIDEOP50COMBINED2,
		VIDEOP75COMBINED2,
		VIDEOP95COMBINED2,
		VIDEOMRCVIEWS2,
		VideoLength,
		EcpvInDollar,
		EcpcvInDollar,
		ECPCVP95INDOLLAR,
		TOTALVIDEO3SECVIEWS,
		TOTALVIDEOP100COMPLETE,
		TOTALVIDEOP0COMBINED,
		TOTALVIDEOP25COMBINED,
		TOTALVIDEOP50COMBINED,
		TOTALVIDEOP75COMBINED,
		TOTALVIDEOP95COMBINED,
		TotalVideoMrcViews,
		TotalVideoAvgWatchtimeInSecond,
		TotalRepinRate,
		WebCheckoutCostPerAction,
		WebCheckoutRoas,
		TotalWebCheckout,
		TotalWebCheckoutValueInMicroDollar,
		TotalWebClickCheckout,
		TotalWebClickCheckoutValueInMicroDollar,
		TotalWebEngagementCheckout,
		TotalWebEngagementCheckoutValueInMicroDollar,
		TotalWebViewCheckout,
		TotalWebViewCheckoutValueInMicroDollar,
		InappCheckoutCostPerAction,
		TotalOfflineCheckout,
		IDEAPINPRODUCTTAGVISIT1,
		IDEAPINPRODUCTTAGVISIT2,
		TotalIdeaPinProductTagVisit,
		Leads,
		CostPerLead,
		QuizCompleted,
		QuizCompletionRate,
		ShowcasePinClickthrough,
		ShowcaseSubpageClickthrough,
		ShowcaseSubpinClickthrough,
		ShowcaseSubpageImpression,
		ShowcaseSubpinImpression,
		ShowcaseSubpageSwipeLeft,
		ShowcaseSubpageSwipeRight,
		ShowcaseSubpinSwipeLeft,
		ShowcaseSubpinSwipeRight,
		ShowcaseSubpageRepin,
		ShowcaseSubpinRepin,
		ShowcaseSubpageCloseup,
		ShowcaseCardThumbnailSwipeForward,
		ShowcaseCardThumbnailSwipeBackward,
		ShowcaseAverageSubpageCloseupPerSession,
		TotalCheckoutConversionRate,
		TotalViewCategoryConversionRate,
		TotalAddToCartConversionRate,
		TotalSignupConversionRate,
		TotalPageVisitConversionRate,
		TotalLeadConversionRate,
		TotalSearchConversionRate,
		TotalWatchVideoConversionRate,
		TotalUnknownConversionRate,
		TotalCustomConversionRate,
  	};

	static FString EnumToString(const ColumnsEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, ColumnsEnum& EnumValue);
	/* Columns to retrieve, encoded as a comma-separated string. **NOTE**: Any metrics defined as MICRO_DOLLARS returns a value based on the advertiser profile's currency field. For USD,($1/1,000,000, or $0.000001 - one one-ten-thousandth of a cent). it's microdollars. Otherwise, it's in microunits of the advertiser's currency.<br/>For example, if the advertiser's currency is GBP (British pound sterling), all MICRO_DOLLARS fields will be in GBP microunits (1/1,000,000 British pound).<br/>If a column has no value, it may not be returned */
	TArray<ColumnsEnum> Columns;
	/* TOTAL - metrics are aggregated over the specified date range.<br> DAY - metrics are broken down daily.<br> HOUR - metrics are broken down hourly.<br>WEEKLY - metrics are broken down weekly.<br>MONTHLY - metrics are broken down monthly */
	OpenAPIGranularity Granularity;
	enum class ClickWindowDaysEnum
	{
		_0,
		_1,
		_7,
		_14,
		_30,
		_60,
  	};

	static FString EnumToString(const ClickWindowDaysEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, ClickWindowDaysEnum& EnumValue);
	/* Number of days to use as the conversion attribution window for a pin click action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `30` days. */
	TOptional<ClickWindowDaysEnum> ClickWindowDays;
	enum class EngagementWindowDaysEnum
	{
		_0,
		_1,
		_7,
		_14,
		_30,
		_60,
  	};

	static FString EnumToString(const EngagementWindowDaysEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, EngagementWindowDaysEnum& EnumValue);
	/* Number of days to use as the conversion attribution window for an engagement action. Engagements include saves, closeups, link clicks, and carousel card swipes. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `30` days. */
	TOptional<EngagementWindowDaysEnum> EngagementWindowDays;
	enum class ViewWindowDaysEnum
	{
		_0,
		_1,
		_7,
		_14,
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

class OPENAPI_API OpenAPIAdAccountsApi::AdAccountTargetingAnalyticsGetResponse : public Response
{
public:
    virtual ~AdAccountTargetingAnalyticsGetResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIMetricsResponse Content;
};

/* Get ad account analytics
 *
 * Get analytics for the specified &lt;code&gt;ad_account_id&lt;/code&gt;, filtered by the specified options. - The token&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Analyst, Campaign Manager. - If granularity is not HOUR, the furthest back you can are allowed to pull data is 90 days before the current date in UTC time and the max time range supported is 90 days. - If granularity is HOUR, the furthest back you can are allowed to pull data is 8 days before the current date in UTC time.
*/
class OPENAPI_API OpenAPIAdAccountsApi::AdAccountAnalyticsRequest : public Request
{
public:
    virtual ~AdAccountAnalyticsRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Unique identifier of an ad account. */
	FString AdAccountId;
	/* Metric report start date (UTC). Format: YYYY-MM-DD. Cannot be more than 90 days back from today. */
	FDateTime StartDate;
	/* Metric report end date (UTC). Format: YYYY-MM-DD. Cannot be more than 90 days past start_date. */
	FDateTime EndDate;
	enum class ColumnsEnum
	{
		SpendInMicroDollar,
		PaidImpression,
		SpendInDollar,
		CpcInMicroDollar,
		EcpcInMicroDollar,
		EcpcInDollar,
		Ctr,
		Ectr,
		CampaignName,
		PinId,
		TotalEngagement,
		ENGAGEMENT1,
		ENGAGEMENT2,
		EcpeInDollar,
		EngagementRate,
		EengagementRate,
		EcpmInMicroDollar,
		RepinRate,
		CTR2,
		CampaignId,
		AdvertiserId,
		AdAccountId,
		PinPromotionId,
		AdId,
		AdGroupId,
		CampaignEntityStatus,
		CampaignObjectiveType,
		CpmInMicroDollar,
		CpmInDollar,
		AdGroupEntityStatus,
		OrderLineId,
		OrderLineName,
		CLICKTHROUGH1,
		REPIN1,
		IMPRESSION1,
		IMPRESSION1GROSS,
		CLICKTHROUGH1GROSS,
		OUTBOUNDCLICK1,
		CLICKTHROUGH2,
		REPIN2,
		IMPRESSION2,
		OUTBOUNDCLICK2,
		TotalClickthrough,
		TotalImpression,
		TotalImpressionUser,
		TotalImpressionFrequency,
		CostPerOutboundClickInDollar,
		TotalEngagementSignup,
		TotalEngagementCheckout,
		TotalEngagementLead,
		TotalClickSignup,
		TotalClickCheckout,
		TotalClickAddToCart,
		TotalClickLead,
		TotalViewSignup,
		TotalViewCheckout,
		TotalViewAddToCart,
		TotalViewLead,
		TotalConversions,
		TotalEngagementSignupValueInMicroDollar,
		TotalEngagementCheckoutValueInMicroDollar,
		TotalClickSignupValueInMicroDollar,
		TotalClickCheckoutValueInMicroDollar,
		TotalViewSignupValueInMicroDollar,
		TotalViewCheckoutValueInMicroDollar,
		TotalWebSessions,
		WEBSESSIONS1,
		WEBSESSIONS2,
		CampaignLifetimeSpendCap,
		CampaignDailySpendCap,
		TotalPageVisit,
		TotalSignup,
		TotalCheckout,
		TotalCustom,
		TotalLead,
		TotalSignupValueInMicroDollar,
		TotalCheckoutValueInMicroDollar,
		TotalCustomValueInMicroDollar,
		PageVisitCostPerAction,
		PageVisitRoas,
		CheckoutRoas,
		CustomRoas,
		VIDEOMRCVIEWS1,
		VIDEO3SECVIEWS2,
		VIDEOP100COMPLETE2,
		VIDEOP0COMBINED2,
		VIDEOP25COMBINED2,
		VIDEOP50COMBINED2,
		VIDEOP75COMBINED2,
		VIDEOP95COMBINED2,
		VIDEOMRCVIEWS2,
		VideoLength,
		EcpvInDollar,
		EcpcvInDollar,
		ECPCVP95INDOLLAR,
		TOTALVIDEO3SECVIEWS,
		TOTALVIDEOP100COMPLETE,
		TOTALVIDEOP0COMBINED,
		TOTALVIDEOP25COMBINED,
		TOTALVIDEOP50COMBINED,
		TOTALVIDEOP75COMBINED,
		TOTALVIDEOP95COMBINED,
		TotalVideoMrcViews,
		TotalVideoAvgWatchtimeInSecond,
		TotalRepinRate,
		WebCheckoutCostPerAction,
		WebCheckoutRoas,
		TotalWebCheckout,
		TotalWebCheckoutValueInMicroDollar,
		TotalWebClickCheckout,
		TotalWebClickCheckoutValueInMicroDollar,
		TotalWebEngagementCheckout,
		TotalWebEngagementCheckoutValueInMicroDollar,
		TotalWebViewCheckout,
		TotalWebViewCheckoutValueInMicroDollar,
		InappCheckoutCostPerAction,
		TotalOfflineCheckout,
		IDEAPINPRODUCTTAGVISIT1,
		IDEAPINPRODUCTTAGVISIT2,
		TotalIdeaPinProductTagVisit,
		Leads,
		CostPerLead,
		QuizCompleted,
		QuizCompletionRate,
		ShowcasePinClickthrough,
		ShowcaseSubpageClickthrough,
		ShowcaseSubpinClickthrough,
		ShowcaseSubpageImpression,
		ShowcaseSubpinImpression,
		ShowcaseSubpageSwipeLeft,
		ShowcaseSubpageSwipeRight,
		ShowcaseSubpinSwipeLeft,
		ShowcaseSubpinSwipeRight,
		ShowcaseSubpageRepin,
		ShowcaseSubpinRepin,
		ShowcaseSubpageCloseup,
		ShowcaseCardThumbnailSwipeForward,
		ShowcaseCardThumbnailSwipeBackward,
		ShowcaseAverageSubpageCloseupPerSession,
		TotalCheckoutConversionRate,
		TotalViewCategoryConversionRate,
		TotalAddToCartConversionRate,
		TotalSignupConversionRate,
		TotalPageVisitConversionRate,
		TotalLeadConversionRate,
		TotalSearchConversionRate,
		TotalWatchVideoConversionRate,
		TotalUnknownConversionRate,
		TotalCustomConversionRate,
  	};

	static FString EnumToString(const ColumnsEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, ColumnsEnum& EnumValue);
	/* Columns to retrieve, encoded as a comma-separated string. **NOTE**: Any metrics defined as MICRO_DOLLARS returns a value based on the advertiser profile's currency field. For USD,($1/1,000,000, or $0.000001 - one one-ten-thousandth of a cent). it's microdollars. Otherwise, it's in microunits of the advertiser's currency.<br/>For example, if the advertiser's currency is GBP (British pound sterling), all MICRO_DOLLARS fields will be in GBP microunits (1/1,000,000 British pound).<br/>If a column has no value, it may not be returned */
	TArray<ColumnsEnum> Columns;
	/* TOTAL - metrics are aggregated over the specified date range.<br> DAY - metrics are broken down daily.<br> HOUR - metrics are broken down hourly.<br>WEEKLY - metrics are broken down weekly.<br>MONTHLY - metrics are broken down monthly */
	OpenAPIGranularity Granularity;
	enum class ClickWindowDaysEnum
	{
		_0,
		_1,
		_7,
		_14,
		_30,
		_60,
  	};

	static FString EnumToString(const ClickWindowDaysEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, ClickWindowDaysEnum& EnumValue);
	/* Number of days to use as the conversion attribution window for a pin click action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `30` days. */
	TOptional<ClickWindowDaysEnum> ClickWindowDays;
	enum class EngagementWindowDaysEnum
	{
		_0,
		_1,
		_7,
		_14,
		_30,
		_60,
  	};

	static FString EnumToString(const EngagementWindowDaysEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, EngagementWindowDaysEnum& EnumValue);
	/* Number of days to use as the conversion attribution window for an engagement action. Engagements include saves, closeups, link clicks, and carousel card swipes. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to `30` days. */
	TOptional<EngagementWindowDaysEnum> EngagementWindowDays;
	enum class ViewWindowDaysEnum
	{
		_0,
		_1,
		_7,
		_14,
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

class OPENAPI_API OpenAPIAdAccountsApi::AdAccountAnalyticsResponse : public Response
{
public:
    virtual ~AdAccountAnalyticsResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    TArray<OpenAPIAdAccountAnalyticsResponseInner> Content;
};

/* Create ad account
 *
 * Create a new ad account. Different ad accounts can support different currencies, payment methods, etc. An ad account is needed to create campaigns, ad groups, and ads; other accounts (your employees or partners) can be assigned business access and appropriate roles to access an ad account. &lt;p/&gt; You can set up up to 50 ad accounts per user. (The user must have a business account to create an ad account.) &lt;p/&gt; For more, see &lt;a class&#x3D;\&quot;reference external\&quot; href&#x3D;\&quot;https://help.pinterest.com/en/business/article/create-an-advertiser-account\&quot;&gt;Create an advertiser account&lt;/a&gt;.
*/
class OPENAPI_API OpenAPIAdAccountsApi::AdAccountsCreateRequest : public Request
{
public:
    virtual ~AdAccountsCreateRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Ad account to create. */
	OpenAPIAdAccountCreateRequest OpenAPIAdAccountCreateRequest;
};

class OPENAPI_API OpenAPIAdAccountsApi::AdAccountsCreateResponse : public Response
{
public:
    virtual ~AdAccountsCreateResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAdAccount Content;
};

/* Get ad account
 *
 * Get an ad account
*/
class OPENAPI_API OpenAPIAdAccountsApi::AdAccountsGetRequest : public Request
{
public:
    virtual ~AdAccountsGetRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Unique identifier of an ad account. */
	FString AdAccountId;
};

class OPENAPI_API OpenAPIAdAccountsApi::AdAccountsGetResponse : public Response
{
public:
    virtual ~AdAccountsGetResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAdAccount Content;
};

/* List ad accounts
 *
 * Get a list of the ad_accounts that the \&quot;operation user_account\&quot; has access to. - This includes ad_accounts they own and ad_accounts that are owned by others who have granted them &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;.
*/
class OPENAPI_API OpenAPIAdAccountsApi::AdAccountsListRequest : public Request
{
public:
    virtual ~AdAccountsListRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Cursor used to fetch the next page of items */
	TOptional<FString> Bookmark;
	/* Maximum number of items to include in a single page of the response. See documentation on <a href='/docs/getting-started/pagination/'>Pagination</a> for more information. */
	TOptional<int32> PageSize;
	/* Include shared ad accounts */
	TOptional<bool> IncludeSharedAccounts;
};

class OPENAPI_API OpenAPIAdAccountsApi::AdAccountsListResponse : public Response
{
public:
    virtual ~AdAccountsListResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAdAccountsList200Response Content;
};

/* Create a request for a Marketing Mix Modeling (MMM) report
 *
 * This creates an asynchronous mmm report based on the given request. It returns a token that you can use to download the report when it is ready. NOTE: An additional limit of 5 queries per minute per advertiser applies to this endpoint while it&#39;s in beta release.
*/
class OPENAPI_API OpenAPIAdAccountsApi::AnalyticsCreateMmmReportRequest : public Request
{
public:
    virtual ~AnalyticsCreateMmmReportRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Unique identifier of an ad account. */
	FString AdAccountId;
	OpenAPICreateMMMReportRequest OpenAPICreateMMMReportRequest;
};

class OPENAPI_API OpenAPIAdAccountsApi::AnalyticsCreateMmmReportResponse : public Response
{
public:
    virtual ~AnalyticsCreateMmmReportResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPICreateMMMReportResponse Content;
};

/* Create async request for an account analytics report
 *
 * This returns a token that you can use to download the report when it is ready. Note that this endpoint requires the parameters to be passed as JSON-formatted in the request body. This endpoint does not support URL query parameters. - The token&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Analyst, Campaign Manager. - If granularity is not HOUR, the furthest back you can are allowed to pull data is 914 days before the current date in UTC time and the max time range supported is 186 days. - If granularity is HOUR, the furthest back you can are allowed to pull data is 8 days before the current date in UTC time and the max time range supported is 3 days. - If level is PRODUCT_ITEM, the furthest back you can are allowed to pull data is 92 days before the current date in UTC time and the max time range supported is 31 days. - If level is PRODUCT_ITEM, ad_ids and ad_statuses parameters are not allowed. Any columns related to pin promotion and ad is not allowed either.
*/
class OPENAPI_API OpenAPIAdAccountsApi::AnalyticsCreateReportRequest : public Request
{
public:
    virtual ~AnalyticsCreateReportRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Unique identifier of an ad account. */
	FString AdAccountId;
	OpenAPIAdsAnalyticsCreateAsyncRequest OpenAPIAdsAnalyticsCreateAsyncRequest;
};

class OPENAPI_API OpenAPIAdAccountsApi::AnalyticsCreateReportResponse : public Response
{
public:
    virtual ~AnalyticsCreateReportResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAdsAnalyticsCreateAsyncResponse Content;
};

/* Create async request for an analytics report using a template
 *
 * This takes a template ID and an optional custom timeframe and constructs an asynchronous report based on the template. It returns a token that you can use to download the report when it is ready.
*/
class OPENAPI_API OpenAPIAdAccountsApi::AnalyticsCreateTemplateReportRequest : public Request
{
public:
    virtual ~AnalyticsCreateTemplateReportRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Unique identifier of an ad account. */
	FString AdAccountId;
	/* Unique identifier of a template. */
	FString TemplateId;
	/* Metric report start date (UTC). Format: YYYY-MM-DD. Cannot be more than 2.5 years back from today. */
	TOptional<FDateTime> StartDate;
	/* Metric report end date (UTC). Format: YYYY-MM-DD. Cannot be more than 2.5 years past start date. */
	TOptional<FDateTime> EndDate;
	/* TOTAL - metrics are aggregated over the specified date range.<br> DAY - metrics are broken down daily.<br> HOUR - metrics are broken down hourly.<br>WEEKLY - metrics are broken down weekly.<br>MONTHLY - metrics are broken down monthly */
	TOptional<OpenAPIGranularity> Granularity;
};

class OPENAPI_API OpenAPIAdAccountsApi::AnalyticsCreateTemplateReportResponse : public Response
{
public:
    virtual ~AnalyticsCreateTemplateReportResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAdsAnalyticsCreateAsyncResponse Content;
};

/* Get advertiser Marketing Mix Modeling (MMM) report.
 *
 * Get an mmm report for an ad account. This returns a URL to an mmm metrics report given a token returned from the create mmm report endpoint.
*/
class OPENAPI_API OpenAPIAdAccountsApi::AnalyticsGetMmmReportRequest : public Request
{
public:
    virtual ~AnalyticsGetMmmReportRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Unique identifier of an ad account. */
	FString AdAccountId;
	/* Token returned from the post request creation call */
	FString Token;
};

class OPENAPI_API OpenAPIAdAccountsApi::AnalyticsGetMmmReportResponse : public Response
{
public:
    virtual ~AnalyticsGetMmmReportResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIGetMMMReportResponse Content;
};

/* Get the account analytics report created by the async call
 *
 * This returns a URL to an analytics report given a token returned from the post request report creation call. You can use the URL to download the report. The link is valid for five minutes and the report is valid for one hour. - The token&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Analyst, Campaign Manager.
*/
class OPENAPI_API OpenAPIAdAccountsApi::AnalyticsGetReportRequest : public Request
{
public:
    virtual ~AnalyticsGetReportRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Unique identifier of an ad account. */
	FString AdAccountId;
	/* Token returned from the post request creation call */
	FString Token;
};

class OPENAPI_API OpenAPIAdAccountsApi::AnalyticsGetReportResponse : public Response
{
public:
    virtual ~AnalyticsGetReportResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPIAdsAnalyticsGetAsyncResponse Content;
};

/* Delete ads data for ad account in API Sandbox
 *
 * Delete an ad account and all the ads data associated with that account.  A string message is returned indicating the status of the delete operation.  Note: This endpoint is only allowed in the Pinterest API Sandbox (https://api-sandbox.pinterest.com/v5).  Go to https://developers.pinterest.com/docs/dev-tools/sandbox/ for more information.
*/
class OPENAPI_API OpenAPIAdAccountsApi::SandboxDeleteRequest : public Request
{
public:
    virtual ~SandboxDeleteRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Unique identifier of an ad account. */
	FString AdAccountId;
};

class OPENAPI_API OpenAPIAdAccountsApi::SandboxDeleteResponse : public Response
{
public:
    virtual ~SandboxDeleteResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    FString Content;
};

/* List templates
 *
 * Gets all Templates associated with an ad account ID.
*/
class OPENAPI_API OpenAPIAdAccountsApi::TemplatesListRequest : public Request
{
public:
    virtual ~TemplatesListRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Unique identifier of an ad account. */
	FString AdAccountId;
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

class OPENAPI_API OpenAPIAdAccountsApi::TemplatesListResponse : public Response
{
public:
    virtual ~TemplatesListResponse() {}
	void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) final;
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;

    OpenAPITemplatesList200Response Content;
};

}
