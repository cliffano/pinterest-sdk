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

/*
 * OAIPinMediaWithImage_allOf.h
 *
 * 
 */

#ifndef OAIPinMediaWithImage_allOf_H
#define OAIPinMediaWithImage_allOf_H

#include <QJsonObject>

#include "OAIImageDetails.h"
#include <QMap>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIImageDetails;

class OAIPinMediaWithImage_allOf : public OAIObject {
public:
    OAIPinMediaWithImage_allOf();
    OAIPinMediaWithImage_allOf(QString json);
    ~OAIPinMediaWithImage_allOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QMap<QString, OAIImageDetails> getImages() const;
    void setImages(const QMap<QString, OAIImageDetails> &images);
    bool is_images_Set() const;
    bool is_images_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QMap<QString, OAIImageDetails> images;
    bool m_images_isSet;
    bool m_images_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIPinMediaWithImage_allOf)

#endif // OAIPinMediaWithImage_allOf_H
