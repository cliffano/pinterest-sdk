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


#include "CampaignResponse_allOf.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

CampaignResponse_allOf::CampaignResponse_allOf()
{
    m_Id = "";
    
}

void CampaignResponse_allOf::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool CampaignResponse_allOf::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool CampaignResponse_allOf::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "CampaignResponse_allOf" : pathPrefix;

         
    
    /* Id */ {
        const std::string& value = m_Id;
        const std::string currentValuePath = _pathPrefix + ".id";
                
        

    }
    
    return success;
}

bool CampaignResponse_allOf::operator==(const CampaignResponse_allOf& rhs) const
{
    return
    
    
    (getId() == rhs.getId())
    
    
    ;
}

bool CampaignResponse_allOf::operator!=(const CampaignResponse_allOf& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const CampaignResponse_allOf& o)
{
    j = nlohmann::json();
    j["id"] = o.m_Id;
    
}

void from_json(const nlohmann::json& j, CampaignResponse_allOf& o)
{
    j.at("id").get_to(o.m_Id);
    
}

std::string CampaignResponse_allOf::getId() const
{
    return m_Id;
}
void CampaignResponse_allOf::setId(std::string const& value)
{
    m_Id = value;
}


} // namespace org::openapitools::server::model

