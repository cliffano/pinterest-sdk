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


#include "MinPriceFilter.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

MinPriceFilter::MinPriceFilter()
{
    
}

void MinPriceFilter::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool MinPriceFilter::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool MinPriceFilter::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "MinPriceFilter" : pathPrefix;

        
    return success;
}

bool MinPriceFilter::operator==(const MinPriceFilter& rhs) const
{
    return
    
    
    (getMINPRICE() == rhs.getMINPRICE())
    
    
    ;
}

bool MinPriceFilter::operator!=(const MinPriceFilter& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const MinPriceFilter& o)
{
    j = nlohmann::json::object();
    j["MIN_PRICE"] = o.m_MIN_PRICE;
    
}

void from_json(const nlohmann::json& j, MinPriceFilter& o)
{
    j.at("MIN_PRICE").get_to(o.m_MIN_PRICE);
    
}

org::openapitools::server::model::CatalogsProductGroupPricingCriteria MinPriceFilter::getMINPRICE() const
{
    return m_MIN_PRICE;
}
void MinPriceFilter::setMINPRICE(org::openapitools::server::model::CatalogsProductGroupPricingCriteria const& value)
{
    m_MIN_PRICE = value;
}


} // namespace org::openapitools::server::model

