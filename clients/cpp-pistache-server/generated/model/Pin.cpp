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


#include "Pin.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

Pin::Pin()
{
    m_Id = "";
    m_IdIsSet = false;
    m_Created_at = "";
    m_Created_atIsSet = false;
    m_Link = "";
    m_LinkIsSet = false;
    m_Title = "";
    m_TitleIsSet = false;
    m_Description = "";
    m_DescriptionIsSet = false;
    m_Alt_text = "";
    m_Alt_textIsSet = false;
    m_Board_id = "";
    m_Board_idIsSet = false;
    m_Board_section_id = "";
    m_Board_section_idIsSet = false;
    m_Board_ownerIsSet = false;
    m_MediaIsSet = false;
    m_Media_sourceIsSet = false;
    
}

void Pin::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool Pin::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool Pin::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "Pin" : pathPrefix;

                                 
    if (boardIdIsSet())
    {
        const std::string& value = m_Board_id;
        const std::string currentValuePath = _pathPrefix + ".boardId";
                
        

    }
         
    if (boardSectionIdIsSet())
    {
        const std::string& value = m_Board_section_id;
        const std::string currentValuePath = _pathPrefix + ".boardSectionId";
                
        

    }
                
    return success;
}

bool Pin::operator==(const Pin& rhs) const
{
    return
    
    
    
    ((!idIsSet() && !rhs.idIsSet()) || (idIsSet() && rhs.idIsSet() && getId() == rhs.getId())) &&
    
    
    ((!createdAtIsSet() && !rhs.createdAtIsSet()) || (createdAtIsSet() && rhs.createdAtIsSet() && getCreatedAt() == rhs.getCreatedAt())) &&
    
    
    ((!linkIsSet() && !rhs.linkIsSet()) || (linkIsSet() && rhs.linkIsSet() && getLink() == rhs.getLink())) &&
    
    
    ((!titleIsSet() && !rhs.titleIsSet()) || (titleIsSet() && rhs.titleIsSet() && getTitle() == rhs.getTitle())) &&
    
    
    ((!descriptionIsSet() && !rhs.descriptionIsSet()) || (descriptionIsSet() && rhs.descriptionIsSet() && getDescription() == rhs.getDescription())) &&
    
    
    ((!altTextIsSet() && !rhs.altTextIsSet()) || (altTextIsSet() && rhs.altTextIsSet() && getAltText() == rhs.getAltText())) &&
    
    
    ((!boardIdIsSet() && !rhs.boardIdIsSet()) || (boardIdIsSet() && rhs.boardIdIsSet() && getBoardId() == rhs.getBoardId())) &&
    
    
    ((!boardSectionIdIsSet() && !rhs.boardSectionIdIsSet()) || (boardSectionIdIsSet() && rhs.boardSectionIdIsSet() && getBoardSectionId() == rhs.getBoardSectionId())) &&
    
    
    ((!boardOwnerIsSet() && !rhs.boardOwnerIsSet()) || (boardOwnerIsSet() && rhs.boardOwnerIsSet() && getBoardOwner() == rhs.getBoardOwner())) &&
    
    
    ((!mediaIsSet() && !rhs.mediaIsSet()) || (mediaIsSet() && rhs.mediaIsSet() && getMedia() == rhs.getMedia())) &&
    
    
    ((!mediaSourceIsSet() && !rhs.mediaSourceIsSet()) || (mediaSourceIsSet() && rhs.mediaSourceIsSet() && getMediaSource() == rhs.getMediaSource()))
    
    ;
}

bool Pin::operator!=(const Pin& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const Pin& o)
{
    j = nlohmann::json();
    if(o.idIsSet())
        j["id"] = o.m_Id;
    if(o.createdAtIsSet())
        j["created_at"] = o.m_Created_at;
    if(o.linkIsSet())
        j["link"] = o.m_Link;
    if(o.titleIsSet())
        j["title"] = o.m_Title;
    if(o.descriptionIsSet())
        j["description"] = o.m_Description;
    if(o.altTextIsSet())
        j["alt_text"] = o.m_Alt_text;
    if(o.boardIdIsSet())
        j["board_id"] = o.m_Board_id;
    if(o.boardSectionIdIsSet())
        j["board_section_id"] = o.m_Board_section_id;
    if(o.boardOwnerIsSet())
        j["board_owner"] = o.m_Board_owner;
    if(o.mediaIsSet())
        j["media"] = o.m_Media;
    if(o.mediaSourceIsSet())
        j["media_source"] = o.m_Media_source;
    
}

void from_json(const nlohmann::json& j, Pin& o)
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
    if(j.find("link") != j.end())
    {
        j.at("link").get_to(o.m_Link);
        o.m_LinkIsSet = true;
    } 
    if(j.find("title") != j.end())
    {
        j.at("title").get_to(o.m_Title);
        o.m_TitleIsSet = true;
    } 
    if(j.find("description") != j.end())
    {
        j.at("description").get_to(o.m_Description);
        o.m_DescriptionIsSet = true;
    } 
    if(j.find("alt_text") != j.end())
    {
        j.at("alt_text").get_to(o.m_Alt_text);
        o.m_Alt_textIsSet = true;
    } 
    if(j.find("board_id") != j.end())
    {
        j.at("board_id").get_to(o.m_Board_id);
        o.m_Board_idIsSet = true;
    } 
    if(j.find("board_section_id") != j.end())
    {
        j.at("board_section_id").get_to(o.m_Board_section_id);
        o.m_Board_section_idIsSet = true;
    } 
    if(j.find("board_owner") != j.end())
    {
        j.at("board_owner").get_to(o.m_Board_owner);
        o.m_Board_ownerIsSet = true;
    } 
    if(j.find("media") != j.end())
    {
        j.at("media").get_to(o.m_Media);
        o.m_MediaIsSet = true;
    } 
    if(j.find("media_source") != j.end())
    {
        j.at("media_source").get_to(o.m_Media_source);
        o.m_Media_sourceIsSet = true;
    } 
    
}

std::string Pin::getId() const
{
    return m_Id;
}
void Pin::setId(std::string const& value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool Pin::idIsSet() const
{
    return m_IdIsSet;
}
void Pin::unsetId()
{
    m_IdIsSet = false;
}
std::string Pin::getCreatedAt() const
{
    return m_Created_at;
}
void Pin::setCreatedAt(std::string const& value)
{
    m_Created_at = value;
    m_Created_atIsSet = true;
}
bool Pin::createdAtIsSet() const
{
    return m_Created_atIsSet;
}
void Pin::unsetCreated_at()
{
    m_Created_atIsSet = false;
}
std::string Pin::getLink() const
{
    return m_Link;
}
void Pin::setLink(std::string const& value)
{
    m_Link = value;
    m_LinkIsSet = true;
}
bool Pin::linkIsSet() const
{
    return m_LinkIsSet;
}
void Pin::unsetLink()
{
    m_LinkIsSet = false;
}
std::string Pin::getTitle() const
{
    return m_Title;
}
void Pin::setTitle(std::string const& value)
{
    m_Title = value;
    m_TitleIsSet = true;
}
bool Pin::titleIsSet() const
{
    return m_TitleIsSet;
}
void Pin::unsetTitle()
{
    m_TitleIsSet = false;
}
std::string Pin::getDescription() const
{
    return m_Description;
}
void Pin::setDescription(std::string const& value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}
bool Pin::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}
void Pin::unsetDescription()
{
    m_DescriptionIsSet = false;
}
std::string Pin::getAltText() const
{
    return m_Alt_text;
}
void Pin::setAltText(std::string const& value)
{
    m_Alt_text = value;
    m_Alt_textIsSet = true;
}
bool Pin::altTextIsSet() const
{
    return m_Alt_textIsSet;
}
void Pin::unsetAlt_text()
{
    m_Alt_textIsSet = false;
}
std::string Pin::getBoardId() const
{
    return m_Board_id;
}
void Pin::setBoardId(std::string const& value)
{
    m_Board_id = value;
    m_Board_idIsSet = true;
}
bool Pin::boardIdIsSet() const
{
    return m_Board_idIsSet;
}
void Pin::unsetBoard_id()
{
    m_Board_idIsSet = false;
}
std::string Pin::getBoardSectionId() const
{
    return m_Board_section_id;
}
void Pin::setBoardSectionId(std::string const& value)
{
    m_Board_section_id = value;
    m_Board_section_idIsSet = true;
}
bool Pin::boardSectionIdIsSet() const
{
    return m_Board_section_idIsSet;
}
void Pin::unsetBoard_section_id()
{
    m_Board_section_idIsSet = false;
}
BoardOwner Pin::getBoardOwner() const
{
    return m_Board_owner;
}
void Pin::setBoardOwner(BoardOwner const& value)
{
    m_Board_owner = value;
    m_Board_ownerIsSet = true;
}
bool Pin::boardOwnerIsSet() const
{
    return m_Board_ownerIsSet;
}
void Pin::unsetBoard_owner()
{
    m_Board_ownerIsSet = false;
}
PinMedia Pin::getMedia() const
{
    return m_Media;
}
void Pin::setMedia(PinMedia const& value)
{
    m_Media = value;
    m_MediaIsSet = true;
}
bool Pin::mediaIsSet() const
{
    return m_MediaIsSet;
}
void Pin::unsetMedia()
{
    m_MediaIsSet = false;
}
PinMediaSource Pin::getMediaSource() const
{
    return m_Media_source;
}
void Pin::setMediaSource(PinMediaSource const& value)
{
    m_Media_source = value;
    m_Media_sourceIsSet = true;
}
bool Pin::mediaSourceIsSet() const
{
    return m_Media_sourceIsSet;
}
void Pin::unsetMedia_source()
{
    m_Media_sourceIsSet = false;
}


} // namespace org::openapitools::server::model

