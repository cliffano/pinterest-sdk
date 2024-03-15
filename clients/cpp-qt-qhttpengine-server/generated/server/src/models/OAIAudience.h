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
 * OAIAudience.h
 *
 * 
 */

#ifndef OAIAudience_H
#define OAIAudience_H

#include <QJsonObject>

#include "OAIAudienceRule.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIAudience : public OAIObject {
public:
    OAIAudience();
    OAIAudience(QString json);
    ~OAIAudience() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getAdAccountId() const;
    void setAdAccountId(const QString &ad_account_id);
    bool is_ad_account_id_Set() const;
    bool is_ad_account_id_Valid() const;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    QString getAudienceType() const;
    void setAudienceType(const QString &audience_type);
    bool is_audience_type_Set() const;
    bool is_audience_type_Valid() const;

    QString getDescription() const;
    void setDescription(const QString &description);
    bool is_description_Set() const;
    bool is_description_Valid() const;

    OAIAudienceRule getRule() const;
    void setRule(const OAIAudienceRule &rule);
    bool is_rule_Set() const;
    bool is_rule_Valid() const;

    qint32 getSize() const;
    void setSize(const qint32 &size);
    bool is_size_Set() const;
    bool is_size_Valid() const;

    QString getStatus() const;
    void setStatus(const QString &status);
    bool is_status_Set() const;
    bool is_status_Valid() const;

    QString getType() const;
    void setType(const QString &type);
    bool is_type_Set() const;
    bool is_type_Valid() const;

    qint32 getCreatedTimestamp() const;
    void setCreatedTimestamp(const qint32 &created_timestamp);
    bool is_created_timestamp_Set() const;
    bool is_created_timestamp_Valid() const;

    qint32 getUpdatedTimestamp() const;
    void setUpdatedTimestamp(const qint32 &updated_timestamp);
    bool is_updated_timestamp_Set() const;
    bool is_updated_timestamp_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString ad_account_id;
    bool m_ad_account_id_isSet;
    bool m_ad_account_id_isValid;

    QString id;
    bool m_id_isSet;
    bool m_id_isValid;

    QString name;
    bool m_name_isSet;
    bool m_name_isValid;

    QString audience_type;
    bool m_audience_type_isSet;
    bool m_audience_type_isValid;

    QString description;
    bool m_description_isSet;
    bool m_description_isValid;

    OAIAudienceRule rule;
    bool m_rule_isSet;
    bool m_rule_isValid;

    qint32 size;
    bool m_size_isSet;
    bool m_size_isValid;

    QString status;
    bool m_status_isSet;
    bool m_status_isValid;

    QString type;
    bool m_type_isSet;
    bool m_type_isValid;

    qint32 created_timestamp;
    bool m_created_timestamp_isSet;
    bool m_created_timestamp_isValid;

    qint32 updated_timestamp;
    bool m_updated_timestamp_isSet;
    bool m_updated_timestamp_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIAudience)

#endif // OAIAudience_H
