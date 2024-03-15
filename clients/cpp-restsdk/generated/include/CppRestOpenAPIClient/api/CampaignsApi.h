/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * CampaignsApi.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_API_CampaignsApi_H_
#define ORG_OPENAPITOOLS_CLIENT_API_CampaignsApi_H_



#include "CppRestOpenAPIClient/ApiClient.h"

#include "CppRestOpenAPIClient/model/AdsAnalyticsTargetingType.h"
#include "CppRestOpenAPIClient/model/CampaignCreateRequest.h"
#include "CppRestOpenAPIClient/model/CampaignCreateResponse.h"
#include "CppRestOpenAPIClient/model/CampaignResponse.h"
#include "CppRestOpenAPIClient/model/CampaignUpdateRequest.h"
#include "CppRestOpenAPIClient/model/CampaignUpdateResponse.h"
#include "CppRestOpenAPIClient/model/CampaignsAnalyticsResponse_inner.h"
#include "CppRestOpenAPIClient/model/Campaigns_list_200_response.h"
#include "CppRestOpenAPIClient/model/ConversionReportAttributionType.h"
#include "CppRestOpenAPIClient/model/Error.h"
#include "CppRestOpenAPIClient/model/Granularity.h"
#include "CppRestOpenAPIClient/model/MetricsResponse.h"
#include <vector>
#include <cpprest/details/basic_types.h>
#include <boost/optional.hpp>

namespace org {
namespace openapitools {
namespace client {
namespace api {

using namespace org::openapitools::client::model;



class  CampaignsApi 
{
public:

    explicit CampaignsApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~CampaignsApi();

    /// <summary>
    /// Get targeting analytics for campaigns
    /// </summary>
    /// <remarks>
    /// Get targeting analytics for one or more campaigns. For the requested account and metrics, the response will include the requested metric information (e.g. SPEND_IN_DOLLAR) for the requested target type (e.g. \&quot;age_bucket\&quot;) for applicable values (e.g. \&quot;45-49\&quot;). &lt;p/&gt; - The token&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Analyst, Campaign Manager. - If granularity is not HOUR, the furthest back you can are allowed to pull data is 90 days before the current date in UTC time and the max time range supported is 90 days. - If granularity is HOUR, the furthest back you can are allowed to pull data is 8 days before the current date in UTC time and the max time range supported is 3 days.
    /// </remarks>
    /// <param name="adAccountId">Unique identifier of an ad account.</param>
    /// <param name="campaignIds">List of Campaign Ids to use to filter the results.</param>
    /// <param name="startDate">Metric report start date (UTC). Format: YYYY-MM-DD. Cannot be more than 90 days back from today.</param>
    /// <param name="endDate">Metric report end date (UTC). Format: YYYY-MM-DD. Cannot be more than 90 days past start_date.</param>
    /// <param name="targetingTypes">Targeting type breakdowns for the report. The reporting per targeting type &lt;br&gt; is independent from each other.</param>
    /// <param name="columns">Columns to retrieve, encoded as a comma-separated string. **NOTE**: Any metrics defined as MICRO_DOLLARS returns a value based on the advertiser profile&#39;s currency field. For USD,($1/1,000,000, or $0.000001 - one one-ten-thousandth of a cent). it&#39;s microdollars. Otherwise, it&#39;s in microunits of the advertiser&#39;s currency.&lt;br/&gt;For example, if the advertiser&#39;s currency is GBP (British pound sterling), all MICRO_DOLLARS fields will be in GBP microunits (1/1,000,000 British pound).&lt;br/&gt;If a column has no value, it may not be returned</param>
    /// <param name="granularity">TOTAL - metrics are aggregated over the specified date range.&lt;br&gt; DAY - metrics are broken down daily.&lt;br&gt; HOUR - metrics are broken down hourly.&lt;br&gt;WEEKLY - metrics are broken down weekly.&lt;br&gt;MONTHLY - metrics are broken down monthly</param>
    /// <param name="clickWindowDays">Number of days to use as the conversion attribution window for a pin click action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;30&#x60; days. (optional, default to 0)</param>
    /// <param name="engagementWindowDays">Number of days to use as the conversion attribution window for an engagement action. Engagements include saves, closeups, link clicks, and carousel card swipes. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;30&#x60; days. (optional, default to 0)</param>
    /// <param name="viewWindowDays">Number of days to use as the conversion attribution window for a view action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;1&#x60; day. (optional, default to 0)</param>
    /// <param name="conversionReportTime">The date by which the conversion metrics returned from this endpoint will be reported. There are two dates associated with a conversion event: the date that the user interacted with the ad, and the date that the user completed a conversion event. (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="attributionTypes">List of types of attribution for the conversion report (optional, default to new ConversionReportAttributionType())</param>
    pplx::task<std::shared_ptr<MetricsResponse>> campaignTargetingAnalytics_get(
        utility::string_t adAccountId,
        std::vector<utility::string_t> campaignIds,
        utility::datetime startDate,
        utility::datetime endDate,
        std::vector<std::shared_ptr<AdsAnalyticsTargetingType>> targetingTypes,
        std::vector<utility::string_t> columns,
        std::shared_ptr<Granularity> granularity,
        boost::optional<int32_t> clickWindowDays,
        boost::optional<int32_t> engagementWindowDays,
        boost::optional<int32_t> viewWindowDays,
        boost::optional<utility::string_t> conversionReportTime,
        boost::optional<std::shared_ptr<ConversionReportAttributionType>> attributionTypes
    ) const;
    /// <summary>
    /// Get campaign analytics
    /// </summary>
    /// <remarks>
    /// Get analytics for the specified campaigns in the specified &lt;code&gt;ad_account_id&lt;/code&gt;, filtered by the specified options. - The token&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Analyst, Campaign Manager. - If granularity is not HOUR, the furthest back you can are allowed to pull data is 90 days before the current date in UTC time and the max time range supported is 90 days. - If granularity is HOUR, the furthest back you can are allowed to pull data is 8 days before the current date in UTC time and the max time range supported is 3 days.
    /// </remarks>
    /// <param name="adAccountId">Unique identifier of an ad account.</param>
    /// <param name="startDate">Metric report start date (UTC). Format: YYYY-MM-DD. Cannot be more than 90 days back from today.</param>
    /// <param name="endDate">Metric report end date (UTC). Format: YYYY-MM-DD. Cannot be more than 90 days past start_date.</param>
    /// <param name="campaignIds">List of Campaign Ids to use to filter the results.</param>
    /// <param name="columns">Columns to retrieve, encoded as a comma-separated string. **NOTE**: Any metrics defined as MICRO_DOLLARS returns a value based on the advertiser profile&#39;s currency field. For USD,($1/1,000,000, or $0.000001 - one one-ten-thousandth of a cent). it&#39;s microdollars. Otherwise, it&#39;s in microunits of the advertiser&#39;s currency.&lt;br/&gt;For example, if the advertiser&#39;s currency is GBP (British pound sterling), all MICRO_DOLLARS fields will be in GBP microunits (1/1,000,000 British pound).&lt;br/&gt;If a column has no value, it may not be returned</param>
    /// <param name="granularity">TOTAL - metrics are aggregated over the specified date range.&lt;br&gt; DAY - metrics are broken down daily.&lt;br&gt; HOUR - metrics are broken down hourly.&lt;br&gt;WEEKLY - metrics are broken down weekly.&lt;br&gt;MONTHLY - metrics are broken down monthly</param>
    /// <param name="clickWindowDays">Number of days to use as the conversion attribution window for a pin click action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;30&#x60; days. (optional, default to 0)</param>
    /// <param name="engagementWindowDays">Number of days to use as the conversion attribution window for an engagement action. Engagements include saves, closeups, link clicks, and carousel card swipes. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;30&#x60; days. (optional, default to 0)</param>
    /// <param name="viewWindowDays">Number of days to use as the conversion attribution window for a view action. Applies to Pinterest Tag conversion metrics. Prior conversion tags use their defined attribution windows. If not specified, defaults to &#x60;1&#x60; day. (optional, default to 0)</param>
    /// <param name="conversionReportTime">The date by which the conversion metrics returned from this endpoint will be reported. There are two dates associated with a conversion event: the date that the user interacted with the ad, and the date that the user completed a conversion event. (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::vector<std::shared_ptr<CampaignsAnalyticsResponse_inner>>> campaigns_analytics(
        utility::string_t adAccountId,
        utility::datetime startDate,
        utility::datetime endDate,
        std::vector<utility::string_t> campaignIds,
        std::vector<utility::string_t> columns,
        std::shared_ptr<Granularity> granularity,
        boost::optional<int32_t> clickWindowDays,
        boost::optional<int32_t> engagementWindowDays,
        boost::optional<int32_t> viewWindowDays,
        boost::optional<utility::string_t> conversionReportTime
    ) const;
    /// <summary>
    /// Create campaigns
    /// </summary>
    /// <remarks>
    /// Create multiple new campaigns. Every campaign has its own campaign_id and houses one or more ad groups, which contain one or more ads. For more, see &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/set-up-your-campaign/\&quot;&gt;Set up your campaign&lt;/a&gt;. &lt;p/&gt; &lt;strong&gt;Note:&lt;/strong&gt; - The values for &#39;lifetime_spend_cap&#39; and &#39;daily_spend_cap&#39; are microcurrency amounts based on the currency field set in the advertiser&#39;s profile. (e.g. USD) &lt;p/&gt; &lt;p&gt;Microcurrency is used to track very small transactions, based on the currency set in the advertiser’s profile.&lt;/p&gt; &lt;p&gt;A microcurrency unit is 10^(-6) of the standard unit of currency selected in the advertiser’s profile.&lt;/p&gt; &lt;p&gt;&lt;strong&gt;Equivalency equations&lt;/strong&gt;, using dollars as an example currency:&lt;/p&gt; &lt;ul&gt;   &lt;li&gt;$1 &#x3D; 1,000,000 microdollars&lt;/li&gt;   &lt;li&gt;1 microdollar &#x3D; $0.000001 &lt;/li&gt; &lt;/ul&gt; &lt;p&gt;&lt;strong&gt;To convert between currency and microcurrency&lt;/strong&gt;, using dollars as an example currency:&lt;/p&gt; &lt;ul&gt;   &lt;li&gt;To convert dollars to microdollars, mutiply dollars by 1,000,000&lt;/li&gt;   &lt;li&gt;To convert microdollars to dollars, divide microdollars by 1,000,000&lt;/li&gt; &lt;/ul&gt;
    /// </remarks>
    /// <param name="adAccountId">Unique identifier of an ad account.</param>
    /// <param name="campaignCreateRequest">Array of campaigns.</param>
    pplx::task<std::shared_ptr<CampaignCreateResponse>> campaigns_create(
        utility::string_t adAccountId,
        std::vector<std::shared_ptr<CampaignCreateRequest>> campaignCreateRequest
    ) const;
    /// <summary>
    /// Get campaign
    /// </summary>
    /// <remarks>
    /// Get a specific campaign given the campaign ID.
    /// </remarks>
    /// <param name="adAccountId">Unique identifier of an ad account.</param>
    /// <param name="campaignId">Campaign ID, must be associated with the ad account ID provided in the path.</param>
    pplx::task<std::shared_ptr<CampaignResponse>> campaigns_get(
        utility::string_t adAccountId,
        utility::string_t campaignId
    ) const;
    /// <summary>
    /// List campaigns
    /// </summary>
    /// <remarks>
    /// Get a list of the campaigns in the specified &lt;code&gt;ad_account_id&lt;/code&gt;, filtered by the specified options. - The token&#39;s user_account must either be the Owner of the specified ad account, or have one of the necessary roles granted to them via &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt;: Admin, Analyst, Campaign Manager.
    /// </remarks>
    /// <param name="adAccountId">Unique identifier of an ad account.</param>
    /// <param name="campaignIds">List of Campaign Ids to use to filter the results. (optional, default to std::vector&lt;std::shared_ptr&lt;utility::string_t&gt;&gt;())</param>
    /// <param name="entityStatuses">Entity status (optional, default to std::vector&lt;std::shared_ptr&lt;utility::string_t&gt;&gt;())</param>
    /// <param name="pageSize">Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/getting-started/pagination/&#39;&gt;Pagination&lt;/a&gt; for more information. (optional, default to 0)</param>
    /// <param name="order">The order in which to sort the items returned: “ASCENDING” or “DESCENDING” by ID. Note that higher-value IDs are associated with more-recently added items. (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="bookmark">Cursor used to fetch the next page of items (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<Campaigns_list_200_response>> campaigns_list(
        utility::string_t adAccountId,
        boost::optional<std::vector<utility::string_t>> campaignIds,
        boost::optional<std::vector<utility::string_t>> entityStatuses,
        boost::optional<int32_t> pageSize,
        boost::optional<utility::string_t> order,
        boost::optional<utility::string_t> bookmark
    ) const;
    /// <summary>
    /// Update campaigns
    /// </summary>
    /// <remarks>
    /// Update multiple ad campaigns based on campaign_ids. &lt;p/&gt; &lt;strong&gt;Note:&lt;/strong&gt;&lt;p/&gt; - &lt;p&gt;The values for &#39;lifetime_spend_cap&#39; and &#39;daily_spend_cap&#39; are microcurrency amounts based on the currency field set in the advertiser&#39;s profile. (e.g. USD) &lt;p/&gt; &lt;p&gt;Microcurrency is used to track very small transactions, based on the currency set in the advertiser’s profile.&lt;/p&gt; &lt;p&gt;A microcurrency unit is 10^(-6) of the standard unit of currency selected in the advertiser’s profile.&lt;/p&gt; &lt;p&gt;&lt;strong&gt;Equivalency equations&lt;/strong&gt;, using dollars as an example currency:&lt;/p&gt; &lt;ul&gt;   &lt;li&gt;$1 &#x3D; 1,000,000 microdollars&lt;/li&gt;   &lt;li&gt;1 microdollar &#x3D; $0.000001 &lt;/li&gt; &lt;/ul&gt; &lt;p&gt;&lt;strong&gt;To convert between currency and microcurrency&lt;/strong&gt;, using dollars as an example currency:&lt;/p&gt; &lt;ul&gt;   &lt;li&gt;To convert dollars to microdollars, mutiply dollars by 1,000,000&lt;/li&gt;   &lt;li&gt;To convert microdollars to dollars, divide microdollars by 1,000,000&lt;/li&gt; &lt;/ul&gt;
    /// </remarks>
    /// <param name="adAccountId">Unique identifier of an ad account.</param>
    /// <param name="campaignUpdateRequest">Array of campaigns.</param>
    pplx::task<std::shared_ptr<CampaignUpdateResponse>> campaigns_update(
        utility::string_t adAccountId,
        std::vector<std::shared_ptr<CampaignUpdateRequest>> campaignUpdateRequest
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_API_CampaignsApi_H_ */

