/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.6.0
* Contact: blah+oapicf@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "OauthAccessTokenRequestRefresh.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

OauthAccessTokenRequestRefresh::OauthAccessTokenRequestRefresh()
{
    m_Grant_type = "";
    m_Refresh_token = "";
    m_Scope = "";
    m_ScopeIsSet = false;
    
}

void OauthAccessTokenRequestRefresh::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool OauthAccessTokenRequestRefresh::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool OauthAccessTokenRequestRefresh::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "OauthAccessTokenRequestRefresh" : pathPrefix;

                
    return success;
}

bool OauthAccessTokenRequestRefresh::operator==(const OauthAccessTokenRequestRefresh& rhs) const
{
    return
    
    
    (getGrantType() == rhs.getGrantType())
     &&
    
    (getRefreshToken() == rhs.getRefreshToken())
     &&
    
    
    ((!scopeIsSet() && !rhs.scopeIsSet()) || (scopeIsSet() && rhs.scopeIsSet() && getScope() == rhs.getScope()))
    
    ;
}

bool OauthAccessTokenRequestRefresh::operator!=(const OauthAccessTokenRequestRefresh& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const OauthAccessTokenRequestRefresh& o)
{
    j = nlohmann::json::object();
    j["grant_type"] = o.m_Grant_type;
    j["refresh_token"] = o.m_Refresh_token;
    if(o.scopeIsSet())
        j["scope"] = o.m_Scope;
    
}

void from_json(const nlohmann::json& j, OauthAccessTokenRequestRefresh& o)
{
    j.at("grant_type").get_to(o.m_Grant_type);
    j.at("refresh_token").get_to(o.m_Refresh_token);
    if(j.find("scope") != j.end())
    {
        j.at("scope").get_to(o.m_Scope);
        o.m_ScopeIsSet = true;
    } 
    
}

std::string OauthAccessTokenRequestRefresh::getGrantType() const
{
    return m_Grant_type;
}
void OauthAccessTokenRequestRefresh::setGrantType(std::string const& value)
{
    m_Grant_type = value;
}
std::string OauthAccessTokenRequestRefresh::getRefreshToken() const
{
    return m_Refresh_token;
}
void OauthAccessTokenRequestRefresh::setRefreshToken(std::string const& value)
{
    m_Refresh_token = value;
}
std::string OauthAccessTokenRequestRefresh::getScope() const
{
    return m_Scope;
}
void OauthAccessTokenRequestRefresh::setScope(std::string const& value)
{
    m_Scope = value;
    m_ScopeIsSet = true;
}
bool OauthAccessTokenRequestRefresh::scopeIsSet() const
{
    return m_ScopeIsSet;
}
void OauthAccessTokenRequestRefresh::unsetScope()
{
    m_ScopeIsSet = false;
}


} // namespace org::openapitools::server::model
