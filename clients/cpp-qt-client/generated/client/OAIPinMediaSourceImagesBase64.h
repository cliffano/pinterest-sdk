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
 * OAIPinMediaSourceImagesBase64.h
 *
 * Multiple Base64-encoded images media source
 */

#ifndef OAIPinMediaSourceImagesBase64_H
#define OAIPinMediaSourceImagesBase64_H

#include <QJsonObject>

#include "OAIPinMediaSourceImagesBase64_items_inner.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIPinMediaSourceImagesBase64_items_inner;

class OAIPinMediaSourceImagesBase64 : public OAIObject {
public:
    OAIPinMediaSourceImagesBase64();
    OAIPinMediaSourceImagesBase64(QString json);
    ~OAIPinMediaSourceImagesBase64() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSourceType() const;
    void setSourceType(const QString &source_type);
    bool is_source_type_Set() const;
    bool is_source_type_Valid() const;

    QList<OAIPinMediaSourceImagesBase64_items_inner> getItems() const;
    void setItems(const QList<OAIPinMediaSourceImagesBase64_items_inner> &items);
    bool is_items_Set() const;
    bool is_items_Valid() const;

    qint32 getIndex() const;
    void setIndex(const qint32 &index);
    bool is_index_Set() const;
    bool is_index_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_source_type;
    bool m_source_type_isSet;
    bool m_source_type_isValid;

    QList<OAIPinMediaSourceImagesBase64_items_inner> m_items;
    bool m_items_isSet;
    bool m_items_isValid;

    qint32 m_index;
    bool m_index_isSet;
    bool m_index_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIPinMediaSourceImagesBase64)

#endif // OAIPinMediaSourceImagesBase64_H
