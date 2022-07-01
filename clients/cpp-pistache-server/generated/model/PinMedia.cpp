/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.3.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "PinMedia.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

PinMedia::PinMedia()
{
    m_Media_type = "";
    m_Media_typeIsSet = false;
    
}

void PinMedia::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool PinMedia::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool PinMedia::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "PinMedia" : pathPrefix;

        
    return success;
}

bool PinMedia::operator==(const PinMedia& rhs) const
{
    return
    
    
    
    ((!mediaTypeIsSet() && !rhs.mediaTypeIsSet()) || (mediaTypeIsSet() && rhs.mediaTypeIsSet() && getMediaType() == rhs.getMediaType()))
    
    ;
}

bool PinMedia::operator!=(const PinMedia& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const PinMedia& o)
{
    j = nlohmann::json();
    if(o.mediaTypeIsSet())
        j["media_type"] = o.m_Media_type;
    
}

void from_json(const nlohmann::json& j, PinMedia& o)
{
    if(j.find("media_type") != j.end())
    {
        j.at("media_type").get_to(o.m_Media_type);
        o.m_Media_typeIsSet = true;
    } 
    
}

std::string PinMedia::getMediaType() const
{
    return m_Media_type;
}
void PinMedia::setMediaType(std::string const& value)
{
    m_Media_type = value;
    m_Media_typeIsSet = true;
}
bool PinMedia::mediaTypeIsSet() const
{
    return m_Media_typeIsSet;
}
void PinMedia::unsetMedia_type()
{
    m_Media_typeIsSet = false;
}


} // namespace org::openapitools::server::model

