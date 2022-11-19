/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.6.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "VideoMetadata.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

VideoMetadata::VideoMetadata()
{
    m_Item_type = "";
    m_Item_typeIsSet = false;
    m_Cover_image_url = "";
    m_Cover_image_urlIsSet = false;
    m_Duration = 0.0;
    m_DurationIsSet = false;
    m_Height = 0;
    m_HeightIsSet = false;
    m_Width = 0;
    m_WidthIsSet = false;
    
}

void VideoMetadata::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool VideoMetadata::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool VideoMetadata::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "VideoMetadata" : pathPrefix;

                        
    return success;
}

bool VideoMetadata::operator==(const VideoMetadata& rhs) const
{
    return
    
    
    
    ((!itemTypeIsSet() && !rhs.itemTypeIsSet()) || (itemTypeIsSet() && rhs.itemTypeIsSet() && getItemType() == rhs.getItemType())) &&
    
    
    ((!coverImageUrlIsSet() && !rhs.coverImageUrlIsSet()) || (coverImageUrlIsSet() && rhs.coverImageUrlIsSet() && getCoverImageUrl() == rhs.getCoverImageUrl())) &&
    
    
    ((!durationIsSet() && !rhs.durationIsSet()) || (durationIsSet() && rhs.durationIsSet() && getDuration() == rhs.getDuration())) &&
    
    
    ((!heightIsSet() && !rhs.heightIsSet()) || (heightIsSet() && rhs.heightIsSet() && getHeight() == rhs.getHeight())) &&
    
    
    ((!widthIsSet() && !rhs.widthIsSet()) || (widthIsSet() && rhs.widthIsSet() && getWidth() == rhs.getWidth()))
    
    ;
}

bool VideoMetadata::operator!=(const VideoMetadata& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const VideoMetadata& o)
{
    j = nlohmann::json();
    if(o.itemTypeIsSet())
        j["item_type"] = o.m_Item_type;
    if(o.coverImageUrlIsSet())
        j["cover_image_url"] = o.m_Cover_image_url;
    if(o.durationIsSet())
        j["duration"] = o.m_Duration;
    if(o.heightIsSet())
        j["height"] = o.m_Height;
    if(o.widthIsSet())
        j["width"] = o.m_Width;
    
}

void from_json(const nlohmann::json& j, VideoMetadata& o)
{
    if(j.find("item_type") != j.end())
    {
        j.at("item_type").get_to(o.m_Item_type);
        o.m_Item_typeIsSet = true;
    } 
    if(j.find("cover_image_url") != j.end())
    {
        j.at("cover_image_url").get_to(o.m_Cover_image_url);
        o.m_Cover_image_urlIsSet = true;
    } 
    if(j.find("duration") != j.end())
    {
        j.at("duration").get_to(o.m_Duration);
        o.m_DurationIsSet = true;
    } 
    if(j.find("height") != j.end())
    {
        j.at("height").get_to(o.m_Height);
        o.m_HeightIsSet = true;
    } 
    if(j.find("width") != j.end())
    {
        j.at("width").get_to(o.m_Width);
        o.m_WidthIsSet = true;
    } 
    
}

std::string VideoMetadata::getItemType() const
{
    return m_Item_type;
}
void VideoMetadata::setItemType(std::string const& value)
{
    m_Item_type = value;
    m_Item_typeIsSet = true;
}
bool VideoMetadata::itemTypeIsSet() const
{
    return m_Item_typeIsSet;
}
void VideoMetadata::unsetItem_type()
{
    m_Item_typeIsSet = false;
}
std::string VideoMetadata::getCoverImageUrl() const
{
    return m_Cover_image_url;
}
void VideoMetadata::setCoverImageUrl(std::string const& value)
{
    m_Cover_image_url = value;
    m_Cover_image_urlIsSet = true;
}
bool VideoMetadata::coverImageUrlIsSet() const
{
    return m_Cover_image_urlIsSet;
}
void VideoMetadata::unsetCover_image_url()
{
    m_Cover_image_urlIsSet = false;
}
double VideoMetadata::getDuration() const
{
    return m_Duration;
}
void VideoMetadata::setDuration(double const value)
{
    m_Duration = value;
    m_DurationIsSet = true;
}
bool VideoMetadata::durationIsSet() const
{
    return m_DurationIsSet;
}
void VideoMetadata::unsetDuration()
{
    m_DurationIsSet = false;
}
int32_t VideoMetadata::getHeight() const
{
    return m_Height;
}
void VideoMetadata::setHeight(int32_t const value)
{
    m_Height = value;
    m_HeightIsSet = true;
}
bool VideoMetadata::heightIsSet() const
{
    return m_HeightIsSet;
}
void VideoMetadata::unsetHeight()
{
    m_HeightIsSet = false;
}
int32_t VideoMetadata::getWidth() const
{
    return m_Width;
}
void VideoMetadata::setWidth(int32_t const value)
{
    m_Width = value;
    m_WidthIsSet = true;
}
bool VideoMetadata::widthIsSet() const
{
    return m_WidthIsSet;
}
void VideoMetadata::unsetWidth()
{
    m_WidthIsSet = false;
}


} // namespace org::openapitools::server::model

