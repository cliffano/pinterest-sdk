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

/*
 * OAIPinMediaSource.h
 *
 * Pin media source.
 */

#ifndef OAIPinMediaSource_H
#define OAIPinMediaSource_H

#include <QJsonObject>

#include "OAIPinMediaSourceImageBase64.h"
#include "OAIPinMediaSourceImageURL.h"
#include "OAIPinMediaSourceImagesBase64.h"
#include "OAIPinMediaSourceImagesURL.h"
#include "OAIPinMediaSourceImagesURL_items_inner.h"
#include "OAIPinMediaSourcePinURL.h"
#include "OAIPinMediaSourceVideoID.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIPinMediaSource : public OAIObject {
public:
    OAIPinMediaSource();
    OAIPinMediaSource(QString json);
    ~OAIPinMediaSource() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSourceType() const;
    void setSourceType(const QString &source_type);
    bool is_source_type_Set() const;
    bool is_source_type_Valid() const;

    QString getContentType() const;
    void setContentType(const QString &content_type);
    bool is_content_type_Set() const;
    bool is_content_type_Valid() const;

    QString getData() const;
    void setData(const QString &data);
    bool is_data_Set() const;
    bool is_data_Valid() const;

    bool isIsStandard() const;
    void setIsStandard(const bool &is_standard);
    bool is_is_standard_Set() const;
    bool is_is_standard_Valid() const;

    QString getUrl() const;
    void setUrl(const QString &url);
    bool is_url_Set() const;
    bool is_url_Valid() const;

    QString getCoverImageUrl() const;
    void setCoverImageUrl(const QString &cover_image_url);
    bool is_cover_image_url_Set() const;
    bool is_cover_image_url_Valid() const;

    QString getCoverImageContentType() const;
    void setCoverImageContentType(const QString &cover_image_content_type);
    bool is_cover_image_content_type_Set() const;
    bool is_cover_image_content_type_Valid() const;

    QString getCoverImageData() const;
    void setCoverImageData(const QString &cover_image_data);
    bool is_cover_image_data_Set() const;
    bool is_cover_image_data_Valid() const;

    QString getMediaId() const;
    void setMediaId(const QString &media_id);
    bool is_media_id_Set() const;
    bool is_media_id_Valid() const;

    QList<OAIPinMediaSourceImagesURL_items_inner> getItems() const;
    void setItems(const QList<OAIPinMediaSourceImagesURL_items_inner> &items);
    bool is_items_Set() const;
    bool is_items_Valid() const;

    qint32 getIndex() const;
    void setIndex(const qint32 &index);
    bool is_index_Set() const;
    bool is_index_Valid() const;

    bool isIsAffiliateLink() const;
    void setIsAffiliateLink(const bool &is_affiliate_link);
    bool is_is_affiliate_link_Set() const;
    bool is_is_affiliate_link_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString source_type;
    bool m_source_type_isSet;
    bool m_source_type_isValid;

    QString content_type;
    bool m_content_type_isSet;
    bool m_content_type_isValid;

    QString data;
    bool m_data_isSet;
    bool m_data_isValid;

    bool is_standard;
    bool m_is_standard_isSet;
    bool m_is_standard_isValid;

    QString url;
    bool m_url_isSet;
    bool m_url_isValid;

    QString cover_image_url;
    bool m_cover_image_url_isSet;
    bool m_cover_image_url_isValid;

    QString cover_image_content_type;
    bool m_cover_image_content_type_isSet;
    bool m_cover_image_content_type_isValid;

    QString cover_image_data;
    bool m_cover_image_data_isSet;
    bool m_cover_image_data_isValid;

    QString media_id;
    bool m_media_id_isSet;
    bool m_media_id_isValid;

    QList<OAIPinMediaSourceImagesURL_items_inner> items;
    bool m_items_isSet;
    bool m_items_isValid;

    qint32 index;
    bool m_index_isSet;
    bool m_index_isValid;

    bool is_affiliate_link;
    bool m_is_affiliate_link_isSet;
    bool m_is_affiliate_link_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIPinMediaSource)

#endif // OAIPinMediaSource_H
