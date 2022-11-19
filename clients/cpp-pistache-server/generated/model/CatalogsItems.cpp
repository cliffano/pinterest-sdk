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


#include "CatalogsItems.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

CatalogsItems::CatalogsItems()
{
    m_ItemsIsSet = false;
    
}

void CatalogsItems::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool CatalogsItems::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool CatalogsItems::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "CatalogsItems" : pathPrefix;

         
    if (itemsIsSet())
    {
        const std::vector<org::openapitools::server::model::ItemResponse>& value = m_Items;
        const std::string currentValuePath = _pathPrefix + ".items";
                
        
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const org::openapitools::server::model::ItemResponse& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        success = value.validate(msg, currentValuePath + ".items") && success;
 
                i++;
            }
        }

    }
    
    return success;
}

bool CatalogsItems::operator==(const CatalogsItems& rhs) const
{
    return
    
    
    
    ((!itemsIsSet() && !rhs.itemsIsSet()) || (itemsIsSet() && rhs.itemsIsSet() && getItems() == rhs.getItems()))
    
    ;
}

bool CatalogsItems::operator!=(const CatalogsItems& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const CatalogsItems& o)
{
    j = nlohmann::json();
    if(o.itemsIsSet() || !o.m_Items.empty())
        j["items"] = o.m_Items;
    
}

void from_json(const nlohmann::json& j, CatalogsItems& o)
{
    if(j.find("items") != j.end())
    {
        j.at("items").get_to(o.m_Items);
        o.m_ItemsIsSet = true;
    } 
    
}

std::vector<org::openapitools::server::model::ItemResponse> CatalogsItems::getItems() const
{
    return m_Items;
}
void CatalogsItems::setItems(std::vector<org::openapitools::server::model::ItemResponse> const& value)
{
    m_Items = value;
    m_ItemsIsSet = true;
}
bool CatalogsItems::itemsIsSet() const
{
    return m_ItemsIsSet;
}
void CatalogsItems::unsetItems()
{
    m_ItemsIsSet = false;
}


} // namespace org::openapitools::server::model

