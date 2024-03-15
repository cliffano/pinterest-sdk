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
 * OauthAccessTokenResponseRefresh.h
 *
 * A successful OAuth access token response for the refresh token flow.
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_OauthAccessTokenResponseRefresh_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_OauthAccessTokenResponseRefresh_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/OauthAccessTokenResponse.h"
#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// A successful OAuth access token response for the refresh token flow.
/// </summary>
class  OauthAccessTokenResponseRefresh
    : public ModelBase
{
public:
    OauthAccessTokenResponseRefresh();
    virtual ~OauthAccessTokenResponseRefresh();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// OauthAccessTokenResponseRefresh members


protected:
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_OauthAccessTokenResponseRefresh_H_ */
