/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.3.0
* Contact: pinterest-api@pinterest.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "OauthAccessTokenResponseCode.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

OauthAccessTokenResponseCode::OauthAccessTokenResponseCode()
{
    m_Response_type = "";
    m_Response_typeIsSet = false;
    m_Access_token = "";
    m_Token_type = "bearer";
    m_Expires_in = 0;
    m_Scope = "";
    m_Refresh_token = "";
    m_Refresh_token_expires_in = 0;
    
}

void OauthAccessTokenResponseCode::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool OauthAccessTokenResponseCode::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool OauthAccessTokenResponseCode::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "OauthAccessTokenResponseCode" : pathPrefix;

                                
    return success;
}

bool OauthAccessTokenResponseCode::operator==(const OauthAccessTokenResponseCode& rhs) const
{
    return
    
    
    
    ((!responseTypeIsSet() && !rhs.responseTypeIsSet()) || (responseTypeIsSet() && rhs.responseTypeIsSet() && getResponseType() == rhs.getResponseType())) &&
    
    (getAccessToken() == rhs.getAccessToken())
     &&
    
    (getTokenType() == rhs.getTokenType())
     &&
    
    (getExpiresIn() == rhs.getExpiresIn())
     &&
    
    (getScope() == rhs.getScope())
     &&
    
    (getRefreshToken() == rhs.getRefreshToken())
     &&
    
    (getRefreshTokenExpiresIn() == rhs.getRefreshTokenExpiresIn())
    
    
    ;
}

bool OauthAccessTokenResponseCode::operator!=(const OauthAccessTokenResponseCode& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const OauthAccessTokenResponseCode& o)
{
    j = nlohmann::json();
    if(o.responseTypeIsSet())
        j["response_type"] = o.m_Response_type;
    j["access_token"] = o.m_Access_token;
    j["token_type"] = o.m_Token_type;
    j["expires_in"] = o.m_Expires_in;
    j["scope"] = o.m_Scope;
    j["refresh_token"] = o.m_Refresh_token;
    j["refresh_token_expires_in"] = o.m_Refresh_token_expires_in;
    
}

void from_json(const nlohmann::json& j, OauthAccessTokenResponseCode& o)
{
    if(j.find("response_type") != j.end())
    {
        j.at("response_type").get_to(o.m_Response_type);
        o.m_Response_typeIsSet = true;
    } 
    j.at("access_token").get_to(o.m_Access_token);
    j.at("token_type").get_to(o.m_Token_type);
    j.at("expires_in").get_to(o.m_Expires_in);
    j.at("scope").get_to(o.m_Scope);
    j.at("refresh_token").get_to(o.m_Refresh_token);
    j.at("refresh_token_expires_in").get_to(o.m_Refresh_token_expires_in);
    
}

std::string OauthAccessTokenResponseCode::getResponseType() const
{
    return m_Response_type;
}
void OauthAccessTokenResponseCode::setResponseType(std::string const& value)
{
    m_Response_type = value;
    m_Response_typeIsSet = true;
}
bool OauthAccessTokenResponseCode::responseTypeIsSet() const
{
    return m_Response_typeIsSet;
}
void OauthAccessTokenResponseCode::unsetResponse_type()
{
    m_Response_typeIsSet = false;
}
std::string OauthAccessTokenResponseCode::getAccessToken() const
{
    return m_Access_token;
}
void OauthAccessTokenResponseCode::setAccessToken(std::string const& value)
{
    m_Access_token = value;
}
std::string OauthAccessTokenResponseCode::getTokenType() const
{
    return m_Token_type;
}
void OauthAccessTokenResponseCode::setTokenType(std::string const& value)
{
    m_Token_type = value;
}
int32_t OauthAccessTokenResponseCode::getExpiresIn() const
{
    return m_Expires_in;
}
void OauthAccessTokenResponseCode::setExpiresIn(int32_t const value)
{
    m_Expires_in = value;
}
std::string OauthAccessTokenResponseCode::getScope() const
{
    return m_Scope;
}
void OauthAccessTokenResponseCode::setScope(std::string const& value)
{
    m_Scope = value;
}
std::string OauthAccessTokenResponseCode::getRefreshToken() const
{
    return m_Refresh_token;
}
void OauthAccessTokenResponseCode::setRefreshToken(std::string const& value)
{
    m_Refresh_token = value;
}
int32_t OauthAccessTokenResponseCode::getRefreshTokenExpiresIn() const
{
    return m_Refresh_token_expires_in;
}
void OauthAccessTokenResponseCode::setRefreshTokenExpiresIn(int32_t const value)
{
    m_Refresh_token_expires_in = value;
}


} // namespace org::openapitools::server::model

