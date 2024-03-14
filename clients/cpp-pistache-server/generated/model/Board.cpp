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


#include "Board.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

Board::Board()
{
    m_Id = "";
    m_IdIsSet = false;
    m_Name = "";
    m_Description = "";
    m_DescriptionIsSet = false;
    m_OwnerIsSet = false;
    m_Privacy = "PUBLIC";
    m_PrivacyIsSet = false;
    
}

void Board::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool Board::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool Board::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "Board" : pathPrefix;

                        
    return success;
}

bool Board::operator==(const Board& rhs) const
{
    return
    
    
    
    ((!idIsSet() && !rhs.idIsSet()) || (idIsSet() && rhs.idIsSet() && getId() == rhs.getId())) &&
    
    (getName() == rhs.getName())
     &&
    
    
    ((!descriptionIsSet() && !rhs.descriptionIsSet()) || (descriptionIsSet() && rhs.descriptionIsSet() && getDescription() == rhs.getDescription())) &&
    
    
    ((!ownerIsSet() && !rhs.ownerIsSet()) || (ownerIsSet() && rhs.ownerIsSet() && getOwner() == rhs.getOwner())) &&
    
    
    ((!privacyIsSet() && !rhs.privacyIsSet()) || (privacyIsSet() && rhs.privacyIsSet() && getPrivacy() == rhs.getPrivacy()))
    
    ;
}

bool Board::operator!=(const Board& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const Board& o)
{
    j = nlohmann::json::object();
    if(o.idIsSet())
        j["id"] = o.m_Id;
    j["name"] = o.m_Name;
    if(o.descriptionIsSet())
        j["description"] = o.m_Description;
    if(o.ownerIsSet())
        j["owner"] = o.m_Owner;
    if(o.privacyIsSet())
        j["privacy"] = o.m_Privacy;
    
}

void from_json(const nlohmann::json& j, Board& o)
{
    if(j.find("id") != j.end())
    {
        j.at("id").get_to(o.m_Id);
        o.m_IdIsSet = true;
    } 
    j.at("name").get_to(o.m_Name);
    if(j.find("description") != j.end())
    {
        j.at("description").get_to(o.m_Description);
        o.m_DescriptionIsSet = true;
    } 
    if(j.find("owner") != j.end())
    {
        j.at("owner").get_to(o.m_Owner);
        o.m_OwnerIsSet = true;
    } 
    if(j.find("privacy") != j.end())
    {
        j.at("privacy").get_to(o.m_Privacy);
        o.m_PrivacyIsSet = true;
    } 
    
}

std::string Board::getId() const
{
    return m_Id;
}
void Board::setId(std::string const& value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool Board::idIsSet() const
{
    return m_IdIsSet;
}
void Board::unsetId()
{
    m_IdIsSet = false;
}
std::string Board::getName() const
{
    return m_Name;
}
void Board::setName(std::string const& value)
{
    m_Name = value;
}
std::string Board::getDescription() const
{
    return m_Description;
}
void Board::setDescription(std::string const& value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}
bool Board::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}
void Board::unsetDescription()
{
    m_DescriptionIsSet = false;
}
org::openapitools::server::model::Board_owner Board::getOwner() const
{
    return m_Owner;
}
void Board::setOwner(org::openapitools::server::model::Board_owner const& value)
{
    m_Owner = value;
    m_OwnerIsSet = true;
}
bool Board::ownerIsSet() const
{
    return m_OwnerIsSet;
}
void Board::unsetOwner()
{
    m_OwnerIsSet = false;
}
std::string Board::getPrivacy() const
{
    return m_Privacy;
}
void Board::setPrivacy(std::string const& value)
{
    m_Privacy = value;
    m_PrivacyIsSet = true;
}
bool Board::privacyIsSet() const
{
    return m_PrivacyIsSet;
}
void Board::unsetPrivacy()
{
    m_PrivacyIsSet = false;
}


} // namespace org::openapitools::server::model

