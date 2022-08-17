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
 * OauthAccessTokenResponse.h
 *
 * A successful OAuth access token response.
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_OauthAccessTokenResponse_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_OauthAccessTokenResponse_H_


#include "CppRestOpenAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// A successful OAuth access token response.
/// </summary>
class  OauthAccessTokenResponse
    : public ModelBase
{
public:
    OauthAccessTokenResponse();
    virtual ~OauthAccessTokenResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// OauthAccessTokenResponse members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getResponseType() const;
    bool responseTypeIsSet() const;
    void unsetResponse_type();

    void setResponseType(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getAccessToken() const;
    bool accessTokenIsSet() const;
    void unsetAccess_token();

    void setAccessToken(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getTokenType() const;
    bool tokenTypeIsSet() const;
    void unsetToken_type();

    void setTokenType(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getExpiresIn() const;
    bool expiresInIsSet() const;
    void unsetExpires_in();

    void setExpiresIn(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getScope() const;
    bool scopeIsSet() const;
    void unsetScope();

    void setScope(const utility::string_t& value);


protected:
    utility::string_t m_Response_type;
    bool m_Response_typeIsSet;
    utility::string_t m_Access_token;
    bool m_Access_tokenIsSet;
    utility::string_t m_Token_type;
    bool m_Token_typeIsSet;
    int32_t m_Expires_in;
    bool m_Expires_inIsSet;
    utility::string_t m_Scope;
    bool m_ScopeIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_OauthAccessTokenResponse_H_ */
