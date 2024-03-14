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


#include "CatalogsProductGroupCurrencyCriteria.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

CatalogsProductGroupCurrencyCriteria::CatalogsProductGroupCurrencyCriteria()
{
    m_Negated = false;
    m_NegatedIsSet = false;
    
}

void CatalogsProductGroupCurrencyCriteria::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool CatalogsProductGroupCurrencyCriteria::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool CatalogsProductGroupCurrencyCriteria::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "CatalogsProductGroupCurrencyCriteria" : pathPrefix;

            
    return success;
}

bool CatalogsProductGroupCurrencyCriteria::operator==(const CatalogsProductGroupCurrencyCriteria& rhs) const
{
    return
    
    
    (getValues() == rhs.getValues())
     &&
    
    
    ((!negatedIsSet() && !rhs.negatedIsSet()) || (negatedIsSet() && rhs.negatedIsSet() && isNegated() == rhs.isNegated()))
    
    ;
}

bool CatalogsProductGroupCurrencyCriteria::operator!=(const CatalogsProductGroupCurrencyCriteria& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const CatalogsProductGroupCurrencyCriteria& o)
{
    j = nlohmann::json::object();
    j["values"] = o.m_Values;
    if(o.negatedIsSet())
        j["negated"] = o.m_Negated;
    
}

void from_json(const nlohmann::json& j, CatalogsProductGroupCurrencyCriteria& o)
{
    j.at("values").get_to(o.m_Values);
    if(j.find("negated") != j.end())
    {
        j.at("negated").get_to(o.m_Negated);
        o.m_NegatedIsSet = true;
    } 
    
}

org::openapitools::server::model::NonNullableCatalogsCurrency CatalogsProductGroupCurrencyCriteria::getValues() const
{
    return m_Values;
}
void CatalogsProductGroupCurrencyCriteria::setValues(org::openapitools::server::model::NonNullableCatalogsCurrency const& value)
{
    m_Values = value;
}
bool CatalogsProductGroupCurrencyCriteria::isNegated() const
{
    return m_Negated;
}
void CatalogsProductGroupCurrencyCriteria::setNegated(bool const value)
{
    m_Negated = value;
    m_NegatedIsSet = true;
}
bool CatalogsProductGroupCurrencyCriteria::negatedIsSet() const
{
    return m_NegatedIsSet;
}
void CatalogsProductGroupCurrencyCriteria::unsetNegated()
{
    m_NegatedIsSet = false;
}


} // namespace org::openapitools::server::model

