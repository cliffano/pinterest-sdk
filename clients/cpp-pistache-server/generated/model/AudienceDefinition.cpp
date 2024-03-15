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


#include "AudienceDefinition.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

AudienceDefinition::AudienceDefinition()
{
    m_date = "";
    m_dateIsSet = false;
    m_TypeIsSet = false;
    m_ScopeIsSet = false;
    
}

void AudienceDefinition::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool AudienceDefinition::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool AudienceDefinition::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "AudienceDefinition" : pathPrefix;

                
    return success;
}

bool AudienceDefinition::operator==(const AudienceDefinition& rhs) const
{
    return
    
    
    
    ((!dateIsSet() && !rhs.dateIsSet()) || (dateIsSet() && rhs.dateIsSet() && getDate() == rhs.getDate())) &&
    
    
    ((!typeIsSet() && !rhs.typeIsSet()) || (typeIsSet() && rhs.typeIsSet() && getType() == rhs.getType())) &&
    
    
    ((!scopeIsSet() && !rhs.scopeIsSet()) || (scopeIsSet() && rhs.scopeIsSet() && getScope() == rhs.getScope()))
    
    ;
}

bool AudienceDefinition::operator!=(const AudienceDefinition& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const AudienceDefinition& o)
{
    j = nlohmann::json::object();
    if(o.dateIsSet())
        j["date"] = o.m_date;
    if(o.typeIsSet())
        j["type"] = o.m_Type;
    if(o.scopeIsSet())
        j["scope"] = o.m_Scope;
    
}

void from_json(const nlohmann::json& j, AudienceDefinition& o)
{
    if(j.find("date") != j.end())
    {
        j.at("date").get_to(o.m_date);
        o.m_dateIsSet = true;
    } 
    if(j.find("type") != j.end())
    {
        j.at("type").get_to(o.m_Type);
        o.m_TypeIsSet = true;
    } 
    if(j.find("scope") != j.end())
    {
        j.at("scope").get_to(o.m_Scope);
        o.m_ScopeIsSet = true;
    } 
    
}

std::string AudienceDefinition::getDate() const
{
    return m_date;
}
void AudienceDefinition::setDate(std::string const& value)
{
    m_date = value;
    m_dateIsSet = true;
}
bool AudienceDefinition::dateIsSet() const
{
    return m_dateIsSet;
}
void AudienceDefinition::unsetdate()
{
    m_dateIsSet = false;
}
std::string AudienceDefinition::getType() const
{
    return m_Type;
}
void AudienceDefinition::setType(std::string const& value)
{
    m_Type = value;
    m_TypeIsSet = true;
}
bool AudienceDefinition::typeIsSet() const
{
    return m_TypeIsSet;
}
void AudienceDefinition::unsetType()
{
    m_TypeIsSet = false;
}
std::string AudienceDefinition::getScope() const
{
    return m_Scope;
}
void AudienceDefinition::setScope(std::string const& value)
{
    m_Scope = value;
    m_ScopeIsSet = true;
}
bool AudienceDefinition::scopeIsSet() const
{
    return m_ScopeIsSet;
}
void AudienceDefinition::unsetScope()
{
    m_ScopeIsSet = false;
}


} // namespace org::openapitools::server::model

