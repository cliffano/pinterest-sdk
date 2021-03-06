/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.3.0
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
    m_CountryIsSet = false;
    m_LanguageIsSet = false;
    m_OperationIsSet = false;
    m_ItemsIsSet = false;
    
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

                     
    if (itemsIsSet())
    {
        const std::vector<ItemBatchRecord>& value = m_Items;
        const std::string currentValuePath = _pathPrefix + ".items";
                
        
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const ItemBatchRecord& value : value)
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
    
    
    
    ((!countryIsSet() && !rhs.countryIsSet()) || (countryIsSet() && rhs.countryIsSet() && getCountry() == rhs.getCountry())) &&
    
    
    ((!languageIsSet() && !rhs.languageIsSet()) || (languageIsSet() && rhs.languageIsSet() && getLanguage() == rhs.getLanguage())) &&
    
    
    ((!operationIsSet() && !rhs.operationIsSet()) || (operationIsSet() && rhs.operationIsSet() && getOperation() == rhs.getOperation())) &&
    
    
    ((!itemsIsSet() && !rhs.itemsIsSet()) || (itemsIsSet() && rhs.itemsIsSet() && getItems() == rhs.getItems()))
    
    ;
}

bool CatalogsItemsBatchRequest::operator!=(const CatalogsItemsBatchRequest& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const CatalogsItemsBatchRequest& o)
{
    j = nlohmann::json();
    if(o.countryIsSet())
        j["country"] = o.m_Country;
    if(o.languageIsSet())
        j["language"] = o.m_Language;
    if(o.operationIsSet())
        j["operation"] = o.m_Operation;
    if(o.itemsIsSet() || !o.m_Items.empty())
        j["items"] = o.m_Items;
    
}

void from_json(const nlohmann::json& j, CatalogsItemsBatchRequest& o)
{
    if(j.find("country") != j.end())
    {
        j.at("country").get_to(o.m_Country);
        o.m_CountryIsSet = true;
    } 
    if(j.find("language") != j.end())
    {
        j.at("language").get_to(o.m_Language);
        o.m_LanguageIsSet = true;
    } 
    if(j.find("operation") != j.end())
    {
        j.at("operation").get_to(o.m_Operation);
        o.m_OperationIsSet = true;
    } 
    if(j.find("items") != j.end())
    {
        j.at("items").get_to(o.m_Items);
        o.m_ItemsIsSet = true;
    } 
    
}

Country CatalogsItemsBatchRequest::getCountry() const
{
    return m_Country;
}
void CatalogsItemsBatchRequest::setCountry(Country const& value)
{
    m_Country = value;
    m_CountryIsSet = true;
}
bool CatalogsItemsBatchRequest::countryIsSet() const
{
    return m_CountryIsSet;
}
void CatalogsItemsBatchRequest::unsetCountry()
{
    m_CountryIsSet = false;
}
Language CatalogsItemsBatchRequest::getLanguage() const
{
    return m_Language;
}
void CatalogsItemsBatchRequest::setLanguage(Language const& value)
{
    m_Language = value;
    m_LanguageIsSet = true;
}
bool CatalogsItemsBatchRequest::languageIsSet() const
{
    return m_LanguageIsSet;
}
void CatalogsItemsBatchRequest::unsetLanguage()
{
    m_LanguageIsSet = false;
}
BatchOperation CatalogsItemsBatchRequest::getOperation() const
{
    return m_Operation;
}
void CatalogsItemsBatchRequest::setOperation(BatchOperation const& value)
{
    m_Operation = value;
    m_OperationIsSet = true;
}
bool CatalogsItemsBatchRequest::operationIsSet() const
{
    return m_OperationIsSet;
}
void CatalogsItemsBatchRequest::unsetOperation()
{
    m_OperationIsSet = false;
}
std::vector<ItemBatchRecord> CatalogsItemsBatchRequest::getItems() const
{
    return m_Items;
}
void CatalogsItemsBatchRequest::setItems(std::vector<ItemBatchRecord> const& value)
{
    m_Items = value;
    m_ItemsIsSet = true;
}
bool CatalogsItemsBatchRequest::itemsIsSet() const
{
    return m_ItemsIsSet;
}
void CatalogsItemsBatchRequest::unsetItems()
{
    m_ItemsIsSet = false;
}


} // namespace org::openapitools::server::model

