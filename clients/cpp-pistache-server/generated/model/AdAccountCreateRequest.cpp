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


#include "AdAccountCreateRequest.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

AdAccountCreateRequest::AdAccountCreateRequest()
{
    m_CountryIsSet = false;
    m_Name = "";
    m_NameIsSet = false;
    m_Owner_user_id = "";
    m_Owner_user_idIsSet = false;
    
}

void AdAccountCreateRequest::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool AdAccountCreateRequest::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool AdAccountCreateRequest::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "AdAccountCreateRequest" : pathPrefix;

             
    if (nameIsSet())
    {
        const std::string& value = m_Name;
        const std::string currentValuePath = _pathPrefix + ".name";
                
        
        if (value.length() > 256)
        {
            success = false;
            msg << currentValuePath << ": must be at most 256 characters long;";
        }

    }
         
    if (ownerUserIdIsSet())
    {
        const std::string& value = m_Owner_user_id;
        const std::string currentValuePath = _pathPrefix + ".ownerUserId";
                
        

    }
    
    return success;
}

bool AdAccountCreateRequest::operator==(const AdAccountCreateRequest& rhs) const
{
    return
    
    
    
    ((!countryIsSet() && !rhs.countryIsSet()) || (countryIsSet() && rhs.countryIsSet() && getCountry() == rhs.getCountry())) &&
    
    
    ((!nameIsSet() && !rhs.nameIsSet()) || (nameIsSet() && rhs.nameIsSet() && getName() == rhs.getName())) &&
    
    
    ((!ownerUserIdIsSet() && !rhs.ownerUserIdIsSet()) || (ownerUserIdIsSet() && rhs.ownerUserIdIsSet() && getOwnerUserId() == rhs.getOwnerUserId()))
    
    ;
}

bool AdAccountCreateRequest::operator!=(const AdAccountCreateRequest& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const AdAccountCreateRequest& o)
{
    j = nlohmann::json();
    if(o.countryIsSet())
        j["country"] = o.m_Country;
    if(o.nameIsSet())
        j["name"] = o.m_Name;
    if(o.ownerUserIdIsSet())
        j["owner_user_id"] = o.m_Owner_user_id;
    
}

void from_json(const nlohmann::json& j, AdAccountCreateRequest& o)
{
    if(j.find("country") != j.end())
    {
        j.at("country").get_to(o.m_Country);
        o.m_CountryIsSet = true;
    } 
    if(j.find("name") != j.end())
    {
        j.at("name").get_to(o.m_Name);
        o.m_NameIsSet = true;
    } 
    if(j.find("owner_user_id") != j.end())
    {
        j.at("owner_user_id").get_to(o.m_Owner_user_id);
        o.m_Owner_user_idIsSet = true;
    } 
    
}

org::openapitools::server::model::Country AdAccountCreateRequest::getCountry() const
{
    return m_Country;
}
void AdAccountCreateRequest::setCountry(org::openapitools::server::model::Country const& value)
{
    m_Country = value;
    m_CountryIsSet = true;
}
bool AdAccountCreateRequest::countryIsSet() const
{
    return m_CountryIsSet;
}
void AdAccountCreateRequest::unsetCountry()
{
    m_CountryIsSet = false;
}
std::string AdAccountCreateRequest::getName() const
{
    return m_Name;
}
void AdAccountCreateRequest::setName(std::string const& value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool AdAccountCreateRequest::nameIsSet() const
{
    return m_NameIsSet;
}
void AdAccountCreateRequest::unsetName()
{
    m_NameIsSet = false;
}
std::string AdAccountCreateRequest::getOwnerUserId() const
{
    return m_Owner_user_id;
}
void AdAccountCreateRequest::setOwnerUserId(std::string const& value)
{
    m_Owner_user_id = value;
    m_Owner_user_idIsSet = true;
}
bool AdAccountCreateRequest::ownerUserIdIsSet() const
{
    return m_Owner_user_idIsSet;
}
void AdAccountCreateRequest::unsetOwner_user_id()
{
    m_Owner_user_idIsSet = false;
}


} // namespace org::openapitools::server::model

