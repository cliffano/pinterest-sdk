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
 * OAIAudienceCommon.h
 *
 * 
 */

#ifndef OAIAudienceCommon_H
#define OAIAudienceCommon_H

#include <QJsonObject>

#include "OAIAudienceRule.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIAudienceRule;

class OAIAudienceCommon : public OAIObject {
public:
    OAIAudienceCommon();
    OAIAudienceCommon(QString json);
    ~OAIAudienceCommon() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getAdAccountId() const;
    void setAdAccountId(const QString &ad_account_id);
    bool is_ad_account_id_Set() const;
    bool is_ad_account_id_Valid() const;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    OAIAudienceRule getRule() const;
    void setRule(const OAIAudienceRule &rule);
    bool is_rule_Set() const;
    bool is_rule_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_ad_account_id;
    bool m_ad_account_id_isSet;
    bool m_ad_account_id_isValid;

    QString m_name;
    bool m_name_isSet;
    bool m_name_isValid;

    OAIAudienceRule m_rule;
    bool m_rule_isSet;
    bool m_rule_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIAudienceCommon)

#endif // OAIAudienceCommon_H
