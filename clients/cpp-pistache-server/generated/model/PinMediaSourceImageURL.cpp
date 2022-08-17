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


#include "PinMediaSourceImageURL.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

PinMediaSourceImageURL::PinMediaSourceImageURL()
{
    m_Source_type = "";
    m_Url = "";
    
}

void PinMediaSourceImageURL::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool PinMediaSourceImageURL::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool PinMediaSourceImageURL::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "PinMediaSourceImageURL" : pathPrefix;

            
    return success;
}

bool PinMediaSourceImageURL::operator==(const PinMediaSourceImageURL& rhs) const
{
    return
    
    
    (getSourceType() == rhs.getSourceType())
     &&
    
    (getUrl() == rhs.getUrl())
    
    
    ;
}

bool PinMediaSourceImageURL::operator!=(const PinMediaSourceImageURL& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const PinMediaSourceImageURL& o)
{
    j = nlohmann::json();
    j["source_type"] = o.m_Source_type;
    j["url"] = o.m_Url;
    
}

void from_json(const nlohmann::json& j, PinMediaSourceImageURL& o)
{
    j.at("source_type").get_to(o.m_Source_type);
    j.at("url").get_to(o.m_Url);
    
}

std::string PinMediaSourceImageURL::getSourceType() const
{
    return m_Source_type;
}
void PinMediaSourceImageURL::setSourceType(std::string const& value)
{
    m_Source_type = value;
}
std::string PinMediaSourceImageURL::getUrl() const
{
    return m_Url;
}
void PinMediaSourceImageURL::setUrl(std::string const& value)
{
    m_Url = value;
}


} // namespace org::openapitools::server::model

