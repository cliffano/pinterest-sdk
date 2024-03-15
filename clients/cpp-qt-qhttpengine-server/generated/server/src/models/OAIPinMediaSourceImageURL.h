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
 * OAIPinMediaSourceImageURL.h
 *
 * Image URL-based media source
 */

#ifndef OAIPinMediaSourceImageURL_H
#define OAIPinMediaSourceImageURL_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIPinMediaSourceImageURL : public OAIObject {
public:
    OAIPinMediaSourceImageURL();
    OAIPinMediaSourceImageURL(QString json);
    ~OAIPinMediaSourceImageURL() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSourceType() const;
    void setSourceType(const QString &source_type);
    bool is_source_type_Set() const;
    bool is_source_type_Valid() const;

    QString getUrl() const;
    void setUrl(const QString &url);
    bool is_url_Set() const;
    bool is_url_Valid() const;

    bool isIsStandard() const;
    void setIsStandard(const bool &is_standard);
    bool is_is_standard_Set() const;
    bool is_is_standard_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString source_type;
    bool m_source_type_isSet;
    bool m_source_type_isValid;

    QString url;
    bool m_url_isSet;
    bool m_url_isValid;

    bool is_standard;
    bool m_is_standard_isSet;
    bool m_is_standard_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIPinMediaSourceImageURL)

#endif // OAIPinMediaSourceImageURL_H
