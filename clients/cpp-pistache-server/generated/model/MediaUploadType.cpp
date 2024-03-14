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


#include "MediaUploadType.h"
#include "Helpers.h"
#include <stdexcept>
#include <sstream>

namespace org::openapitools::server::model
{

MediaUploadType::MediaUploadType()
{
    
}

void MediaUploadType::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool MediaUploadType::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool MediaUploadType::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "MediaUploadType" : pathPrefix;

    
    if (m_value == MediaUploadType::eMediaUploadType::INVALID_VALUE_OPENAPI_GENERATED)
    {
        success = false;
        msg << _pathPrefix << ": has no value;";
    }

    return success;
}

bool MediaUploadType::operator==(const MediaUploadType& rhs) const
{
    return
    getValue() == rhs.getValue()
    
    ;
}

bool MediaUploadType::operator!=(const MediaUploadType& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const MediaUploadType& o)
{
    j = nlohmann::json::object();
    
    switch (o.getValue())
    {
        case MediaUploadType::eMediaUploadType::INVALID_VALUE_OPENAPI_GENERATED:
            j = "INVALID_VALUE_OPENAPI_GENERATED";
            break;
        case MediaUploadType::eMediaUploadType::VIDEO:
            j = "video";
            break;
    }
}

void from_json(const nlohmann::json& j, MediaUploadType& o)
{
    
    auto s = j.get<std::string>();
    if (s == "video") {
     o.setValue(MediaUploadType::eMediaUploadType::VIDEO);
    }  else {
     std::stringstream ss;
     ss << "Unexpected value " << s << " in json"
        << " cannot be converted to enum of type"
        << " MediaUploadType::eMediaUploadType";
     throw std::invalid_argument(ss.str());
    } 

}

MediaUploadType::eMediaUploadType MediaUploadType::getValue() const
{
    return m_value;
}
void MediaUploadType::setValue(MediaUploadType::eMediaUploadType value)
{
    m_value = value;
}

} // namespace org::openapitools::server::model
