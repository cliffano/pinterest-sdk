/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.12.0
* Contact: blah+oapicf@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "OauthAccessTokenRequestCode.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

OauthAccessTokenRequestCode::OauthAccessTokenRequestCode()
{
    m_Grant_type = "";
    m_Code = "";
    m_Redirect_uri = "";
    
}

void OauthAccessTokenRequestCode::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool OauthAccessTokenRequestCode::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool OauthAccessTokenRequestCode::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "OauthAccessTokenRequestCode" : pathPrefix;

                
    return success;
}

bool OauthAccessTokenRequestCode::operator==(const OauthAccessTokenRequestCode& rhs) const
{
    return
    
    
    (getGrantType() == rhs.getGrantType())
     &&
    
    (getCode() == rhs.getCode())
     &&
    
    (getRedirectUri() == rhs.getRedirectUri())
    
    
    ;
}

bool OauthAccessTokenRequestCode::operator!=(const OauthAccessTokenRequestCode& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const OauthAccessTokenRequestCode& o)
{
    j = nlohmann::json::object();
    j["grant_type"] = o.m_Grant_type;
    j["code"] = o.m_Code;
    j["redirect_uri"] = o.m_Redirect_uri;
    
}

void from_json(const nlohmann::json& j, OauthAccessTokenRequestCode& o)
{
    j.at("grant_type").get_to(o.m_Grant_type);
    j.at("code").get_to(o.m_Code);
    j.at("redirect_uri").get_to(o.m_Redirect_uri);
    
}

std::string OauthAccessTokenRequestCode::getGrantType() const
{
    return m_Grant_type;
}
void OauthAccessTokenRequestCode::setGrantType(std::string const& value)
{
    m_Grant_type = value;
}
std::string OauthAccessTokenRequestCode::getCode() const
{
    return m_Code;
}
void OauthAccessTokenRequestCode::setCode(std::string const& value)
{
    m_Code = value;
}
std::string OauthAccessTokenRequestCode::getRedirectUri() const
{
    return m_Redirect_uri;
}
void OauthAccessTokenRequestCode::setRedirectUri(std::string const& value)
{
    m_Redirect_uri = value;
}


} // namespace org::openapitools::server::model

