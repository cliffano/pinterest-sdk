/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.6.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "OauthAccessTokenRequestCode_allOf.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

OauthAccessTokenRequestCode_allOf::OauthAccessTokenRequestCode_allOf()
{
    m_Code = "";
    m_Redirect_uri = "";
    
}

void OauthAccessTokenRequestCode_allOf::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool OauthAccessTokenRequestCode_allOf::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool OauthAccessTokenRequestCode_allOf::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "OauthAccessTokenRequestCode_allOf" : pathPrefix;

            
    return success;
}

bool OauthAccessTokenRequestCode_allOf::operator==(const OauthAccessTokenRequestCode_allOf& rhs) const
{
    return
    
    
    (getCode() == rhs.getCode())
     &&
    
    (getRedirectUri() == rhs.getRedirectUri())
    
    
    ;
}

bool OauthAccessTokenRequestCode_allOf::operator!=(const OauthAccessTokenRequestCode_allOf& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const OauthAccessTokenRequestCode_allOf& o)
{
    j = nlohmann::json();
    j["code"] = o.m_Code;
    j["redirect_uri"] = o.m_Redirect_uri;
    
}

void from_json(const nlohmann::json& j, OauthAccessTokenRequestCode_allOf& o)
{
    j.at("code").get_to(o.m_Code);
    j.at("redirect_uri").get_to(o.m_Redirect_uri);
    
}

std::string OauthAccessTokenRequestCode_allOf::getCode() const
{
    return m_Code;
}
void OauthAccessTokenRequestCode_allOf::setCode(std::string const& value)
{
    m_Code = value;
}
std::string OauthAccessTokenRequestCode_allOf::getRedirectUri() const
{
    return m_Redirect_uri;
}
void OauthAccessTokenRequestCode_allOf::setRedirectUri(std::string const& value)
{
    m_Redirect_uri = value;
}


} // namespace org::openapitools::server::model

