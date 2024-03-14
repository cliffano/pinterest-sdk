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


#include "CampaignUpdateResponse.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

CampaignUpdateResponse::CampaignUpdateResponse()
{
    m_ItemsIsSet = false;
    
}

void CampaignUpdateResponse::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool CampaignUpdateResponse::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool CampaignUpdateResponse::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "CampaignUpdateResponse" : pathPrefix;

         
    if (itemsIsSet())
    {
        const std::vector<org::openapitools::server::model::CampaignCreateResponseItem>& value = m_Items;
        const std::string currentValuePath = _pathPrefix + ".items";
                
        
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const org::openapitools::server::model::CampaignCreateResponseItem& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        success = value.validate(msg, currentValuePath + ".items") && success;
 
                i++;
            }
        }

    }
    
    return success;
}

bool CampaignUpdateResponse::operator==(const CampaignUpdateResponse& rhs) const
{
    return
    
    
    
    ((!itemsIsSet() && !rhs.itemsIsSet()) || (itemsIsSet() && rhs.itemsIsSet() && getItems() == rhs.getItems()))
    
    ;
}

bool CampaignUpdateResponse::operator!=(const CampaignUpdateResponse& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const CampaignUpdateResponse& o)
{
    j = nlohmann::json::object();
    if(o.itemsIsSet() || !o.m_Items.empty())
        j["items"] = o.m_Items;
    
}

void from_json(const nlohmann::json& j, CampaignUpdateResponse& o)
{
    if(j.find("items") != j.end())
    {
        j.at("items").get_to(o.m_Items);
        o.m_ItemsIsSet = true;
    } 
    
}

std::vector<org::openapitools::server::model::CampaignCreateResponseItem> CampaignUpdateResponse::getItems() const
{
    return m_Items;
}
void CampaignUpdateResponse::setItems(std::vector<org::openapitools::server::model::CampaignCreateResponseItem> const& value)
{
    m_Items = value;
    m_ItemsIsSet = true;
}
bool CampaignUpdateResponse::itemsIsSet() const
{
    return m_ItemsIsSet;
}
void CampaignUpdateResponse::unsetItems()
{
    m_ItemsIsSet = false;
}


} // namespace org::openapitools::server::model

