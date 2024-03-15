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
 * OAIOrderLine.h
 *
 * 
 */

#ifndef OAIOrderLine_H
#define OAIOrderLine_H

#include <QJsonObject>

#include "OAIOrderLinePaidType.h"
#include "OAIOrderLineStatus.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIOrderLine : public OAIObject {
public:
    OAIOrderLine();
    OAIOrderLine(QString json);
    ~OAIOrderLine() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

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

    QString getPurchaseOrderId() const;
    void setPurchaseOrderId(const QString &purchase_order_id);
    bool is_purchase_order_id_Set() const;
    bool is_purchase_order_id_Valid() const;

    double getStartTime() const;
    void setStartTime(const double &start_time);
    bool is_start_time_Set() const;
    bool is_start_time_Valid() const;

    double getEndTime() const;
    void setEndTime(const double &end_time);
    bool is_end_time_Set() const;
    bool is_end_time_Valid() const;

    double getBudget() const;
    void setBudget(const double &budget);
    bool is_budget_Set() const;
    bool is_budget_Valid() const;

    double getPaidBudget() const;
    void setPaidBudget(const double &paid_budget);
    bool is_paid_budget_Set() const;
    bool is_paid_budget_Valid() const;

    OAIOrderLineStatus getStatus() const;
    void setStatus(const OAIOrderLineStatus &status);
    bool is_status_Set() const;
    bool is_status_Valid() const;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    OAIOrderLinePaidType getPaidType() const;
    void setPaidType(const OAIOrderLinePaidType &paid_type);
    bool is_paid_type_Set() const;
    bool is_paid_type_Valid() const;

    QList<QString> getCampaignIds() const;
    void setCampaignIds(const QList<QString> &campaign_ids);
    bool is_campaign_ids_Set() const;
    bool is_campaign_ids_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_id;
    bool m_id_isSet;
    bool m_id_isValid;

    QString m_type;
    bool m_type_isSet;
    bool m_type_isValid;

    QString m_ad_account_id;
    bool m_ad_account_id_isSet;
    bool m_ad_account_id_isValid;

    QString m_purchase_order_id;
    bool m_purchase_order_id_isSet;
    bool m_purchase_order_id_isValid;

    double m_start_time;
    bool m_start_time_isSet;
    bool m_start_time_isValid;

    double m_end_time;
    bool m_end_time_isSet;
    bool m_end_time_isValid;

    double m_budget;
    bool m_budget_isSet;
    bool m_budget_isValid;

    double m_paid_budget;
    bool m_paid_budget_isSet;
    bool m_paid_budget_isValid;

    OAIOrderLineStatus m_status;
    bool m_status_isSet;
    bool m_status_isValid;

    QString m_name;
    bool m_name_isSet;
    bool m_name_isValid;

    OAIOrderLinePaidType m_paid_type;
    bool m_paid_type_isSet;
    bool m_paid_type_isValid;

    QList<QString> m_campaign_ids;
    bool m_campaign_ids_isSet;
    bool m_campaign_ids_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIOrderLine)

#endif // OAIOrderLine_H
