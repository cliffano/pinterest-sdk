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


#include "Feed_processing_results_list_200_response_allOf.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

Feed_processing_results_list_200_response_allOf::Feed_processing_results_list_200_response_allOf()
{
    m_ItemsIsSet = false;
    
}

void Feed_processing_results_list_200_response_allOf::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool Feed_processing_results_list_200_response_allOf::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool Feed_processing_results_list_200_response_allOf::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "Feed_processing_results_list_200_response_allOf" : pathPrefix;

         
    if (itemsIsSet())
    {
        const std::vector<org::openapitools::server::model::CatalogsFeedProcessingResult>& value = m_Items;
        const std::string currentValuePath = _pathPrefix + ".items";
                
        
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const org::openapitools::server::model::CatalogsFeedProcessingResult& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        success = value.validate(msg, currentValuePath + ".items") && success;
 
                i++;
            }
        }

    }
    
    return success;
}

bool Feed_processing_results_list_200_response_allOf::operator==(const Feed_processing_results_list_200_response_allOf& rhs) const
{
    return
    
    
    
    ((!itemsIsSet() && !rhs.itemsIsSet()) || (itemsIsSet() && rhs.itemsIsSet() && getItems() == rhs.getItems()))
    
    ;
}

bool Feed_processing_results_list_200_response_allOf::operator!=(const Feed_processing_results_list_200_response_allOf& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const Feed_processing_results_list_200_response_allOf& o)
{
    j = nlohmann::json();
    if(o.itemsIsSet() || !o.m_Items.empty())
        j["items"] = o.m_Items;
    
}

void from_json(const nlohmann::json& j, Feed_processing_results_list_200_response_allOf& o)
{
    if(j.find("items") != j.end())
    {
        j.at("items").get_to(o.m_Items);
        o.m_ItemsIsSet = true;
    } 
    
}

std::vector<org::openapitools::server::model::CatalogsFeedProcessingResult> Feed_processing_results_list_200_response_allOf::getItems() const
{
    return m_Items;
}
void Feed_processing_results_list_200_response_allOf::setItems(std::vector<org::openapitools::server::model::CatalogsFeedProcessingResult> const& value)
{
    m_Items = value;
    m_ItemsIsSet = true;
}
bool Feed_processing_results_list_200_response_allOf::itemsIsSet() const
{
    return m_ItemsIsSet;
}
void Feed_processing_results_list_200_response_allOf::unsetItems()
{
    m_ItemsIsSet = false;
}


} // namespace org::openapitools::server::model

