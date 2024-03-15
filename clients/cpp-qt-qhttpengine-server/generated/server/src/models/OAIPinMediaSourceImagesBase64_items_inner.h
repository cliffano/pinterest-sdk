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
 * OAIPinMediaSourceImagesBase64_items_inner.h
 *
 * 
 */

#ifndef OAIPinMediaSourceImagesBase64_items_inner_H
#define OAIPinMediaSourceImagesBase64_items_inner_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIPinMediaSourceImagesBase64_items_inner : public OAIObject {
public:
    OAIPinMediaSourceImagesBase64_items_inner();
    OAIPinMediaSourceImagesBase64_items_inner(QString json);
    ~OAIPinMediaSourceImagesBase64_items_inner() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getTitle() const;
    void setTitle(const QString &title);
    bool is_title_Set() const;
    bool is_title_Valid() const;

    QString getDescription() const;
    void setDescription(const QString &description);
    bool is_description_Set() const;
    bool is_description_Valid() const;

    QString getLink() const;
    void setLink(const QString &link);
    bool is_link_Set() const;
    bool is_link_Valid() const;

    QString getContentType() const;
    void setContentType(const QString &content_type);
    bool is_content_type_Set() const;
    bool is_content_type_Valid() const;

    QString getData() const;
    void setData(const QString &data);
    bool is_data_Set() const;
    bool is_data_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString title;
    bool m_title_isSet;
    bool m_title_isValid;

    QString description;
    bool m_description_isSet;
    bool m_description_isValid;

    QString link;
    bool m_link_isSet;
    bool m_link_isValid;

    QString content_type;
    bool m_content_type_isSet;
    bool m_content_type_isValid;

    QString data;
    bool m_data_isSet;
    bool m_data_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIPinMediaSourceImagesBase64_items_inner)

#endif // OAIPinMediaSourceImagesBase64_items_inner_H
