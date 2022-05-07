/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIAdGroupResponse_allOf_1.h
 *
 * 
 */

#ifndef OAIAdGroupResponse_allOf_1_H
#define OAIAdGroupResponse_allOf_1_H

#include <QJsonObject>

#include "OAIActionType.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIAdGroupResponse_allOf_1 : public OAIObject {
public:
    OAIAdGroupResponse_allOf_1();
    OAIAdGroupResponse_allOf_1(QString json);
    ~OAIAdGroupResponse_allOf_1() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getCampaignId() const;
    void setCampaignId(const QString &campaign_id);
    bool is_campaign_id_Set() const;
    bool is_campaign_id_Valid() const;

    OAIActionType getBillableEvent() const;
    void setBillableEvent(const OAIActionType &billable_event);
    bool is_billable_event_Set() const;
    bool is_billable_event_Valid() const;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    QString getType() const;
    void setType(const QString &type);
    bool is_type_Set() const;
    bool is_type_Valid() const;

    QString getAdAccountId() const;
    void setAdAccountId(const QString &ad_account_id);
    bool is_ad_account_id_Set() const;
    bool is_ad_account_id_Valid() const;

    qint32 getCreatedTime() const;
    void setCreatedTime(const qint32 &created_time);
    bool is_created_time_Set() const;
    bool is_created_time_Valid() const;

    qint32 getUpdatedTime() const;
    void setUpdatedTime(const qint32 &updated_time);
    bool is_updated_time_Set() const;
    bool is_updated_time_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString campaign_id;
    bool m_campaign_id_isSet;
    bool m_campaign_id_isValid;

    OAIActionType billable_event;
    bool m_billable_event_isSet;
    bool m_billable_event_isValid;

    QString id;
    bool m_id_isSet;
    bool m_id_isValid;

    QString type;
    bool m_type_isSet;
    bool m_type_isValid;

    QString ad_account_id;
    bool m_ad_account_id_isSet;
    bool m_ad_account_id_isValid;

    qint32 created_time;
    bool m_created_time_isSet;
    bool m_created_time_isValid;

    qint32 updated_time;
    bool m_updated_time_isSet;
    bool m_updated_time_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIAdGroupResponse_allOf_1)

#endif // OAIAdGroupResponse_allOf_1_H
