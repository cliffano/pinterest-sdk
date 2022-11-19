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
#include "OpenAPIError.h"
#include "OpenAPIGranularity.h"
#include "OpenAPIMetricsResponse.h"

namespace OpenAPI
{

/* Get targeting analytics for an ad account
 *
 * Get targeting analytics for an ad account. For the requested account and metrics, the response will include the requested metric information (e.g. SPEND_IN_DOLLAR) for the requested target type (e.g. \&quot;age_bucket\&quot;) for applicable values (e.g. \&quot;45-49\&quot;). &lt;p/&gt; - The token&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Analyst, Campaign Manager.
*/
class OPENAPI_API OpenAPIAdAccountsApi::AdAccountTargetingAnalyticsGetRequest : public Request
{
public:
    virtual ~AdAccountTargetingAnalyticsGetRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Unique identifier of an ad account. */
	FString AdAccountId;
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
 * Get analytics for the specified &lt;code&gt;ad_account_id&lt;/code&gt;, filtered by the specified options. - The token&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Analyst, Campaign Manager.
*/
class OPENAPI_API OpenAPIAdAccountsApi::AdAccountAnalyticsRequest : public Request
{
public:
    virtual ~AdAccountAnalyticsRequest() {}
	void SetupHttpRequest(const FHttpRequestRef& HttpRequest) const final;
	FString ComputePath() const final;

	/* Unique identifier of an ad account. */
	FString AdAccountId;
	/* Metric report start date (UTC). Format: YYYY-MM-DD */
	FDateTime StartDate;
	/* Metric report end date (UTC). Format: YYYY-MM-DD */
	FDateTime EndDate;
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

/* Create async request for an account analytics report
 *
 * This returns a token that you can use to download the report when it is ready. Note that this endpoint requires the parameters to be passed as JSON-formatted in the request body. This endpoint does not support URL query parameters. - The token&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Analyst, Campaign Manager.
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

/* Get the account analytics report created by the async call
 *
 * This returns a URL to an analytics report given a token returned from the post request report creation call. You can use the URL to download the report and it&#39;s valid for an hour. - The token&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Analyst, Campaign Manager.
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

}
