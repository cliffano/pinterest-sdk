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

#include "OAITopPinsAnalyticsResponse_pins_inner.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAITopPinsAnalyticsResponse_pins_inner::OAITopPinsAnalyticsResponse_pins_inner(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAITopPinsAnalyticsResponse_pins_inner::OAITopPinsAnalyticsResponse_pins_inner() {
    this->initializeModel();
}

OAITopPinsAnalyticsResponse_pins_inner::~OAITopPinsAnalyticsResponse_pins_inner() {}

void OAITopPinsAnalyticsResponse_pins_inner::initializeModel() {

    m_metrics_isSet = false;
    m_metrics_isValid = false;

    m_data_status_isSet = false;
    m_data_status_isValid = false;

    m_pin_id_isSet = false;
    m_pin_id_isValid = false;
}

void OAITopPinsAnalyticsResponse_pins_inner::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAITopPinsAnalyticsResponse_pins_inner::fromJsonObject(QJsonObject json) {

    m_metrics_isValid = ::OpenAPI::fromJsonValue(metrics, json[QString("metrics")]);
    m_metrics_isSet = !json[QString("metrics")].isNull() && m_metrics_isValid;

    m_data_status_isValid = ::OpenAPI::fromJsonValue(data_status, json[QString("data_status")]);
    m_data_status_isSet = !json[QString("data_status")].isNull() && m_data_status_isValid;

    m_pin_id_isValid = ::OpenAPI::fromJsonValue(pin_id, json[QString("pin_id")]);
    m_pin_id_isSet = !json[QString("pin_id")].isNull() && m_pin_id_isValid;
}

QString OAITopPinsAnalyticsResponse_pins_inner::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAITopPinsAnalyticsResponse_pins_inner::asJsonObject() const {
    QJsonObject obj;
    if (metrics.size() > 0) {
        obj.insert(QString("metrics"), ::OpenAPI::toJsonValue(metrics));
    }
    if (data_status.size() > 0) {
        obj.insert(QString("data_status"), ::OpenAPI::toJsonValue(data_status));
    }
    if (m_pin_id_isSet) {
        obj.insert(QString("pin_id"), ::OpenAPI::toJsonValue(pin_id));
    }
    return obj;
}

QMap<QString, double> OAITopPinsAnalyticsResponse_pins_inner::getMetrics() const {
    return metrics;
}
void OAITopPinsAnalyticsResponse_pins_inner::setMetrics(const QMap<QString, double> &metrics) {
    this->metrics = metrics;
    this->m_metrics_isSet = true;
}

bool OAITopPinsAnalyticsResponse_pins_inner::is_metrics_Set() const{
    return m_metrics_isSet;
}

bool OAITopPinsAnalyticsResponse_pins_inner::is_metrics_Valid() const{
    return m_metrics_isValid;
}

QMap<QString, OAIDataStatus> OAITopPinsAnalyticsResponse_pins_inner::getDataStatus() const {
    return data_status;
}
void OAITopPinsAnalyticsResponse_pins_inner::setDataStatus(const QMap<QString, OAIDataStatus> &data_status) {
    this->data_status = data_status;
    this->m_data_status_isSet = true;
}

bool OAITopPinsAnalyticsResponse_pins_inner::is_data_status_Set() const{
    return m_data_status_isSet;
}

bool OAITopPinsAnalyticsResponse_pins_inner::is_data_status_Valid() const{
    return m_data_status_isValid;
}

QString OAITopPinsAnalyticsResponse_pins_inner::getPinId() const {
    return pin_id;
}
void OAITopPinsAnalyticsResponse_pins_inner::setPinId(const QString &pin_id) {
    this->pin_id = pin_id;
    this->m_pin_id_isSet = true;
}

bool OAITopPinsAnalyticsResponse_pins_inner::is_pin_id_Set() const{
    return m_pin_id_isSet;
}

bool OAITopPinsAnalyticsResponse_pins_inner::is_pin_id_Valid() const{
    return m_pin_id_isValid;
}

bool OAITopPinsAnalyticsResponse_pins_inner::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (metrics.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (data_status.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_pin_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAITopPinsAnalyticsResponse_pins_inner::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
