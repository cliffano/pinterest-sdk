/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.4.1
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "ProductGroupPromotionArrayElement.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

ProductGroupPromotionArrayElement::ProductGroupPromotionArrayElement()
{
    m_DataIsSet = false;
    m_ExceptionsIsSet = false;
    
}

void ProductGroupPromotionArrayElement::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool ProductGroupPromotionArrayElement::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool ProductGroupPromotionArrayElement::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "ProductGroupPromotionArrayElement" : pathPrefix;

            
    return success;
}

bool ProductGroupPromotionArrayElement::operator==(const ProductGroupPromotionArrayElement& rhs) const
{
    return
    
    
    
    ((!dataIsSet() && !rhs.dataIsSet()) || (dataIsSet() && rhs.dataIsSet() && getData() == rhs.getData())) &&
    
    
    ((!exceptionsIsSet() && !rhs.exceptionsIsSet()) || (exceptionsIsSet() && rhs.exceptionsIsSet() && getExceptions() == rhs.getExceptions()))
    
    ;
}

bool ProductGroupPromotionArrayElement::operator!=(const ProductGroupPromotionArrayElement& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const ProductGroupPromotionArrayElement& o)
{
    j = nlohmann::json();
    if(o.dataIsSet())
        j["data"] = o.m_Data;
    if(o.exceptionsIsSet())
        j["exceptions"] = o.m_Exceptions;
    
}

void from_json(const nlohmann::json& j, ProductGroupPromotionArrayElement& o)
{
    if(j.find("data") != j.end())
    {
        j.at("data").get_to(o.m_Data);
        o.m_DataIsSet = true;
    } 
    if(j.find("exceptions") != j.end())
    {
        j.at("exceptions").get_to(o.m_Exceptions);
        o.m_ExceptionsIsSet = true;
    } 
    
}

org::openapitools::server::model::ProductGroupPromotion ProductGroupPromotionArrayElement::getData() const
{
    return m_Data;
}
void ProductGroupPromotionArrayElement::setData(org::openapitools::server::model::ProductGroupPromotion const& value)
{
    m_Data = value;
    m_DataIsSet = true;
}
bool ProductGroupPromotionArrayElement::dataIsSet() const
{
    return m_DataIsSet;
}
void ProductGroupPromotionArrayElement::unsetData()
{
    m_DataIsSet = false;
}
org::openapitools::server::model::Exception ProductGroupPromotionArrayElement::getExceptions() const
{
    return m_Exceptions;
}
void ProductGroupPromotionArrayElement::setExceptions(org::openapitools::server::model::Exception const& value)
{
    m_Exceptions = value;
    m_ExceptionsIsSet = true;
}
bool ProductGroupPromotionArrayElement::exceptionsIsSet() const
{
    return m_ExceptionsIsSet;
}
void ProductGroupPromotionArrayElement::unsetExceptions()
{
    m_ExceptionsIsSet = false;
}


} // namespace org::openapitools::server::model
