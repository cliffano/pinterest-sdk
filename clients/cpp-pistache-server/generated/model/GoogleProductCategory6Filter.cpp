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


#include "GoogleProductCategory6Filter.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

GoogleProductCategory6Filter::GoogleProductCategory6Filter()
{
    
}

void GoogleProductCategory6Filter::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool GoogleProductCategory6Filter::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool GoogleProductCategory6Filter::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "GoogleProductCategory6Filter" : pathPrefix;

        
    return success;
}

bool GoogleProductCategory6Filter::operator==(const GoogleProductCategory6Filter& rhs) const
{
    return
    
    
    (getGOOGLEPRODUCTCATEGORY6() == rhs.getGOOGLEPRODUCTCATEGORY6())
    
    
    ;
}

bool GoogleProductCategory6Filter::operator!=(const GoogleProductCategory6Filter& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const GoogleProductCategory6Filter& o)
{
    j = nlohmann::json::object();
    j["GOOGLE_PRODUCT_CATEGORY_6"] = o.m_GOOGLE_PRODUCT_CATEGORY_6;
    
}

void from_json(const nlohmann::json& j, GoogleProductCategory6Filter& o)
{
    j.at("GOOGLE_PRODUCT_CATEGORY_6").get_to(o.m_GOOGLE_PRODUCT_CATEGORY_6);
    
}

org::openapitools::server::model::CatalogsProductGroupMultipleStringListCriteria GoogleProductCategory6Filter::getGOOGLEPRODUCTCATEGORY6() const
{
    return m_GOOGLE_PRODUCT_CATEGORY_6;
}
void GoogleProductCategory6Filter::setGOOGLEPRODUCTCATEGORY6(org::openapitools::server::model::CatalogsProductGroupMultipleStringListCriteria const& value)
{
    m_GOOGLE_PRODUCT_CATEGORY_6 = value;
}


} // namespace org::openapitools::server::model

