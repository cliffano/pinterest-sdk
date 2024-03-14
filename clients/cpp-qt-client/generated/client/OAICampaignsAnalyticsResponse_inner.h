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
 * OAICampaignsAnalyticsResponse_inner.h
 *
 * 
 */

#ifndef OAICampaignsAnalyticsResponse_inner_H
#define OAICampaignsAnalyticsResponse_inner_H

#include <QJsonObject>

#include <QDate>
#include <QJsonValue>
#include <QMap>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICampaignsAnalyticsResponse_inner : public OAIObject {
public:
    OAICampaignsAnalyticsResponse_inner();
    OAICampaignsAnalyticsResponse_inner(QString json);
    ~OAICampaignsAnalyticsResponse_inner() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getCampaignId() const;
    void setCampaignId(const QString &campaign_id);
    bool is_campaign_id_Set() const;
    bool is_campaign_id_Valid() const;

    QDate getDate() const;
    void setDate(const QDate &date);
    bool is_date_Set() const;
    bool is_date_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_campaign_id;
    bool m_campaign_id_isSet;
    bool m_campaign_id_isValid;

    QDate m_date;
    bool m_date_isSet;
    bool m_date_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICampaignsAnalyticsResponse_inner)

#endif // OAICampaignsAnalyticsResponse_inner_H