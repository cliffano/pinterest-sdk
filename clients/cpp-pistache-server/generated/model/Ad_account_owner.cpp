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


#include "Ad_account_owner.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

Ad_account_owner::Ad_account_owner()
{
    m_Username = "";
    m_UsernameIsSet = false;
    
}

void Ad_account_owner::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool Ad_account_owner::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool Ad_account_owner::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "Ad_account_owner" : pathPrefix;

        
    return success;
}

bool Ad_account_owner::operator==(const Ad_account_owner& rhs) const
{
    return
    
    
    
    ((!usernameIsSet() && !rhs.usernameIsSet()) || (usernameIsSet() && rhs.usernameIsSet() && getUsername() == rhs.getUsername()))
    
    ;
}

bool Ad_account_owner::operator!=(const Ad_account_owner& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const Ad_account_owner& o)
{
    j = nlohmann::json();
    if(o.usernameIsSet())
        j["username"] = o.m_Username;
    
}

void from_json(const nlohmann::json& j, Ad_account_owner& o)
{
    if(j.find("username") != j.end())
    {
        j.at("username").get_to(o.m_Username);
        o.m_UsernameIsSet = true;
    } 
    
}

std::string Ad_account_owner::getUsername() const
{
    return m_Username;
}
void Ad_account_owner::setUsername(std::string const& value)
{
    m_Username = value;
    m_UsernameIsSet = true;
}
bool Ad_account_owner::usernameIsSet() const
{
    return m_UsernameIsSet;
}
void Ad_account_owner::unsetUsername()
{
    m_UsernameIsSet = false;
}


} // namespace org::openapitools::server::model

