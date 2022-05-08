/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "CatalogsFeedIngestionErrors.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




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

CatalogsFeedIngestionErrors::~CatalogsFeedIngestionErrors()
{
}

void CatalogsFeedIngestionErrors::validate()
{
    // TODO: implement validation
}

web::json::value CatalogsFeedIngestionErrors::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Image_download_errorIsSet)
    {
        val[utility::conversions::to_string_t(U("image_download_error"))] = ModelBase::toJson(m_Image_download_error);
    }
    if(m_Image_download_connection_timeoutIsSet)
    {
        val[utility::conversions::to_string_t(U("image_download_connection_timeout"))] = ModelBase::toJson(m_Image_download_connection_timeout);
    }
    if(m_Image_format_unrecognizeIsSet)
    {
        val[utility::conversions::to_string_t(U("image_format_unrecognize"))] = ModelBase::toJson(m_Image_format_unrecognize);
    }
    if(m_Line_level_internal_errorIsSet)
    {
        val[utility::conversions::to_string_t(U("line_level_internal_error"))] = ModelBase::toJson(m_Line_level_internal_error);
    }
    if(m_Large_product_count_decreaseIsSet)
    {
        val[utility::conversions::to_string_t(U("large_product_count_decrease"))] = ModelBase::toJson(m_Large_product_count_decrease);
    }

    return val;
}

bool CatalogsFeedIngestionErrors::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("image_download_error"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("image_download_error")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_image_download_error;
            ok &= ModelBase::fromJson(fieldValue, refVal_image_download_error);
            setImageDownloadError(refVal_image_download_error);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("image_download_connection_timeout"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("image_download_connection_timeout")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_image_download_connection_timeout;
            ok &= ModelBase::fromJson(fieldValue, refVal_image_download_connection_timeout);
            setImageDownloadConnectionTimeout(refVal_image_download_connection_timeout);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("image_format_unrecognize"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("image_format_unrecognize")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_image_format_unrecognize;
            ok &= ModelBase::fromJson(fieldValue, refVal_image_format_unrecognize);
            setImageFormatUnrecognize(refVal_image_format_unrecognize);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("line_level_internal_error"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("line_level_internal_error")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_line_level_internal_error;
            ok &= ModelBase::fromJson(fieldValue, refVal_line_level_internal_error);
            setLineLevelInternalError(refVal_line_level_internal_error);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("large_product_count_decrease"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("large_product_count_decrease")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_large_product_count_decrease;
            ok &= ModelBase::fromJson(fieldValue, refVal_large_product_count_decrease);
            setLargeProductCountDecrease(refVal_large_product_count_decrease);
        }
    }
    return ok;
}

void CatalogsFeedIngestionErrors::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Image_download_errorIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("image_download_error")), m_Image_download_error));
    }
    if(m_Image_download_connection_timeoutIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("image_download_connection_timeout")), m_Image_download_connection_timeout));
    }
    if(m_Image_format_unrecognizeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("image_format_unrecognize")), m_Image_format_unrecognize));
    }
    if(m_Line_level_internal_errorIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("line_level_internal_error")), m_Line_level_internal_error));
    }
    if(m_Large_product_count_decreaseIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("large_product_count_decrease")), m_Large_product_count_decrease));
    }
}

bool CatalogsFeedIngestionErrors::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("image_download_error"))))
    {
        int32_t refVal_image_download_error;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("image_download_error"))), refVal_image_download_error );
        setImageDownloadError(refVal_image_download_error);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("image_download_connection_timeout"))))
    {
        int32_t refVal_image_download_connection_timeout;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("image_download_connection_timeout"))), refVal_image_download_connection_timeout );
        setImageDownloadConnectionTimeout(refVal_image_download_connection_timeout);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("image_format_unrecognize"))))
    {
        int32_t refVal_image_format_unrecognize;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("image_format_unrecognize"))), refVal_image_format_unrecognize );
        setImageFormatUnrecognize(refVal_image_format_unrecognize);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("line_level_internal_error"))))
    {
        int32_t refVal_line_level_internal_error;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("line_level_internal_error"))), refVal_line_level_internal_error );
        setLineLevelInternalError(refVal_line_level_internal_error);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("large_product_count_decrease"))))
    {
        int32_t refVal_large_product_count_decrease;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("large_product_count_decrease"))), refVal_large_product_count_decrease );
        setLargeProductCountDecrease(refVal_large_product_count_decrease);
    }
    return ok;
}

int32_t CatalogsFeedIngestionErrors::getImageDownloadError() const
{
    return m_Image_download_error;
}

void CatalogsFeedIngestionErrors::setImageDownloadError(int32_t value)
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

void CatalogsFeedIngestionErrors::setImageDownloadConnectionTimeout(int32_t value)
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

void CatalogsFeedIngestionErrors::setImageFormatUnrecognize(int32_t value)
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

void CatalogsFeedIngestionErrors::setLineLevelInternalError(int32_t value)
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

void CatalogsFeedIngestionErrors::setLargeProductCountDecrease(int32_t value)
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
}
}
}
}

