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


#include "CatalogsItemsDeleteDiscontinuedBatchRequest.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

CatalogsItemsDeleteDiscontinuedBatchRequest::CatalogsItemsDeleteDiscontinuedBatchRequest()
{
    
}

void CatalogsItemsDeleteDiscontinuedBatchRequest::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool CatalogsItemsDeleteDiscontinuedBatchRequest::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool CatalogsItemsDeleteDiscontinuedBatchRequest::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "CatalogsItemsDeleteDiscontinuedBatchRequest" : pathPrefix;

                     
    
    /* Items */ {
        const std::vector<org::openapitools::server::model::ItemDeleteDiscontinuedBatchRecord>& value = m_Items;
        const std::string currentValuePath = _pathPrefix + ".items";
                
        
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const org::openapitools::server::model::ItemDeleteDiscontinuedBatchRecord& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        success = value.validate(msg, currentValuePath + ".items") && success;
 
                i++;
            }
        }

    }
    
    return success;
}

bool CatalogsItemsDeleteDiscontinuedBatchRequest::operator==(const CatalogsItemsDeleteDiscontinuedBatchRequest& rhs) const
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

bool CatalogsItemsDeleteDiscontinuedBatchRequest::operator!=(const CatalogsItemsDeleteDiscontinuedBatchRequest& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const CatalogsItemsDeleteDiscontinuedBatchRequest& o)
{
    j = nlohmann::json::object();
    j["country"] = o.m_Country;
    j["language"] = o.m_Language;
    j["operation"] = o.m_Operation;
    j["items"] = o.m_Items;
    
}

void from_json(const nlohmann::json& j, CatalogsItemsDeleteDiscontinuedBatchRequest& o)
{
    j.at("country").get_to(o.m_Country);
    j.at("language").get_to(o.m_Language);
    j.at("operation").get_to(o.m_Operation);
    j.at("items").get_to(o.m_Items);
    
}

org::openapitools::server::model::Country CatalogsItemsDeleteDiscontinuedBatchRequest::getCountry() const
{
    return m_Country;
}
void CatalogsItemsDeleteDiscontinuedBatchRequest::setCountry(org::openapitools::server::model::Country const& value)
{
    m_Country = value;
}
org::openapitools::server::model::Language CatalogsItemsDeleteDiscontinuedBatchRequest::getLanguage() const
{
    return m_Language;
}
void CatalogsItemsDeleteDiscontinuedBatchRequest::setLanguage(org::openapitools::server::model::Language const& value)
{
    m_Language = value;
}
org::openapitools::server::model::BatchOperation CatalogsItemsDeleteDiscontinuedBatchRequest::getOperation() const
{
    return m_Operation;
}
void CatalogsItemsDeleteDiscontinuedBatchRequest::setOperation(org::openapitools::server::model::BatchOperation const& value)
{
    m_Operation = value;
}
std::vector<org::openapitools::server::model::ItemDeleteDiscontinuedBatchRecord> CatalogsItemsDeleteDiscontinuedBatchRequest::getItems() const
{
    return m_Items;
}
void CatalogsItemsDeleteDiscontinuedBatchRequest::setItems(std::vector<org::openapitools::server::model::ItemDeleteDiscontinuedBatchRecord> const& value)
{
    m_Items = value;
}


} // namespace org::openapitools::server::model

