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


#include "CustomLabel2Filter.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

CustomLabel2Filter::CustomLabel2Filter()
{
    
}

void CustomLabel2Filter::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool CustomLabel2Filter::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool CustomLabel2Filter::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "CustomLabel2Filter" : pathPrefix;

        
    return success;
}

bool CustomLabel2Filter::operator==(const CustomLabel2Filter& rhs) const
{
    return
    
    
    (getCUSTOMLABEL2() == rhs.getCUSTOMLABEL2())
    
    
    ;
}

bool CustomLabel2Filter::operator!=(const CustomLabel2Filter& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const CustomLabel2Filter& o)
{
    j = nlohmann::json();
    j["CUSTOM_LABEL_2"] = o.m_CUSTOM_LABEL_2;
    
}

void from_json(const nlohmann::json& j, CustomLabel2Filter& o)
{
    j.at("CUSTOM_LABEL_2").get_to(o.m_CUSTOM_LABEL_2);
    
}

org::openapitools::server::model::CatalogsProductGroupMultipleStringCriteria CustomLabel2Filter::getCUSTOMLABEL2() const
{
    return m_CUSTOM_LABEL_2;
}
void CustomLabel2Filter::setCUSTOMLABEL2(org::openapitools::server::model::CatalogsProductGroupMultipleStringCriteria const& value)
{
    m_CUSTOM_LABEL_2 = value;
}


} // namespace org::openapitools::server::model

