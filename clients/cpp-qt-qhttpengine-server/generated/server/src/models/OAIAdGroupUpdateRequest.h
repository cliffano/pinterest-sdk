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
 * OAIAdGroupUpdateRequest.h
 *
 * 
 */

#ifndef OAIAdGroupUpdateRequest_H
#define OAIAdGroupUpdateRequest_H

#include <QJsonObject>

#include "OAIActionType.h"
#include "OAIAdGroupCommon.h"
#include "OAIAdGroupCommon_tracking_urls.h"
#include "OAIAdGroupUpdateRequest_allOf.h"
#include "OAIBudgetType.h"
#include "OAIEntityStatus.h"
#include "OAIPacingDeliveryType.h"
#include "OAIPlacementGroupType.h"
#include <QList>
#include <QMap>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIAdGroupUpdateRequest : public OAIObject {
public:
    OAIAdGroupUpdateRequest();
    OAIAdGroupUpdateRequest(QString json);
    ~OAIAdGroupUpdateRequest() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    OAIEntityStatus getStatus() const;
    void setStatus(const OAIEntityStatus &status);
    bool is_status_Set() const;
    bool is_status_Valid() const;

    qint32 getBudgetInMicroCurrency() const;
    void setBudgetInMicroCurrency(const qint32 &budget_in_micro_currency);
    bool is_budget_in_micro_currency_Set() const;
    bool is_budget_in_micro_currency_Valid() const;

    qint32 getBidInMicroCurrency() const;
    void setBidInMicroCurrency(const qint32 &bid_in_micro_currency);
    bool is_bid_in_micro_currency_Set() const;
    bool is_bid_in_micro_currency_Valid() const;

    QString getBidStrategyType() const;
    void setBidStrategyType(const QString &bid_strategy_type);
    bool is_bid_strategy_type_Set() const;
    bool is_bid_strategy_type_Valid() const;

    OAIBudgetType getBudgetType() const;
    void setBudgetType(const OAIBudgetType &budget_type);
    bool is_budget_type_Set() const;
    bool is_budget_type_Valid() const;

    qint32 getStartTime() const;
    void setStartTime(const qint32 &start_time);
    bool is_start_time_Set() const;
    bool is_start_time_Valid() const;

    qint32 getEndTime() const;
    void setEndTime(const qint32 &end_time);
    bool is_end_time_Set() const;
    bool is_end_time_Valid() const;

    QMap<QString, QList<QString>> getTargetingSpec() const;
    void setTargetingSpec(const QMap<QString, QList<QString>> &targeting_spec);
    bool is_targeting_spec_Set() const;
    bool is_targeting_spec_Valid() const;

    qint32 getLifetimeFrequencyCap() const;
    void setLifetimeFrequencyCap(const qint32 &lifetime_frequency_cap);
    bool is_lifetime_frequency_cap_Set() const;
    bool is_lifetime_frequency_cap_Valid() const;

    OAIAdGroupCommon_tracking_urls getTrackingUrls() const;
    void setTrackingUrls(const OAIAdGroupCommon_tracking_urls &tracking_urls);
    bool is_tracking_urls_Set() const;
    bool is_tracking_urls_Valid() const;

    bool isAutoTargetingEnabled() const;
    void setAutoTargetingEnabled(const bool &auto_targeting_enabled);
    bool is_auto_targeting_enabled_Set() const;
    bool is_auto_targeting_enabled_Valid() const;

    OAIPlacementGroupType getPlacementGroup() const;
    void setPlacementGroup(const OAIPlacementGroupType &placement_group);
    bool is_placement_group_Set() const;
    bool is_placement_group_Valid() const;

    OAIPacingDeliveryType getPacingDeliveryType() const;
    void setPacingDeliveryType(const OAIPacingDeliveryType &pacing_delivery_type);
    bool is_pacing_delivery_type_Set() const;
    bool is_pacing_delivery_type_Valid() const;

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

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString name;
    bool m_name_isSet;
    bool m_name_isValid;

    OAIEntityStatus status;
    bool m_status_isSet;
    bool m_status_isValid;

    qint32 budget_in_micro_currency;
    bool m_budget_in_micro_currency_isSet;
    bool m_budget_in_micro_currency_isValid;

    qint32 bid_in_micro_currency;
    bool m_bid_in_micro_currency_isSet;
    bool m_bid_in_micro_currency_isValid;

    QString bid_strategy_type;
    bool m_bid_strategy_type_isSet;
    bool m_bid_strategy_type_isValid;

    OAIBudgetType budget_type;
    bool m_budget_type_isSet;
    bool m_budget_type_isValid;

    qint32 start_time;
    bool m_start_time_isSet;
    bool m_start_time_isValid;

    qint32 end_time;
    bool m_end_time_isSet;
    bool m_end_time_isValid;

    QMap<QString, QList<QString>> targeting_spec;
    bool m_targeting_spec_isSet;
    bool m_targeting_spec_isValid;

    qint32 lifetime_frequency_cap;
    bool m_lifetime_frequency_cap_isSet;
    bool m_lifetime_frequency_cap_isValid;

    OAIAdGroupCommon_tracking_urls tracking_urls;
    bool m_tracking_urls_isSet;
    bool m_tracking_urls_isValid;

    bool auto_targeting_enabled;
    bool m_auto_targeting_enabled_isSet;
    bool m_auto_targeting_enabled_isValid;

    OAIPlacementGroupType placement_group;
    bool m_placement_group_isSet;
    bool m_placement_group_isValid;

    OAIPacingDeliveryType pacing_delivery_type;
    bool m_pacing_delivery_type_isSet;
    bool m_pacing_delivery_type_isValid;

    QString campaign_id;
    bool m_campaign_id_isSet;
    bool m_campaign_id_isValid;

    OAIActionType billable_event;
    bool m_billable_event_isSet;
    bool m_billable_event_isValid;

    QString id;
    bool m_id_isSet;
    bool m_id_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIAdGroupUpdateRequest)

#endif // OAIAdGroupUpdateRequest_H
