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

#include "OAICampaignCreateCommon_allOf.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICampaignCreateCommon_allOf::OAICampaignCreateCommon_allOf(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICampaignCreateCommon_allOf::OAICampaignCreateCommon_allOf() {
    this->initializeModel();
}

OAICampaignCreateCommon_allOf::~OAICampaignCreateCommon_allOf() {}

void OAICampaignCreateCommon_allOf::initializeModel() {

    m_status_isSet = false;
    m_status_isValid = false;

    m_is_campaign_budget_optimization_isSet = false;
    m_is_campaign_budget_optimization_isValid = false;

    m_is_flexible_daily_budgets_isSet = false;
    m_is_flexible_daily_budgets_isValid = false;

    m_default_ad_group_budget_in_micro_currency_isSet = false;
    m_default_ad_group_budget_in_micro_currency_isValid = false;

    m_is_automated_campaign_isSet = false;
    m_is_automated_campaign_isValid = false;
}

void OAICampaignCreateCommon_allOf::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICampaignCreateCommon_allOf::fromJsonObject(QJsonObject json) {

    m_status_isValid = ::OpenAPI::fromJsonValue(status, json[QString("status")]);
    m_status_isSet = !json[QString("status")].isNull() && m_status_isValid;

    m_is_campaign_budget_optimization_isValid = ::OpenAPI::fromJsonValue(is_campaign_budget_optimization, json[QString("is_campaign_budget_optimization")]);
    m_is_campaign_budget_optimization_isSet = !json[QString("is_campaign_budget_optimization")].isNull() && m_is_campaign_budget_optimization_isValid;

    m_is_flexible_daily_budgets_isValid = ::OpenAPI::fromJsonValue(is_flexible_daily_budgets, json[QString("is_flexible_daily_budgets")]);
    m_is_flexible_daily_budgets_isSet = !json[QString("is_flexible_daily_budgets")].isNull() && m_is_flexible_daily_budgets_isValid;

    m_default_ad_group_budget_in_micro_currency_isValid = ::OpenAPI::fromJsonValue(default_ad_group_budget_in_micro_currency, json[QString("default_ad_group_budget_in_micro_currency")]);
    m_default_ad_group_budget_in_micro_currency_isSet = !json[QString("default_ad_group_budget_in_micro_currency")].isNull() && m_default_ad_group_budget_in_micro_currency_isValid;

    m_is_automated_campaign_isValid = ::OpenAPI::fromJsonValue(is_automated_campaign, json[QString("is_automated_campaign")]);
    m_is_automated_campaign_isSet = !json[QString("is_automated_campaign")].isNull() && m_is_automated_campaign_isValid;
}

QString OAICampaignCreateCommon_allOf::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICampaignCreateCommon_allOf::asJsonObject() const {
    QJsonObject obj;
    if (status.isSet()) {
        obj.insert(QString("status"), ::OpenAPI::toJsonValue(status));
    }
    if (m_is_campaign_budget_optimization_isSet) {
        obj.insert(QString("is_campaign_budget_optimization"), ::OpenAPI::toJsonValue(is_campaign_budget_optimization));
    }
    if (m_is_flexible_daily_budgets_isSet) {
        obj.insert(QString("is_flexible_daily_budgets"), ::OpenAPI::toJsonValue(is_flexible_daily_budgets));
    }
    if (m_default_ad_group_budget_in_micro_currency_isSet) {
        obj.insert(QString("default_ad_group_budget_in_micro_currency"), ::OpenAPI::toJsonValue(default_ad_group_budget_in_micro_currency));
    }
    if (m_is_automated_campaign_isSet) {
        obj.insert(QString("is_automated_campaign"), ::OpenAPI::toJsonValue(is_automated_campaign));
    }
    return obj;
}

OAIEntityStatus OAICampaignCreateCommon_allOf::getStatus() const {
    return status;
}
void OAICampaignCreateCommon_allOf::setStatus(const OAIEntityStatus &status) {
    this->status = status;
    this->m_status_isSet = true;
}

bool OAICampaignCreateCommon_allOf::is_status_Set() const{
    return m_status_isSet;
}

bool OAICampaignCreateCommon_allOf::is_status_Valid() const{
    return m_status_isValid;
}

bool OAICampaignCreateCommon_allOf::isIsCampaignBudgetOptimization() const {
    return is_campaign_budget_optimization;
}
void OAICampaignCreateCommon_allOf::setIsCampaignBudgetOptimization(const bool &is_campaign_budget_optimization) {
    this->is_campaign_budget_optimization = is_campaign_budget_optimization;
    this->m_is_campaign_budget_optimization_isSet = true;
}

bool OAICampaignCreateCommon_allOf::is_is_campaign_budget_optimization_Set() const{
    return m_is_campaign_budget_optimization_isSet;
}

bool OAICampaignCreateCommon_allOf::is_is_campaign_budget_optimization_Valid() const{
    return m_is_campaign_budget_optimization_isValid;
}

bool OAICampaignCreateCommon_allOf::isIsFlexibleDailyBudgets() const {
    return is_flexible_daily_budgets;
}
void OAICampaignCreateCommon_allOf::setIsFlexibleDailyBudgets(const bool &is_flexible_daily_budgets) {
    this->is_flexible_daily_budgets = is_flexible_daily_budgets;
    this->m_is_flexible_daily_budgets_isSet = true;
}

bool OAICampaignCreateCommon_allOf::is_is_flexible_daily_budgets_Set() const{
    return m_is_flexible_daily_budgets_isSet;
}

bool OAICampaignCreateCommon_allOf::is_is_flexible_daily_budgets_Valid() const{
    return m_is_flexible_daily_budgets_isValid;
}

qint32 OAICampaignCreateCommon_allOf::getDefaultAdGroupBudgetInMicroCurrency() const {
    return default_ad_group_budget_in_micro_currency;
}
void OAICampaignCreateCommon_allOf::setDefaultAdGroupBudgetInMicroCurrency(const qint32 &default_ad_group_budget_in_micro_currency) {
    this->default_ad_group_budget_in_micro_currency = default_ad_group_budget_in_micro_currency;
    this->m_default_ad_group_budget_in_micro_currency_isSet = true;
}

bool OAICampaignCreateCommon_allOf::is_default_ad_group_budget_in_micro_currency_Set() const{
    return m_default_ad_group_budget_in_micro_currency_isSet;
}

bool OAICampaignCreateCommon_allOf::is_default_ad_group_budget_in_micro_currency_Valid() const{
    return m_default_ad_group_budget_in_micro_currency_isValid;
}

bool OAICampaignCreateCommon_allOf::isIsAutomatedCampaign() const {
    return is_automated_campaign;
}
void OAICampaignCreateCommon_allOf::setIsAutomatedCampaign(const bool &is_automated_campaign) {
    this->is_automated_campaign = is_automated_campaign;
    this->m_is_automated_campaign_isSet = true;
}

bool OAICampaignCreateCommon_allOf::is_is_automated_campaign_Set() const{
    return m_is_automated_campaign_isSet;
}

bool OAICampaignCreateCommon_allOf::is_is_automated_campaign_Valid() const{
    return m_is_automated_campaign_isValid;
}

bool OAICampaignCreateCommon_allOf::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (status.isSet()) {
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

bool OAICampaignCreateCommon_allOf::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
