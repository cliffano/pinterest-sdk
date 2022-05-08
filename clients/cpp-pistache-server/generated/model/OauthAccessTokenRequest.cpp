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


#include "OauthAccessTokenRequest.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

OauthAccessTokenRequest::OauthAccessTokenRequest()
{
    m_Grant_type = "";
    
}

void OauthAccessTokenRequest::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool OauthAccessTokenRequest::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool OauthAccessTokenRequest::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "OauthAccessTokenRequest" : pathPrefix;

        
    return success;
}

bool OauthAccessTokenRequest::operator==(const OauthAccessTokenRequest& rhs) const
{
    return
    
    
    (getGrantType() == rhs.getGrantType())
    
    
    ;
}

bool OauthAccessTokenRequest::operator!=(const OauthAccessTokenRequest& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const OauthAccessTokenRequest& o)
{
    j = nlohmann::json();
    j["grant_type"] = o.m_Grant_type;
    
}

void from_json(const nlohmann::json& j, OauthAccessTokenRequest& o)
{
    j.at("grant_type").get_to(o.m_Grant_type);
    
}

std::string OauthAccessTokenRequest::getGrantType() const
{
    return m_Grant_type;
}
void OauthAccessTokenRequest::setGrantType(std::string const& value)
{
    m_Grant_type = value;
}


} // namespace org::openapitools::server::model

