/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAICatalogsFeedIngestionErrors.h
 *
 * 
 */

#ifndef OAICatalogsFeedIngestionErrors_H
#define OAICatalogsFeedIngestionErrors_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICatalogsFeedIngestionErrors : public OAIObject {
public:
    OAICatalogsFeedIngestionErrors();
    OAICatalogsFeedIngestionErrors(QString json);
    ~OAICatalogsFeedIngestionErrors() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getImageDownloadError() const;
    void setImageDownloadError(const qint32 &image_download_error);
    bool is_image_download_error_Set() const;
    bool is_image_download_error_Valid() const;

    qint32 getImageDownloadConnectionTimeout() const;
    void setImageDownloadConnectionTimeout(const qint32 &image_download_connection_timeout);
    bool is_image_download_connection_timeout_Set() const;
    bool is_image_download_connection_timeout_Valid() const;

    qint32 getImageFormatUnrecognize() const;
    void setImageFormatUnrecognize(const qint32 &image_format_unrecognize);
    bool is_image_format_unrecognize_Set() const;
    bool is_image_format_unrecognize_Valid() const;

    qint32 getLineLevelInternalError() const;
    void setLineLevelInternalError(const qint32 &line_level_internal_error);
    bool is_line_level_internal_error_Set() const;
    bool is_line_level_internal_error_Valid() const;

    qint32 getLargeProductCountDecrease() const;
    void setLargeProductCountDecrease(const qint32 &large_product_count_decrease);
    bool is_large_product_count_decrease_Set() const;
    bool is_large_product_count_decrease_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 image_download_error;
    bool m_image_download_error_isSet;
    bool m_image_download_error_isValid;

    qint32 image_download_connection_timeout;
    bool m_image_download_connection_timeout_isSet;
    bool m_image_download_connection_timeout_isValid;

    qint32 image_format_unrecognize;
    bool m_image_format_unrecognize_isSet;
    bool m_image_format_unrecognize_isValid;

    qint32 line_level_internal_error;
    bool m_line_level_internal_error_isSet;
    bool m_line_level_internal_error_isValid;

    qint32 large_product_count_decrease;
    bool m_large_product_count_decrease_isSet;
    bool m_large_product_count_decrease_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICatalogsFeedIngestionErrors)

#endif // OAICatalogsFeedIngestionErrors_H
