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

/*
 * CatalogsFeedIngestionErrors.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_CatalogsFeedIngestionErrors_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_CatalogsFeedIngestionErrors_H_


#include "ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  CatalogsFeedIngestionErrors
    : public ModelBase
{
public:
    CatalogsFeedIngestionErrors();
    virtual ~CatalogsFeedIngestionErrors();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CatalogsFeedIngestionErrors members

    /// <summary>
    /// 
    /// </summary>
    int32_t getImageDownloadError() const;
    bool imageDownloadErrorIsSet() const;
    void unsetImage_download_error();

    void setImageDownloadError(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getImageDownloadConnectionTimeout() const;
    bool imageDownloadConnectionTimeoutIsSet() const;
    void unsetImage_download_connection_timeout();

    void setImageDownloadConnectionTimeout(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getImageFormatUnrecognize() const;
    bool imageFormatUnrecognizeIsSet() const;
    void unsetImage_format_unrecognize();

    void setImageFormatUnrecognize(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getLineLevelInternalError() const;
    bool lineLevelInternalErrorIsSet() const;
    void unsetLine_level_internal_error();

    void setLineLevelInternalError(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getLargeProductCountDecrease() const;
    bool largeProductCountDecreaseIsSet() const;
    void unsetLarge_product_count_decrease();

    void setLargeProductCountDecrease(int32_t value);


protected:
    int32_t m_Image_download_error;
    bool m_Image_download_errorIsSet;
    int32_t m_Image_download_connection_timeout;
    bool m_Image_download_connection_timeoutIsSet;
    int32_t m_Image_format_unrecognize;
    bool m_Image_format_unrecognizeIsSet;
    int32_t m_Line_level_internal_error;
    bool m_Line_level_internal_errorIsSet;
    int32_t m_Large_product_count_decrease;
    bool m_Large_product_count_decreaseIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_CatalogsFeedIngestionErrors_H_ */
