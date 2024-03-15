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
 * OAIAdAccountGetSubscriptionResponse.h
 *
 * 
 */

#ifndef OAIAdAccountGetSubscriptionResponse_H
#define OAIAdAccountGetSubscriptionResponse_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIAdAccountGetSubscriptionResponse : public OAIObject {
public:
    OAIAdAccountGetSubscriptionResponse();
    OAIAdAccountGetSubscriptionResponse(QString json);
    ~OAIAdAccountGetSubscriptionResponse() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getLeadFormId() const;
    void setLeadFormId(const QString &lead_form_id);
    bool is_lead_form_id_Set() const;
    bool is_lead_form_id_Valid() const;

    QString getWebhookUrl() const;
    void setWebhookUrl(const QString &webhook_url);
    bool is_webhook_url_Set() const;
    bool is_webhook_url_Valid() const;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    QString getUserAccountId() const;
    void setUserAccountId(const QString &user_account_id);
    bool is_user_account_id_Set() const;
    bool is_user_account_id_Valid() const;

    QString getAdAccountId() const;
    void setAdAccountId(const QString &ad_account_id);
    bool is_ad_account_id_Set() const;
    bool is_ad_account_id_Valid() const;

    QString getApiVersion() const;
    void setApiVersion(const QString &api_version);
    bool is_api_version_Set() const;
    bool is_api_version_Valid() const;

    QString getCryptographicKey() const;
    void setCryptographicKey(const QString &cryptographic_key);
    bool is_cryptographic_key_Set() const;
    bool is_cryptographic_key_Valid() const;

    QString getCryptographicAlgorithm() const;
    void setCryptographicAlgorithm(const QString &cryptographic_algorithm);
    bool is_cryptographic_algorithm_Set() const;
    bool is_cryptographic_algorithm_Valid() const;

    qint32 getCreatedTime() const;
    void setCreatedTime(const qint32 &created_time);
    bool is_created_time_Set() const;
    bool is_created_time_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_lead_form_id;
    bool m_lead_form_id_isSet;
    bool m_lead_form_id_isValid;

    QString m_webhook_url;
    bool m_webhook_url_isSet;
    bool m_webhook_url_isValid;

    QString m_id;
    bool m_id_isSet;
    bool m_id_isValid;

    QString m_user_account_id;
    bool m_user_account_id_isSet;
    bool m_user_account_id_isValid;

    QString m_ad_account_id;
    bool m_ad_account_id_isSet;
    bool m_ad_account_id_isValid;

    QString m_api_version;
    bool m_api_version_isSet;
    bool m_api_version_isValid;

    QString m_cryptographic_key;
    bool m_cryptographic_key_isSet;
    bool m_cryptographic_key_isValid;

    QString m_cryptographic_algorithm;
    bool m_cryptographic_algorithm_isSet;
    bool m_cryptographic_algorithm_isValid;

    qint32 m_created_time;
    bool m_created_time_isSet;
    bool m_created_time_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIAdAccountGetSubscriptionResponse)

#endif // OAIAdAccountGetSubscriptionResponse_H
