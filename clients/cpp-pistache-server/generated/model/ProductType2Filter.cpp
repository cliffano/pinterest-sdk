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


#include "ProductType2Filter.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

ProductType2Filter::ProductType2Filter()
{
    
}

void ProductType2Filter::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool ProductType2Filter::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool ProductType2Filter::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "ProductType2Filter" : pathPrefix;

        
    return success;
}

bool ProductType2Filter::operator==(const ProductType2Filter& rhs) const
{
    return
    
    
    (getPRODUCTTYPE2() == rhs.getPRODUCTTYPE2())
    
    
    ;
}

bool ProductType2Filter::operator!=(const ProductType2Filter& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const ProductType2Filter& o)
{
    j = nlohmann::json();
    j["PRODUCT_TYPE_2"] = o.m_PRODUCT_TYPE_2;
    
}

void from_json(const nlohmann::json& j, ProductType2Filter& o)
{
    j.at("PRODUCT_TYPE_2").get_to(o.m_PRODUCT_TYPE_2);
    
}

CatalogsProductGroupMultipleStringListCriteria ProductType2Filter::getPRODUCTTYPE2() const
{
    return m_PRODUCT_TYPE_2;
}
void ProductType2Filter::setPRODUCTTYPE2(CatalogsProductGroupMultipleStringListCriteria const& value)
{
    m_PRODUCT_TYPE_2 = value;
}


} // namespace org::openapitools::server::model

