/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.4.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIPinMediaWithImage.h
 *
 * Pin with image.
 */

#ifndef OAIPinMediaWithImage_H
#define OAIPinMediaWithImage_H

#include <QJsonObject>

#include "OAIImageDetails.h"
#include "OAIPinMedia.h"
#include "OAIPinMediaWithImage_allOf.h"
#include <QList>
#include <QMap>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIPinMediaWithImage : public OAIObject {
public:
    OAIPinMediaWithImage();
    OAIPinMediaWithImage(QString json);
    ~OAIPinMediaWithImage() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QMap<QString, OAIImageDetails> getImages() const;
    void setImages(const QMap<QString, OAIImageDetails> &images);
    bool is_images_Set() const;
    bool is_images_Valid() const;

    QString getMediaType() const;
    void setMediaType(const QString &media_type);
    bool is_media_type_Set() const;
    bool is_media_type_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QMap<QString, OAIImageDetails> images;
    bool m_images_isSet;
    bool m_images_isValid;

    QString media_type;
    bool m_media_type_isSet;
    bool m_media_type_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIPinMediaWithImage)

#endif // OAIPinMediaWithImage_H
