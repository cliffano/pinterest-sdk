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
 * OAIPinMediaSourceImagesURL.h
 *
 * Multiple images urls-based media source
 */

#ifndef OAIPinMediaSourceImagesURL_H
#define OAIPinMediaSourceImagesURL_H

#include <QJsonObject>

#include "OAIPinMediaSourceImagesURL_items_inner.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIPinMediaSourceImagesURL : public OAIObject {
public:
    OAIPinMediaSourceImagesURL();
    OAIPinMediaSourceImagesURL(QString json);
    ~OAIPinMediaSourceImagesURL() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSourceType() const;
    void setSourceType(const QString &source_type);
    bool is_source_type_Set() const;
    bool is_source_type_Valid() const;

    QList<OAIPinMediaSourceImagesURL_items_inner> getItems() const;
    void setItems(const QList<OAIPinMediaSourceImagesURL_items_inner> &items);
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

    QString source_type;
    bool m_source_type_isSet;
    bool m_source_type_isValid;

    QList<OAIPinMediaSourceImagesURL_items_inner> items;
    bool m_items_isSet;
    bool m_items_isValid;

    qint32 index;
    bool m_index_isSet;
    bool m_index_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIPinMediaSourceImagesURL)

#endif // OAIPinMediaSourceImagesURL_H
