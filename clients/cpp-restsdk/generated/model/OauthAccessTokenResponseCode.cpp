/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "OauthAccessTokenResponseCode.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




OauthAccessTokenResponseCode::OauthAccessTokenResponseCode()
{
    m_Refresh_token = utility::conversions::to_string_t("");
    m_Refresh_tokenIsSet = false;
    m_Refresh_token_expires_in = 0;
    m_Refresh_token_expires_inIsSet = false;
}

OauthAccessTokenResponseCode::~OauthAccessTokenResponseCode()
{
}

void OauthAccessTokenResponseCode::validate()
{
    // TODO: implement validation
}

web::json::value OauthAccessTokenResponseCode::toJson() const
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

    return val;
}

bool OauthAccessTokenResponseCode::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("refresh_token"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("refresh_token")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_refresh_token;
            ok &= ModelBase::fromJson(fieldValue, refVal_refresh_token);
            setRefreshToken(refVal_refresh_token);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("refresh_token_expires_in"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("refresh_token_expires_in")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_refresh_token_expires_in;
            ok &= ModelBase::fromJson(fieldValue, refVal_refresh_token_expires_in);
            setRefreshTokenExpiresIn(refVal_refresh_token_expires_in);
        }
    }
    return ok;
}

void OauthAccessTokenResponseCode::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
}

bool OauthAccessTokenResponseCode::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("response_type"))))
    {
        utility::string_t refVal_response_type;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("response_type"))), refVal_response_type );
        setResponseType(refVal_response_type);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("access_token"))))
    {
        utility::string_t refVal_access_token;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("access_token"))), refVal_access_token );
        setAccessToken(refVal_access_token);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("token_type"))))
    {
        utility::string_t refVal_token_type;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("token_type"))), refVal_token_type );
        setTokenType(refVal_token_type);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("expires_in"))))
    {
        int32_t refVal_expires_in;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("expires_in"))), refVal_expires_in );
        setExpiresIn(refVal_expires_in);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("scope"))))
    {
        utility::string_t refVal_scope;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("scope"))), refVal_scope );
        setScope(refVal_scope);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("refresh_token"))))
    {
        utility::string_t refVal_refresh_token;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("refresh_token"))), refVal_refresh_token );
        setRefreshToken(refVal_refresh_token);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("refresh_token_expires_in"))))
    {
        int32_t refVal_refresh_token_expires_in;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("refresh_token_expires_in"))), refVal_refresh_token_expires_in );
        setRefreshTokenExpiresIn(refVal_refresh_token_expires_in);
    }
    return ok;
}

utility::string_t OauthAccessTokenResponseCode::getRefreshToken() const
{
    return m_Refresh_token;
}

void OauthAccessTokenResponseCode::setRefreshToken(const utility::string_t& value)
{
    m_Refresh_token = value;
    m_Refresh_tokenIsSet = true;
}

bool OauthAccessTokenResponseCode::refreshTokenIsSet() const
{
    return m_Refresh_tokenIsSet;
}

void OauthAccessTokenResponseCode::unsetRefresh_token()
{
    m_Refresh_tokenIsSet = false;
}
int32_t OauthAccessTokenResponseCode::getRefreshTokenExpiresIn() const
{
    return m_Refresh_token_expires_in;
}

void OauthAccessTokenResponseCode::setRefreshTokenExpiresIn(int32_t value)
{
    m_Refresh_token_expires_in = value;
    m_Refresh_token_expires_inIsSet = true;
}

bool OauthAccessTokenResponseCode::refreshTokenExpiresInIsSet() const
{
    return m_Refresh_token_expires_inIsSet;
}

void OauthAccessTokenResponseCode::unsetRefresh_token_expires_in()
{
    m_Refresh_token_expires_inIsSet = false;
}
}
}
}
}


