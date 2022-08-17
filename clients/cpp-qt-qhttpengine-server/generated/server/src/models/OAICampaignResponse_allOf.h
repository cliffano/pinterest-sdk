/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.4.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAICampaignResponse_allOf.h
 *
 * 
 */

#ifndef OAICampaignResponse_allOf_H
#define OAICampaignResponse_allOf_H

#include <QJsonObject>

#include "OAIObjectiveType.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICampaignResponse_allOf : public OAIObject {
public:
    OAICampaignResponse_allOf();
    OAICampaignResponse_allOf(QString json);
    ~OAICampaignResponse_allOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

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

Q_DECLARE_METATYPE(OpenAPI::OAICampaignResponse_allOf)

#endif // OAICampaignResponse_allOf_H
