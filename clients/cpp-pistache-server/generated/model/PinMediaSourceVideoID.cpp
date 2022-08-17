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


#include "PinMediaSourceVideoID.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

PinMediaSourceVideoID::PinMediaSourceVideoID()
{
    m_Source_type = "";
    m_Cover_image_url = "";
    m_Media_id = "";
    
}

void PinMediaSourceVideoID::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool PinMediaSourceVideoID::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool PinMediaSourceVideoID::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "PinMediaSourceVideoID" : pathPrefix;

                 
    
    /* Media_id */ {
        const std::string& value = m_Media_id;
        const std::string currentValuePath = _pathPrefix + ".mediaId";
                
        

    }
    
    return success;
}

bool PinMediaSourceVideoID::operator==(const PinMediaSourceVideoID& rhs) const
{
    return
    
    
    (getSourceType() == rhs.getSourceType())
     &&
    
    (getCoverImageUrl() == rhs.getCoverImageUrl())
     &&
    
    (getMediaId() == rhs.getMediaId())
    
    
    ;
}

bool PinMediaSourceVideoID::operator!=(const PinMediaSourceVideoID& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const PinMediaSourceVideoID& o)
{
    j = nlohmann::json();
    j["source_type"] = o.m_Source_type;
    j["cover_image_url"] = o.m_Cover_image_url;
    j["media_id"] = o.m_Media_id;
    
}

void from_json(const nlohmann::json& j, PinMediaSourceVideoID& o)
{
    j.at("source_type").get_to(o.m_Source_type);
    j.at("cover_image_url").get_to(o.m_Cover_image_url);
    j.at("media_id").get_to(o.m_Media_id);
    
}

std::string PinMediaSourceVideoID::getSourceType() const
{
    return m_Source_type;
}
void PinMediaSourceVideoID::setSourceType(std::string const& value)
{
    m_Source_type = value;
}
std::string PinMediaSourceVideoID::getCoverImageUrl() const
{
    return m_Cover_image_url;
}
void PinMediaSourceVideoID::setCoverImageUrl(std::string const& value)
{
    m_Cover_image_url = value;
}
std::string PinMediaSourceVideoID::getMediaId() const
{
    return m_Media_id;
}
void PinMediaSourceVideoID::setMediaId(std::string const& value)
{
    m_Media_id = value;
}


} // namespace org::openapitools::server::model

