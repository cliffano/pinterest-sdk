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
 * LeadAdsApi.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_API_LeadAdsApi_H_
#define ORG_OPENAPITOOLS_CLIENT_API_LeadAdsApi_H_



#include "CppRestOpenAPIClient/ApiClient.h"

#include "CppRestOpenAPIClient/model/AdAccountCreateSubscriptionRequest.h"
#include "CppRestOpenAPIClient/model/AdAccountCreateSubscriptionResponse.h"
#include "CppRestOpenAPIClient/model/AdAccountGetSubscriptionResponse.h"
#include "CppRestOpenAPIClient/model/Ad_accounts_subscriptions_get_list_200_response.h"
#include "CppRestOpenAPIClient/model/Error.h"
#include <cpprest/details/basic_types.h>
#include <boost/optional.hpp>

namespace org {
namespace openapitools {
namespace client {
namespace api {

using namespace org::openapitools::client::model;



class  LeadAdsApi 
{
public:

    explicit LeadAdsApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~LeadAdsApi();

    /// <summary>
    /// Delete lead ads subscription
    /// </summary>
    /// <remarks>
    /// Delete an existing lead ads webhook subscription by ID. - Only requests for the OWNER or ADMIN of the ad_account will be allowed.  &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/new/about-beta-access/&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;
    /// </remarks>
    /// <param name="adAccountId">Unique identifier of an ad account.</param>
    /// <param name="subscriptionId">Unique identifier of a subscription.</param>
    pplx::task<void> adAccountsSubscriptions_delById(
        utility::string_t adAccountId,
        utility::string_t subscriptionId
    ) const;
    /// <summary>
    /// Get lead ads subscription
    /// </summary>
    /// <remarks>
    /// Get a specific lead ads subscription record. - Only requests for the OWNER or ADMIN of the ad_account will be allowed.  &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/new/about-beta-access/&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;
    /// </remarks>
    /// <param name="adAccountId">Unique identifier of an ad account.</param>
    /// <param name="subscriptionId">Unique identifier of a subscription.</param>
    pplx::task<std::shared_ptr<AdAccountGetSubscriptionResponse>> adAccountsSubscriptions_getById(
        utility::string_t adAccountId,
        utility::string_t subscriptionId
    ) const;
    /// <summary>
    /// Get lead ads subscriptions
    /// </summary>
    /// <remarks>
    /// Get the advertiser&#39;s list of lead ads subscriptions. - Only requests for the OWNER or ADMIN of the ad_account will be allowed.  &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/new/about-beta-access/&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;
    /// </remarks>
    /// <param name="adAccountId">Unique identifier of an ad account.</param>
    /// <param name="pageSize">Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;&#39;/docs/getting-started/pagination/&#39;&gt;Pagination&lt;/a&gt; for more information. (optional, default to 0)</param>
    /// <param name="bookmark">Cursor used to fetch the next page of items (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<Ad_accounts_subscriptions_get_list_200_response>> adAccountsSubscriptions_getList(
        utility::string_t adAccountId,
        boost::optional<int32_t> pageSize,
        boost::optional<utility::string_t> bookmark
    ) const;
    /// <summary>
    /// Create lead ads subscription
    /// </summary>
    /// <remarks>
    /// Create a lead ads webhook subscription. - Only requests for the OWNER or ADMIN of the ad_account will be allowed. - Advertisers can set up multiple integrations using ad_account_id + lead_form_id but only one integration per unique records.  &lt;strong&gt;This endpoint is currently in beta and not available to all apps. &lt;a href&#x3D;&#39;/docs/new/about-beta-access/&#39;&gt;Learn more&lt;/a&gt;.&lt;/strong&gt;
    /// </remarks>
    /// <param name="adAccountId">Unique identifier of an ad account.</param>
    /// <param name="adAccountCreateSubscriptionRequest">Subscription to create.</param>
    pplx::task<std::shared_ptr<AdAccountCreateSubscriptionResponse>> adAccountsSubscriptions_post(
        utility::string_t adAccountId,
        std::shared_ptr<AdAccountCreateSubscriptionRequest> adAccountCreateSubscriptionRequest
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_API_LeadAdsApi_H_ */
