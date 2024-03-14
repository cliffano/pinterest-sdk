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


#include "MediaUploadDetails.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

MediaUploadDetails::MediaUploadDetails()
{
    m_Media_id = "";
    m_Media_idIsSet = false;
    m_Media_typeIsSet = false;
    m_StatusIsSet = false;
    
}

void MediaUploadDetails::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool MediaUploadDetails::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool MediaUploadDetails::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "MediaUploadDetails" : pathPrefix;

         
    if (mediaIdIsSet())
    {
        const std::string& value = m_Media_id;
        const std::string currentValuePath = _pathPrefix + ".mediaId";
                
        

    }
            
    return success;
}

bool MediaUploadDetails::operator==(const MediaUploadDetails& rhs) const
{
    return
    
    
    
    ((!mediaIdIsSet() && !rhs.mediaIdIsSet()) || (mediaIdIsSet() && rhs.mediaIdIsSet() && getMediaId() == rhs.getMediaId())) &&
    
    
    ((!mediaTypeIsSet() && !rhs.mediaTypeIsSet()) || (mediaTypeIsSet() && rhs.mediaTypeIsSet() && getMediaType() == rhs.getMediaType())) &&
    
    
    ((!statusIsSet() && !rhs.statusIsSet()) || (statusIsSet() && rhs.statusIsSet() && getStatus() == rhs.getStatus()))
    
    ;
}

bool MediaUploadDetails::operator!=(const MediaUploadDetails& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const MediaUploadDetails& o)
{
    j = nlohmann::json::object();
    if(o.mediaIdIsSet())
        j["media_id"] = o.m_Media_id;
    if(o.mediaTypeIsSet())
        j["media_type"] = o.m_Media_type;
    if(o.statusIsSet())
        j["status"] = o.m_Status;
    
}

void from_json(const nlohmann::json& j, MediaUploadDetails& o)
{
    if(j.find("media_id") != j.end())
    {
        j.at("media_id").get_to(o.m_Media_id);
        o.m_Media_idIsSet = true;
    } 
    if(j.find("media_type") != j.end())
    {
        j.at("media_type").get_to(o.m_Media_type);
        o.m_Media_typeIsSet = true;
    } 
    if(j.find("status") != j.end())
    {
        j.at("status").get_to(o.m_Status);
        o.m_StatusIsSet = true;
    } 
    
}

std::string MediaUploadDetails::getMediaId() const
{
    return m_Media_id;
}
void MediaUploadDetails::setMediaId(std::string const& value)
{
    m_Media_id = value;
    m_Media_idIsSet = true;
}
bool MediaUploadDetails::mediaIdIsSet() const
{
    return m_Media_idIsSet;
}
void MediaUploadDetails::unsetMedia_id()
{
    m_Media_idIsSet = false;
}
org::openapitools::server::model::MediaUploadType MediaUploadDetails::getMediaType() const
{
    return m_Media_type;
}
void MediaUploadDetails::setMediaType(org::openapitools::server::model::MediaUploadType const& value)
{
    m_Media_type = value;
    m_Media_typeIsSet = true;
}
bool MediaUploadDetails::mediaTypeIsSet() const
{
    return m_Media_typeIsSet;
}
void MediaUploadDetails::unsetMedia_type()
{
    m_Media_typeIsSet = false;
}
org::openapitools::server::model::MediaUploadStatus MediaUploadDetails::getStatus() const
{
    return m_Status;
}
void MediaUploadDetails::setStatus(org::openapitools::server::model::MediaUploadStatus const& value)
{
    m_Status = value;
    m_StatusIsSet = true;
}
bool MediaUploadDetails::statusIsSet() const
{
    return m_StatusIsSet;
}
void MediaUploadDetails::unsetStatus()
{
    m_StatusIsSet = false;
}


} // namespace org::openapitools::server::model

