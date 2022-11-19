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


#include "ImageMetadata.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

ImageMetadata::ImageMetadata()
{
    m_Item_type = "";
    m_Item_typeIsSet = false;
    m_ImagesIsSet = false;
    
}

void ImageMetadata::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool ImageMetadata::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool ImageMetadata::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "ImageMetadata" : pathPrefix;

            
    return success;
}

bool ImageMetadata::operator==(const ImageMetadata& rhs) const
{
    return
    
    
    
    ((!itemTypeIsSet() && !rhs.itemTypeIsSet()) || (itemTypeIsSet() && rhs.itemTypeIsSet() && getItemType() == rhs.getItemType())) &&
    
    
    ((!imagesIsSet() && !rhs.imagesIsSet()) || (imagesIsSet() && rhs.imagesIsSet() && getImages() == rhs.getImages()))
    
    ;
}

bool ImageMetadata::operator!=(const ImageMetadata& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const ImageMetadata& o)
{
    j = nlohmann::json();
    if(o.itemTypeIsSet())
        j["item_type"] = o.m_Item_type;
    if(o.imagesIsSet() || !o.m_Images.empty())
        j["images"] = o.m_Images;
    
}

void from_json(const nlohmann::json& j, ImageMetadata& o)
{
    if(j.find("item_type") != j.end())
    {
        j.at("item_type").get_to(o.m_Item_type);
        o.m_Item_typeIsSet = true;
    } 
    if(j.find("images") != j.end())
    {
        j.at("images").get_to(o.m_Images);
        o.m_ImagesIsSet = true;
    } 
    
}

std::string ImageMetadata::getItemType() const
{
    return m_Item_type;
}
void ImageMetadata::setItemType(std::string const& value)
{
    m_Item_type = value;
    m_Item_typeIsSet = true;
}
bool ImageMetadata::itemTypeIsSet() const
{
    return m_Item_typeIsSet;
}
void ImageMetadata::unsetItem_type()
{
    m_Item_typeIsSet = false;
}
std::map<std::string, org::openapitools::server::model::ImageDetails> ImageMetadata::getImages() const
{
    return m_Images;
}
void ImageMetadata::setImages(std::map<std::string, org::openapitools::server::model::ImageDetails> const& value)
{
    m_Images = value;
    m_ImagesIsSet = true;
}
bool ImageMetadata::imagesIsSet() const
{
    return m_ImagesIsSet;
}
void ImageMetadata::unsetImages()
{
    m_ImagesIsSet = false;
}


} // namespace org::openapitools::server::model

