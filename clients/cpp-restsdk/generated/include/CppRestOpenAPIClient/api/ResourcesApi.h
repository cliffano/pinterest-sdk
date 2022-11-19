/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.2.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * ResourcesApi.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_API_ResourcesApi_H_
#define ORG_OPENAPITOOLS_CLIENT_API_ResourcesApi_H_



#include "CppRestOpenAPIClient/ApiClient.h"

#include "CppRestOpenAPIClient/model/AdAccountsCountryResponse.h"
#include "CppRestOpenAPIClient/model/BookClosedResponse.h"
#include "CppRestOpenAPIClient/model/DeliveryMetricsResponse.h"
#include "CppRestOpenAPIClient/model/Error.h"
#include "CppRestOpenAPIClient/Object.h"
#include "CppRestOpenAPIClient/model/SingleInterestTargetingOptionResponse.h"
#include <cpprest/details/basic_types.h>
#include <boost/optional.hpp>

namespace org {
namespace openapitools {
namespace client {
namespace api {

using namespace org::openapitools::client::model;



class  ResourcesApi 
{
public:

    explicit ResourcesApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~ResourcesApi();

    /// <summary>
    /// Get ad accounts countries
    /// </summary>
    /// <remarks>
    /// Get Ad Accounts countries
    /// </remarks>
    pplx::task<std::shared_ptr<AdAccountsCountryResponse>> adAccountCountries_get(
    ) const;
    /// <summary>
    /// Get available delivery metrics&#39; definitions
    /// </summary>
    /// <remarks>
    /// Get the definitions for the delivery metrics available for synchronous or asynchronous reports.
    /// </remarks>
    /// <param name="reportType">Report type. (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<DeliveryMetricsResponse>> deliveryMetrics_get(
        boost::optional<utility::string_t> reportType
    ) const;
    /// <summary>
    /// Get interest details
    /// </summary>
    /// <remarks>
    /// &lt;p&gt;Get details of a specific interest given interest ID.&lt;/p&gt; &lt;p&gt;Click &lt;a href&#x3D;\&quot;https://docs.google.com/spreadsheets/d/1HxL-0Z3p2fgxis9YBP2HWC3tvPrs1hAuHDRtH-NJTIM/edit#gid&#x3D;118370875\&quot; target&#x3D;\&quot;_blank\&quot;&gt;here&lt;/a&gt; for a spreadsheet listing interests and their IDs.&lt;/p&gt;
    /// </remarks>
    /// <param name="interestId">Unique identifier of an interest.</param>
    pplx::task<std::shared_ptr<SingleInterestTargetingOptionResponse>> interestTargetingOptions_get(
        utility::string_t interestId
    ) const;
    /// <summary>
    /// Get metrics ready state
    /// </summary>
    /// <remarks>
    /// Learn whether conversion or non-conversion metrics are finalized and ready to query.
    /// </remarks>
    /// <param name="date">Analytics reports request date (UTC). Format: YYYY-MM-DD</param>
    pplx::task<std::shared_ptr<BookClosedResponse>> metricsReadyState_get(
        utility::string_t date
    ) const;
    /// <summary>
    /// Get targeting options
    /// </summary>
    /// <remarks>
    /// &lt;p&gt;You can use targeting values in ads placement to define your intended audience. &lt;/p&gt; &lt;p&gt;Targeting metrics are organized around targeting specifications.&lt;/p&gt; &lt;p&gt;For more information on ads targeting, see &lt;a class&#x3D;\&quot;reference external\&quot; href&#x3D;\&quot;https://help.pinterest.com/en/business/article/audience-targeting\&quot; target&#x3D;\&quot;_blank\&quot;&gt;Audience targeting&lt;/a&gt;.&lt;/p&gt; &lt;p&gt;&lt;b&gt;Sample return:&lt;/b&gt;&lt;/p&gt; &lt;pre class&#x3D;\&quot;literal-block\&quot;&gt; [{&amp;quot;36313&amp;quot;: &amp;quot;Australia: Moreton Bay - North&amp;quot;, &amp;quot;124735&amp;quot;: &amp;quot;Canada: North Battleford&amp;quot;, &amp;quot;36109&amp;quot;: &amp;quot;Australia: Murray&amp;quot;, &amp;quot;36108&amp;quot;: &amp;quot;Australia: Mid North Coast&amp;quot;, &amp;quot;36101&amp;quot;: &amp;quot;Australia: Capital Region&amp;quot;, &amp;quot;811&amp;quot;: &amp;quot;U.S.: Reno&amp;quot;, &amp;quot;36103&amp;quot;: &amp;quot;Australia: Central West&amp;quot;, &amp;quot;36102&amp;quot;: &amp;quot;Australia: Central Coast&amp;quot;, &amp;quot;36105&amp;quot;: &amp;quot;Australia: Far West and Orana&amp;quot;, &amp;quot;36104&amp;quot;: &amp;quot;Australia: Coffs Harbour - Grafton&amp;quot;, &amp;quot;36107&amp;quot;: &amp;quot;Australia: Illawarra&amp;quot;, &amp;quot;36106&amp;quot;: &amp;quot;Australia: Hunter Valley Exc Newcastle&amp;quot;, &amp;quot;554017&amp;quot;: &amp;quot;New Zealand: Wanganui&amp;quot;, &amp;quot;554016&amp;quot;: &amp;quot;New Zealand: Marlborough&amp;quot;, &amp;quot;554015&amp;quot;: &amp;quot;New Zealand: Gisborne&amp;quot;, &amp;quot;554014&amp;quot;: &amp;quot;New Zealand: Tararua&amp;quot;, &amp;quot;554013&amp;quot;: &amp;quot;New Zealand: Invercargill&amp;quot;, &amp;quot;GR&amp;quot;: &amp;quot;Greece&amp;quot;, &amp;quot;554011&amp;quot;: &amp;quot;New Zealand: Whangarei&amp;quot;, &amp;quot;554010&amp;quot;: &amp;quot;New Zealand: Far North&amp;quot;, &amp;quot;717&amp;quot;: &amp;quot;U.S.: Quincy-Hannibal-Keokuk&amp;quot;, &amp;quot;716&amp;quot;: &amp;quot;U.S.: Baton Rouge&amp;quot;,...}] &lt;/pre&gt;
    /// </remarks>
    /// <param name="targetingType">Public targeting type.</param>
    /// <param name="clientId">Client ID. (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="oauthSignature">Oauth signature (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="timestamp">Timestamp (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::vector<std::shared_ptr<Object>>> targetingOptions_get(
        utility::string_t targetingType,
        boost::optional<utility::string_t> clientId,
        boost::optional<utility::string_t> oauthSignature,
        boost::optional<utility::string_t> timestamp
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_API_ResourcesApi_H_ */

