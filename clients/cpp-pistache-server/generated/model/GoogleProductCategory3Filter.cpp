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


#include "GoogleProductCategory3Filter.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

GoogleProductCategory3Filter::GoogleProductCategory3Filter()
{
    
}

void GoogleProductCategory3Filter::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool GoogleProductCategory3Filter::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool GoogleProductCategory3Filter::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "GoogleProductCategory3Filter" : pathPrefix;

        
    return success;
}

bool GoogleProductCategory3Filter::operator==(const GoogleProductCategory3Filter& rhs) const
{
    return
    
    
    (getGOOGLEPRODUCTCATEGORY3() == rhs.getGOOGLEPRODUCTCATEGORY3())
    
    
    ;
}

bool GoogleProductCategory3Filter::operator!=(const GoogleProductCategory3Filter& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const GoogleProductCategory3Filter& o)
{
    j = nlohmann::json::object();
    j["GOOGLE_PRODUCT_CATEGORY_3"] = o.m_GOOGLE_PRODUCT_CATEGORY_3;
    
}

void from_json(const nlohmann::json& j, GoogleProductCategory3Filter& o)
{
    j.at("GOOGLE_PRODUCT_CATEGORY_3").get_to(o.m_GOOGLE_PRODUCT_CATEGORY_3);
    
}

org::openapitools::server::model::CatalogsProductGroupMultipleStringListCriteria GoogleProductCategory3Filter::getGOOGLEPRODUCTCATEGORY3() const
{
    return m_GOOGLE_PRODUCT_CATEGORY_3;
}
void GoogleProductCategory3Filter::setGOOGLEPRODUCTCATEGORY3(org::openapitools::server::model::CatalogsProductGroupMultipleStringListCriteria const& value)
{
    m_GOOGLE_PRODUCT_CATEGORY_3 = value;
}


} // namespace org::openapitools::server::model

