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
 * OAIPinMediaSourceImageBase64.h
 *
 * Base64-encoded image media source
 */

#ifndef OAIPinMediaSourceImageBase64_H
#define OAIPinMediaSourceImageBase64_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIPinMediaSourceImageBase64 : public OAIObject {
public:
    OAIPinMediaSourceImageBase64();
    OAIPinMediaSourceImageBase64(QString json);
    ~OAIPinMediaSourceImageBase64() override;

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
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIPinMediaSourceImageBase64)

#endif // OAIPinMediaSourceImageBase64_H
