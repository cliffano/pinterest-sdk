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
 * OAIPinMediaWithImages.h
 *
 * Pin with multiple images.
 */

#ifndef OAIPinMediaWithImages_H
#define OAIPinMediaWithImages_H

#include <QJsonObject>

#include "OAIImageMetadata.h"
#include "OAIPinMedia.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIPinMediaWithImages : public OAIObject {
public:
    OAIPinMediaWithImages();
    OAIPinMediaWithImages(QString json);
    ~OAIPinMediaWithImages() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getMediaType() const;
    void setMediaType(const QString &media_type);
    bool is_media_type_Set() const;
    bool is_media_type_Valid() const;

    QList<OAIImageMetadata> getItems() const;
    void setItems(const QList<OAIImageMetadata> &items);
    bool is_items_Set() const;
    bool is_items_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString media_type;
    bool m_media_type_isSet;
    bool m_media_type_isValid;

    QList<OAIImageMetadata> items;
    bool m_items_isSet;
    bool m_items_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIPinMediaWithImages)

#endif // OAIPinMediaWithImages_H
