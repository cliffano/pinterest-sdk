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


#include "MediaUpload.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

MediaUpload::MediaUpload()
{
    m_Media_id = "";
    m_Media_idIsSet = false;
    m_Media_type = "";
    m_Media_typeIsSet = false;
    m_Upload_url = "";
    m_Upload_urlIsSet = false;
    m_Upload_parametersIsSet = false;
    
}

void MediaUpload::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool MediaUpload::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool MediaUpload::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "MediaUpload" : pathPrefix;

                    
    return success;
}

bool MediaUpload::operator==(const MediaUpload& rhs) const
{
    return
    
    
    
    ((!mediaIdIsSet() && !rhs.mediaIdIsSet()) || (mediaIdIsSet() && rhs.mediaIdIsSet() && getMediaId() == rhs.getMediaId())) &&
    
    
    ((!mediaTypeIsSet() && !rhs.mediaTypeIsSet()) || (mediaTypeIsSet() && rhs.mediaTypeIsSet() && getMediaType() == rhs.getMediaType())) &&
    
    
    ((!uploadUrlIsSet() && !rhs.uploadUrlIsSet()) || (uploadUrlIsSet() && rhs.uploadUrlIsSet() && getUploadUrl() == rhs.getUploadUrl())) &&
    
    
    ((!uploadParametersIsSet() && !rhs.uploadParametersIsSet()) || (uploadParametersIsSet() && rhs.uploadParametersIsSet() && getUploadParameters() == rhs.getUploadParameters()))
    
    ;
}

bool MediaUpload::operator!=(const MediaUpload& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const MediaUpload& o)
{
    j = nlohmann::json();
    if(o.mediaIdIsSet())
        j["media_id"] = o.m_Media_id;
    if(o.mediaTypeIsSet())
        j["media_type"] = o.m_Media_type;
    if(o.uploadUrlIsSet())
        j["upload_url"] = o.m_Upload_url;
    if(o.uploadParametersIsSet())
        j["upload_parameters"] = o.m_Upload_parameters;
    
}

void from_json(const nlohmann::json& j, MediaUpload& o)
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
    if(j.find("upload_url") != j.end())
    {
        j.at("upload_url").get_to(o.m_Upload_url);
        o.m_Upload_urlIsSet = true;
    } 
    if(j.find("upload_parameters") != j.end())
    {
        j.at("upload_parameters").get_to(o.m_Upload_parameters);
        o.m_Upload_parametersIsSet = true;
    } 
    
}

std::string MediaUpload::getMediaId() const
{
    return m_Media_id;
}
void MediaUpload::setMediaId(std::string const& value)
{
    m_Media_id = value;
    m_Media_idIsSet = true;
}
bool MediaUpload::mediaIdIsSet() const
{
    return m_Media_idIsSet;
}
void MediaUpload::unsetMedia_id()
{
    m_Media_idIsSet = false;
}
MediaUploadType MediaUpload::getMediaType() const
{
    return m_Media_type;
}
void MediaUpload::setMediaType(MediaUploadType const& value)
{
    m_Media_type = value;
    m_Media_typeIsSet = true;
}
bool MediaUpload::mediaTypeIsSet() const
{
    return m_Media_typeIsSet;
}
void MediaUpload::unsetMedia_type()
{
    m_Media_typeIsSet = false;
}
std::string MediaUpload::getUploadUrl() const
{
    return m_Upload_url;
}
void MediaUpload::setUploadUrl(std::string const& value)
{
    m_Upload_url = value;
    m_Upload_urlIsSet = true;
}
bool MediaUpload::uploadUrlIsSet() const
{
    return m_Upload_urlIsSet;
}
void MediaUpload::unsetUpload_url()
{
    m_Upload_urlIsSet = false;
}
org::openapitools::server::model::MediaUpload_allOf_upload_parameters MediaUpload::getUploadParameters() const
{
    return m_Upload_parameters;
}
void MediaUpload::setUploadParameters(org::openapitools::server::model::MediaUpload_allOf_upload_parameters const& value)
{
    m_Upload_parameters = value;
    m_Upload_parametersIsSet = true;
}
bool MediaUpload::uploadParametersIsSet() const
{
    return m_Upload_parametersIsSet;
}
void MediaUpload::unsetUpload_parameters()
{
    m_Upload_parametersIsSet = false;
}


} // namespace org::openapitools::server::model

