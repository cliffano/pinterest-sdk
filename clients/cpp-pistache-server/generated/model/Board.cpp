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


#include "Board.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

Board::Board()
{
    m_Id = "";
    m_IdIsSet = false;
    m_Created_at = "";
    m_Created_atIsSet = false;
    m_Board_pins_modified_at = "";
    m_Board_pins_modified_atIsSet = false;
    m_Name = "";
    m_Description = "";
    m_DescriptionIsSet = false;
    m_Collaborator_count = 0;
    m_Collaborator_countIsSet = false;
    m_Pin_count = 0;
    m_Pin_countIsSet = false;
    m_Follower_count = 0;
    m_Follower_countIsSet = false;
    m_MediaIsSet = false;
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

                             
    if (collaboratorCountIsSet())
    {
        const int32_t& value = m_Collaborator_count;
        const std::string currentValuePath = _pathPrefix + ".collaboratorCount";
                
        
        if (value < 0)
        {
            success = false;
            msg << currentValuePath << ": must be greater than or equal to 0;";
        }

    }
         
    if (pinCountIsSet())
    {
        const int32_t& value = m_Pin_count;
        const std::string currentValuePath = _pathPrefix + ".pinCount";
                
        
        if (value < 0)
        {
            success = false;
            msg << currentValuePath << ": must be greater than or equal to 0;";
        }

    }
         
    if (followerCountIsSet())
    {
        const int32_t& value = m_Follower_count;
        const std::string currentValuePath = _pathPrefix + ".followerCount";
                
        
        if (value < 0)
        {
            success = false;
            msg << currentValuePath << ": must be greater than or equal to 0;";
        }

    }
                
    return success;
}

bool Board::operator==(const Board& rhs) const
{
    return
    
    
    
    ((!idIsSet() && !rhs.idIsSet()) || (idIsSet() && rhs.idIsSet() && getId() == rhs.getId())) &&
    
    
    ((!createdAtIsSet() && !rhs.createdAtIsSet()) || (createdAtIsSet() && rhs.createdAtIsSet() && getCreatedAt() == rhs.getCreatedAt())) &&
    
    
    ((!boardPinsModifiedAtIsSet() && !rhs.boardPinsModifiedAtIsSet()) || (boardPinsModifiedAtIsSet() && rhs.boardPinsModifiedAtIsSet() && getBoardPinsModifiedAt() == rhs.getBoardPinsModifiedAt())) &&
    
    (getName() == rhs.getName())
     &&
    
    
    ((!descriptionIsSet() && !rhs.descriptionIsSet()) || (descriptionIsSet() && rhs.descriptionIsSet() && getDescription() == rhs.getDescription())) &&
    
    
    ((!collaboratorCountIsSet() && !rhs.collaboratorCountIsSet()) || (collaboratorCountIsSet() && rhs.collaboratorCountIsSet() && getCollaboratorCount() == rhs.getCollaboratorCount())) &&
    
    
    ((!pinCountIsSet() && !rhs.pinCountIsSet()) || (pinCountIsSet() && rhs.pinCountIsSet() && getPinCount() == rhs.getPinCount())) &&
    
    
    ((!followerCountIsSet() && !rhs.followerCountIsSet()) || (followerCountIsSet() && rhs.followerCountIsSet() && getFollowerCount() == rhs.getFollowerCount())) &&
    
    
    ((!mediaIsSet() && !rhs.mediaIsSet()) || (mediaIsSet() && rhs.mediaIsSet() && getMedia() == rhs.getMedia())) &&
    
    
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
    if(o.createdAtIsSet())
        j["created_at"] = o.m_Created_at;
    if(o.boardPinsModifiedAtIsSet())
        j["board_pins_modified_at"] = o.m_Board_pins_modified_at;
    j["name"] = o.m_Name;
    if(o.descriptionIsSet())
        j["description"] = o.m_Description;
    if(o.collaboratorCountIsSet())
        j["collaborator_count"] = o.m_Collaborator_count;
    if(o.pinCountIsSet())
        j["pin_count"] = o.m_Pin_count;
    if(o.followerCountIsSet())
        j["follower_count"] = o.m_Follower_count;
    if(o.mediaIsSet())
        j["media"] = o.m_Media;
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
    if(j.find("created_at") != j.end())
    {
        j.at("created_at").get_to(o.m_Created_at);
        o.m_Created_atIsSet = true;
    } 
    if(j.find("board_pins_modified_at") != j.end())
    {
        j.at("board_pins_modified_at").get_to(o.m_Board_pins_modified_at);
        o.m_Board_pins_modified_atIsSet = true;
    } 
    j.at("name").get_to(o.m_Name);
    if(j.find("description") != j.end())
    {
        j.at("description").get_to(o.m_Description);
        o.m_DescriptionIsSet = true;
    } 
    if(j.find("collaborator_count") != j.end())
    {
        j.at("collaborator_count").get_to(o.m_Collaborator_count);
        o.m_Collaborator_countIsSet = true;
    } 
    if(j.find("pin_count") != j.end())
    {
        j.at("pin_count").get_to(o.m_Pin_count);
        o.m_Pin_countIsSet = true;
    } 
    if(j.find("follower_count") != j.end())
    {
        j.at("follower_count").get_to(o.m_Follower_count);
        o.m_Follower_countIsSet = true;
    } 
    if(j.find("media") != j.end())
    {
        j.at("media").get_to(o.m_Media);
        o.m_MediaIsSet = true;
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
std::string Board::getCreatedAt() const
{
    return m_Created_at;
}
void Board::setCreatedAt(std::string const& value)
{
    m_Created_at = value;
    m_Created_atIsSet = true;
}
bool Board::createdAtIsSet() const
{
    return m_Created_atIsSet;
}
void Board::unsetCreated_at()
{
    m_Created_atIsSet = false;
}
std::string Board::getBoardPinsModifiedAt() const
{
    return m_Board_pins_modified_at;
}
void Board::setBoardPinsModifiedAt(std::string const& value)
{
    m_Board_pins_modified_at = value;
    m_Board_pins_modified_atIsSet = true;
}
bool Board::boardPinsModifiedAtIsSet() const
{
    return m_Board_pins_modified_atIsSet;
}
void Board::unsetBoard_pins_modified_at()
{
    m_Board_pins_modified_atIsSet = false;
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
int32_t Board::getCollaboratorCount() const
{
    return m_Collaborator_count;
}
void Board::setCollaboratorCount(int32_t const value)
{
    m_Collaborator_count = value;
    m_Collaborator_countIsSet = true;
}
bool Board::collaboratorCountIsSet() const
{
    return m_Collaborator_countIsSet;
}
void Board::unsetCollaborator_count()
{
    m_Collaborator_countIsSet = false;
}
int32_t Board::getPinCount() const
{
    return m_Pin_count;
}
void Board::setPinCount(int32_t const value)
{
    m_Pin_count = value;
    m_Pin_countIsSet = true;
}
bool Board::pinCountIsSet() const
{
    return m_Pin_countIsSet;
}
void Board::unsetPin_count()
{
    m_Pin_countIsSet = false;
}
int32_t Board::getFollowerCount() const
{
    return m_Follower_count;
}
void Board::setFollowerCount(int32_t const value)
{
    m_Follower_count = value;
    m_Follower_countIsSet = true;
}
bool Board::followerCountIsSet() const
{
    return m_Follower_countIsSet;
}
void Board::unsetFollower_count()
{
    m_Follower_countIsSet = false;
}
org::openapitools::server::model::Board_media Board::getMedia() const
{
    return m_Media;
}
void Board::setMedia(org::openapitools::server::model::Board_media const& value)
{
    m_Media = value;
    m_MediaIsSet = true;
}
bool Board::mediaIsSet() const
{
    return m_MediaIsSet;
}
void Board::unsetMedia()
{
    m_MediaIsSet = false;
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

