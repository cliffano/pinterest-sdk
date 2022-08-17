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

#include "OAICampaignCommon.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICampaignCommon::OAICampaignCommon(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICampaignCommon::OAICampaignCommon() {
    this->initializeModel();
}

OAICampaignCommon::~OAICampaignCommon() {}

void OAICampaignCommon::initializeModel() {

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
}

void OAICampaignCommon::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICampaignCommon::fromJsonObject(QJsonObject json) {

    m_ad_account_id_isValid = ::OpenAPI::fromJsonValue(ad_account_id, json[QString("ad_account_id")]);
    m_ad_account_id_isSet = !json[QString("ad_account_id")].isNull() && m_ad_account_id_isValid;

    m_name_isValid = ::OpenAPI::fromJsonValue(name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_status_isValid = ::OpenAPI::fromJsonValue(status, json[QString("status")]);
    m_status_isSet = !json[QString("status")].isNull() && m_status_isValid;

    m_lifetime_spend_cap_isValid = ::OpenAPI::fromJsonValue(lifetime_spend_cap, json[QString("lifetime_spend_cap")]);
    m_lifetime_spend_cap_isSet = !json[QString("lifetime_spend_cap")].isNull() && m_lifetime_spend_cap_isValid;

    m_daily_spend_cap_isValid = ::OpenAPI::fromJsonValue(daily_spend_cap, json[QString("daily_spend_cap")]);
    m_daily_spend_cap_isSet = !json[QString("daily_spend_cap")].isNull() && m_daily_spend_cap_isValid;

    m_order_line_id_isValid = ::OpenAPI::fromJsonValue(order_line_id, json[QString("order_line_id")]);
    m_order_line_id_isSet = !json[QString("order_line_id")].isNull() && m_order_line_id_isValid;

    m_tracking_urls_isValid = ::OpenAPI::fromJsonValue(tracking_urls, json[QString("tracking_urls")]);
    m_tracking_urls_isSet = !json[QString("tracking_urls")].isNull() && m_tracking_urls_isValid;

    m_start_time_isValid = ::OpenAPI::fromJsonValue(start_time, json[QString("start_time")]);
    m_start_time_isSet = !json[QString("start_time")].isNull() && m_start_time_isValid;

    m_end_time_isValid = ::OpenAPI::fromJsonValue(end_time, json[QString("end_time")]);
    m_end_time_isSet = !json[QString("end_time")].isNull() && m_end_time_isValid;
}

QString OAICampaignCommon::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICampaignCommon::asJsonObject() const {
    QJsonObject obj;
    if (m_ad_account_id_isSet) {
        obj.insert(QString("ad_account_id"), ::OpenAPI::toJsonValue(ad_account_id));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(name));
    }
    if (status.isSet()) {
        obj.insert(QString("status"), ::OpenAPI::toJsonValue(status));
    }
    if (m_lifetime_spend_cap_isSet) {
        obj.insert(QString("lifetime_spend_cap"), ::OpenAPI::toJsonValue(lifetime_spend_cap));
    }
    if (m_daily_spend_cap_isSet) {
        obj.insert(QString("daily_spend_cap"), ::OpenAPI::toJsonValue(daily_spend_cap));
    }
    if (m_order_line_id_isSet) {
        obj.insert(QString("order_line_id"), ::OpenAPI::toJsonValue(order_line_id));
    }
    if (tracking_urls.isSet()) {
        obj.insert(QString("tracking_urls"), ::OpenAPI::toJsonValue(tracking_urls));
    }
    if (m_start_time_isSet) {
        obj.insert(QString("start_time"), ::OpenAPI::toJsonValue(start_time));
    }
    if (m_end_time_isSet) {
        obj.insert(QString("end_time"), ::OpenAPI::toJsonValue(end_time));
    }
    return obj;
}

QString OAICampaignCommon::getAdAccountId() const {
    return ad_account_id;
}
void OAICampaignCommon::setAdAccountId(const QString &ad_account_id) {
    this->ad_account_id = ad_account_id;
    this->m_ad_account_id_isSet = true;
}

bool OAICampaignCommon::is_ad_account_id_Set() const{
    return m_ad_account_id_isSet;
}

bool OAICampaignCommon::is_ad_account_id_Valid() const{
    return m_ad_account_id_isValid;
}

QString OAICampaignCommon::getName() const {
    return name;
}
void OAICampaignCommon::setName(const QString &name) {
    this->name = name;
    this->m_name_isSet = true;
}

bool OAICampaignCommon::is_name_Set() const{
    return m_name_isSet;
}

bool OAICampaignCommon::is_name_Valid() const{
    return m_name_isValid;
}

OAIEntityStatus OAICampaignCommon::getStatus() const {
    return status;
}
void OAICampaignCommon::setStatus(const OAIEntityStatus &status) {
    this->status = status;
    this->m_status_isSet = true;
}

bool OAICampaignCommon::is_status_Set() const{
    return m_status_isSet;
}

bool OAICampaignCommon::is_status_Valid() const{
    return m_status_isValid;
}

qint32 OAICampaignCommon::getLifetimeSpendCap() const {
    return lifetime_spend_cap;
}
void OAICampaignCommon::setLifetimeSpendCap(const qint32 &lifetime_spend_cap) {
    this->lifetime_spend_cap = lifetime_spend_cap;
    this->m_lifetime_spend_cap_isSet = true;
}

bool OAICampaignCommon::is_lifetime_spend_cap_Set() const{
    return m_lifetime_spend_cap_isSet;
}

bool OAICampaignCommon::is_lifetime_spend_cap_Valid() const{
    return m_lifetime_spend_cap_isValid;
}

qint32 OAICampaignCommon::getDailySpendCap() const {
    return daily_spend_cap;
}
void OAICampaignCommon::setDailySpendCap(const qint32 &daily_spend_cap) {
    this->daily_spend_cap = daily_spend_cap;
    this->m_daily_spend_cap_isSet = true;
}

bool OAICampaignCommon::is_daily_spend_cap_Set() const{
    return m_daily_spend_cap_isSet;
}

bool OAICampaignCommon::is_daily_spend_cap_Valid() const{
    return m_daily_spend_cap_isValid;
}

QString OAICampaignCommon::getOrderLineId() const {
    return order_line_id;
}
void OAICampaignCommon::setOrderLineId(const QString &order_line_id) {
    this->order_line_id = order_line_id;
    this->m_order_line_id_isSet = true;
}

bool OAICampaignCommon::is_order_line_id_Set() const{
    return m_order_line_id_isSet;
}

bool OAICampaignCommon::is_order_line_id_Valid() const{
    return m_order_line_id_isValid;
}

OAIAdCommon_tracking_urls OAICampaignCommon::getTrackingUrls() const {
    return tracking_urls;
}
void OAICampaignCommon::setTrackingUrls(const OAIAdCommon_tracking_urls &tracking_urls) {
    this->tracking_urls = tracking_urls;
    this->m_tracking_urls_isSet = true;
}

bool OAICampaignCommon::is_tracking_urls_Set() const{
    return m_tracking_urls_isSet;
}

bool OAICampaignCommon::is_tracking_urls_Valid() const{
    return m_tracking_urls_isValid;
}

qint32 OAICampaignCommon::getStartTime() const {
    return start_time;
}
void OAICampaignCommon::setStartTime(const qint32 &start_time) {
    this->start_time = start_time;
    this->m_start_time_isSet = true;
}

bool OAICampaignCommon::is_start_time_Set() const{
    return m_start_time_isSet;
}

bool OAICampaignCommon::is_start_time_Valid() const{
    return m_start_time_isValid;
}

qint32 OAICampaignCommon::getEndTime() const {
    return end_time;
}
void OAICampaignCommon::setEndTime(const qint32 &end_time) {
    this->end_time = end_time;
    this->m_end_time_isSet = true;
}

bool OAICampaignCommon::is_end_time_Set() const{
    return m_end_time_isSet;
}

bool OAICampaignCommon::is_end_time_Valid() const{
    return m_end_time_isValid;
}

bool OAICampaignCommon::isSet() const {
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

        if (status.isSet()) {
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

        if (tracking_urls.isSet()) {
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
    } while (false);
    return isObjectUpdated;
}

bool OAICampaignCommon::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
