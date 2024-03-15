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

#include "OAIConversionEvents_data_inner.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIConversionEvents_data_inner::OAIConversionEvents_data_inner(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIConversionEvents_data_inner::OAIConversionEvents_data_inner() {
    this->initializeModel();
}

OAIConversionEvents_data_inner::~OAIConversionEvents_data_inner() {}

void OAIConversionEvents_data_inner::initializeModel() {

    m_event_name_isSet = false;
    m_event_name_isValid = false;

    m_action_source_isSet = false;
    m_action_source_isValid = false;

    m_event_time_isSet = false;
    m_event_time_isValid = false;

    m_event_id_isSet = false;
    m_event_id_isValid = false;

    m_event_source_url_isSet = false;
    m_event_source_url_isValid = false;

    m_opt_out_isSet = false;
    m_opt_out_isValid = false;

    m_partner_name_isSet = false;
    m_partner_name_isValid = false;

    m_user_data_isSet = false;
    m_user_data_isValid = false;

    m_custom_data_isSet = false;
    m_custom_data_isValid = false;

    m_app_id_isSet = false;
    m_app_id_isValid = false;

    m_app_name_isSet = false;
    m_app_name_isValid = false;

    m_app_version_isSet = false;
    m_app_version_isValid = false;

    m_device_brand_isSet = false;
    m_device_brand_isValid = false;

    m_device_carrier_isSet = false;
    m_device_carrier_isValid = false;

    m_device_model_isSet = false;
    m_device_model_isValid = false;

    m_device_type_isSet = false;
    m_device_type_isValid = false;

    m_os_version_isSet = false;
    m_os_version_isValid = false;

    m_wifi_isSet = false;
    m_wifi_isValid = false;

    m_language_isSet = false;
    m_language_isValid = false;
}

void OAIConversionEvents_data_inner::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIConversionEvents_data_inner::fromJsonObject(QJsonObject json) {

    m_event_name_isValid = ::OpenAPI::fromJsonValue(event_name, json[QString("event_name")]);
    m_event_name_isSet = !json[QString("event_name")].isNull() && m_event_name_isValid;

    m_action_source_isValid = ::OpenAPI::fromJsonValue(action_source, json[QString("action_source")]);
    m_action_source_isSet = !json[QString("action_source")].isNull() && m_action_source_isValid;

    m_event_time_isValid = ::OpenAPI::fromJsonValue(event_time, json[QString("event_time")]);
    m_event_time_isSet = !json[QString("event_time")].isNull() && m_event_time_isValid;

    m_event_id_isValid = ::OpenAPI::fromJsonValue(event_id, json[QString("event_id")]);
    m_event_id_isSet = !json[QString("event_id")].isNull() && m_event_id_isValid;

    m_event_source_url_isValid = ::OpenAPI::fromJsonValue(event_source_url, json[QString("event_source_url")]);
    m_event_source_url_isSet = !json[QString("event_source_url")].isNull() && m_event_source_url_isValid;

    m_opt_out_isValid = ::OpenAPI::fromJsonValue(opt_out, json[QString("opt_out")]);
    m_opt_out_isSet = !json[QString("opt_out")].isNull() && m_opt_out_isValid;

    m_partner_name_isValid = ::OpenAPI::fromJsonValue(partner_name, json[QString("partner_name")]);
    m_partner_name_isSet = !json[QString("partner_name")].isNull() && m_partner_name_isValid;

    m_user_data_isValid = ::OpenAPI::fromJsonValue(user_data, json[QString("user_data")]);
    m_user_data_isSet = !json[QString("user_data")].isNull() && m_user_data_isValid;

    m_custom_data_isValid = ::OpenAPI::fromJsonValue(custom_data, json[QString("custom_data")]);
    m_custom_data_isSet = !json[QString("custom_data")].isNull() && m_custom_data_isValid;

    m_app_id_isValid = ::OpenAPI::fromJsonValue(app_id, json[QString("app_id")]);
    m_app_id_isSet = !json[QString("app_id")].isNull() && m_app_id_isValid;

    m_app_name_isValid = ::OpenAPI::fromJsonValue(app_name, json[QString("app_name")]);
    m_app_name_isSet = !json[QString("app_name")].isNull() && m_app_name_isValid;

    m_app_version_isValid = ::OpenAPI::fromJsonValue(app_version, json[QString("app_version")]);
    m_app_version_isSet = !json[QString("app_version")].isNull() && m_app_version_isValid;

    m_device_brand_isValid = ::OpenAPI::fromJsonValue(device_brand, json[QString("device_brand")]);
    m_device_brand_isSet = !json[QString("device_brand")].isNull() && m_device_brand_isValid;

    m_device_carrier_isValid = ::OpenAPI::fromJsonValue(device_carrier, json[QString("device_carrier")]);
    m_device_carrier_isSet = !json[QString("device_carrier")].isNull() && m_device_carrier_isValid;

    m_device_model_isValid = ::OpenAPI::fromJsonValue(device_model, json[QString("device_model")]);
    m_device_model_isSet = !json[QString("device_model")].isNull() && m_device_model_isValid;

    m_device_type_isValid = ::OpenAPI::fromJsonValue(device_type, json[QString("device_type")]);
    m_device_type_isSet = !json[QString("device_type")].isNull() && m_device_type_isValid;

    m_os_version_isValid = ::OpenAPI::fromJsonValue(os_version, json[QString("os_version")]);
    m_os_version_isSet = !json[QString("os_version")].isNull() && m_os_version_isValid;

    m_wifi_isValid = ::OpenAPI::fromJsonValue(wifi, json[QString("wifi")]);
    m_wifi_isSet = !json[QString("wifi")].isNull() && m_wifi_isValid;

    m_language_isValid = ::OpenAPI::fromJsonValue(language, json[QString("language")]);
    m_language_isSet = !json[QString("language")].isNull() && m_language_isValid;
}

QString OAIConversionEvents_data_inner::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIConversionEvents_data_inner::asJsonObject() const {
    QJsonObject obj;
    if (m_event_name_isSet) {
        obj.insert(QString("event_name"), ::OpenAPI::toJsonValue(event_name));
    }
    if (m_action_source_isSet) {
        obj.insert(QString("action_source"), ::OpenAPI::toJsonValue(action_source));
    }
    if (m_event_time_isSet) {
        obj.insert(QString("event_time"), ::OpenAPI::toJsonValue(event_time));
    }
    if (m_event_id_isSet) {
        obj.insert(QString("event_id"), ::OpenAPI::toJsonValue(event_id));
    }
    if (m_event_source_url_isSet) {
        obj.insert(QString("event_source_url"), ::OpenAPI::toJsonValue(event_source_url));
    }
    if (m_opt_out_isSet) {
        obj.insert(QString("opt_out"), ::OpenAPI::toJsonValue(opt_out));
    }
    if (m_partner_name_isSet) {
        obj.insert(QString("partner_name"), ::OpenAPI::toJsonValue(partner_name));
    }
    if (user_data.isSet()) {
        obj.insert(QString("user_data"), ::OpenAPI::toJsonValue(user_data));
    }
    if (custom_data.isSet()) {
        obj.insert(QString("custom_data"), ::OpenAPI::toJsonValue(custom_data));
    }
    if (m_app_id_isSet) {
        obj.insert(QString("app_id"), ::OpenAPI::toJsonValue(app_id));
    }
    if (m_app_name_isSet) {
        obj.insert(QString("app_name"), ::OpenAPI::toJsonValue(app_name));
    }
    if (m_app_version_isSet) {
        obj.insert(QString("app_version"), ::OpenAPI::toJsonValue(app_version));
    }
    if (m_device_brand_isSet) {
        obj.insert(QString("device_brand"), ::OpenAPI::toJsonValue(device_brand));
    }
    if (m_device_carrier_isSet) {
        obj.insert(QString("device_carrier"), ::OpenAPI::toJsonValue(device_carrier));
    }
    if (m_device_model_isSet) {
        obj.insert(QString("device_model"), ::OpenAPI::toJsonValue(device_model));
    }
    if (m_device_type_isSet) {
        obj.insert(QString("device_type"), ::OpenAPI::toJsonValue(device_type));
    }
    if (m_os_version_isSet) {
        obj.insert(QString("os_version"), ::OpenAPI::toJsonValue(os_version));
    }
    if (m_wifi_isSet) {
        obj.insert(QString("wifi"), ::OpenAPI::toJsonValue(wifi));
    }
    if (m_language_isSet) {
        obj.insert(QString("language"), ::OpenAPI::toJsonValue(language));
    }
    return obj;
}

QString OAIConversionEvents_data_inner::getEventName() const {
    return event_name;
}
void OAIConversionEvents_data_inner::setEventName(const QString &event_name) {
    this->event_name = event_name;
    this->m_event_name_isSet = true;
}

bool OAIConversionEvents_data_inner::is_event_name_Set() const{
    return m_event_name_isSet;
}

bool OAIConversionEvents_data_inner::is_event_name_Valid() const{
    return m_event_name_isValid;
}

QString OAIConversionEvents_data_inner::getActionSource() const {
    return action_source;
}
void OAIConversionEvents_data_inner::setActionSource(const QString &action_source) {
    this->action_source = action_source;
    this->m_action_source_isSet = true;
}

bool OAIConversionEvents_data_inner::is_action_source_Set() const{
    return m_action_source_isSet;
}

bool OAIConversionEvents_data_inner::is_action_source_Valid() const{
    return m_action_source_isValid;
}

qint64 OAIConversionEvents_data_inner::getEventTime() const {
    return event_time;
}
void OAIConversionEvents_data_inner::setEventTime(const qint64 &event_time) {
    this->event_time = event_time;
    this->m_event_time_isSet = true;
}

bool OAIConversionEvents_data_inner::is_event_time_Set() const{
    return m_event_time_isSet;
}

bool OAIConversionEvents_data_inner::is_event_time_Valid() const{
    return m_event_time_isValid;
}

QString OAIConversionEvents_data_inner::getEventId() const {
    return event_id;
}
void OAIConversionEvents_data_inner::setEventId(const QString &event_id) {
    this->event_id = event_id;
    this->m_event_id_isSet = true;
}

bool OAIConversionEvents_data_inner::is_event_id_Set() const{
    return m_event_id_isSet;
}

bool OAIConversionEvents_data_inner::is_event_id_Valid() const{
    return m_event_id_isValid;
}

QString OAIConversionEvents_data_inner::getEventSourceUrl() const {
    return event_source_url;
}
void OAIConversionEvents_data_inner::setEventSourceUrl(const QString &event_source_url) {
    this->event_source_url = event_source_url;
    this->m_event_source_url_isSet = true;
}

bool OAIConversionEvents_data_inner::is_event_source_url_Set() const{
    return m_event_source_url_isSet;
}

bool OAIConversionEvents_data_inner::is_event_source_url_Valid() const{
    return m_event_source_url_isValid;
}

bool OAIConversionEvents_data_inner::isOptOut() const {
    return opt_out;
}
void OAIConversionEvents_data_inner::setOptOut(const bool &opt_out) {
    this->opt_out = opt_out;
    this->m_opt_out_isSet = true;
}

bool OAIConversionEvents_data_inner::is_opt_out_Set() const{
    return m_opt_out_isSet;
}

bool OAIConversionEvents_data_inner::is_opt_out_Valid() const{
    return m_opt_out_isValid;
}

QString OAIConversionEvents_data_inner::getPartnerName() const {
    return partner_name;
}
void OAIConversionEvents_data_inner::setPartnerName(const QString &partner_name) {
    this->partner_name = partner_name;
    this->m_partner_name_isSet = true;
}

bool OAIConversionEvents_data_inner::is_partner_name_Set() const{
    return m_partner_name_isSet;
}

bool OAIConversionEvents_data_inner::is_partner_name_Valid() const{
    return m_partner_name_isValid;
}

OAIConversionEventsUserData OAIConversionEvents_data_inner::getUserData() const {
    return user_data;
}
void OAIConversionEvents_data_inner::setUserData(const OAIConversionEventsUserData &user_data) {
    this->user_data = user_data;
    this->m_user_data_isSet = true;
}

bool OAIConversionEvents_data_inner::is_user_data_Set() const{
    return m_user_data_isSet;
}

bool OAIConversionEvents_data_inner::is_user_data_Valid() const{
    return m_user_data_isValid;
}

OAIConversionEvents_data_inner_custom_data OAIConversionEvents_data_inner::getCustomData() const {
    return custom_data;
}
void OAIConversionEvents_data_inner::setCustomData(const OAIConversionEvents_data_inner_custom_data &custom_data) {
    this->custom_data = custom_data;
    this->m_custom_data_isSet = true;
}

bool OAIConversionEvents_data_inner::is_custom_data_Set() const{
    return m_custom_data_isSet;
}

bool OAIConversionEvents_data_inner::is_custom_data_Valid() const{
    return m_custom_data_isValid;
}

QString OAIConversionEvents_data_inner::getAppId() const {
    return app_id;
}
void OAIConversionEvents_data_inner::setAppId(const QString &app_id) {
    this->app_id = app_id;
    this->m_app_id_isSet = true;
}

bool OAIConversionEvents_data_inner::is_app_id_Set() const{
    return m_app_id_isSet;
}

bool OAIConversionEvents_data_inner::is_app_id_Valid() const{
    return m_app_id_isValid;
}

QString OAIConversionEvents_data_inner::getAppName() const {
    return app_name;
}
void OAIConversionEvents_data_inner::setAppName(const QString &app_name) {
    this->app_name = app_name;
    this->m_app_name_isSet = true;
}

bool OAIConversionEvents_data_inner::is_app_name_Set() const{
    return m_app_name_isSet;
}

bool OAIConversionEvents_data_inner::is_app_name_Valid() const{
    return m_app_name_isValid;
}

QString OAIConversionEvents_data_inner::getAppVersion() const {
    return app_version;
}
void OAIConversionEvents_data_inner::setAppVersion(const QString &app_version) {
    this->app_version = app_version;
    this->m_app_version_isSet = true;
}

bool OAIConversionEvents_data_inner::is_app_version_Set() const{
    return m_app_version_isSet;
}

bool OAIConversionEvents_data_inner::is_app_version_Valid() const{
    return m_app_version_isValid;
}

QString OAIConversionEvents_data_inner::getDeviceBrand() const {
    return device_brand;
}
void OAIConversionEvents_data_inner::setDeviceBrand(const QString &device_brand) {
    this->device_brand = device_brand;
    this->m_device_brand_isSet = true;
}

bool OAIConversionEvents_data_inner::is_device_brand_Set() const{
    return m_device_brand_isSet;
}

bool OAIConversionEvents_data_inner::is_device_brand_Valid() const{
    return m_device_brand_isValid;
}

QString OAIConversionEvents_data_inner::getDeviceCarrier() const {
    return device_carrier;
}
void OAIConversionEvents_data_inner::setDeviceCarrier(const QString &device_carrier) {
    this->device_carrier = device_carrier;
    this->m_device_carrier_isSet = true;
}

bool OAIConversionEvents_data_inner::is_device_carrier_Set() const{
    return m_device_carrier_isSet;
}

bool OAIConversionEvents_data_inner::is_device_carrier_Valid() const{
    return m_device_carrier_isValid;
}

QString OAIConversionEvents_data_inner::getDeviceModel() const {
    return device_model;
}
void OAIConversionEvents_data_inner::setDeviceModel(const QString &device_model) {
    this->device_model = device_model;
    this->m_device_model_isSet = true;
}

bool OAIConversionEvents_data_inner::is_device_model_Set() const{
    return m_device_model_isSet;
}

bool OAIConversionEvents_data_inner::is_device_model_Valid() const{
    return m_device_model_isValid;
}

QString OAIConversionEvents_data_inner::getDeviceType() const {
    return device_type;
}
void OAIConversionEvents_data_inner::setDeviceType(const QString &device_type) {
    this->device_type = device_type;
    this->m_device_type_isSet = true;
}

bool OAIConversionEvents_data_inner::is_device_type_Set() const{
    return m_device_type_isSet;
}

bool OAIConversionEvents_data_inner::is_device_type_Valid() const{
    return m_device_type_isValid;
}

QString OAIConversionEvents_data_inner::getOsVersion() const {
    return os_version;
}
void OAIConversionEvents_data_inner::setOsVersion(const QString &os_version) {
    this->os_version = os_version;
    this->m_os_version_isSet = true;
}

bool OAIConversionEvents_data_inner::is_os_version_Set() const{
    return m_os_version_isSet;
}

bool OAIConversionEvents_data_inner::is_os_version_Valid() const{
    return m_os_version_isValid;
}

bool OAIConversionEvents_data_inner::isWifi() const {
    return wifi;
}
void OAIConversionEvents_data_inner::setWifi(const bool &wifi) {
    this->wifi = wifi;
    this->m_wifi_isSet = true;
}

bool OAIConversionEvents_data_inner::is_wifi_Set() const{
    return m_wifi_isSet;
}

bool OAIConversionEvents_data_inner::is_wifi_Valid() const{
    return m_wifi_isValid;
}

QString OAIConversionEvents_data_inner::getLanguage() const {
    return language;
}
void OAIConversionEvents_data_inner::setLanguage(const QString &language) {
    this->language = language;
    this->m_language_isSet = true;
}

bool OAIConversionEvents_data_inner::is_language_Set() const{
    return m_language_isSet;
}

bool OAIConversionEvents_data_inner::is_language_Valid() const{
    return m_language_isValid;
}

bool OAIConversionEvents_data_inner::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_event_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_action_source_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_event_time_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_event_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_event_source_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_opt_out_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_partner_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (user_data.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (custom_data.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_app_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_app_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_app_version_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_device_brand_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_device_carrier_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_device_model_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_device_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_os_version_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_wifi_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_language_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIConversionEvents_data_inner::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_event_name_isValid && m_action_source_isValid && m_event_time_isValid && m_event_id_isValid && m_user_data_isValid && true;
}

} // namespace OpenAPI
