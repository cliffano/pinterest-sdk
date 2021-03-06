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


#include "CatalogsFeedIngestionErrors.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

CatalogsFeedIngestionErrors::CatalogsFeedIngestionErrors()
{
    m_Image_download_error = 0;
    m_Image_download_errorIsSet = false;
    m_Image_download_connection_timeout = 0;
    m_Image_download_connection_timeoutIsSet = false;
    m_Image_format_unrecognize = 0;
    m_Image_format_unrecognizeIsSet = false;
    m_Line_level_internal_error = 0;
    m_Line_level_internal_errorIsSet = false;
    m_Large_product_count_decrease = 0;
    m_Large_product_count_decreaseIsSet = false;
    
}

void CatalogsFeedIngestionErrors::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool CatalogsFeedIngestionErrors::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool CatalogsFeedIngestionErrors::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "CatalogsFeedIngestionErrors" : pathPrefix;

                        
    return success;
}

bool CatalogsFeedIngestionErrors::operator==(const CatalogsFeedIngestionErrors& rhs) const
{
    return
    
    
    
    ((!imageDownloadErrorIsSet() && !rhs.imageDownloadErrorIsSet()) || (imageDownloadErrorIsSet() && rhs.imageDownloadErrorIsSet() && getImageDownloadError() == rhs.getImageDownloadError())) &&
    
    
    ((!imageDownloadConnectionTimeoutIsSet() && !rhs.imageDownloadConnectionTimeoutIsSet()) || (imageDownloadConnectionTimeoutIsSet() && rhs.imageDownloadConnectionTimeoutIsSet() && getImageDownloadConnectionTimeout() == rhs.getImageDownloadConnectionTimeout())) &&
    
    
    ((!imageFormatUnrecognizeIsSet() && !rhs.imageFormatUnrecognizeIsSet()) || (imageFormatUnrecognizeIsSet() && rhs.imageFormatUnrecognizeIsSet() && getImageFormatUnrecognize() == rhs.getImageFormatUnrecognize())) &&
    
    
    ((!lineLevelInternalErrorIsSet() && !rhs.lineLevelInternalErrorIsSet()) || (lineLevelInternalErrorIsSet() && rhs.lineLevelInternalErrorIsSet() && getLineLevelInternalError() == rhs.getLineLevelInternalError())) &&
    
    
    ((!largeProductCountDecreaseIsSet() && !rhs.largeProductCountDecreaseIsSet()) || (largeProductCountDecreaseIsSet() && rhs.largeProductCountDecreaseIsSet() && getLargeProductCountDecrease() == rhs.getLargeProductCountDecrease()))
    
    ;
}

bool CatalogsFeedIngestionErrors::operator!=(const CatalogsFeedIngestionErrors& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const CatalogsFeedIngestionErrors& o)
{
    j = nlohmann::json();
    if(o.imageDownloadErrorIsSet())
        j["image_download_error"] = o.m_Image_download_error;
    if(o.imageDownloadConnectionTimeoutIsSet())
        j["image_download_connection_timeout"] = o.m_Image_download_connection_timeout;
    if(o.imageFormatUnrecognizeIsSet())
        j["image_format_unrecognize"] = o.m_Image_format_unrecognize;
    if(o.lineLevelInternalErrorIsSet())
        j["line_level_internal_error"] = o.m_Line_level_internal_error;
    if(o.largeProductCountDecreaseIsSet())
        j["large_product_count_decrease"] = o.m_Large_product_count_decrease;
    
}

void from_json(const nlohmann::json& j, CatalogsFeedIngestionErrors& o)
{
    if(j.find("image_download_error") != j.end())
    {
        j.at("image_download_error").get_to(o.m_Image_download_error);
        o.m_Image_download_errorIsSet = true;
    } 
    if(j.find("image_download_connection_timeout") != j.end())
    {
        j.at("image_download_connection_timeout").get_to(o.m_Image_download_connection_timeout);
        o.m_Image_download_connection_timeoutIsSet = true;
    } 
    if(j.find("image_format_unrecognize") != j.end())
    {
        j.at("image_format_unrecognize").get_to(o.m_Image_format_unrecognize);
        o.m_Image_format_unrecognizeIsSet = true;
    } 
    if(j.find("line_level_internal_error") != j.end())
    {
        j.at("line_level_internal_error").get_to(o.m_Line_level_internal_error);
        o.m_Line_level_internal_errorIsSet = true;
    } 
    if(j.find("large_product_count_decrease") != j.end())
    {
        j.at("large_product_count_decrease").get_to(o.m_Large_product_count_decrease);
        o.m_Large_product_count_decreaseIsSet = true;
    } 
    
}

int32_t CatalogsFeedIngestionErrors::getImageDownloadError() const
{
    return m_Image_download_error;
}
void CatalogsFeedIngestionErrors::setImageDownloadError(int32_t const value)
{
    m_Image_download_error = value;
    m_Image_download_errorIsSet = true;
}
bool CatalogsFeedIngestionErrors::imageDownloadErrorIsSet() const
{
    return m_Image_download_errorIsSet;
}
void CatalogsFeedIngestionErrors::unsetImage_download_error()
{
    m_Image_download_errorIsSet = false;
}
int32_t CatalogsFeedIngestionErrors::getImageDownloadConnectionTimeout() const
{
    return m_Image_download_connection_timeout;
}
void CatalogsFeedIngestionErrors::setImageDownloadConnectionTimeout(int32_t const value)
{
    m_Image_download_connection_timeout = value;
    m_Image_download_connection_timeoutIsSet = true;
}
bool CatalogsFeedIngestionErrors::imageDownloadConnectionTimeoutIsSet() const
{
    return m_Image_download_connection_timeoutIsSet;
}
void CatalogsFeedIngestionErrors::unsetImage_download_connection_timeout()
{
    m_Image_download_connection_timeoutIsSet = false;
}
int32_t CatalogsFeedIngestionErrors::getImageFormatUnrecognize() const
{
    return m_Image_format_unrecognize;
}
void CatalogsFeedIngestionErrors::setImageFormatUnrecognize(int32_t const value)
{
    m_Image_format_unrecognize = value;
    m_Image_format_unrecognizeIsSet = true;
}
bool CatalogsFeedIngestionErrors::imageFormatUnrecognizeIsSet() const
{
    return m_Image_format_unrecognizeIsSet;
}
void CatalogsFeedIngestionErrors::unsetImage_format_unrecognize()
{
    m_Image_format_unrecognizeIsSet = false;
}
int32_t CatalogsFeedIngestionErrors::getLineLevelInternalError() const
{
    return m_Line_level_internal_error;
}
void CatalogsFeedIngestionErrors::setLineLevelInternalError(int32_t const value)
{
    m_Line_level_internal_error = value;
    m_Line_level_internal_errorIsSet = true;
}
bool CatalogsFeedIngestionErrors::lineLevelInternalErrorIsSet() const
{
    return m_Line_level_internal_errorIsSet;
}
void CatalogsFeedIngestionErrors::unsetLine_level_internal_error()
{
    m_Line_level_internal_errorIsSet = false;
}
int32_t CatalogsFeedIngestionErrors::getLargeProductCountDecrease() const
{
    return m_Large_product_count_decrease;
}
void CatalogsFeedIngestionErrors::setLargeProductCountDecrease(int32_t const value)
{
    m_Large_product_count_decrease = value;
    m_Large_product_count_decreaseIsSet = true;
}
bool CatalogsFeedIngestionErrors::largeProductCountDecreaseIsSet() const
{
    return m_Large_product_count_decreaseIsSet;
}
void CatalogsFeedIngestionErrors::unsetLarge_product_count_decrease()
{
    m_Large_product_count_decreaseIsSet = false;
}


} // namespace org::openapitools::server::model

