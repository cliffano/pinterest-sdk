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


#include "CatalogsType.h"
#include "Helpers.h"
#include <stdexcept>
#include <sstream>

namespace org::openapitools::server::model
{

CatalogsType::CatalogsType()
{
    
}

void CatalogsType::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool CatalogsType::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool CatalogsType::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "CatalogsType" : pathPrefix;

    
    if (m_value == CatalogsType::eCatalogsType::INVALID_VALUE_OPENAPI_GENERATED)
    {
        success = false;
        msg << _pathPrefix << ": has no value;";
    }

    return success;
}

bool CatalogsType::operator==(const CatalogsType& rhs) const
{
    return
    getValue() == rhs.getValue()
    
    ;
}

bool CatalogsType::operator!=(const CatalogsType& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const CatalogsType& o)
{
    j = nlohmann::json::object();
    
    switch (o.getValue())
    {
        case CatalogsType::eCatalogsType::INVALID_VALUE_OPENAPI_GENERATED:
            j = "INVALID_VALUE_OPENAPI_GENERATED";
            break;
        case CatalogsType::eCatalogsType::RETAIL:
            j = "RETAIL";
            break;
        case CatalogsType::eCatalogsType::HOTEL:
            j = "HOTEL";
            break;
    }
}

void from_json(const nlohmann::json& j, CatalogsType& o)
{
    
    auto s = j.get<std::string>();
    if (s == "RETAIL") {
     o.setValue(CatalogsType::eCatalogsType::RETAIL);
    } 
    else if (s == "HOTEL") {
     o.setValue(CatalogsType::eCatalogsType::HOTEL);
    }  else {
     std::stringstream ss;
     ss << "Unexpected value " << s << " in json"
        << " cannot be converted to enum of type"
        << " CatalogsType::eCatalogsType";
     throw std::invalid_argument(ss.str());
    } 

}

CatalogsType::eCatalogsType CatalogsType::getValue() const
{
    return m_value;
}
void CatalogsType::setValue(CatalogsType::eCatalogsType value)
{
    m_value = value;
}

} // namespace org::openapitools::server::model

