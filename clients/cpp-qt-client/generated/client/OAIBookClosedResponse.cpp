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

#include "OAIBookClosedResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIBookClosedResponse::OAIBookClosedResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIBookClosedResponse::OAIBookClosedResponse() {
    this->initializeModel();
}

OAIBookClosedResponse::~OAIBookClosedResponse() {}

void OAIBookClosedResponse::initializeModel() {

    m_conversion_metrics_ready_isSet = false;
    m_conversion_metrics_ready_isValid = false;

    m_non_conversion_metrics_ready_isSet = false;
    m_non_conversion_metrics_ready_isValid = false;
}

void OAIBookClosedResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIBookClosedResponse::fromJsonObject(QJsonObject json) {

    m_conversion_metrics_ready_isValid = ::OpenAPI::fromJsonValue(m_conversion_metrics_ready, json[QString("conversion_metrics_ready")]);
    m_conversion_metrics_ready_isSet = !json[QString("conversion_metrics_ready")].isNull() && m_conversion_metrics_ready_isValid;

    m_non_conversion_metrics_ready_isValid = ::OpenAPI::fromJsonValue(m_non_conversion_metrics_ready, json[QString("non_conversion_metrics_ready")]);
    m_non_conversion_metrics_ready_isSet = !json[QString("non_conversion_metrics_ready")].isNull() && m_non_conversion_metrics_ready_isValid;
}

QString OAIBookClosedResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIBookClosedResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_conversion_metrics_ready_isSet) {
        obj.insert(QString("conversion_metrics_ready"), ::OpenAPI::toJsonValue(m_conversion_metrics_ready));
    }
    if (m_non_conversion_metrics_ready_isSet) {
        obj.insert(QString("non_conversion_metrics_ready"), ::OpenAPI::toJsonValue(m_non_conversion_metrics_ready));
    }
    return obj;
}

bool OAIBookClosedResponse::isConversionMetricsReady() const {
    return m_conversion_metrics_ready;
}
void OAIBookClosedResponse::setConversionMetricsReady(const bool &conversion_metrics_ready) {
    m_conversion_metrics_ready = conversion_metrics_ready;
    m_conversion_metrics_ready_isSet = true;
}

bool OAIBookClosedResponse::is_conversion_metrics_ready_Set() const{
    return m_conversion_metrics_ready_isSet;
}

bool OAIBookClosedResponse::is_conversion_metrics_ready_Valid() const{
    return m_conversion_metrics_ready_isValid;
}

bool OAIBookClosedResponse::isNonConversionMetricsReady() const {
    return m_non_conversion_metrics_ready;
}
void OAIBookClosedResponse::setNonConversionMetricsReady(const bool &non_conversion_metrics_ready) {
    m_non_conversion_metrics_ready = non_conversion_metrics_ready;
    m_non_conversion_metrics_ready_isSet = true;
}

bool OAIBookClosedResponse::is_non_conversion_metrics_ready_Set() const{
    return m_non_conversion_metrics_ready_isSet;
}

bool OAIBookClosedResponse::is_non_conversion_metrics_ready_Valid() const{
    return m_non_conversion_metrics_ready_isValid;
}

bool OAIBookClosedResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_conversion_metrics_ready_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_non_conversion_metrics_ready_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIBookClosedResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
