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


#include "AdPreviewRequest.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

AdPreviewRequest::AdPreviewRequest()
{
    m_Image_url = "";
    m_Title = "";
    m_Pin_id = "";
    
}

void AdPreviewRequest::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool AdPreviewRequest::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool AdPreviewRequest::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "AdPreviewRequest" : pathPrefix;

                
    return success;
}

bool AdPreviewRequest::operator==(const AdPreviewRequest& rhs) const
{
    return
    
    
    (getImageUrl() == rhs.getImageUrl())
     &&
    
    (getTitle() == rhs.getTitle())
     &&
    
    (getPinId() == rhs.getPinId())
    
    
    ;
}

bool AdPreviewRequest::operator!=(const AdPreviewRequest& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const AdPreviewRequest& o)
{
    j = nlohmann::json::object();
    j["image_url"] = o.m_Image_url;
    j["title"] = o.m_Title;
    j["pin_id"] = o.m_Pin_id;
    
}

void from_json(const nlohmann::json& j, AdPreviewRequest& o)
{
    j.at("image_url").get_to(o.m_Image_url);
    j.at("title").get_to(o.m_Title);
    j.at("pin_id").get_to(o.m_Pin_id);
    
}

std::string AdPreviewRequest::getImageUrl() const
{
    return m_Image_url;
}
void AdPreviewRequest::setImageUrl(std::string const& value)
{
    m_Image_url = value;
}
std::string AdPreviewRequest::getTitle() const
{
    return m_Title;
}
void AdPreviewRequest::setTitle(std::string const& value)
{
    m_Title = value;
}
std::string AdPreviewRequest::getPinId() const
{
    return m_Pin_id;
}
void AdPreviewRequest::setPinId(std::string const& value)
{
    m_Pin_id = value;
}


} // namespace org::openapitools::server::model

