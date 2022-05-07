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


#include "ProductType3Filter.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

ProductType3Filter::ProductType3Filter()
{
    
}

void ProductType3Filter::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool ProductType3Filter::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool ProductType3Filter::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "ProductType3Filter" : pathPrefix;

        
    return success;
}

bool ProductType3Filter::operator==(const ProductType3Filter& rhs) const
{
    return
    
    
    (getPRODUCTTYPE3() == rhs.getPRODUCTTYPE3())
    
    
    ;
}

bool ProductType3Filter::operator!=(const ProductType3Filter& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const ProductType3Filter& o)
{
    j = nlohmann::json();
    j["PRODUCT_TYPE_3"] = o.m_PRODUCT_TYPE_3;
    
}

void from_json(const nlohmann::json& j, ProductType3Filter& o)
{
    j.at("PRODUCT_TYPE_3").get_to(o.m_PRODUCT_TYPE_3);
    
}

CatalogsProductGroupMultipleStringListCriteria ProductType3Filter::getPRODUCTTYPE3() const
{
    return m_PRODUCT_TYPE_3;
}
void ProductType3Filter::setPRODUCTTYPE3(CatalogsProductGroupMultipleStringListCriteria const& value)
{
    m_PRODUCT_TYPE_3 = value;
}


} // namespace org::openapitools::server::model

