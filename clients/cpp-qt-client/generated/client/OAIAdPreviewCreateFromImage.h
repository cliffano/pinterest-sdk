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
 * OAIAdPreviewCreateFromImage.h
 *
 * 
 */

#ifndef OAIAdPreviewCreateFromImage_H
#define OAIAdPreviewCreateFromImage_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIAdPreviewCreateFromImage : public OAIObject {
public:
    OAIAdPreviewCreateFromImage();
    OAIAdPreviewCreateFromImage(QString json);
    ~OAIAdPreviewCreateFromImage() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getImageUrl() const;
    void setImageUrl(const QString &image_url);
    bool is_image_url_Set() const;
    bool is_image_url_Valid() const;

    QString getTitle() const;
    void setTitle(const QString &title);
    bool is_title_Set() const;
    bool is_title_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_image_url;
    bool m_image_url_isSet;
    bool m_image_url_isValid;

    QString m_title;
    bool m_title_isSet;
    bool m_title_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIAdPreviewCreateFromImage)

#endif // OAIAdPreviewCreateFromImage_H
