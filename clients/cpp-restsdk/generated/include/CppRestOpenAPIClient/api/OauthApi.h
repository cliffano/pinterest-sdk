/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OauthApi.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_API_OauthApi_H_
#define ORG_OPENAPITOOLS_CLIENT_API_OauthApi_H_



#include "CppRestOpenAPIClient/ApiClient.h"

#include "CppRestOpenAPIClient/model/Error.h"
#include "CppRestOpenAPIClient/model/OauthAccessTokenResponse.h"
#include <cpprest/details/basic_types.h>
#include <boost/optional.hpp>

namespace org {
namespace openapitools {
namespace client {
namespace api {

using namespace org::openapitools::client::model;



class  OauthApi 
{
public:

    explicit OauthApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~OauthApi();

    /// <summary>
    /// Generate OAuth access token
    /// </summary>
    /// <remarks>
    /// Generate an OAuth access token by using an authorization code or a refresh token.  See &lt;a href&#x3D;&#39;/docs/getting-started/authentication/&#39;&gt;Authentication&lt;/a&gt; for more.
    /// </remarks>
    /// <param name="grantType"></param>
    pplx::task<std::shared_ptr<OauthAccessTokenResponse>> oauth_token(
        utility::string_t grantType
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_API_OauthApi_H_ */

