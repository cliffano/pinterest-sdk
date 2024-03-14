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


#include "BrandFilter.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

BrandFilter::BrandFilter()
{
    
}

void BrandFilter::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool BrandFilter::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool BrandFilter::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "BrandFilter" : pathPrefix;

        
    return success;
}

bool BrandFilter::operator==(const BrandFilter& rhs) const
{
    return
    
    
    (getBRAND() == rhs.getBRAND())
    
    
    ;
}

bool BrandFilter::operator!=(const BrandFilter& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const BrandFilter& o)
{
    j = nlohmann::json::object();
    j["BRAND"] = o.m_BRAND;
    
}

void from_json(const nlohmann::json& j, BrandFilter& o)
{
    j.at("BRAND").get_to(o.m_BRAND);
    
}

org::openapitools::server::model::CatalogsProductGroupMultipleStringCriteria BrandFilter::getBRAND() const
{
    return m_BRAND;
}
void BrandFilter::setBRAND(org::openapitools::server::model::CatalogsProductGroupMultipleStringCriteria const& value)
{
    m_BRAND = value;
}


} // namespace org::openapitools::server::model

