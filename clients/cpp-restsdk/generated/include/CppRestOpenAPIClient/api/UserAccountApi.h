/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.4.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.1.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * UserAccountApi.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_API_UserAccountApi_H_
#define ORG_OPENAPITOOLS_CLIENT_API_UserAccountApi_H_



#include "CppRestOpenAPIClient/ApiClient.h"

#include "CppRestOpenAPIClient/model/Account.h"
#include "CppRestOpenAPIClient/model/AnalyticsMetricsResponse.h"
#include "CppRestOpenAPIClient/model/Error.h"
#include "CppRestOpenAPIClient/model/TopPinsAnalyticsResponse.h"
#include "CppRestOpenAPIClient/model/TopVideoPinsAnalyticsResponse.h"
#include <cpprest/details/basic_types.h>
#include <boost/optional.hpp>

namespace org {
namespace openapitools {
namespace client {
namespace api {

using namespace org::openapitools::client::model;



class  UserAccountApi 
{
public:

    explicit UserAccountApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~UserAccountApi();

    /// <summary>
    /// Get user account analytics
    /// </summary>
    /// <remarks>
    /// Get analytics for the \&quot;operation user_account\&quot; - By default, the \&quot;operation user_account\&quot; is the token user_account.  Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \&quot;operation user_account\&quot;.
    /// </remarks>
    /// <param name="startDate">Metric report start date (UTC). Format: YYYY-MM-DD</param>
    /// <param name="endDate">Metric report end date (UTC). Format: YYYY-MM-DD</param>
    /// <param name="fromClaimedContent">Filter on Pins that match your claimed domain. (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="pinFormat">Pin formats to get data for, default is all. (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="appTypes">Apps or devices to get data for, default is all. (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="metricTypes">Metric types to get data for, default is all.  (optional, default to std::vector&lt;std::shared_ptr&lt;utility::string_t&gt;&gt;())</param>
    /// <param name="splitField">How to split the data into groups. Not including this param means data won&#39;t be split. (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="adAccountId">Unique identifier of an ad account. (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::map<utility::string_t, std::shared_ptr<AnalyticsMetricsResponse>>> userAccount_analytics(
        utility::datetime startDate,
        utility::datetime endDate,
        boost::optional<utility::string_t> fromClaimedContent,
        boost::optional<utility::string_t> pinFormat,
        boost::optional<utility::string_t> appTypes,
        boost::optional<std::vector<utility::string_t>> metricTypes,
        boost::optional<utility::string_t> splitField,
        boost::optional<utility::string_t> adAccountId
    ) const;
    /// <summary>
    /// Get user account top pins analytics
    /// </summary>
    /// <remarks>
    /// Gets analytics data about a user&#39;s top pins (limited to the top 50). - By default, the \&quot;operation user_account\&quot; is the token user_account.  Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \&quot;operation user_account\&quot;.
    /// </remarks>
    /// <param name="startDate">Metric report start date (UTC). Format: YYYY-MM-DD</param>
    /// <param name="endDate">Metric report end date (UTC). Format: YYYY-MM-DD</param>
    /// <param name="sortBy">Specify sorting order for metrics</param>
    /// <param name="fromClaimedContent">Filter on Pins that match your claimed domain. (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="pinFormat">Pin formats to get data for, default is all. (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="appTypes">Apps or devices to get data for, default is all. (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="metricTypes">Metric types to get data for, default is all.  (optional, default to std::vector&lt;std::shared_ptr&lt;utility::string_t&gt;&gt;())</param>
    /// <param name="numOfPins">Number of pins to include, default is 10. Max is 50. (optional, default to 0)</param>
    /// <param name="createdInLastNDays">Get metrics for pins created in the last \&quot;n\&quot; days. (optional, default to 0)</param>
    /// <param name="adAccountId">Unique identifier of an ad account. (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<TopPinsAnalyticsResponse>> userAccount_analytics_topPins(
        utility::datetime startDate,
        utility::datetime endDate,
        utility::string_t sortBy,
        boost::optional<utility::string_t> fromClaimedContent,
        boost::optional<utility::string_t> pinFormat,
        boost::optional<utility::string_t> appTypes,
        boost::optional<std::vector<utility::string_t>> metricTypes,
        boost::optional<int32_t> numOfPins,
        boost::optional<int32_t> createdInLastNDays,
        boost::optional<utility::string_t> adAccountId
    ) const;
    /// <summary>
    /// Get user account top video pins analytics
    /// </summary>
    /// <remarks>
    /// Gets analytics data about a user&#39;s top video pins (limited to the top 50). - By default, the \&quot;operation user_account\&quot; is the token user_account.  Optional: Business Access: Specify an ad_account_id to use the owner of that ad_account as the \&quot;operation user_account\&quot;.
    /// </remarks>
    /// <param name="startDate">Metric report start date (UTC). Format: YYYY-MM-DD</param>
    /// <param name="endDate">Metric report end date (UTC). Format: YYYY-MM-DD</param>
    /// <param name="sortBy">Specify sorting order for video metrics</param>
    /// <param name="fromClaimedContent">Filter on Pins that match your claimed domain. (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="pinFormat">Pin formats to get data for, default is all. (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="appTypes">Apps or devices to get data for, default is all. (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="metricTypes">Metric types to get video data for, default is all.  (optional, default to std::vector&lt;std::shared_ptr&lt;utility::string_t&gt;&gt;())</param>
    /// <param name="numOfPins">Number of pins to include, default is 10. Max is 50. (optional, default to 0)</param>
    /// <param name="createdInLastNDays">Get metrics for pins created in the last \&quot;n\&quot; days. (optional, default to 0)</param>
    /// <param name="adAccountId">Unique identifier of an ad account. (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<TopVideoPinsAnalyticsResponse>> userAccount_analytics_topVideoPins(
        utility::datetime startDate,
        utility::datetime endDate,
        utility::string_t sortBy,
        boost::optional<utility::string_t> fromClaimedContent,
        boost::optional<utility::string_t> pinFormat,
        boost::optional<utility::string_t> appTypes,
        boost::optional<std::vector<utility::string_t>> metricTypes,
        boost::optional<int32_t> numOfPins,
        boost::optional<int32_t> createdInLastNDays,
        boost::optional<utility::string_t> adAccountId
    ) const;
    /// <summary>
    /// Get user account
    /// </summary>
    /// <remarks>
    /// Get account information for the \&quot;operation user_account\&quot; - By default, the \&quot;operation user_account\&quot; is the token user_account.  If using Business Access: Specify an ad_account_id to use the owner of that ad_account as the \&quot;operation user_account\&quot;. See &lt;a href&#x3D;&#39;/docs/api/v5/#tag/Understanding-business-access&#39;&gt;Understanding Business Access&lt;/a&gt; for more information.
    /// </remarks>
    /// <param name="adAccountId">Unique identifier of an ad account. (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<Account>> userAccount_get(
        boost::optional<utility::string_t> adAccountId
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_API_UserAccountApi_H_ */
