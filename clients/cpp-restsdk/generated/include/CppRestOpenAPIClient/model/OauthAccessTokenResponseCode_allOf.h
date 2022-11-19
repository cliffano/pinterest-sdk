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
 * OauthAccessTokenResponseCode_allOf.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_OauthAccessTokenResponseCode_allOf_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_OauthAccessTokenResponseCode_allOf_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  OauthAccessTokenResponseCode_allOf
    : public ModelBase
{
public:
    OauthAccessTokenResponseCode_allOf();
    virtual ~OauthAccessTokenResponseCode_allOf();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// OauthAccessTokenResponseCode_allOf members

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


protected:
    utility::string_t m_Refresh_token;
    bool m_Refresh_tokenIsSet;
    int32_t m_Refresh_token_expires_in;
    bool m_Refresh_token_expires_inIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_OauthAccessTokenResponseCode_allOf_H_ */
