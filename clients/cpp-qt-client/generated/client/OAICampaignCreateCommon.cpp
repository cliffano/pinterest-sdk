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

#include "OAICampaignCreateCommon.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICampaignCreateCommon::OAICampaignCreateCommon(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICampaignCreateCommon::OAICampaignCreateCommon() {
    this->initializeModel();
}

OAICampaignCreateCommon::~OAICampaignCreateCommon() {}

void OAICampaignCreateCommon::initializeModel() {

    m_ad_account_id_isSet = false;
    m_ad_account_id_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_status_isSet = false;
    m_status_isValid = false;

    m_lifetime_spend_cap_isSet = false;
    m_lifetime_spend_cap_isValid = false;

    m_daily_spend_cap_isSet = false;
    m_daily_spend_cap_isValid = false;

    m_order_line_id_isSet = false;
    m_order_line_id_isValid = false;

    m_tracking_urls_isSet = false;
    m_tracking_urls_isValid = false;

    m_start_time_isSet = false;
    m_start_time_isValid = false;

    m_end_time_isSet = false;
    m_end_time_isValid = false;

    m_is_campaign_budget_optimization_isSet = false;
    m_is_campaign_budget_optimization_isValid = false;

    m_is_flexible_daily_budgets_isSet = false;
    m_is_flexible_daily_budgets_isValid = false;

    m_default_ad_group_budget_in_micro_currency_isSet = false;
    m_default_ad_group_budget_in_micro_currency_isValid = false;

    m_is_automated_campaign_isSet = false;
    m_is_automated_campaign_isValid = false;
}

void OAICampaignCreateCommon::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICampaignCreateCommon::fromJsonObject(QJsonObject json) {

    m_ad_account_id_isValid = ::OpenAPI::fromJsonValue(m_ad_account_id, json[QString("ad_account_id")]);
    m_ad_account_id_isSet = !json[QString("ad_account_id")].isNull() && m_ad_account_id_isValid;

    m_name_isValid = ::OpenAPI::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_status_isValid = ::OpenAPI::fromJsonValue(m_status, json[QString("status")]);
    m_status_isSet = !json[QString("status")].isNull() && m_status_isValid;

    m_lifetime_spend_cap_isValid = ::OpenAPI::fromJsonValue(m_lifetime_spend_cap, json[QString("lifetime_spend_cap")]);
    m_lifetime_spend_cap_isSet = !json[QString("lifetime_spend_cap")].isNull() && m_lifetime_spend_cap_isValid;

    m_daily_spend_cap_isValid = ::OpenAPI::fromJsonValue(m_daily_spend_cap, json[QString("daily_spend_cap")]);
    m_daily_spend_cap_isSet = !json[QString("daily_spend_cap")].isNull() && m_daily_spend_cap_isValid;

    m_order_line_id_isValid = ::OpenAPI::fromJsonValue(m_order_line_id, json[QString("order_line_id")]);
    m_order_line_id_isSet = !json[QString("order_line_id")].isNull() && m_order_line_id_isValid;

    m_tracking_urls_isValid = ::OpenAPI::fromJsonValue(m_tracking_urls, json[QString("tracking_urls")]);
    m_tracking_urls_isSet = !json[QString("tracking_urls")].isNull() && m_tracking_urls_isValid;

    m_start_time_isValid = ::OpenAPI::fromJsonValue(m_start_time, json[QString("start_time")]);
    m_start_time_isSet = !json[QString("start_time")].isNull() && m_start_time_isValid;

    m_end_time_isValid = ::OpenAPI::fromJsonValue(m_end_time, json[QString("end_time")]);
    m_end_time_isSet = !json[QString("end_time")].isNull() && m_end_time_isValid;

    m_is_campaign_budget_optimization_isValid = ::OpenAPI::fromJsonValue(m_is_campaign_budget_optimization, json[QString("is_campaign_budget_optimization")]);
    m_is_campaign_budget_optimization_isSet = !json[QString("is_campaign_budget_optimization")].isNull() && m_is_campaign_budget_optimization_isValid;

    m_is_flexible_daily_budgets_isValid = ::OpenAPI::fromJsonValue(m_is_flexible_daily_budgets, json[QString("is_flexible_daily_budgets")]);
    m_is_flexible_daily_budgets_isSet = !json[QString("is_flexible_daily_budgets")].isNull() && m_is_flexible_daily_budgets_isValid;

    m_default_ad_group_budget_in_micro_currency_isValid = ::OpenAPI::fromJsonValue(m_default_ad_group_budget_in_micro_currency, json[QString("default_ad_group_budget_in_micro_currency")]);
    m_default_ad_group_budget_in_micro_currency_isSet = !json[QString("default_ad_group_budget_in_micro_currency")].isNull() && m_default_ad_group_budget_in_micro_currency_isValid;

    m_is_automated_campaign_isValid = ::OpenAPI::fromJsonValue(m_is_automated_campaign, json[QString("is_automated_campaign")]);
    m_is_automated_campaign_isSet = !json[QString("is_automated_campaign")].isNull() && m_is_automated_campaign_isValid;
}

QString OAICampaignCreateCommon::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICampaignCreateCommon::asJsonObject() const {
    QJsonObject obj;
    if (m_ad_account_id_isSet) {
        obj.insert(QString("ad_account_id"), ::OpenAPI::toJsonValue(m_ad_account_id));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(m_name));
    }
    if (m_status.isSet()) {
        obj.insert(QString("status"), ::OpenAPI::toJsonValue(m_status));
    }
    if (m_lifetime_spend_cap_isSet) {
        obj.insert(QString("lifetime_spend_cap"), ::OpenAPI::toJsonValue(m_lifetime_spend_cap));
    }
    if (m_daily_spend_cap_isSet) {
        obj.insert(QString("daily_spend_cap"), ::OpenAPI::toJsonValue(m_daily_spend_cap));
    }
    if (m_order_line_id_isSet) {
        obj.insert(QString("order_line_id"), ::OpenAPI::toJsonValue(m_order_line_id));
    }
    if (m_tracking_urls.isSet()) {
        obj.insert(QString("tracking_urls"), ::OpenAPI::toJsonValue(m_tracking_urls));
    }
    if (m_start_time_isSet) {
        obj.insert(QString("start_time"), ::OpenAPI::toJsonValue(m_start_time));
    }
    if (m_end_time_isSet) {
        obj.insert(QString("end_time"), ::OpenAPI::toJsonValue(m_end_time));
    }
    if (m_is_campaign_budget_optimization_isSet) {
        obj.insert(QString("is_campaign_budget_optimization"), ::OpenAPI::toJsonValue(m_is_campaign_budget_optimization));
    }
    if (m_is_flexible_daily_budgets_isSet) {
        obj.insert(QString("is_flexible_daily_budgets"), ::OpenAPI::toJsonValue(m_is_flexible_daily_budgets));
    }
    if (m_default_ad_group_budget_in_micro_currency_isSet) {
        obj.insert(QString("default_ad_group_budget_in_micro_currency"), ::OpenAPI::toJsonValue(m_default_ad_group_budget_in_micro_currency));
    }
    if (m_is_automated_campaign_isSet) {
        obj.insert(QString("is_automated_campaign"), ::OpenAPI::toJsonValue(m_is_automated_campaign));
    }
    return obj;
}

QString OAICampaignCreateCommon::getAdAccountId() const {
    return m_ad_account_id;
}
void OAICampaignCreateCommon::setAdAccountId(const QString &ad_account_id) {
    m_ad_account_id = ad_account_id;
    m_ad_account_id_isSet = true;
}

bool OAICampaignCreateCommon::is_ad_account_id_Set() const{
    return m_ad_account_id_isSet;
}

bool OAICampaignCreateCommon::is_ad_account_id_Valid() const{
    return m_ad_account_id_isValid;
}

QString OAICampaignCreateCommon::getName() const {
    return m_name;
}
void OAICampaignCreateCommon::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAICampaignCreateCommon::is_name_Set() const{
    return m_name_isSet;
}

bool OAICampaignCreateCommon::is_name_Valid() const{
    return m_name_isValid;
}

OAIEntityStatus OAICampaignCreateCommon::getStatus() const {
    return m_status;
}
void OAICampaignCreateCommon::setStatus(const OAIEntityStatus &status) {
    m_status = status;
    m_status_isSet = true;
}

bool OAICampaignCreateCommon::is_status_Set() const{
    return m_status_isSet;
}

bool OAICampaignCreateCommon::is_status_Valid() const{
    return m_status_isValid;
}

qint32 OAICampaignCreateCommon::getLifetimeSpendCap() const {
    return m_lifetime_spend_cap;
}
void OAICampaignCreateCommon::setLifetimeSpendCap(const qint32 &lifetime_spend_cap) {
    m_lifetime_spend_cap = lifetime_spend_cap;
    m_lifetime_spend_cap_isSet = true;
}

bool OAICampaignCreateCommon::is_lifetime_spend_cap_Set() const{
    return m_lifetime_spend_cap_isSet;
}

bool OAICampaignCreateCommon::is_lifetime_spend_cap_Valid() const{
    return m_lifetime_spend_cap_isValid;
}

qint32 OAICampaignCreateCommon::getDailySpendCap() const {
    return m_daily_spend_cap;
}
void OAICampaignCreateCommon::setDailySpendCap(const qint32 &daily_spend_cap) {
    m_daily_spend_cap = daily_spend_cap;
    m_daily_spend_cap_isSet = true;
}

bool OAICampaignCreateCommon::is_daily_spend_cap_Set() const{
    return m_daily_spend_cap_isSet;
}

bool OAICampaignCreateCommon::is_daily_spend_cap_Valid() const{
    return m_daily_spend_cap_isValid;
}

QString OAICampaignCreateCommon::getOrderLineId() const {
    return m_order_line_id;
}
void OAICampaignCreateCommon::setOrderLineId(const QString &order_line_id) {
    m_order_line_id = order_line_id;
    m_order_line_id_isSet = true;
}

bool OAICampaignCreateCommon::is_order_line_id_Set() const{
    return m_order_line_id_isSet;
}

bool OAICampaignCreateCommon::is_order_line_id_Valid() const{
    return m_order_line_id_isValid;
}

OAIAdCommon_tracking_urls OAICampaignCreateCommon::getTrackingUrls() const {
    return m_tracking_urls;
}
void OAICampaignCreateCommon::setTrackingUrls(const OAIAdCommon_tracking_urls &tracking_urls) {
    m_tracking_urls = tracking_urls;
    m_tracking_urls_isSet = true;
}

bool OAICampaignCreateCommon::is_tracking_urls_Set() const{
    return m_tracking_urls_isSet;
}

bool OAICampaignCreateCommon::is_tracking_urls_Valid() const{
    return m_tracking_urls_isValid;
}

qint32 OAICampaignCreateCommon::getStartTime() const {
    return m_start_time;
}
void OAICampaignCreateCommon::setStartTime(const qint32 &start_time) {
    m_start_time = start_time;
    m_start_time_isSet = true;
}

bool OAICampaignCreateCommon::is_start_time_Set() const{
    return m_start_time_isSet;
}

bool OAICampaignCreateCommon::is_start_time_Valid() const{
    return m_start_time_isValid;
}

qint32 OAICampaignCreateCommon::getEndTime() const {
    return m_end_time;
}
void OAICampaignCreateCommon::setEndTime(const qint32 &end_time) {
    m_end_time = end_time;
    m_end_time_isSet = true;
}

bool OAICampaignCreateCommon::is_end_time_Set() const{
    return m_end_time_isSet;
}

bool OAICampaignCreateCommon::is_end_time_Valid() const{
    return m_end_time_isValid;
}

bool OAICampaignCreateCommon::isIsCampaignBudgetOptimization() const {
    return m_is_campaign_budget_optimization;
}
void OAICampaignCreateCommon::setIsCampaignBudgetOptimization(const bool &is_campaign_budget_optimization) {
    m_is_campaign_budget_optimization = is_campaign_budget_optimization;
    m_is_campaign_budget_optimization_isSet = true;
}

bool OAICampaignCreateCommon::is_is_campaign_budget_optimization_Set() const{
    return m_is_campaign_budget_optimization_isSet;
}

bool OAICampaignCreateCommon::is_is_campaign_budget_optimization_Valid() const{
    return m_is_campaign_budget_optimization_isValid;
}

bool OAICampaignCreateCommon::isIsFlexibleDailyBudgets() const {
    return m_is_flexible_daily_budgets;
}
void OAICampaignCreateCommon::setIsFlexibleDailyBudgets(const bool &is_flexible_daily_budgets) {
    m_is_flexible_daily_budgets = is_flexible_daily_budgets;
    m_is_flexible_daily_budgets_isSet = true;
}

bool OAICampaignCreateCommon::is_is_flexible_daily_budgets_Set() const{
    return m_is_flexible_daily_budgets_isSet;
}

bool OAICampaignCreateCommon::is_is_flexible_daily_budgets_Valid() const{
    return m_is_flexible_daily_budgets_isValid;
}

qint32 OAICampaignCreateCommon::getDefaultAdGroupBudgetInMicroCurrency() const {
    return m_default_ad_group_budget_in_micro_currency;
}
void OAICampaignCreateCommon::setDefaultAdGroupBudgetInMicroCurrency(const qint32 &default_ad_group_budget_in_micro_currency) {
    m_default_ad_group_budget_in_micro_currency = default_ad_group_budget_in_micro_currency;
    m_default_ad_group_budget_in_micro_currency_isSet = true;
}

bool OAICampaignCreateCommon::is_default_ad_group_budget_in_micro_currency_Set() const{
    return m_default_ad_group_budget_in_micro_currency_isSet;
}

bool OAICampaignCreateCommon::is_default_ad_group_budget_in_micro_currency_Valid() const{
    return m_default_ad_group_budget_in_micro_currency_isValid;
}

bool OAICampaignCreateCommon::isIsAutomatedCampaign() const {
    return m_is_automated_campaign;
}
void OAICampaignCreateCommon::setIsAutomatedCampaign(const bool &is_automated_campaign) {
    m_is_automated_campaign = is_automated_campaign;
    m_is_automated_campaign_isSet = true;
}

bool OAICampaignCreateCommon::is_is_automated_campaign_Set() const{
    return m_is_automated_campaign_isSet;
}

bool OAICampaignCreateCommon::is_is_automated_campaign_Valid() const{
    return m_is_automated_campaign_isValid;
}

bool OAICampaignCreateCommon::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_ad_account_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_status.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_lifetime_spend_cap_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_daily_spend_cap_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_order_line_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_tracking_urls.isSet()) {
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

        if (m_is_campaign_budget_optimization_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_is_flexible_daily_budgets_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_default_ad_group_budget_in_micro_currency_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_is_automated_campaign_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICampaignCreateCommon::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
