/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.6.0
* Contact: blah+oapicf@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * AdAccountsApi.h
 *
 * 
 */

#ifndef AdAccountsApi_H_
#define AdAccountsApi_H_


#include "ApiBase.h"

#include <pistache/http.h>
#include <pistache/router.h>
#include <pistache/http_headers.h>

#include <optional>
#include <utility>

#include "AdAccount.h"
#include "AdAccountAnalyticsResponse_inner.h"
#include "AdAccountCreateRequest.h"
#include "Ad_accounts_list_200_response.h"
#include "AdsAnalyticsCreateAsyncRequest.h"
#include "AdsAnalyticsCreateAsyncResponse.h"
#include "AdsAnalyticsGetAsyncResponse.h"
#include "AdsAnalyticsTargetingType.h"
#include "ConversionReportAttributionType.h"
#include "Error.h"
#include "Granularity.h"
#include "MetricsResponse.h"
#include <string>
#include <vector>

namespace org::openapitools::server::api
{

class  AdAccountsApi : public ApiBase {
public:
    explicit AdAccountsApi(const std::shared_ptr<Pistache::Rest::Router>& rtr);
    ~AdAccountsApi() override = default;
    void init() override;

    static const std::string base;

private:
    void setupRoutes();

    void ad_account_targeting_analytics_get_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void ad_account_analytics_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void ad_accounts_create_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void ad_accounts_get_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void ad_accounts_list_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void analytics_create_report_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void analytics_get_report_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void ad_accounts_api_default_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);

    /// <summary>
    /// Helper function to handle unexpected Exceptions during Parameter parsing and validation.
    /// May be overridden to return custom error formats. This is called inside a catch block.
    /// Important: When overriding, do not call `throw ex;`, but instead use `throw;`.
    /// </summary>
    virtual std::pair<Pistache::Http::Code, std::string> handleParsingException(const std::exception& ex) const noexcept;

    /// <summary>
    /// Helper function to handle unexpected Exceptions during processing of the request in handler functions.
    /// May be overridden to return custom error formats. This is called inside a catch block.
    /// Important: When overriding, do not call `throw ex;`, but instead use `throw;`.
    /// </summary>
    virtual std::pair<Pistache::Http::Code, std::string> handleOperationException(const std::exception& ex) const noexcept;

    /// <summary>
    /// Get targeting analytics for an ad account
    /// </summary>
    /// <remarks>
    /// Get targeting analytics for an ad account. For the requested account and metrics, the response will include the requested metric information (e.g. SPEND_IN_DOLLAR) for the requested target type (e.g. \&quot;age_bucket\&quot;) for applicable values (e.g. \&quot;45-49\&quot;). &lt;p/&gt; - The token&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Analyst, Campaign Manager.
    /// </remarks>
    /// <param name="adAccountId">Unique identifier of an ad account.</param>
    /// <param name="startDate">Metric report start date (UTC). Format: YYYY-MM-DD</param>
    /// <param name="endDate">Metric report end date (UTC). Format: YYYY-MM-DD</param>
    /// <param name="targetingTypes">Targeting type breakdowns for the report. The reporting per targeting type &lt;br&gt; is independent from each other.</param>
    /// <param name="columns">Columns to retrieve, encoded as a comma-separated string. **NOTE**: Any metrics defined as MICRO_DOLLARS returns a value based on the advertiser profile&#39;s currency field. For USD,($1/1,000,000, or $0.000001 - one one-ten-thousandth of a cent). it&#39;s microdollars. Otherwise, it&#39;s in microunits of the advertiser&#39;s currency.&lt;br/&gt;For example, if the advertiser&#39;s currency is GBP (British pound sterling), all MICRO_DOLLARS fields will be in GBP microunits (1/1,000,000 British pound).&lt;br/&gt;If a column has no value, it may not be returned</param>
    /// <param name="granularity">TOTAL - metrics are aggregated over the specified date range.&lt;br&gt; DAY - metrics are broken down daily.&lt;br&gt; HOUR - metrics are broken down hourly.&lt;br&gt;WEEKLY - metrics are broken down weekly.&lt;br&gt;MONTHLY - metrics are broken down monthly</param>
    /// <param name="clickWindowDays">Number of days to use as the conversion attribution window for a pin click action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;30&#x60; days. (optional, default to 30)</param>
    /// <param name="engagementWindowDays">Number of days to use as the conversion attribution window for an engagement action. Engagements include saves, closeups, link clicks, and carousel card swipes. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;30&#x60; days. (optional, default to 30)</param>
    /// <param name="viewWindowDays">Number of days to use as the conversion attribution window for a view action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;1&#x60; day. (optional, default to 1)</param>
    /// <param name="conversionReportTime">The date by which the conversion metrics returned from this endpoint will be reported. There are two dates associated with a conversion event: the date that the user interacted with the ad, and the date that the user completed a conversion event. (optional, default to &quot;TIME_OF_AD_ACTION&quot;)</param>
    /// <param name="attributionTypes">List of types of attribution for the conversion report (optional, default to std::make_shared&lt;ConversionReportAttributionType&gt;())</param>
    virtual void ad_account_targeting_analytics_get(const std::string &adAccountId, const std::optional<std::string> &startDate, const std::optional<std::string> &endDate, const std::optional<std::vector<org::openapitools::server::model::AdsAnalyticsTargetingType>> &targetingTypes, const std::optional<std::vector<std::string>> &columns, const std::optional<Granularity> &granularity, const std::optional<int32_t> &clickWindowDays, const std::optional<int32_t> &engagementWindowDays, const std::optional<int32_t> &viewWindowDays, const std::optional<std::string> &conversionReportTime, const std::optional<ConversionReportAttributionType> &attributionTypes, Pistache::Http::ResponseWriter &response) = 0;
    /// <summary>
    /// Get ad account analytics
    /// </summary>
    /// <remarks>
    /// Get analytics for the specified &lt;code&gt;ad_account_id&lt;/code&gt;, filtered by the specified options. - The token&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Analyst, Campaign Manager.
    /// </remarks>
    /// <param name="adAccountId">Unique identifier of an ad account.</param>
    /// <param name="startDate">Metric report start date (UTC). Format: YYYY-MM-DD</param>
    /// <param name="endDate">Metric report end date (UTC). Format: YYYY-MM-DD</param>
    /// <param name="columns">Columns to retrieve, encoded as a comma-separated string. **NOTE**: Any metrics defined as MICRO_DOLLARS returns a value based on the advertiser profile&#39;s currency field. For USD,($1/1,000,000, or $0.000001 - one one-ten-thousandth of a cent). it&#39;s microdollars. Otherwise, it&#39;s in microunits of the advertiser&#39;s currency.&lt;br/&gt;For example, if the advertiser&#39;s currency is GBP (British pound sterling), all MICRO_DOLLARS fields will be in GBP microunits (1/1,000,000 British pound).&lt;br/&gt;If a column has no value, it may not be returned</param>
    /// <param name="granularity">TOTAL - metrics are aggregated over the specified date range.&lt;br&gt; DAY - metrics are broken down daily.&lt;br&gt; HOUR - metrics are broken down hourly.&lt;br&gt;WEEKLY - metrics are broken down weekly.&lt;br&gt;MONTHLY - metrics are broken down monthly</param>
    /// <param name="clickWindowDays">Number of days to use as the conversion attribution window for a pin click action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;30&#x60; days. (optional, default to 30)</param>
    /// <param name="engagementWindowDays">Number of days to use as the conversion attribution window for an engagement action. Engagements include saves, closeups, link clicks, and carousel card swipes. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;30&#x60; days. (optional, default to 30)</param>
    /// <param name="viewWindowDays">Number of days to use as the conversion attribution window for a view action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;1&#x60; day. (optional, default to 1)</param>
    /// <param name="conversionReportTime">The date by which the conversion metrics returned from this endpoint will be reported. There are two dates associated with a conversion event: the date that the user interacted with the ad, and the date that the user completed a conversion event. (optional, default to &quot;TIME_OF_AD_ACTION&quot;)</param>
    virtual void ad_account_analytics(const std::string &adAccountId, const std::optional<std::string> &startDate, const std::optional<std::string> &endDate, const std::optional<std::vector<std::string>> &columns, const std::optional<Granularity> &granularity, const std::optional<int32_t> &clickWindowDays, const std::optional<int32_t> &engagementWindowDays, const std::optional<int32_t> &viewWindowDays, const std::optional<std::string> &conversionReportTime, Pistache::Http::ResponseWriter &response) = 0;
    /// <summary>
    /// Create ad account
    /// </summary>
    /// <remarks>
    /// Create a new ad account. Different ad accounts can support different currencies, payment methods, etc. An ad account is needed to create campaigns, ad groups, and ads; other accounts (your employees or partners) can be assigned business access and appropriate roles to access an ad account. &lt;p/&gt; You can set up up to 50 ad accounts per user. (The user must have a business account to create an ad account.) &lt;p/&gt; For more, see &lt;a class&#x3D;\&quot;reference external\&quot; href&#x3D;\&quot;https://help.pinterest.com/en/business/article/create-an-advertiser-account\&quot;&gt;Create an advertiser account&lt;/a&gt;.
    /// </remarks>
    /// <param name="adAccountCreateRequest">Ad account to create.</param>
    virtual void ad_accounts_create(const org::openapitools::server::model::AdAccountCreateRequest &adAccountCreateRequest, Pistache::Http::ResponseWriter &response) = 0;
    /// <summary>
    /// Get ad account
    /// </summary>
    /// <remarks>
    /// Get an ad account
    /// </remarks>
    /// <param name="adAccountId">Unique identifier of an ad account.</param>
    virtual void ad_accounts_get(const std::string &adAccountId, Pistache::Http::ResponseWriter &response) = 0;
    /// <summary>
    /// List ad accounts
    /// </summary>
    /// <remarks>
    /// Get a list of the ad_accounts that the \&quot;operation user_account\&quot; has access to. - This includes ad_accounts they own and ad_accounts that are owned by others who have granted them &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;.
    /// </remarks>
    /// <param name="bookmark">Cursor used to fetch the next page of items (optional, default to &quot;&quot;)</param>
    /// <param name="pageSize">Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/getting-started/pagination/&#39;&gt;Pagination&lt;/a&gt; for more information. (optional, default to 25)</param>
    /// <param name="includeSharedAccounts">Include shared ad accounts (optional, default to true)</param>
    virtual void ad_accounts_list(const std::optional<std::string> &bookmark, const std::optional<int32_t> &pageSize, const std::optional<bool> &includeSharedAccounts, Pistache::Http::ResponseWriter &response) = 0;
    /// <summary>
    /// Create async request for an account analytics report
    /// </summary>
    /// <remarks>
    /// This returns a token that you can use to download the report when it is ready. Note that this endpoint requires the parameters to be passed as JSON-formatted in the request body. This endpoint does not support URL query parameters. - The token&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Analyst, Campaign Manager.
    /// </remarks>
    /// <param name="adAccountId">Unique identifier of an ad account.</param>
    /// <param name="adsAnalyticsCreateAsyncRequest"></param>
    virtual void analytics_create_report(const std::string &adAccountId, const org::openapitools::server::model::AdsAnalyticsCreateAsyncRequest &adsAnalyticsCreateAsyncRequest, Pistache::Http::ResponseWriter &response) = 0;
    /// <summary>
    /// Get the account analytics report created by the async call
    /// </summary>
    /// <remarks>
    /// This returns a URL to an analytics report given a token returned from the post request report creation call. You can use the URL to download the report and it&#39;s valid for an hour. - The token&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Analyst, Campaign Manager.
    /// </remarks>
    /// <param name="adAccountId">Unique identifier of an ad account.</param>
    /// <param name="token">Token returned from the post request creation call</param>
    virtual void analytics_get_report(const std::string &adAccountId, const std::optional<std::string> &token, Pistache::Http::ResponseWriter &response) = 0;

};

} // namespace org::openapitools::server::api

#endif /* AdAccountsApi_H_ */
