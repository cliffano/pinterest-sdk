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

#include "OAIConversionTagCommon.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIConversionTagCommon::OAIConversionTagCommon(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIConversionTagCommon::OAIConversionTagCommon() {
    this->initializeModel();
}

OAIConversionTagCommon::~OAIConversionTagCommon() {}

void OAIConversionTagCommon::initializeModel() {

    m_ad_account_id_isSet = false;
    m_ad_account_id_isValid = false;

    m_code_snippet_isSet = false;
    m_code_snippet_isValid = false;

    m_enhanced_match_status_isSet = false;
    m_enhanced_match_status_isValid = false;

    m_id_isSet = false;
    m_id_isValid = false;

    m_last_fired_time_ms_isSet = false;
    m_last_fired_time_ms_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_status_isSet = false;
    m_status_isValid = false;

    m_version_isSet = false;
    m_version_isValid = false;

    m_configs_isSet = false;
    m_configs_isValid = false;
}

void OAIConversionTagCommon::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIConversionTagCommon::fromJsonObject(QJsonObject json) {

    m_ad_account_id_isValid = ::OpenAPI::fromJsonValue(ad_account_id, json[QString("ad_account_id")]);
    m_ad_account_id_isSet = !json[QString("ad_account_id")].isNull() && m_ad_account_id_isValid;

    m_code_snippet_isValid = ::OpenAPI::fromJsonValue(code_snippet, json[QString("code_snippet")]);
    m_code_snippet_isSet = !json[QString("code_snippet")].isNull() && m_code_snippet_isValid;

    m_enhanced_match_status_isValid = ::OpenAPI::fromJsonValue(enhanced_match_status, json[QString("enhanced_match_status")]);
    m_enhanced_match_status_isSet = !json[QString("enhanced_match_status")].isNull() && m_enhanced_match_status_isValid;

    m_id_isValid = ::OpenAPI::fromJsonValue(id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_last_fired_time_ms_isValid = ::OpenAPI::fromJsonValue(last_fired_time_ms, json[QString("last_fired_time_ms")]);
    m_last_fired_time_ms_isSet = !json[QString("last_fired_time_ms")].isNull() && m_last_fired_time_ms_isValid;

    m_name_isValid = ::OpenAPI::fromJsonValue(name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_status_isValid = ::OpenAPI::fromJsonValue(status, json[QString("status")]);
    m_status_isSet = !json[QString("status")].isNull() && m_status_isValid;

    m_version_isValid = ::OpenAPI::fromJsonValue(version, json[QString("version")]);
    m_version_isSet = !json[QString("version")].isNull() && m_version_isValid;

    m_configs_isValid = ::OpenAPI::fromJsonValue(configs, json[QString("configs")]);
    m_configs_isSet = !json[QString("configs")].isNull() && m_configs_isValid;
}

QString OAIConversionTagCommon::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIConversionTagCommon::asJsonObject() const {
    QJsonObject obj;
    if (m_ad_account_id_isSet) {
        obj.insert(QString("ad_account_id"), ::OpenAPI::toJsonValue(ad_account_id));
    }
    if (m_code_snippet_isSet) {
        obj.insert(QString("code_snippet"), ::OpenAPI::toJsonValue(code_snippet));
    }
    if (enhanced_match_status.isSet()) {
        obj.insert(QString("enhanced_match_status"), ::OpenAPI::toJsonValue(enhanced_match_status));
    }
    if (m_id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(id));
    }
    if (m_last_fired_time_ms_isSet) {
        obj.insert(QString("last_fired_time_ms"), ::OpenAPI::toJsonValue(last_fired_time_ms));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(name));
    }
    if (status.isSet()) {
        obj.insert(QString("status"), ::OpenAPI::toJsonValue(status));
    }
    if (m_version_isSet) {
        obj.insert(QString("version"), ::OpenAPI::toJsonValue(version));
    }
    if (configs.isSet()) {
        obj.insert(QString("configs"), ::OpenAPI::toJsonValue(configs));
    }
    return obj;
}

QString OAIConversionTagCommon::getAdAccountId() const {
    return ad_account_id;
}
void OAIConversionTagCommon::setAdAccountId(const QString &ad_account_id) {
    this->ad_account_id = ad_account_id;
    this->m_ad_account_id_isSet = true;
}

bool OAIConversionTagCommon::is_ad_account_id_Set() const{
    return m_ad_account_id_isSet;
}

bool OAIConversionTagCommon::is_ad_account_id_Valid() const{
    return m_ad_account_id_isValid;
}

QString OAIConversionTagCommon::getCodeSnippet() const {
    return code_snippet;
}
void OAIConversionTagCommon::setCodeSnippet(const QString &code_snippet) {
    this->code_snippet = code_snippet;
    this->m_code_snippet_isSet = true;
}

bool OAIConversionTagCommon::is_code_snippet_Set() const{
    return m_code_snippet_isSet;
}

bool OAIConversionTagCommon::is_code_snippet_Valid() const{
    return m_code_snippet_isValid;
}

OAIEnhancedMatchStatusType OAIConversionTagCommon::getEnhancedMatchStatus() const {
    return enhanced_match_status;
}
void OAIConversionTagCommon::setEnhancedMatchStatus(const OAIEnhancedMatchStatusType &enhanced_match_status) {
    this->enhanced_match_status = enhanced_match_status;
    this->m_enhanced_match_status_isSet = true;
}

bool OAIConversionTagCommon::is_enhanced_match_status_Set() const{
    return m_enhanced_match_status_isSet;
}

bool OAIConversionTagCommon::is_enhanced_match_status_Valid() const{
    return m_enhanced_match_status_isValid;
}

QString OAIConversionTagCommon::getId() const {
    return id;
}
void OAIConversionTagCommon::setId(const QString &id) {
    this->id = id;
    this->m_id_isSet = true;
}

bool OAIConversionTagCommon::is_id_Set() const{
    return m_id_isSet;
}

bool OAIConversionTagCommon::is_id_Valid() const{
    return m_id_isValid;
}

double OAIConversionTagCommon::getLastFiredTimeMs() const {
    return last_fired_time_ms;
}
void OAIConversionTagCommon::setLastFiredTimeMs(const double &last_fired_time_ms) {
    this->last_fired_time_ms = last_fired_time_ms;
    this->m_last_fired_time_ms_isSet = true;
}

bool OAIConversionTagCommon::is_last_fired_time_ms_Set() const{
    return m_last_fired_time_ms_isSet;
}

bool OAIConversionTagCommon::is_last_fired_time_ms_Valid() const{
    return m_last_fired_time_ms_isValid;
}

QString OAIConversionTagCommon::getName() const {
    return name;
}
void OAIConversionTagCommon::setName(const QString &name) {
    this->name = name;
    this->m_name_isSet = true;
}

bool OAIConversionTagCommon::is_name_Set() const{
    return m_name_isSet;
}

bool OAIConversionTagCommon::is_name_Valid() const{
    return m_name_isValid;
}

OAIEntityStatus OAIConversionTagCommon::getStatus() const {
    return status;
}
void OAIConversionTagCommon::setStatus(const OAIEntityStatus &status) {
    this->status = status;
    this->m_status_isSet = true;
}

bool OAIConversionTagCommon::is_status_Set() const{
    return m_status_isSet;
}

bool OAIConversionTagCommon::is_status_Valid() const{
    return m_status_isValid;
}

QString OAIConversionTagCommon::getVersion() const {
    return version;
}
void OAIConversionTagCommon::setVersion(const QString &version) {
    this->version = version;
    this->m_version_isSet = true;
}

bool OAIConversionTagCommon::is_version_Set() const{
    return m_version_isSet;
}

bool OAIConversionTagCommon::is_version_Valid() const{
    return m_version_isValid;
}

OAIConversionTagConfigs OAIConversionTagCommon::getConfigs() const {
    return configs;
}
void OAIConversionTagCommon::setConfigs(const OAIConversionTagConfigs &configs) {
    this->configs = configs;
    this->m_configs_isSet = true;
}

bool OAIConversionTagCommon::is_configs_Set() const{
    return m_configs_isSet;
}

bool OAIConversionTagCommon::is_configs_Valid() const{
    return m_configs_isValid;
}

bool OAIConversionTagCommon::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_ad_account_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_code_snippet_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (enhanced_match_status.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_last_fired_time_ms_isSet) {
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

        if (m_version_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (configs.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIConversionTagCommon::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
