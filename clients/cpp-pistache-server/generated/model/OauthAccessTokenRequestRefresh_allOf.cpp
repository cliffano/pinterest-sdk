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


#include "OauthAccessTokenRequestRefresh_allOf.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

OauthAccessTokenRequestRefresh_allOf::OauthAccessTokenRequestRefresh_allOf()
{
    m_Refresh_token = "";
    m_Scope = "";
    m_ScopeIsSet = false;
    
}

void OauthAccessTokenRequestRefresh_allOf::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool OauthAccessTokenRequestRefresh_allOf::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool OauthAccessTokenRequestRefresh_allOf::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "OauthAccessTokenRequestRefresh_allOf" : pathPrefix;

            
    return success;
}

bool OauthAccessTokenRequestRefresh_allOf::operator==(const OauthAccessTokenRequestRefresh_allOf& rhs) const
{
    return
    
    
    (getRefreshToken() == rhs.getRefreshToken())
     &&
    
    
    ((!scopeIsSet() && !rhs.scopeIsSet()) || (scopeIsSet() && rhs.scopeIsSet() && getScope() == rhs.getScope()))
    
    ;
}

bool OauthAccessTokenRequestRefresh_allOf::operator!=(const OauthAccessTokenRequestRefresh_allOf& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const OauthAccessTokenRequestRefresh_allOf& o)
{
    j = nlohmann::json();
    j["refresh_token"] = o.m_Refresh_token;
    if(o.scopeIsSet())
        j["scope"] = o.m_Scope;
    
}

void from_json(const nlohmann::json& j, OauthAccessTokenRequestRefresh_allOf& o)
{
    j.at("refresh_token").get_to(o.m_Refresh_token);
    if(j.find("scope") != j.end())
    {
        j.at("scope").get_to(o.m_Scope);
        o.m_ScopeIsSet = true;
    } 
    
}

std::string OauthAccessTokenRequestRefresh_allOf::getRefreshToken() const
{
    return m_Refresh_token;
}
void OauthAccessTokenRequestRefresh_allOf::setRefreshToken(std::string const& value)
{
    m_Refresh_token = value;
}
std::string OauthAccessTokenRequestRefresh_allOf::getScope() const
{
    return m_Scope;
}
void OauthAccessTokenRequestRefresh_allOf::setScope(std::string const& value)
{
    m_Scope = value;
    m_ScopeIsSet = true;
}
bool OauthAccessTokenRequestRefresh_allOf::scopeIsSet() const
{
    return m_ScopeIsSet;
}
void OauthAccessTokenRequestRefresh_allOf::unsetScope()
{
    m_ScopeIsSet = false;
}


} // namespace org::openapitools::server::model

