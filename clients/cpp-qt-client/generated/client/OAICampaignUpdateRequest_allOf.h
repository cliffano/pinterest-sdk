/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAICampaignUpdateRequest_allOf.h
 *
 * 
 */

#ifndef OAICampaignUpdateRequest_allOf_H
#define OAICampaignUpdateRequest_allOf_H

#include <QJsonObject>

#include "OAIEntityStatus.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICampaignUpdateRequest_allOf : public OAIObject {
public:
    OAICampaignUpdateRequest_allOf();
    OAICampaignUpdateRequest_allOf(QString json);
    ~OAICampaignUpdateRequest_allOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    bool isIsCampaignBudgetOptimization() const;
    void setIsCampaignBudgetOptimization(const bool &is_campaign_budget_optimization);
    bool is_is_campaign_budget_optimization_Set() const;
    bool is_is_campaign_budget_optimization_Valid() const;

    bool isIsFlexibleDailyBudgets() const;
    void setIsFlexibleDailyBudgets(const bool &is_flexible_daily_budgets);
    bool is_is_flexible_daily_budgets_Set() const;
    bool is_is_flexible_daily_budgets_Valid() const;

    bool isIsAutomatedCampaign() const;
    void setIsAutomatedCampaign(const bool &is_automated_campaign);
    bool is_is_automated_campaign_Set() const;
    bool is_is_automated_campaign_Valid() const;

    OAIEntityStatus getStatus() const;
    void setStatus(const OAIEntityStatus &status);
    bool is_status_Set() const;
    bool is_status_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    bool is_campaign_budget_optimization;
    bool m_is_campaign_budget_optimization_isSet;
    bool m_is_campaign_budget_optimization_isValid;

    bool is_flexible_daily_budgets;
    bool m_is_flexible_daily_budgets_isSet;
    bool m_is_flexible_daily_budgets_isValid;

    bool is_automated_campaign;
    bool m_is_automated_campaign_isSet;
    bool m_is_automated_campaign_isValid;

    OAIEntityStatus status;
    bool m_status_isSet;
    bool m_status_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICampaignUpdateRequest_allOf)

#endif // OAICampaignUpdateRequest_allOf_H
