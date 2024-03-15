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


#include "ImageMetadata_images.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

ImageMetadata_images::ImageMetadata_images()
{
    m_r_150x150IsSet = false;
    m_r_400x300IsSet = false;
    m_r_600xIsSet = false;
    m_r_1200xIsSet = false;
    
}

void ImageMetadata_images::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool ImageMetadata_images::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool ImageMetadata_images::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "ImageMetadata_images" : pathPrefix;

                    
    return success;
}

bool ImageMetadata_images::operator==(const ImageMetadata_images& rhs) const
{
    return
    
    
    
    ((!r150x150IsSet() && !rhs.r150x150IsSet()) || (r150x150IsSet() && rhs.r150x150IsSet() && getR150x150() == rhs.getR150x150())) &&
    
    
    ((!r400x300IsSet() && !rhs.r400x300IsSet()) || (r400x300IsSet() && rhs.r400x300IsSet() && getR400x300() == rhs.getR400x300())) &&
    
    
    ((!r600xIsSet() && !rhs.r600xIsSet()) || (r600xIsSet() && rhs.r600xIsSet() && getR600x() == rhs.getR600x())) &&
    
    
    ((!r1200xIsSet() && !rhs.r1200xIsSet()) || (r1200xIsSet() && rhs.r1200xIsSet() && getR1200x() == rhs.getR1200x()))
    
    ;
}

bool ImageMetadata_images::operator!=(const ImageMetadata_images& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const ImageMetadata_images& o)
{
    j = nlohmann::json::object();
    if(o.r150x150IsSet())
        j["150x150"] = o.m_r_150x150;
    if(o.r400x300IsSet())
        j["400x300"] = o.m_r_400x300;
    if(o.r600xIsSet())
        j["600x"] = o.m_r_600x;
    if(o.r1200xIsSet())
        j["1200x"] = o.m_r_1200x;
    
}

void from_json(const nlohmann::json& j, ImageMetadata_images& o)
{
    if(j.find("150x150") != j.end())
    {
        j.at("150x150").get_to(o.m_r_150x150);
        o.m_r_150x150IsSet = true;
    } 
    if(j.find("400x300") != j.end())
    {
        j.at("400x300").get_to(o.m_r_400x300);
        o.m_r_400x300IsSet = true;
    } 
    if(j.find("600x") != j.end())
    {
        j.at("600x").get_to(o.m_r_600x);
        o.m_r_600xIsSet = true;
    } 
    if(j.find("1200x") != j.end())
    {
        j.at("1200x").get_to(o.m_r_1200x);
        o.m_r_1200xIsSet = true;
    } 
    
}

org::openapitools::server::model::ImageDetails ImageMetadata_images::getR150x150() const
{
    return m_r_150x150;
}
void ImageMetadata_images::setR150x150(org::openapitools::server::model::ImageDetails const& value)
{
    m_r_150x150 = value;
    m_r_150x150IsSet = true;
}
bool ImageMetadata_images::r150x150IsSet() const
{
    return m_r_150x150IsSet;
}
void ImageMetadata_images::unsetr_150x150()
{
    m_r_150x150IsSet = false;
}
org::openapitools::server::model::ImageDetails ImageMetadata_images::getR400x300() const
{
    return m_r_400x300;
}
void ImageMetadata_images::setR400x300(org::openapitools::server::model::ImageDetails const& value)
{
    m_r_400x300 = value;
    m_r_400x300IsSet = true;
}
bool ImageMetadata_images::r400x300IsSet() const
{
    return m_r_400x300IsSet;
}
void ImageMetadata_images::unsetr_400x300()
{
    m_r_400x300IsSet = false;
}
org::openapitools::server::model::ImageDetails ImageMetadata_images::getR600x() const
{
    return m_r_600x;
}
void ImageMetadata_images::setR600x(org::openapitools::server::model::ImageDetails const& value)
{
    m_r_600x = value;
    m_r_600xIsSet = true;
}
bool ImageMetadata_images::r600xIsSet() const
{
    return m_r_600xIsSet;
}
void ImageMetadata_images::unsetr_600x()
{
    m_r_600xIsSet = false;
}
org::openapitools::server::model::ImageDetails ImageMetadata_images::getR1200x() const
{
    return m_r_1200x;
}
void ImageMetadata_images::setR1200x(org::openapitools::server::model::ImageDetails const& value)
{
    m_r_1200x = value;
    m_r_1200xIsSet = true;
}
bool ImageMetadata_images::r1200xIsSet() const
{
    return m_r_1200xIsSet;
}
void ImageMetadata_images::unsetr_1200x()
{
    m_r_1200xIsSet = false;
}


} // namespace org::openapitools::server::model
