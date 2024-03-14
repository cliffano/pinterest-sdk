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


#include "Pin_media.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

Pin_media::Pin_media()
{
    m_Media_type = "";
    m_Media_typeIsSet = false;
    
}

void Pin_media::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool Pin_media::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool Pin_media::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "Pin_media" : pathPrefix;

        
    return success;
}

bool Pin_media::operator==(const Pin_media& rhs) const
{
    return
    
    
    
    ((!mediaTypeIsSet() && !rhs.mediaTypeIsSet()) || (mediaTypeIsSet() && rhs.mediaTypeIsSet() && getMediaType() == rhs.getMediaType()))
    
    ;
}

bool Pin_media::operator!=(const Pin_media& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const Pin_media& o)
{
    j = nlohmann::json::object();
    if(o.mediaTypeIsSet())
        j["media_type"] = o.m_Media_type;
    
}

void from_json(const nlohmann::json& j, Pin_media& o)
{
    if(j.find("media_type") != j.end())
    {
        j.at("media_type").get_to(o.m_Media_type);
        o.m_Media_typeIsSet = true;
    } 
    
}

std::string Pin_media::getMediaType() const
{
    return m_Media_type;
}
void Pin_media::setMediaType(std::string const& value)
{
    m_Media_type = value;
    m_Media_typeIsSet = true;
}
bool Pin_media::mediaTypeIsSet() const
{
    return m_Media_typeIsSet;
}
void Pin_media::unsetMedia_type()
{
    m_Media_typeIsSet = false;
}


} // namespace org::openapitools::server::model

