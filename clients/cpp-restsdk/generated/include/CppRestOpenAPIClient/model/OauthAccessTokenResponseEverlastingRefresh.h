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
 * OauthAccessTokenResponseEverlastingRefresh.h
 *
 * A successful OAuth access token response for the refresh token flow, with an added everlasting refresh token.
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_OauthAccessTokenResponseEverlastingRefresh_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_OauthAccessTokenResponseEverlastingRefresh_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include "CppRestOpenAPIClient/model/OauthAccessTokenResponse.h"
#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// A successful OAuth access token response for the refresh token flow, with an added everlasting refresh token.
/// </summary>
class  OauthAccessTokenResponseEverlastingRefresh
    : public ModelBase
{
public:
    OauthAccessTokenResponseEverlastingRefresh();
    virtual ~OauthAccessTokenResponseEverlastingRefresh();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// OauthAccessTokenResponseEverlastingRefresh members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getRefreshToken() const;
    bool refreshTokenIsSet() const;
    void unsetRefresh_token();

    void setRefreshToken(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getRefreshTokenExpiresIn() const;
    bool refreshTokenExpiresInIsSet() const;
    void unsetRefresh_token_expires_in();

    void setRefreshTokenExpiresIn(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getRefreshTokenExpiresAt() const;
    bool refreshTokenExpiresAtIsSet() const;
    void unsetRefresh_token_expires_at();

    void setRefreshTokenExpiresAt(int32_t value);


protected:
    utility::string_t m_Refresh_token;
    bool m_Refresh_tokenIsSet;
    int32_t m_Refresh_token_expires_in;
    bool m_Refresh_token_expires_inIsSet;
    int32_t m_Refresh_token_expires_at;
    bool m_Refresh_token_expires_atIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_OauthAccessTokenResponseEverlastingRefresh_H_ */