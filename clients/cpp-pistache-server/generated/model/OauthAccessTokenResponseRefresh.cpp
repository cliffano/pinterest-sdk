/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.3.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "OauthAccessTokenResponseRefresh.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

OauthAccessTokenResponseRefresh::OauthAccessTokenResponseRefresh()
{
    m_Response_type = "";
    m_Response_typeIsSet = false;
    m_Access_token = "";
    m_Token_type = "bearer";
    m_Expires_in = 0;
    m_Scope = "";
    
}

void OauthAccessTokenResponseRefresh::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool OauthAccessTokenResponseRefresh::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool OauthAccessTokenResponseRefresh::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "OauthAccessTokenResponseRefresh" : pathPrefix;

                        
    return success;
}

bool OauthAccessTokenResponseRefresh::operator==(const OauthAccessTokenResponseRefresh& rhs) const
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
    
    
    ;
}

bool OauthAccessTokenResponseRefresh::operator!=(const OauthAccessTokenResponseRefresh& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const OauthAccessTokenResponseRefresh& o)
{
    j = nlohmann::json();
    if(o.responseTypeIsSet())
        j["response_type"] = o.m_Response_type;
    j["access_token"] = o.m_Access_token;
    j["token_type"] = o.m_Token_type;
    j["expires_in"] = o.m_Expires_in;
    j["scope"] = o.m_Scope;
    
}

void from_json(const nlohmann::json& j, OauthAccessTokenResponseRefresh& o)
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
    
}

std::string OauthAccessTokenResponseRefresh::getResponseType() const
{
    return m_Response_type;
}
void OauthAccessTokenResponseRefresh::setResponseType(std::string const& value)
{
    m_Response_type = value;
    m_Response_typeIsSet = true;
}
bool OauthAccessTokenResponseRefresh::responseTypeIsSet() const
{
    return m_Response_typeIsSet;
}
void OauthAccessTokenResponseRefresh::unsetResponse_type()
{
    m_Response_typeIsSet = false;
}
std::string OauthAccessTokenResponseRefresh::getAccessToken() const
{
    return m_Access_token;
}
void OauthAccessTokenResponseRefresh::setAccessToken(std::string const& value)
{
    m_Access_token = value;
}
std::string OauthAccessTokenResponseRefresh::getTokenType() const
{
    return m_Token_type;
}
void OauthAccessTokenResponseRefresh::setTokenType(std::string const& value)
{
    m_Token_type = value;
}
int32_t OauthAccessTokenResponseRefresh::getExpiresIn() const
{
    return m_Expires_in;
}
void OauthAccessTokenResponseRefresh::setExpiresIn(int32_t const value)
{
    m_Expires_in = value;
}
std::string OauthAccessTokenResponseRefresh::getScope() const
{
    return m_Scope;
}
void OauthAccessTokenResponseRefresh::setScope(std::string const& value)
{
    m_Scope = value;
}


} // namespace org::openapitools::server::model

