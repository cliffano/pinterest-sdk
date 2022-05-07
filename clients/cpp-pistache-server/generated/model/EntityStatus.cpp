/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.3.0
* Contact: pinterest-api@pinterest.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "EntityStatus.h"
#include "Helpers.h"
#include <stdexcept>
#include <sstream>

namespace org::openapitools::server::model
{

EntityStatus::EntityStatus()
{
    
}

void EntityStatus::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool EntityStatus::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool EntityStatus::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "EntityStatus" : pathPrefix;

    
    if (m_value == EntityStatus::eEntityStatus::INVALID_VALUE_OPENAPI_GENERATED)
    {
        success = false;
        msg << _pathPrefix << ": has no value;";
    }

    return success;
}

bool EntityStatus::operator==(const EntityStatus& rhs) const
{
    return
    getValue() == rhs.getValue()
    
    ;
}

bool EntityStatus::operator!=(const EntityStatus& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const EntityStatus& o)
{
    j = nlohmann::json();
    
    switch (o.getValue())
    {
        case EntityStatus::eEntityStatus::INVALID_VALUE_OPENAPI_GENERATED:
            j = "INVALID_VALUE_OPENAPI_GENERATED";
            break;
        case EntityStatus::eEntityStatus::ACTIVE:
            j = "ACTIVE";
            break;
        case EntityStatus::eEntityStatus::PAUSED:
            j = "PAUSED";
            break;
        case EntityStatus::eEntityStatus::ARCHIVED:
            j = "ARCHIVED";
            break;
    }
}

void from_json(const nlohmann::json& j, EntityStatus& o)
{
    
    auto s = j.get<std::string>();
    if (s == "ACTIVE") {
     o.setValue(EntityStatus::eEntityStatus::ACTIVE);
    } 
    else if (s == "PAUSED") {
     o.setValue(EntityStatus::eEntityStatus::PAUSED);
    } 
    else if (s == "ARCHIVED") {
     o.setValue(EntityStatus::eEntityStatus::ARCHIVED);
    }  else {
     std::stringstream ss;
     ss << "Unexpected value " << s << " in json"
        << " cannot be converted to enum of type"
        << " EntityStatus::eEntityStatus";
     throw std::invalid_argument(ss.str());
    } 

}

EntityStatus::eEntityStatus EntityStatus::getValue() const
{
    return m_value;
}
void EntityStatus::setValue(EntityStatus::eEntityStatus value)
{
    m_value = value;
}

} // namespace org::openapitools::server::model

