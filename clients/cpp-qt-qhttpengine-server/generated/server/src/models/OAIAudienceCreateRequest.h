/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIAudienceCreateRequest.h
 *
 * 
 */

#ifndef OAIAudienceCreateRequest_H
#define OAIAudienceCreateRequest_H

#include <QJsonObject>

#include "OAIAudienceCreateRequest_1_audience_type.h"
#include "OAIAudienceRule.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIAudienceCreateRequest : public OAIObject {
public:
    OAIAudienceCreateRequest();
    OAIAudienceCreateRequest(QString json);
    ~OAIAudienceCreateRequest() override;

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

    QString getDescription() const;
    void setDescription(const QString &description);
    bool is_description_Set() const;
    bool is_description_Valid() const;

    OAIAudienceCreateRequest_1_audience_type getAudienceType() const;
    void setAudienceType(const OAIAudienceCreateRequest_1_audience_type &audience_type);
    bool is_audience_type_Set() const;
    bool is_audience_type_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString ad_account_id;
    bool m_ad_account_id_isSet;
    bool m_ad_account_id_isValid;

    QString name;
    bool m_name_isSet;
    bool m_name_isValid;

    OAIAudienceRule rule;
    bool m_rule_isSet;
    bool m_rule_isValid;

    QString description;
    bool m_description_isSet;
    bool m_description_isValid;

    OAIAudienceCreateRequest_1_audience_type audience_type;
    bool m_audience_type_isSet;
    bool m_audience_type_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIAudienceCreateRequest)

#endif // OAIAudienceCreateRequest_H