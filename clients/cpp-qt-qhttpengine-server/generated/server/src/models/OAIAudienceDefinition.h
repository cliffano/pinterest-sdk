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
 * OAIAudienceDefinition.h
 *
 * Queryable audience representation.
 */

#ifndef OAIAudienceDefinition_H
#define OAIAudienceDefinition_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIAudienceDefinition : public OAIObject {
public:
    OAIAudienceDefinition();
    OAIAudienceDefinition(QString json);
    ~OAIAudienceDefinition() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getDate() const;
    void setDate(const QString &date);
    bool is_date_Set() const;
    bool is_date_Valid() const;

    QString getType() const;
    void setType(const QString &type);
    bool is_type_Set() const;
    bool is_type_Valid() const;

    QString getScope() const;
    void setScope(const QString &scope);
    bool is_scope_Set() const;
    bool is_scope_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString date;
    bool m_date_isSet;
    bool m_date_isValid;

    QString type;
    bool m_type_isSet;
    bool m_type_isValid;

    QString scope;
    bool m_scope_isSet;
    bool m_scope_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIAudienceDefinition)

#endif // OAIAudienceDefinition_H
