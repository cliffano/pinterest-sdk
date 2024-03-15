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


#include "Interest.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

Interest::Interest()
{
    m_Canonical_url = "";
    m_Canonical_urlIsSet = false;
    m_Id = "";
    m_IdIsSet = false;
    m_Key = "";
    m_KeyIsSet = false;
    m_Name = "";
    m_NameIsSet = false;
    
}

void Interest::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool Interest::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool Interest::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "Interest" : pathPrefix;

             
    if (idIsSet())
    {
        const std::string& value = m_Id;
        const std::string currentValuePath = _pathPrefix + ".id";
                
        

    }
            
    return success;
}

bool Interest::operator==(const Interest& rhs) const
{
    return
    
    
    
    ((!canonicalUrlIsSet() && !rhs.canonicalUrlIsSet()) || (canonicalUrlIsSet() && rhs.canonicalUrlIsSet() && getCanonicalUrl() == rhs.getCanonicalUrl())) &&
    
    
    ((!idIsSet() && !rhs.idIsSet()) || (idIsSet() && rhs.idIsSet() && getId() == rhs.getId())) &&
    
    
    ((!keyIsSet() && !rhs.keyIsSet()) || (keyIsSet() && rhs.keyIsSet() && getKey() == rhs.getKey())) &&
    
    
    ((!nameIsSet() && !rhs.nameIsSet()) || (nameIsSet() && rhs.nameIsSet() && getName() == rhs.getName()))
    
    ;
}

bool Interest::operator!=(const Interest& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const Interest& o)
{
    j = nlohmann::json::object();
    if(o.canonicalUrlIsSet())
        j["canonical_url"] = o.m_Canonical_url;
    if(o.idIsSet())
        j["id"] = o.m_Id;
    if(o.keyIsSet())
        j["key"] = o.m_Key;
    if(o.nameIsSet())
        j["name"] = o.m_Name;
    
}

void from_json(const nlohmann::json& j, Interest& o)
{
    if(j.find("canonical_url") != j.end())
    {
        j.at("canonical_url").get_to(o.m_Canonical_url);
        o.m_Canonical_urlIsSet = true;
    } 
    if(j.find("id") != j.end())
    {
        j.at("id").get_to(o.m_Id);
        o.m_IdIsSet = true;
    } 
    if(j.find("key") != j.end())
    {
        j.at("key").get_to(o.m_Key);
        o.m_KeyIsSet = true;
    } 
    if(j.find("name") != j.end())
    {
        j.at("name").get_to(o.m_Name);
        o.m_NameIsSet = true;
    } 
    
}

std::string Interest::getCanonicalUrl() const
{
    return m_Canonical_url;
}
void Interest::setCanonicalUrl(std::string const& value)
{
    m_Canonical_url = value;
    m_Canonical_urlIsSet = true;
}
bool Interest::canonicalUrlIsSet() const
{
    return m_Canonical_urlIsSet;
}
void Interest::unsetCanonical_url()
{
    m_Canonical_urlIsSet = false;
}
std::string Interest::getId() const
{
    return m_Id;
}
void Interest::setId(std::string const& value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool Interest::idIsSet() const
{
    return m_IdIsSet;
}
void Interest::unsetId()
{
    m_IdIsSet = false;
}
std::string Interest::getKey() const
{
    return m_Key;
}
void Interest::setKey(std::string const& value)
{
    m_Key = value;
    m_KeyIsSet = true;
}
bool Interest::keyIsSet() const
{
    return m_KeyIsSet;
}
void Interest::unsetKey()
{
    m_KeyIsSet = false;
}
std::string Interest::getName() const
{
    return m_Name;
}
void Interest::setName(std::string const& value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool Interest::nameIsSet() const
{
    return m_NameIsSet;
}
void Interest::unsetName()
{
    m_NameIsSet = false;
}


} // namespace org::openapitools::server::model
