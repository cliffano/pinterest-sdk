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


#include "ProductType4Filter.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

ProductType4Filter::ProductType4Filter()
{
    
}

void ProductType4Filter::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool ProductType4Filter::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool ProductType4Filter::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "ProductType4Filter" : pathPrefix;

        
    return success;
}

bool ProductType4Filter::operator==(const ProductType4Filter& rhs) const
{
    return
    
    
    (getPRODUCTTYPE4() == rhs.getPRODUCTTYPE4())
    
    
    ;
}

bool ProductType4Filter::operator!=(const ProductType4Filter& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const ProductType4Filter& o)
{
    j = nlohmann::json::object();
    j["PRODUCT_TYPE_4"] = o.m_PRODUCT_TYPE_4;
    
}

void from_json(const nlohmann::json& j, ProductType4Filter& o)
{
    j.at("PRODUCT_TYPE_4").get_to(o.m_PRODUCT_TYPE_4);
    
}

org::openapitools::server::model::CatalogsProductGroupMultipleStringListCriteria ProductType4Filter::getPRODUCTTYPE4() const
{
    return m_PRODUCT_TYPE_4;
}
void ProductType4Filter::setPRODUCTTYPE4(org::openapitools::server::model::CatalogsProductGroupMultipleStringListCriteria const& value)
{
    m_PRODUCT_TYPE_4 = value;
}


} // namespace org::openapitools::server::model

