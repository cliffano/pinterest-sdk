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



#include "CppRestOpenAPIClient/model/OauthAccessTokenResponseEverlastingRefresh.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



OauthAccessTokenResponseEverlastingRefresh::OauthAccessTokenResponseEverlastingRefresh()
{
    m_Refresh_token = utility::conversions::to_string_t("");
    m_Refresh_tokenIsSet = false;
    m_Refresh_token_expires_in = 0;
    m_Refresh_token_expires_inIsSet = false;
    m_Refresh_token_expires_at = 0;
    m_Refresh_token_expires_atIsSet = false;
}

OauthAccessTokenResponseEverlastingRefresh::~OauthAccessTokenResponseEverlastingRefresh()
{
}

void OauthAccessTokenResponseEverlastingRefresh::validate()
{
    // TODO: implement validation
}

web::json::value OauthAccessTokenResponseEverlastingRefresh::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Refresh_tokenIsSet)
    {
        val[utility::conversions::to_string_t(U("refresh_token"))] = ModelBase::toJson(m_Refresh_token);
    }
    if(m_Refresh_token_expires_inIsSet)
    {
        val[utility::conversions::to_string_t(U("refresh_token_expires_in"))] = ModelBase::toJson(m_Refresh_token_expires_in);
    }
    if(m_Refresh_token_expires_atIsSet)
    {
        val[utility::conversions::to_string_t(U("refresh_token_expires_at"))] = ModelBase::toJson(m_Refresh_token_expires_at);
    }

    return val;
}

bool OauthAccessTokenResponseEverlastingRefresh::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("refresh_token"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("refresh_token")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setRefreshToken;
            ok &= ModelBase::fromJson(fieldValue, refVal_setRefreshToken);
            setRefreshToken(refVal_setRefreshToken);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("refresh_token_expires_in"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("refresh_token_expires_in")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setRefreshTokenExpiresIn;
            ok &= ModelBase::fromJson(fieldValue, refVal_setRefreshTokenExpiresIn);
            setRefreshTokenExpiresIn(refVal_setRefreshTokenExpiresIn);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("refresh_token_expires_at"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("refresh_token_expires_at")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setRefreshTokenExpiresAt;
            ok &= ModelBase::fromJson(fieldValue, refVal_setRefreshTokenExpiresAt);
            setRefreshTokenExpiresAt(refVal_setRefreshTokenExpiresAt);
        }
    }
    return ok;
}

void OauthAccessTokenResponseEverlastingRefresh::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Response_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("response_type")), m_Response_type));
    }
    if(m_Access_tokenIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("access_token")), m_Access_token));
    }
    if(m_Token_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("token_type")), m_Token_type));
    }
    if(m_Expires_inIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("expires_in")), m_Expires_in));
    }
    if(m_ScopeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("scope")), m_Scope));
    }
    if(m_Refresh_tokenIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("refresh_token")), m_Refresh_token));
    }
    if(m_Refresh_token_expires_inIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("refresh_token_expires_in")), m_Refresh_token_expires_in));
    }
    if(m_Refresh_token_expires_atIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("refresh_token_expires_at")), m_Refresh_token_expires_at));
    }
}

bool OauthAccessTokenResponseEverlastingRefresh::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("response_type"))))
    {
        utility::string_t refVal_setResponseType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("response_type"))), refVal_setResponseType );
        setResponseType(refVal_setResponseType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("access_token"))))
    {
        utility::string_t refVal_setAccessToken;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("access_token"))), refVal_setAccessToken );
        setAccessToken(refVal_setAccessToken);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("token_type"))))
    {
        utility::string_t refVal_setTokenType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("token_type"))), refVal_setTokenType );
        setTokenType(refVal_setTokenType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("expires_in"))))
    {
        int32_t refVal_setExpiresIn;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("expires_in"))), refVal_setExpiresIn );
        setExpiresIn(refVal_setExpiresIn);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("scope"))))
    {
        utility::string_t refVal_setScope;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("scope"))), refVal_setScope );
        setScope(refVal_setScope);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("refresh_token"))))
    {
        utility::string_t refVal_setRefreshToken;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("refresh_token"))), refVal_setRefreshToken );
        setRefreshToken(refVal_setRefreshToken);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("refresh_token_expires_in"))))
    {
        int32_t refVal_setRefreshTokenExpiresIn;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("refresh_token_expires_in"))), refVal_setRefreshTokenExpiresIn );
        setRefreshTokenExpiresIn(refVal_setRefreshTokenExpiresIn);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("refresh_token_expires_at"))))
    {
        int32_t refVal_setRefreshTokenExpiresAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("refresh_token_expires_at"))), refVal_setRefreshTokenExpiresAt );
        setRefreshTokenExpiresAt(refVal_setRefreshTokenExpiresAt);
    }
    return ok;
}

utility::string_t OauthAccessTokenResponseEverlastingRefresh::getRefreshToken() const
{
    return m_Refresh_token;
}

void OauthAccessTokenResponseEverlastingRefresh::setRefreshToken(const utility::string_t& value)
{
    m_Refresh_token = value;
    m_Refresh_tokenIsSet = true;
}

bool OauthAccessTokenResponseEverlastingRefresh::refreshTokenIsSet() const
{
    return m_Refresh_tokenIsSet;
}

void OauthAccessTokenResponseEverlastingRefresh::unsetRefresh_token()
{
    m_Refresh_tokenIsSet = false;
}
int32_t OauthAccessTokenResponseEverlastingRefresh::getRefreshTokenExpiresIn() const
{
    return m_Refresh_token_expires_in;
}

void OauthAccessTokenResponseEverlastingRefresh::setRefreshTokenExpiresIn(int32_t value)
{
    m_Refresh_token_expires_in = value;
    m_Refresh_token_expires_inIsSet = true;
}

bool OauthAccessTokenResponseEverlastingRefresh::refreshTokenExpiresInIsSet() const
{
    return m_Refresh_token_expires_inIsSet;
}

void OauthAccessTokenResponseEverlastingRefresh::unsetRefresh_token_expires_in()
{
    m_Refresh_token_expires_inIsSet = false;
}
int32_t OauthAccessTokenResponseEverlastingRefresh::getRefreshTokenExpiresAt() const
{
    return m_Refresh_token_expires_at;
}

void OauthAccessTokenResponseEverlastingRefresh::setRefreshTokenExpiresAt(int32_t value)
{
    m_Refresh_token_expires_at = value;
    m_Refresh_token_expires_atIsSet = true;
}

bool OauthAccessTokenResponseEverlastingRefresh::refreshTokenExpiresAtIsSet() const
{
    return m_Refresh_token_expires_atIsSet;
}

void OauthAccessTokenResponseEverlastingRefresh::unsetRefresh_token_expires_at()
{
    m_Refresh_token_expires_atIsSet = false;
}
}
}
}
}


