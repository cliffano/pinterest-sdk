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
 * PinsApi.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_API_PinsApi_H_
#define ORG_OPENAPITOOLS_CLIENT_API_PinsApi_H_



#include "CppRestOpenAPIClient/ApiClient.h"

#include "CppRestOpenAPIClient/model/AnalyticsMetricsResponse.h"
#include "CppRestOpenAPIClient/model/Error.h"
#include "CppRestOpenAPIClient/model/Pin.h"
#include <cpprest/details/basic_types.h>
#include <boost/optional.hpp>

namespace org {
namespace openapitools {
namespace client {
namespace api {

using namespace org::openapitools::client::model;



class  PinsApi 
{
public:

    explicit PinsApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~PinsApi();

    /// <summary>
    /// Get Pin analytics
    /// </summary>
    /// <remarks>
    /// Get analytics for a Pin owned by the \&quot;operation user_account\&quot; - or on a group board that has been shared with this account. - By default, the \&quot;operation user_account\&quot; is the token user_account.  Optional: Business Access: Specify an &lt;code&gt;ad_account_id&lt;/code&gt; (obtained via &lt;a href&#x3D;\&quot;https://developers.pinterest.com/docs/api/v5/#operation/ad_accounts/list\&quot;&gt;List ad accounts&lt;/a&gt;) to use the owner of that ad_account as the \&quot;operation user_account\&quot;. In order to do this, the token user_account must have one of the following &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt; roles on the ad_account:  - For Pins on public or protected boards: Admin, Analyst. - For Pins on secret boards: Admin.
    /// </remarks>
    /// <param name="pinId">Unique identifier of a Pin.</param>
    /// <param name="startDate">Metric report start date (UTC). Format: YYYY-MM-DD</param>
    /// <param name="endDate">Metric report end date (UTC). Format: YYYY-MM-DD</param>
    /// <param name="metricTypes">Pin metric types to get data for, default is all.</param>
    /// <param name="appTypes">Apps or devices to get data for, default is all. (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="splitField">How to split the data into groups. Not including this param means data won&#39;t be split. (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="adAccountId">Unique identifier of an ad account. (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::map<utility::string_t, std::shared_ptr<AnalyticsMetricsResponse>>> pins_analytics(
        utility::string_t pinId,
        utility::datetime startDate,
        utility::datetime endDate,
        std::vector<utility::string_t> metricTypes,
        boost::optional<utility::string_t> appTypes,
        boost::optional<utility::string_t> splitField,
        boost::optional<utility::string_t> adAccountId
    ) const;
    /// <summary>
    /// Create Pin
    /// </summary>
    /// <remarks>
    /// Create a Pin on a board or board section owned by the \&quot;operation user_account\&quot;.  Note: If the current \&quot;operation user_account\&quot; (defined by the access token) has access to another user&#39;s Ad Accounts via Pinterest Business Access, you can modify your request to make use of the current operation_user_account&#39;s permissions to those Ad Accounts by including the ad_account_id in the path parameters for the request (e.g. .../?ad_account_id&#x3D;12345&amp;...).  - This function is intended solely for publishing new content created by the user. If you are interested in saving content created by others to your Pinterest boards, sometimes called &#39;curated content&#39;, please use our &lt;a href&#x3D;&#39;/docs/add-ons/save-button&#39;&gt;Save button&lt;/a&gt; instead. For more tips on creating fresh content for Pinterest, review our &lt;a href&#x3D;&#39;/docs/solutions/content-apps&#39;&gt;Content App Solutions Guide&lt;/a&gt;.  &lt;strong&gt;&lt;a href&#x3D;&#39;/docs/solutions/content-apps/#creatingvideopins&#39;&gt;Learn more&lt;/a&gt;&lt;/strong&gt; about video Pin creation.
    /// </remarks>
    /// <param name="pin">Create a new Pin.</param>
    pplx::task<std::shared_ptr<Pin>> pins_create(
        std::shared_ptr<Pin> pin
    ) const;
    /// <summary>
    /// Delete Pin
    /// </summary>
    /// <remarks>
    /// Delete a Pins owned by the \&quot;operation user_account\&quot; - or on a group board that has been shared with this account. - By default, the \&quot;operation user_account\&quot; is the token user_account.
    /// </remarks>
    /// <param name="pinId">Unique identifier of a Pin.</param>
    pplx::task<void> pins_delete(
        utility::string_t pinId
    ) const;
    /// <summary>
    /// Get Pin
    /// </summary>
    /// <remarks>
    /// Get a Pin owned by the \&quot;operation user_account\&quot; - or on a group board that has been shared with this account. - By default, the \&quot;operation user_account\&quot; is the token user_account.  Optional: Business Access: Specify an &lt;code&gt;ad_account_id&lt;/code&gt; (obtained via &lt;a href&#x3D;&#39;/docs/api/v5/#operation/ad_accounts/list&#39;&gt;List ad accounts&lt;/a&gt;) to use the owner of that ad_account as the \&quot;operation user_account\&quot;. In order to do this, the token user_account must have one of the following &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/share-and-manage-access-to-your-ad-accounts\&quot;&gt;Business Access&lt;/a&gt; roles on the ad_account:  - For Pins on public or protected boards: Owner, Admin, Analyst, Campaign Manager. - For Pins on secret boards: Owner, Admin.
    /// </remarks>
    /// <param name="pinId">Unique identifier of a Pin.</param>
    /// <param name="adAccountId">Unique identifier of an ad account. (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<Pin>> pins_get(
        utility::string_t pinId,
        boost::optional<utility::string_t> adAccountId
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_API_PinsApi_H_ */
