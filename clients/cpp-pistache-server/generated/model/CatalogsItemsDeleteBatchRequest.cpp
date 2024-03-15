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


#include "CatalogsItemsDeleteBatchRequest.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

CatalogsItemsDeleteBatchRequest::CatalogsItemsDeleteBatchRequest()
{
    
}

void CatalogsItemsDeleteBatchRequest::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool CatalogsItemsDeleteBatchRequest::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool CatalogsItemsDeleteBatchRequest::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "CatalogsItemsDeleteBatchRequest" : pathPrefix;

                     
    
    /* Items */ {
        const std::vector<org::openapitools::server::model::ItemDeleteBatchRecord>& value = m_Items;
        const std::string currentValuePath = _pathPrefix + ".items";
                
        
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const org::openapitools::server::model::ItemDeleteBatchRecord& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        success = value.validate(msg, currentValuePath + ".items") && success;
 
                i++;
            }
        }

    }
    
    return success;
}

bool CatalogsItemsDeleteBatchRequest::operator==(const CatalogsItemsDeleteBatchRequest& rhs) const
{
    return
    
    
    (getCountry() == rhs.getCountry())
     &&
    
    (getLanguage() == rhs.getLanguage())
     &&
    
    (getOperation() == rhs.getOperation())
     &&
    
    (getItems() == rhs.getItems())
    
    
    ;
}

bool CatalogsItemsDeleteBatchRequest::operator!=(const CatalogsItemsDeleteBatchRequest& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const CatalogsItemsDeleteBatchRequest& o)
{
    j = nlohmann::json::object();
    j["country"] = o.m_Country;
    j["language"] = o.m_Language;
    j["operation"] = o.m_Operation;
    j["items"] = o.m_Items;
    
}

void from_json(const nlohmann::json& j, CatalogsItemsDeleteBatchRequest& o)
{
    j.at("country").get_to(o.m_Country);
    j.at("language").get_to(o.m_Language);
    j.at("operation").get_to(o.m_Operation);
    j.at("items").get_to(o.m_Items);
    
}

org::openapitools::server::model::Country CatalogsItemsDeleteBatchRequest::getCountry() const
{
    return m_Country;
}
void CatalogsItemsDeleteBatchRequest::setCountry(org::openapitools::server::model::Country const& value)
{
    m_Country = value;
}
org::openapitools::server::model::Language CatalogsItemsDeleteBatchRequest::getLanguage() const
{
    return m_Language;
}
void CatalogsItemsDeleteBatchRequest::setLanguage(org::openapitools::server::model::Language const& value)
{
    m_Language = value;
}
org::openapitools::server::model::BatchOperation CatalogsItemsDeleteBatchRequest::getOperation() const
{
    return m_Operation;
}
void CatalogsItemsDeleteBatchRequest::setOperation(org::openapitools::server::model::BatchOperation const& value)
{
    m_Operation = value;
}
std::vector<org::openapitools::server::model::ItemDeleteBatchRecord> CatalogsItemsDeleteBatchRequest::getItems() const
{
    return m_Items;
}
void CatalogsItemsDeleteBatchRequest::setItems(std::vector<org::openapitools::server::model::ItemDeleteBatchRecord> const& value)
{
    m_Items = value;
}


} // namespace org::openapitools::server::model
