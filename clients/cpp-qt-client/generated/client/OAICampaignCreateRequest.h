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
 * OAICampaignCreateRequest.h
 *
 * 
 */

#ifndef OAICampaignCreateRequest_H
#define OAICampaignCreateRequest_H

#include <QJsonObject>

#include "OAIAdCommon_tracking_urls.h"
#include "OAICampaignSummaryStatus.h"
#include "OAIEntityStatus.h"
#include "OAIObjectiveType.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIAdCommon_tracking_urls;

class OAICampaignCreateRequest : public OAIObject {
public:
    OAICampaignCreateRequest();
    OAICampaignCreateRequest(QString json);
    ~OAICampaignCreateRequest() override;

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

    OAICampaignSummaryStatus getSummaryStatus() const;
    void setSummaryStatus(const OAICampaignSummaryStatus &summary_status);
    bool is_summary_status_Set() const;
    bool is_summary_status_Valid() const;

    bool isIsFlexibleDailyBudgets() const;
    void setIsFlexibleDailyBudgets(const bool &is_flexible_daily_budgets);
    bool is_is_flexible_daily_budgets_Set() const;
    bool is_is_flexible_daily_budgets_Valid() const;

    qint32 getDefaultAdGroupBudgetInMicroCurrency() const;
    void setDefaultAdGroupBudgetInMicroCurrency(const qint32 &default_ad_group_budget_in_micro_currency);
    bool is_default_ad_group_budget_in_micro_currency_Set() const;
    bool is_default_ad_group_budget_in_micro_currency_Valid() const;

    bool isIsAutomatedCampaign() const;
    void setIsAutomatedCampaign(const bool &is_automated_campaign);
    bool is_is_automated_campaign_Set() const;
    bool is_is_automated_campaign_Valid() const;

    OAIObjectiveType getObjectiveType() const;
    void setObjectiveType(const OAIObjectiveType &objective_type);
    bool is_objective_type_Set() const;
    bool is_objective_type_Valid() const;

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

    OAIEntityStatus m_status;
    bool m_status_isSet;
    bool m_status_isValid;

    qint32 m_lifetime_spend_cap;
    bool m_lifetime_spend_cap_isSet;
    bool m_lifetime_spend_cap_isValid;

    qint32 m_daily_spend_cap;
    bool m_daily_spend_cap_isSet;
    bool m_daily_spend_cap_isValid;

    QString m_order_line_id;
    bool m_order_line_id_isSet;
    bool m_order_line_id_isValid;

    OAIAdCommon_tracking_urls m_tracking_urls;
    bool m_tracking_urls_isSet;
    bool m_tracking_urls_isValid;

    qint32 m_start_time;
    bool m_start_time_isSet;
    bool m_start_time_isValid;

    qint32 m_end_time;
    bool m_end_time_isSet;
    bool m_end_time_isValid;

    OAICampaignSummaryStatus m_summary_status;
    bool m_summary_status_isSet;
    bool m_summary_status_isValid;

    bool m_is_flexible_daily_budgets;
    bool m_is_flexible_daily_budgets_isSet;
    bool m_is_flexible_daily_budgets_isValid;

    qint32 m_default_ad_group_budget_in_micro_currency;
    bool m_default_ad_group_budget_in_micro_currency_isSet;
    bool m_default_ad_group_budget_in_micro_currency_isValid;

    bool m_is_automated_campaign;
    bool m_is_automated_campaign_isSet;
    bool m_is_automated_campaign_isValid;

    OAIObjectiveType m_objective_type;
    bool m_objective_type_isSet;
    bool m_objective_type_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICampaignCreateRequest)

#endif // OAICampaignCreateRequest_H
