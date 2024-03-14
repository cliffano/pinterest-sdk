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
 * OAICampaignResponse.h
 *
 * 
 */

#ifndef OAICampaignResponse_H
#define OAICampaignResponse_H

#include <QJsonObject>

#include "OAIAdCommon_tracking_urls.h"
#include "OAIEntityStatus.h"
#include "OAIObjectiveType.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICampaignResponse : public OAIObject {
public:
    OAICampaignResponse();
    OAICampaignResponse(QString json);
    ~OAICampaignResponse() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    QString getAdAccountId() const;
    void setAdAccountId(const QString &ad_account_id);
    bool is_ad_account_id_Set() const;
    bool is_ad_account_id_Valid() const;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    OAIEntityStatus getStatus() const;
    void setStatus(const OAIEntityStatus &status);
    bool is_status_Set() const;
    bool is_status_Valid() const;

    qint32 getLifetimeSpendCap() const;
    void setLifetimeSpendCap(const qint32 &lifetime_spend_cap);
    bool is_lifetime_spend_cap_Set() const;
    bool is_lifetime_spend_cap_Valid() const;

    qint32 getDailySpendCap() const;
    void setDailySpendCap(const qint32 &daily_spend_cap);
    bool is_daily_spend_cap_Set() const;
    bool is_daily_spend_cap_Valid() const;

    QString getOrderLineId() const;
    void setOrderLineId(const QString &order_line_id);
    bool is_order_line_id_Set() const;
    bool is_order_line_id_Valid() const;

    OAIAdCommon_tracking_urls getTrackingUrls() const;
    void setTrackingUrls(const OAIAdCommon_tracking_urls &tracking_urls);
    bool is_tracking_urls_Set() const;
    bool is_tracking_urls_Valid() const;

    qint32 getStartTime() const;
    void setStartTime(const qint32 &start_time);
    bool is_start_time_Set() const;
    bool is_start_time_Valid() const;

    qint32 getEndTime() const;
    void setEndTime(const qint32 &end_time);
    bool is_end_time_Set() const;
    bool is_end_time_Valid() const;

    OAIObjectiveType getObjectiveType() const;
    void setObjectiveType(const OAIObjectiveType &objective_type);
    bool is_objective_type_Set() const;
    bool is_objective_type_Valid() const;

    qint32 getCreatedTime() const;
    void setCreatedTime(const qint32 &created_time);
    bool is_created_time_Set() const;
    bool is_created_time_Valid() const;

    qint32 getUpdatedTime() const;
    void setUpdatedTime(const qint32 &updated_time);
    bool is_updated_time_Set() const;
    bool is_updated_time_Valid() const;

    QString getType() const;
    void setType(const QString &type);
    bool is_type_Set() const;
    bool is_type_Valid() const;

    bool isIsFlexibleDailyBudgets() const;
    void setIsFlexibleDailyBudgets(const bool &is_flexible_daily_budgets);
    bool is_is_flexible_daily_budgets_Set() const;
    bool is_is_flexible_daily_budgets_Valid() const;

    bool isIsCampaignBudgetOptimization() const;
    void setIsCampaignBudgetOptimization(const bool &is_campaign_budget_optimization);
    bool is_is_campaign_budget_optimization_Set() const;
    bool is_is_campaign_budget_optimization_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString id;
    bool m_id_isSet;
    bool m_id_isValid;

    QString ad_account_id;
    bool m_ad_account_id_isSet;
    bool m_ad_account_id_isValid;

    QString name;
    bool m_name_isSet;
    bool m_name_isValid;

    OAIEntityStatus status;
    bool m_status_isSet;
    bool m_status_isValid;

    qint32 lifetime_spend_cap;
    bool m_lifetime_spend_cap_isSet;
    bool m_lifetime_spend_cap_isValid;

    qint32 daily_spend_cap;
    bool m_daily_spend_cap_isSet;
    bool m_daily_spend_cap_isValid;

    QString order_line_id;
    bool m_order_line_id_isSet;
    bool m_order_line_id_isValid;

    OAIAdCommon_tracking_urls tracking_urls;
    bool m_tracking_urls_isSet;
    bool m_tracking_urls_isValid;

    qint32 start_time;
    bool m_start_time_isSet;
    bool m_start_time_isValid;

    qint32 end_time;
    bool m_end_time_isSet;
    bool m_end_time_isValid;

    OAIObjectiveType objective_type;
    bool m_objective_type_isSet;
    bool m_objective_type_isValid;

    qint32 created_time;
    bool m_created_time_isSet;
    bool m_created_time_isValid;

    qint32 updated_time;
    bool m_updated_time_isSet;
    bool m_updated_time_isValid;

    QString type;
    bool m_type_isSet;
    bool m_type_isValid;

    bool is_flexible_daily_budgets;
    bool m_is_flexible_daily_budgets_isSet;
    bool m_is_flexible_daily_budgets_isValid;

    bool is_campaign_budget_optimization;
    bool m_is_campaign_budget_optimization_isSet;
    bool m_is_campaign_budget_optimization_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICampaignResponse)

#endif // OAICampaignResponse_H
