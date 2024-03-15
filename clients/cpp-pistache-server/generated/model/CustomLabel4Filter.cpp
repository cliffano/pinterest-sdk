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


#include "CustomLabel4Filter.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

CustomLabel4Filter::CustomLabel4Filter()
{
    
}

void CustomLabel4Filter::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool CustomLabel4Filter::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool CustomLabel4Filter::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "CustomLabel4Filter" : pathPrefix;

        
    return success;
}

bool CustomLabel4Filter::operator==(const CustomLabel4Filter& rhs) const
{
    return
    
    
    (getCUSTOMLABEL4() == rhs.getCUSTOMLABEL4())
    
    
    ;
}

bool CustomLabel4Filter::operator!=(const CustomLabel4Filter& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const CustomLabel4Filter& o)
{
    j = nlohmann::json::object();
    j["CUSTOM_LABEL_4"] = o.m_CUSTOM_LABEL_4;
    
}

void from_json(const nlohmann::json& j, CustomLabel4Filter& o)
{
    j.at("CUSTOM_LABEL_4").get_to(o.m_CUSTOM_LABEL_4);
    
}

org::openapitools::server::model::CatalogsProductGroupMultipleStringCriteria CustomLabel4Filter::getCUSTOMLABEL4() const
{
    return m_CUSTOM_LABEL_4;
}
void CustomLabel4Filter::setCUSTOMLABEL4(org::openapitools::server::model::CatalogsProductGroupMultipleStringCriteria const& value)
{
    m_CUSTOM_LABEL_4 = value;
}


} // namespace org::openapitools::server::model

