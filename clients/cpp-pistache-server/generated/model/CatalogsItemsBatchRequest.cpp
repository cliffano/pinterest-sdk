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


#include "CatalogsItemsBatchRequest.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

CatalogsItemsBatchRequest::CatalogsItemsBatchRequest()
{
    
}

void CatalogsItemsBatchRequest::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool CatalogsItemsBatchRequest::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool CatalogsItemsBatchRequest::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "CatalogsItemsBatchRequest" : pathPrefix;

                     
    
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

bool CatalogsItemsBatchRequest::operator==(const CatalogsItemsBatchRequest& rhs) const
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

bool CatalogsItemsBatchRequest::operator!=(const CatalogsItemsBatchRequest& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const CatalogsItemsBatchRequest& o)
{
    j = nlohmann::json();
    j["country"] = o.m_Country;
    j["language"] = o.m_Language;
    j["operation"] = o.m_Operation;
    j["items"] = o.m_Items;
    
}

void from_json(const nlohmann::json& j, CatalogsItemsBatchRequest& o)
{
    j.at("country").get_to(o.m_Country);
    j.at("language").get_to(o.m_Language);
    j.at("operation").get_to(o.m_Operation);
    j.at("items").get_to(o.m_Items);
    
}

org::openapitools::server::model::Country CatalogsItemsBatchRequest::getCountry() const
{
    return m_Country;
}
void CatalogsItemsBatchRequest::setCountry(org::openapitools::server::model::Country const& value)
{
    m_Country = value;
}
org::openapitools::server::model::Language CatalogsItemsBatchRequest::getLanguage() const
{
    return m_Language;
}
void CatalogsItemsBatchRequest::setLanguage(org::openapitools::server::model::Language const& value)
{
    m_Language = value;
}
org::openapitools::server::model::BatchOperation CatalogsItemsBatchRequest::getOperation() const
{
    return m_Operation;
}
void CatalogsItemsBatchRequest::setOperation(org::openapitools::server::model::BatchOperation const& value)
{
    m_Operation = value;
}
std::vector<org::openapitools::server::model::ItemDeleteDiscontinuedBatchRecord> CatalogsItemsBatchRequest::getItems() const
{
    return m_Items;
}
void CatalogsItemsBatchRequest::setItems(std::vector<org::openapitools::server::model::ItemDeleteDiscontinuedBatchRecord> const& value)
{
    m_Items = value;
}


} // namespace org::openapitools::server::model

