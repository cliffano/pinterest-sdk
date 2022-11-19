/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.6.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "AudienceType.h"
#include "Helpers.h"
#include <stdexcept>
#include <sstream>

namespace org::openapitools::server::model
{

AudienceType::AudienceType()
{
    
}

void AudienceType::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool AudienceType::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool AudienceType::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "AudienceType" : pathPrefix;

    
    if (m_value == AudienceType::eAudienceType::INVALID_VALUE_OPENAPI_GENERATED)
    {
        success = false;
        msg << _pathPrefix << ": has no value;";
    }

    return success;
}

bool AudienceType::operator==(const AudienceType& rhs) const
{
    return
    getValue() == rhs.getValue()
    
    ;
}

bool AudienceType::operator!=(const AudienceType& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const AudienceType& o)
{
    j = nlohmann::json();
    
    switch (o.getValue())
    {
        case AudienceType::eAudienceType::INVALID_VALUE_OPENAPI_GENERATED:
            j = "INVALID_VALUE_OPENAPI_GENERATED";
            break;
        case AudienceType::eAudienceType::CUSTOMER_LIST:
            j = "CUSTOMER_LIST";
            break;
        case AudienceType::eAudienceType::VISITOR:
            j = "VISITOR";
            break;
        case AudienceType::eAudienceType::ENGAGEMENT:
            j = "ENGAGEMENT";
            break;
        case AudienceType::eAudienceType::ACTALIKE:
            j = "ACTALIKE";
            break;
    }
}

void from_json(const nlohmann::json& j, AudienceType& o)
{
    
    auto s = j.get<std::string>();
    if (s == "CUSTOMER_LIST") {
     o.setValue(AudienceType::eAudienceType::CUSTOMER_LIST);
    } 
    else if (s == "VISITOR") {
     o.setValue(AudienceType::eAudienceType::VISITOR);
    } 
    else if (s == "ENGAGEMENT") {
     o.setValue(AudienceType::eAudienceType::ENGAGEMENT);
    } 
    else if (s == "ACTALIKE") {
     o.setValue(AudienceType::eAudienceType::ACTALIKE);
    }  else {
     std::stringstream ss;
     ss << "Unexpected value " << s << " in json"
        << " cannot be converted to enum of type"
        << " AudienceType::eAudienceType";
     throw std::invalid_argument(ss.str());
    } 

}

AudienceType::eAudienceType AudienceType::getValue() const
{
    return m_value;
}
void AudienceType::setValue(AudienceType::eAudienceType value)
{
    m_value = value;
}

} // namespace org::openapitools::server::model

