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

#include "OAIAdGroupUpdateRequest.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIAdGroupUpdateRequest::OAIAdGroupUpdateRequest(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIAdGroupUpdateRequest::OAIAdGroupUpdateRequest() {
    this->initializeModel();
}

OAIAdGroupUpdateRequest::~OAIAdGroupUpdateRequest() {}

void OAIAdGroupUpdateRequest::initializeModel() {

    m_name_isSet = false;
    m_name_isValid = false;

    m_status_isSet = false;
    m_status_isValid = false;

    m_budget_in_micro_currency_isSet = false;
    m_budget_in_micro_currency_isValid = false;

    m_bid_in_micro_currency_isSet = false;
    m_bid_in_micro_currency_isValid = false;

    m_bid_strategy_type_isSet = false;
    m_bid_strategy_type_isValid = false;

    m_budget_type_isSet = false;
    m_budget_type_isValid = false;

    m_start_time_isSet = false;
    m_start_time_isValid = false;

    m_end_time_isSet = false;
    m_end_time_isValid = false;

    m_targeting_spec_isSet = false;
    m_targeting_spec_isValid = false;

    m_lifetime_frequency_cap_isSet = false;
    m_lifetime_frequency_cap_isValid = false;

    m_tracking_urls_isSet = false;
    m_tracking_urls_isValid = false;

    m_auto_targeting_enabled_isSet = false;
    m_auto_targeting_enabled_isValid = false;

    m_placement_group_isSet = false;
    m_placement_group_isValid = false;

    m_pacing_delivery_type_isSet = false;
    m_pacing_delivery_type_isValid = false;

    m_campaign_id_isSet = false;
    m_campaign_id_isValid = false;

    m_billable_event_isSet = false;
    m_billable_event_isValid = false;

    m_id_isSet = false;
    m_id_isValid = false;
}

void OAIAdGroupUpdateRequest::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIAdGroupUpdateRequest::fromJsonObject(QJsonObject json) {

    m_name_isValid = ::OpenAPI::fromJsonValue(name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_status_isValid = ::OpenAPI::fromJsonValue(status, json[QString("status")]);
    m_status_isSet = !json[QString("status")].isNull() && m_status_isValid;

    m_budget_in_micro_currency_isValid = ::OpenAPI::fromJsonValue(budget_in_micro_currency, json[QString("budget_in_micro_currency")]);
    m_budget_in_micro_currency_isSet = !json[QString("budget_in_micro_currency")].isNull() && m_budget_in_micro_currency_isValid;

    m_bid_in_micro_currency_isValid = ::OpenAPI::fromJsonValue(bid_in_micro_currency, json[QString("bid_in_micro_currency")]);
    m_bid_in_micro_currency_isSet = !json[QString("bid_in_micro_currency")].isNull() && m_bid_in_micro_currency_isValid;

    m_bid_strategy_type_isValid = ::OpenAPI::fromJsonValue(bid_strategy_type, json[QString("bid_strategy_type")]);
    m_bid_strategy_type_isSet = !json[QString("bid_strategy_type")].isNull() && m_bid_strategy_type_isValid;

    m_budget_type_isValid = ::OpenAPI::fromJsonValue(budget_type, json[QString("budget_type")]);
    m_budget_type_isSet = !json[QString("budget_type")].isNull() && m_budget_type_isValid;

    m_start_time_isValid = ::OpenAPI::fromJsonValue(start_time, json[QString("start_time")]);
    m_start_time_isSet = !json[QString("start_time")].isNull() && m_start_time_isValid;

    m_end_time_isValid = ::OpenAPI::fromJsonValue(end_time, json[QString("end_time")]);
    m_end_time_isSet = !json[QString("end_time")].isNull() && m_end_time_isValid;

    if(json["targeting_spec"].isObject()){
        auto varmap = json["targeting_spec"].toObject().toVariantMap();
        m_targeting_spec_isValid = true;
        if(varmap.count() > 0){
            for(auto val : varmap.keys()){
                QList<QString> item;
                auto jval = QJsonValue::fromVariant(varmap.value(val));
                m_targeting_spec_isValid &= ::OpenAPI::fromJsonValue(item, jval);
                m_targeting_spec_isSet &= !jval.isNull() && m_targeting_spec_isValid;
                targeting_spec.insert(targeting_spec.end(), val, item);
            }
        }
    }

    m_lifetime_frequency_cap_isValid = ::OpenAPI::fromJsonValue(lifetime_frequency_cap, json[QString("lifetime_frequency_cap")]);
    m_lifetime_frequency_cap_isSet = !json[QString("lifetime_frequency_cap")].isNull() && m_lifetime_frequency_cap_isValid;

    m_tracking_urls_isValid = ::OpenAPI::fromJsonValue(tracking_urls, json[QString("tracking_urls")]);
    m_tracking_urls_isSet = !json[QString("tracking_urls")].isNull() && m_tracking_urls_isValid;

    m_auto_targeting_enabled_isValid = ::OpenAPI::fromJsonValue(auto_targeting_enabled, json[QString("auto_targeting_enabled")]);
    m_auto_targeting_enabled_isSet = !json[QString("auto_targeting_enabled")].isNull() && m_auto_targeting_enabled_isValid;

    m_placement_group_isValid = ::OpenAPI::fromJsonValue(placement_group, json[QString("placement_group")]);
    m_placement_group_isSet = !json[QString("placement_group")].isNull() && m_placement_group_isValid;

    m_pacing_delivery_type_isValid = ::OpenAPI::fromJsonValue(pacing_delivery_type, json[QString("pacing_delivery_type")]);
    m_pacing_delivery_type_isSet = !json[QString("pacing_delivery_type")].isNull() && m_pacing_delivery_type_isValid;

    m_campaign_id_isValid = ::OpenAPI::fromJsonValue(campaign_id, json[QString("campaign_id")]);
    m_campaign_id_isSet = !json[QString("campaign_id")].isNull() && m_campaign_id_isValid;

    m_billable_event_isValid = ::OpenAPI::fromJsonValue(billable_event, json[QString("billable_event")]);
    m_billable_event_isSet = !json[QString("billable_event")].isNull() && m_billable_event_isValid;

    m_id_isValid = ::OpenAPI::fromJsonValue(id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;
}

QString OAIAdGroupUpdateRequest::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIAdGroupUpdateRequest::asJsonObject() const {
    QJsonObject obj;
    if (m_name_isSet) {
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(name));
    }
    if (status.isSet()) {
        obj.insert(QString("status"), ::OpenAPI::toJsonValue(status));
    }
    if (m_budget_in_micro_currency_isSet) {
        obj.insert(QString("budget_in_micro_currency"), ::OpenAPI::toJsonValue(budget_in_micro_currency));
    }
    if (m_bid_in_micro_currency_isSet) {
        obj.insert(QString("bid_in_micro_currency"), ::OpenAPI::toJsonValue(bid_in_micro_currency));
    }
    if (m_bid_strategy_type_isSet) {
        obj.insert(QString("bid_strategy_type"), ::OpenAPI::toJsonValue(bid_strategy_type));
    }
    if (budget_type.isSet()) {
        obj.insert(QString("budget_type"), ::OpenAPI::toJsonValue(budget_type));
    }
    if (m_start_time_isSet) {
        obj.insert(QString("start_time"), ::OpenAPI::toJsonValue(start_time));
    }
    if (m_end_time_isSet) {
        obj.insert(QString("end_time"), ::OpenAPI::toJsonValue(end_time));
    }
    if (targeting_spec.size() > 0) {
        
        obj.insert(QString("targeting_spec"), toJsonValue(targeting_spec));
    }
    if (m_lifetime_frequency_cap_isSet) {
        obj.insert(QString("lifetime_frequency_cap"), ::OpenAPI::toJsonValue(lifetime_frequency_cap));
    }
    if (tracking_urls.isSet()) {
        obj.insert(QString("tracking_urls"), ::OpenAPI::toJsonValue(tracking_urls));
    }
    if (m_auto_targeting_enabled_isSet) {
        obj.insert(QString("auto_targeting_enabled"), ::OpenAPI::toJsonValue(auto_targeting_enabled));
    }
    if (placement_group.isSet()) {
        obj.insert(QString("placement_group"), ::OpenAPI::toJsonValue(placement_group));
    }
    if (pacing_delivery_type.isSet()) {
        obj.insert(QString("pacing_delivery_type"), ::OpenAPI::toJsonValue(pacing_delivery_type));
    }
    if (m_campaign_id_isSet) {
        obj.insert(QString("campaign_id"), ::OpenAPI::toJsonValue(campaign_id));
    }
    if (billable_event.isSet()) {
        obj.insert(QString("billable_event"), ::OpenAPI::toJsonValue(billable_event));
    }
    if (m_id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(id));
    }
    return obj;
}

QString OAIAdGroupUpdateRequest::getName() const {
    return name;
}
void OAIAdGroupUpdateRequest::setName(const QString &name) {
    this->name = name;
    this->m_name_isSet = true;
}

bool OAIAdGroupUpdateRequest::is_name_Set() const{
    return m_name_isSet;
}

bool OAIAdGroupUpdateRequest::is_name_Valid() const{
    return m_name_isValid;
}

OAIEntityStatus OAIAdGroupUpdateRequest::getStatus() const {
    return status;
}
void OAIAdGroupUpdateRequest::setStatus(const OAIEntityStatus &status) {
    this->status = status;
    this->m_status_isSet = true;
}

bool OAIAdGroupUpdateRequest::is_status_Set() const{
    return m_status_isSet;
}

bool OAIAdGroupUpdateRequest::is_status_Valid() const{
    return m_status_isValid;
}

qint32 OAIAdGroupUpdateRequest::getBudgetInMicroCurrency() const {
    return budget_in_micro_currency;
}
void OAIAdGroupUpdateRequest::setBudgetInMicroCurrency(const qint32 &budget_in_micro_currency) {
    this->budget_in_micro_currency = budget_in_micro_currency;
    this->m_budget_in_micro_currency_isSet = true;
}

bool OAIAdGroupUpdateRequest::is_budget_in_micro_currency_Set() const{
    return m_budget_in_micro_currency_isSet;
}

bool OAIAdGroupUpdateRequest::is_budget_in_micro_currency_Valid() const{
    return m_budget_in_micro_currency_isValid;
}

qint32 OAIAdGroupUpdateRequest::getBidInMicroCurrency() const {
    return bid_in_micro_currency;
}
void OAIAdGroupUpdateRequest::setBidInMicroCurrency(const qint32 &bid_in_micro_currency) {
    this->bid_in_micro_currency = bid_in_micro_currency;
    this->m_bid_in_micro_currency_isSet = true;
}

bool OAIAdGroupUpdateRequest::is_bid_in_micro_currency_Set() const{
    return m_bid_in_micro_currency_isSet;
}

bool OAIAdGroupUpdateRequest::is_bid_in_micro_currency_Valid() const{
    return m_bid_in_micro_currency_isValid;
}

QString OAIAdGroupUpdateRequest::getBidStrategyType() const {
    return bid_strategy_type;
}
void OAIAdGroupUpdateRequest::setBidStrategyType(const QString &bid_strategy_type) {
    this->bid_strategy_type = bid_strategy_type;
    this->m_bid_strategy_type_isSet = true;
}

bool OAIAdGroupUpdateRequest::is_bid_strategy_type_Set() const{
    return m_bid_strategy_type_isSet;
}

bool OAIAdGroupUpdateRequest::is_bid_strategy_type_Valid() const{
    return m_bid_strategy_type_isValid;
}

OAIBudgetType OAIAdGroupUpdateRequest::getBudgetType() const {
    return budget_type;
}
void OAIAdGroupUpdateRequest::setBudgetType(const OAIBudgetType &budget_type) {
    this->budget_type = budget_type;
    this->m_budget_type_isSet = true;
}

bool OAIAdGroupUpdateRequest::is_budget_type_Set() const{
    return m_budget_type_isSet;
}

bool OAIAdGroupUpdateRequest::is_budget_type_Valid() const{
    return m_budget_type_isValid;
}

qint32 OAIAdGroupUpdateRequest::getStartTime() const {
    return start_time;
}
void OAIAdGroupUpdateRequest::setStartTime(const qint32 &start_time) {
    this->start_time = start_time;
    this->m_start_time_isSet = true;
}

bool OAIAdGroupUpdateRequest::is_start_time_Set() const{
    return m_start_time_isSet;
}

bool OAIAdGroupUpdateRequest::is_start_time_Valid() const{
    return m_start_time_isValid;
}

qint32 OAIAdGroupUpdateRequest::getEndTime() const {
    return end_time;
}
void OAIAdGroupUpdateRequest::setEndTime(const qint32 &end_time) {
    this->end_time = end_time;
    this->m_end_time_isSet = true;
}

bool OAIAdGroupUpdateRequest::is_end_time_Set() const{
    return m_end_time_isSet;
}

bool OAIAdGroupUpdateRequest::is_end_time_Valid() const{
    return m_end_time_isValid;
}

QMap<QString, QList<QString>> OAIAdGroupUpdateRequest::getTargetingSpec() const {
    return targeting_spec;
}
void OAIAdGroupUpdateRequest::setTargetingSpec(const QMap<QString, QList<QString>> &targeting_spec) {
    this->targeting_spec = targeting_spec;
    this->m_targeting_spec_isSet = true;
}

bool OAIAdGroupUpdateRequest::is_targeting_spec_Set() const{
    return m_targeting_spec_isSet;
}

bool OAIAdGroupUpdateRequest::is_targeting_spec_Valid() const{
    return m_targeting_spec_isValid;
}

qint32 OAIAdGroupUpdateRequest::getLifetimeFrequencyCap() const {
    return lifetime_frequency_cap;
}
void OAIAdGroupUpdateRequest::setLifetimeFrequencyCap(const qint32 &lifetime_frequency_cap) {
    this->lifetime_frequency_cap = lifetime_frequency_cap;
    this->m_lifetime_frequency_cap_isSet = true;
}

bool OAIAdGroupUpdateRequest::is_lifetime_frequency_cap_Set() const{
    return m_lifetime_frequency_cap_isSet;
}

bool OAIAdGroupUpdateRequest::is_lifetime_frequency_cap_Valid() const{
    return m_lifetime_frequency_cap_isValid;
}

OAIAdGroupCommon_tracking_urls OAIAdGroupUpdateRequest::getTrackingUrls() const {
    return tracking_urls;
}
void OAIAdGroupUpdateRequest::setTrackingUrls(const OAIAdGroupCommon_tracking_urls &tracking_urls) {
    this->tracking_urls = tracking_urls;
    this->m_tracking_urls_isSet = true;
}

bool OAIAdGroupUpdateRequest::is_tracking_urls_Set() const{
    return m_tracking_urls_isSet;
}

bool OAIAdGroupUpdateRequest::is_tracking_urls_Valid() const{
    return m_tracking_urls_isValid;
}

bool OAIAdGroupUpdateRequest::isAutoTargetingEnabled() const {
    return auto_targeting_enabled;
}
void OAIAdGroupUpdateRequest::setAutoTargetingEnabled(const bool &auto_targeting_enabled) {
    this->auto_targeting_enabled = auto_targeting_enabled;
    this->m_auto_targeting_enabled_isSet = true;
}

bool OAIAdGroupUpdateRequest::is_auto_targeting_enabled_Set() const{
    return m_auto_targeting_enabled_isSet;
}

bool OAIAdGroupUpdateRequest::is_auto_targeting_enabled_Valid() const{
    return m_auto_targeting_enabled_isValid;
}

OAIPlacementGroupType OAIAdGroupUpdateRequest::getPlacementGroup() const {
    return placement_group;
}
void OAIAdGroupUpdateRequest::setPlacementGroup(const OAIPlacementGroupType &placement_group) {
    this->placement_group = placement_group;
    this->m_placement_group_isSet = true;
}

bool OAIAdGroupUpdateRequest::is_placement_group_Set() const{
    return m_placement_group_isSet;
}

bool OAIAdGroupUpdateRequest::is_placement_group_Valid() const{
    return m_placement_group_isValid;
}

OAIPacingDeliveryType OAIAdGroupUpdateRequest::getPacingDeliveryType() const {
    return pacing_delivery_type;
}
void OAIAdGroupUpdateRequest::setPacingDeliveryType(const OAIPacingDeliveryType &pacing_delivery_type) {
    this->pacing_delivery_type = pacing_delivery_type;
    this->m_pacing_delivery_type_isSet = true;
}

bool OAIAdGroupUpdateRequest::is_pacing_delivery_type_Set() const{
    return m_pacing_delivery_type_isSet;
}

bool OAIAdGroupUpdateRequest::is_pacing_delivery_type_Valid() const{
    return m_pacing_delivery_type_isValid;
}

QString OAIAdGroupUpdateRequest::getCampaignId() const {
    return campaign_id;
}
void OAIAdGroupUpdateRequest::setCampaignId(const QString &campaign_id) {
    this->campaign_id = campaign_id;
    this->m_campaign_id_isSet = true;
}

bool OAIAdGroupUpdateRequest::is_campaign_id_Set() const{
    return m_campaign_id_isSet;
}

bool OAIAdGroupUpdateRequest::is_campaign_id_Valid() const{
    return m_campaign_id_isValid;
}

OAIActionType OAIAdGroupUpdateRequest::getBillableEvent() const {
    return billable_event;
}
void OAIAdGroupUpdateRequest::setBillableEvent(const OAIActionType &billable_event) {
    this->billable_event = billable_event;
    this->m_billable_event_isSet = true;
}

bool OAIAdGroupUpdateRequest::is_billable_event_Set() const{
    return m_billable_event_isSet;
}

bool OAIAdGroupUpdateRequest::is_billable_event_Valid() const{
    return m_billable_event_isValid;
}

QString OAIAdGroupUpdateRequest::getId() const {
    return id;
}
void OAIAdGroupUpdateRequest::setId(const QString &id) {
    this->id = id;
    this->m_id_isSet = true;
}

bool OAIAdGroupUpdateRequest::is_id_Set() const{
    return m_id_isSet;
}

bool OAIAdGroupUpdateRequest::is_id_Valid() const{
    return m_id_isValid;
}

bool OAIAdGroupUpdateRequest::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (status.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_budget_in_micro_currency_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_bid_in_micro_currency_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_bid_strategy_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (budget_type.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_start_time_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_end_time_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (targeting_spec.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_lifetime_frequency_cap_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (tracking_urls.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_auto_targeting_enabled_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (placement_group.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (pacing_delivery_type.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_campaign_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (billable_event.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIAdGroupUpdateRequest::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && true;
}

} // namespace OpenAPI