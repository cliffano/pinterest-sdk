/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.4.1
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "CustomLabel3Filter.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

CustomLabel3Filter::CustomLabel3Filter()
{
    
}

void CustomLabel3Filter::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool CustomLabel3Filter::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool CustomLabel3Filter::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "CustomLabel3Filter" : pathPrefix;

        
    return success;
}

bool CustomLabel3Filter::operator==(const CustomLabel3Filter& rhs) const
{
    return
    
    
    (getCUSTOMLABEL3() == rhs.getCUSTOMLABEL3())
    
    
    ;
}

bool CustomLabel3Filter::operator!=(const CustomLabel3Filter& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const CustomLabel3Filter& o)
{
    j = nlohmann::json();
    j["CUSTOM_LABEL_3"] = o.m_CUSTOM_LABEL_3;
    
}

void from_json(const nlohmann::json& j, CustomLabel3Filter& o)
{
    j.at("CUSTOM_LABEL_3").get_to(o.m_CUSTOM_LABEL_3);
    
}

org::openapitools::server::model::CatalogsProductGroupMultipleStringCriteria CustomLabel3Filter::getCUSTOMLABEL3() const
{
    return m_CUSTOM_LABEL_3;
}
void CustomLabel3Filter::setCUSTOMLABEL3(org::openapitools::server::model::CatalogsProductGroupMultipleStringCriteria const& value)
{
    m_CUSTOM_LABEL_3 = value;
}


} // namespace org::openapitools::server::model

