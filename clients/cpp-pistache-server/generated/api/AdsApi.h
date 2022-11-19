/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.6.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * AdsApi.h
 *
 * 
 */

#ifndef AdsApi_H_
#define AdsApi_H_


#include <pistache/http.h>
#include <pistache/router.h>
#include <pistache/http_headers.h>

#include <optional>
#include <utility>

#include "AdArrayResponse.h"
#include "AdCreateRequest.h"
#include "AdPreviewRequest.h"
#include "AdPreviewURLResponse.h"
#include "AdResponse.h"
#include "AdUpdateRequest.h"
#include "AdsAnalyticsResponse_inner.h"
#include "AdsAnalyticsTargetingType.h"
#include "Ads_list_200_response.h"
#include "ConversionReportAttributionType.h"
#include "Error.h"
#include "Granularity.h"
#include "MetricsResponse.h"
#include <string>
#include <vector>

namespace org::openapitools::server::api
{

class  AdsApi {
public:
    explicit AdsApi(const std::shared_ptr<Pistache::Rest::Router>& rtr);
    virtual ~AdsApi() = default;
    void init();

    static const std::string base;

private:
    void setupRoutes();

    void ad_previews_create_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void ad_targeting_analytics_get_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void ads_analytics_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void ads_create_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void ads_get_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void ads_list_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void ads_update_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void ads_api_default_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);

    const std::shared_ptr<Pistache::Rest::Router> router;

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
    /// Create ad preview with pin or image
    /// </summary>
    /// <remarks>
    /// Create an ad preview given an ad account ID and either an existing organic pin ID or the URL for an image to be used to create the Pin and the ad. &lt;p/&gt; If you are creating a preview from an existing Pin, that Pin must be promotable: that is, it must have a clickthrough link and meet other requirements. (See &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/promoted-pins-overview\&quot; target&#x3D;\&quot;_blank\&quot;&gt;Ads Overview&lt;/a&gt;.) &lt;p/&gt; You can view the returned preview URL on a webpage or iframe for 7 days, after which the URL expires.
    /// </remarks>
    /// <param name="adAccountId">Unique identifier of an ad account.</param>
    /// <param name="adPreviewRequest">Create ad preview with pin or image.</param>
    virtual void ad_previews_create(const std::string &adAccountId, const org::openapitools::server::model::AdPreviewRequest &adPreviewRequest, Pistache::Http::ResponseWriter &response) = 0;
    /// <summary>
    /// Get targeting analytics for ads
    /// </summary>
    /// <remarks>
    /// Get targeting analytics for one or more ads. For the requested ad(s) and metrics, the response will include the requested metric information (e.g. SPEND_IN_DOLLAR) for the requested target type (e.g. \&quot;age_bucket\&quot;) for applicable values (e.g. \&quot;45-49\&quot;). &lt;p/&gt; - The token&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Analyst, Campaign Manager.
    /// </remarks>
    /// <param name="adAccountId">Unique identifier of an ad account.</param>
    /// <param name="adIds">List of Ad Ids to use to filter the results.</param>
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
    virtual void ad_targeting_analytics_get(const std::string &adAccountId, const std::optional<std::vector<std::string>> &adIds, const std::optional<std::string> &startDate, const std::optional<std::string> &endDate, const std::optional<std::vector<org::openapitools::server::model::AdsAnalyticsTargetingType>> &targetingTypes, const std::optional<std::vector<std::string>> &columns, const std::optional<Granularity> &granularity, const std::optional<int32_t> &clickWindowDays, const std::optional<int32_t> &engagementWindowDays, const std::optional<int32_t> &viewWindowDays, const std::optional<std::string> &conversionReportTime, const std::optional<ConversionReportAttributionType> &attributionTypes, Pistache::Http::ResponseWriter &response) = 0;
    /// <summary>
    /// Get ad analytics
    /// </summary>
    /// <remarks>
    /// Get analytics for the specified ads in the specified &lt;code&gt;ad_account_id&lt;/code&gt;, filtered by the specified options. - The token&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Analyst, Campaign Manager.
    /// </remarks>
    /// <param name="adAccountId">Unique identifier of an ad account.</param>
    /// <param name="startDate">Metric report start date (UTC). Format: YYYY-MM-DD</param>
    /// <param name="endDate">Metric report end date (UTC). Format: YYYY-MM-DD</param>
    /// <param name="adIds">List of Ad Ids to use to filter the results.</param>
    /// <param name="columns">Columns to retrieve, encoded as a comma-separated string. **NOTE**: Any metrics defined as MICRO_DOLLARS returns a value based on the advertiser profile&#39;s currency field. For USD,($1/1,000,000, or $0.000001 - one one-ten-thousandth of a cent). it&#39;s microdollars. Otherwise, it&#39;s in microunits of the advertiser&#39;s currency.&lt;br/&gt;For example, if the advertiser&#39;s currency is GBP (British pound sterling), all MICRO_DOLLARS fields will be in GBP microunits (1/1,000,000 British pound).&lt;br/&gt;If a column has no value, it may not be returned</param>
    /// <param name="granularity">TOTAL - metrics are aggregated over the specified date range.&lt;br&gt; DAY - metrics are broken down daily.&lt;br&gt; HOUR - metrics are broken down hourly.&lt;br&gt;WEEKLY - metrics are broken down weekly.&lt;br&gt;MONTHLY - metrics are broken down monthly</param>
    /// <param name="clickWindowDays">Number of days to use as the conversion attribution window for a pin click action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;30&#x60; days. (optional, default to 30)</param>
    /// <param name="engagementWindowDays">Number of days to use as the conversion attribution window for an engagement action. Engagements include saves, closeups, link clicks, and carousel card swipes. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;30&#x60; days. (optional, default to 30)</param>
    /// <param name="viewWindowDays">Number of days to use as the conversion attribution window for a view action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;1&#x60; day. (optional, default to 1)</param>
    /// <param name="conversionReportTime">The date by which the conversion metrics returned from this endpoint will be reported. There are two dates associated with a conversion event: the date that the user interacted with the ad, and the date that the user completed a conversion event. (optional, default to &quot;TIME_OF_AD_ACTION&quot;)</param>
    virtual void ads_analytics(const std::string &adAccountId, const std::optional<std::string> &startDate, const std::optional<std::string> &endDate, const std::optional<std::vector<std::string>> &adIds, const std::optional<std::vector<std::string>> &columns, const std::optional<Granularity> &granularity, const std::optional<int32_t> &clickWindowDays, const std::optional<int32_t> &engagementWindowDays, const std::optional<int32_t> &viewWindowDays, const std::optional<std::string> &conversionReportTime, Pistache::Http::ResponseWriter &response) = 0;
    /// <summary>
    /// Create ads
    /// </summary>
    /// <remarks>
    /// Create multiple new ads. Request must contain ad_group_id, creative_type, and the source Pin pin_id.
    /// </remarks>
    /// <param name="adAccountId">Unique identifier of an ad account.</param>
    /// <param name="adCreateRequest">List of ads to create, size limit [1, 30].</param>
    virtual void ads_create(const std::string &adAccountId, const std::vector<org::openapitools::server::model::AdCreateRequest> &adCreateRequest, Pistache::Http::ResponseWriter &response) = 0;
    /// <summary>
    /// Get ad
    /// </summary>
    /// <remarks>
    /// Get a specific ad given the ad ID. If your pin is rejected, rejected_reasons will contain additional information from the Ad Review process. For more information about our policies and rejection reasons see the &lt;a href&#x3D;\&quot;https://www.pinterest.com/_/_/policy/advertising-guidelines/\&quot; target&#x3D;\&quot;_blank\&quot;&gt;Pinterest advertising standards&lt;/a&gt;.
    /// </remarks>
    /// <param name="adAccountId">Unique identifier of an ad account.</param>
    /// <param name="adId">Unique identifier of an ad.</param>
    virtual void ads_get(const std::string &adAccountId, const std::string &adId, Pistache::Http::ResponseWriter &response) = 0;
    /// <summary>
    /// List ads
    /// </summary>
    /// <remarks>
    /// List ads that meet the filters provided:   - Listed campaign ids or ad group ids or ad ids   - Listed entity statuses &lt;p/&gt; If no filter is provided, all ads in the ad account are returned. &lt;p/&gt; &lt;strong&gt;Note:&lt;/strong&gt;&lt;p/&gt; Provide only campaign_id or ad_group_id or ad_id. Do not provide more than one type. &lt;p/&gt; Review status is provided for each ad; if review_status is REJECTED, the rejected_reasons field will contain additional information. For more, see &lt;a href&#x3D;\&quot;https://policy.pinterest.com/en/advertising-guidelines\&quot;&gt;Pinterest advertising standards&lt;/a&gt;.
    /// </remarks>
    /// <param name="adAccountId">Unique identifier of an ad account.</param>
    /// <param name="campaignIds">List of Campaign Ids to use to filter the results. (optional, default to std::vector&lt;std::shared_ptr&lt;std::string&gt;&gt;())</param>
    /// <param name="adGroupIds">List of Ad group Ids to use to filter the results. (optional, default to std::vector&lt;std::shared_ptr&lt;std::string&gt;&gt;())</param>
    /// <param name="adIds">List of Ad Ids to use to filter the results. (optional, default to std::vector&lt;std::shared_ptr&lt;std::string&gt;&gt;())</param>
    /// <param name="entityStatuses">Entity status (optional, default to std::vector&lt;std::shared_ptr&lt;std::string&gt;&gt;())</param>
    /// <param name="pageSize">Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/getting-started/pagination/&#39;&gt;Pagination&lt;/a&gt; for more information. (optional, default to 25)</param>
    /// <param name="order">The order in which to sort the items returned: “ASCENDING” or “DESCENDING” by ID. Note that higher-value IDs are associated with more-recently added items. (optional, default to &quot;&quot;)</param>
    /// <param name="bookmark">Cursor used to fetch the next page of items (optional, default to &quot;&quot;)</param>
    virtual void ads_list(const std::string &adAccountId, const std::optional<std::vector<std::string>> &campaignIds, const std::optional<std::vector<std::string>> &adGroupIds, const std::optional<std::vector<std::string>> &adIds, const std::optional<std::vector<std::string>> &entityStatuses, const std::optional<int32_t> &pageSize, const std::optional<std::string> &order, const std::optional<std::string> &bookmark, Pistache::Http::ResponseWriter &response) = 0;
    /// <summary>
    /// Update ads
    /// </summary>
    /// <remarks>
    /// Update multiple existing ads
    /// </remarks>
    /// <param name="adAccountId">Unique identifier of an ad account.</param>
    /// <param name="adUpdateRequest">List of ads to update, size limit [1, 30]</param>
    virtual void ads_update(const std::string &adAccountId, const std::vector<org::openapitools::server::model::AdUpdateRequest> &adUpdateRequest, Pistache::Http::ResponseWriter &response) = 0;

};

} // namespace org::openapitools::server::api

#endif /* AdsApi_H_ */

