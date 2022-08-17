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


#include "CatalogsItemValidationDetails.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

CatalogsItemValidationDetails::CatalogsItemValidationDetails()
{
    m_Provided_value = "";
    
}

void CatalogsItemValidationDetails::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool CatalogsItemValidationDetails::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool CatalogsItemValidationDetails::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "CatalogsItemValidationDetails" : pathPrefix;

            
    return success;
}

bool CatalogsItemValidationDetails::operator==(const CatalogsItemValidationDetails& rhs) const
{
    return
    
    
    (getAttributeName() == rhs.getAttributeName())
     &&
    
    (getProvidedValue() == rhs.getProvidedValue())
    
    
    ;
}

bool CatalogsItemValidationDetails::operator!=(const CatalogsItemValidationDetails& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const CatalogsItemValidationDetails& o)
{
    j = nlohmann::json();
    j["attribute_name"] = o.m_Attribute_name;
    j["provided_value"] = o.m_Provided_value;
    
}

void from_json(const nlohmann::json& j, CatalogsItemValidationDetails& o)
{
    j.at("attribute_name").get_to(o.m_Attribute_name);
    j.at("provided_value").get_to(o.m_Provided_value);
    
}

org::openapitools::server::model::NullableCatalogsItemFieldType CatalogsItemValidationDetails::getAttributeName() const
{
    return m_Attribute_name;
}
void CatalogsItemValidationDetails::setAttributeName(org::openapitools::server::model::NullableCatalogsItemFieldType const& value)
{
    m_Attribute_name = value;
}
std::string CatalogsItemValidationDetails::getProvidedValue() const
{
    return m_Provided_value;
}
void CatalogsItemValidationDetails::setProvidedValue(std::string const& value)
{
    m_Provided_value = value;
}


} // namespace org::openapitools::server::model

