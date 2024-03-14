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


#include "UserListOperationType.h"
#include "Helpers.h"
#include <stdexcept>
#include <sstream>

namespace org::openapitools::server::model
{

UserListOperationType::UserListOperationType()
{
    
}

void UserListOperationType::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool UserListOperationType::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool UserListOperationType::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "UserListOperationType" : pathPrefix;

    
    if (m_value == UserListOperationType::eUserListOperationType::INVALID_VALUE_OPENAPI_GENERATED)
    {
        success = false;
        msg << _pathPrefix << ": has no value;";
    }

    return success;
}

bool UserListOperationType::operator==(const UserListOperationType& rhs) const
{
    return
    getValue() == rhs.getValue()
    
    ;
}

bool UserListOperationType::operator!=(const UserListOperationType& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const UserListOperationType& o)
{
    j = nlohmann::json::object();
    
    switch (o.getValue())
    {
        case UserListOperationType::eUserListOperationType::INVALID_VALUE_OPENAPI_GENERATED:
            j = "INVALID_VALUE_OPENAPI_GENERATED";
            break;
        case UserListOperationType::eUserListOperationType::ADD:
            j = "ADD";
            break;
        case UserListOperationType::eUserListOperationType::REMOVE:
            j = "REMOVE";
            break;
    }
}

void from_json(const nlohmann::json& j, UserListOperationType& o)
{
    
    auto s = j.get<std::string>();
    if (s == "ADD") {
     o.setValue(UserListOperationType::eUserListOperationType::ADD);
    } 
    else if (s == "REMOVE") {
     o.setValue(UserListOperationType::eUserListOperationType::REMOVE);
    }  else {
     std::stringstream ss;
     ss << "Unexpected value " << s << " in json"
        << " cannot be converted to enum of type"
        << " UserListOperationType::eUserListOperationType";
     throw std::invalid_argument(ss.str());
    } 

}

UserListOperationType::eUserListOperationType UserListOperationType::getValue() const
{
    return m_value;
}
void UserListOperationType::setValue(UserListOperationType::eUserListOperationType value)
{
    m_value = value;
}

} // namespace org::openapitools::server::model
