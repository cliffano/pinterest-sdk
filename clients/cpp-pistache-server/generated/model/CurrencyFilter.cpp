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


#include "CurrencyFilter.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

CurrencyFilter::CurrencyFilter()
{
    
}

void CurrencyFilter::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool CurrencyFilter::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool CurrencyFilter::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "CurrencyFilter" : pathPrefix;

        
    return success;
}

bool CurrencyFilter::operator==(const CurrencyFilter& rhs) const
{
    return
    
    
    (getCURRENCY() == rhs.getCURRENCY())
    
    
    ;
}

bool CurrencyFilter::operator!=(const CurrencyFilter& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const CurrencyFilter& o)
{
    j = nlohmann::json();
    j["CURRENCY"] = o.m_CURRENCY;
    
}

void from_json(const nlohmann::json& j, CurrencyFilter& o)
{
    j.at("CURRENCY").get_to(o.m_CURRENCY);
    
}

CatalogsProductGroupCurrencyCriteria CurrencyFilter::getCURRENCY() const
{
    return m_CURRENCY;
}
void CurrencyFilter::setCURRENCY(CatalogsProductGroupCurrencyCriteria const& value)
{
    m_CURRENCY = value;
}


} // namespace org::openapitools::server::model

