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


#include "CatalogsProductGroupStatus.h"
#include "Helpers.h"
#include <stdexcept>
#include <sstream>

namespace org::openapitools::server::model
{

CatalogsProductGroupStatus::CatalogsProductGroupStatus()
{
    
}

void CatalogsProductGroupStatus::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool CatalogsProductGroupStatus::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool CatalogsProductGroupStatus::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "CatalogsProductGroupStatus" : pathPrefix;

    
    if (m_value == CatalogsProductGroupStatus::eCatalogsProductGroupStatus::INVALID_VALUE_OPENAPI_GENERATED)
    {
        success = false;
        msg << _pathPrefix << ": has no value;";
    }

    return success;
}

bool CatalogsProductGroupStatus::operator==(const CatalogsProductGroupStatus& rhs) const
{
    return
    getValue() == rhs.getValue()
    
    ;
}

bool CatalogsProductGroupStatus::operator!=(const CatalogsProductGroupStatus& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const CatalogsProductGroupStatus& o)
{
    j = nlohmann::json();
    
    switch (o.getValue())
    {
        case CatalogsProductGroupStatus::eCatalogsProductGroupStatus::INVALID_VALUE_OPENAPI_GENERATED:
            j = "INVALID_VALUE_OPENAPI_GENERATED";
            break;
        case CatalogsProductGroupStatus::eCatalogsProductGroupStatus::ACTIVE:
            j = "ACTIVE";
            break;
        case CatalogsProductGroupStatus::eCatalogsProductGroupStatus::INACTIVE:
            j = "INACTIVE";
            break;
    }
}

void from_json(const nlohmann::json& j, CatalogsProductGroupStatus& o)
{
    
    auto s = j.get<std::string>();
    if (s == "ACTIVE") {
     o.setValue(CatalogsProductGroupStatus::eCatalogsProductGroupStatus::ACTIVE);
    } 
    else if (s == "INACTIVE") {
     o.setValue(CatalogsProductGroupStatus::eCatalogsProductGroupStatus::INACTIVE);
    }  else {
     std::stringstream ss;
     ss << "Unexpected value " << s << " in json"
        << " cannot be converted to enum of type"
        << " CatalogsProductGroupStatus::eCatalogsProductGroupStatus";
     throw std::invalid_argument(ss.str());
    } 

}

CatalogsProductGroupStatus::eCatalogsProductGroupStatus CatalogsProductGroupStatus::getValue() const
{
    return m_value;
}
void CatalogsProductGroupStatus::setValue(CatalogsProductGroupStatus::eCatalogsProductGroupStatus value)
{
    m_value = value;
}

} // namespace org::openapitools::server::model

