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

#include "OAIIntegrationLogsInvalidLogResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIIntegrationLogsInvalidLogResponse::OAIIntegrationLogsInvalidLogResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIIntegrationLogsInvalidLogResponse::OAIIntegrationLogsInvalidLogResponse() {
    this->initializeModel();
}

OAIIntegrationLogsInvalidLogResponse::~OAIIntegrationLogsInvalidLogResponse() {}

void OAIIntegrationLogsInvalidLogResponse::initializeModel() {

    m_rejected_logs_isSet = false;
    m_rejected_logs_isValid = false;
}

void OAIIntegrationLogsInvalidLogResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIIntegrationLogsInvalidLogResponse::fromJsonObject(QJsonObject json) {

    m_rejected_logs_isValid = ::OpenAPI::fromJsonValue(rejected_logs, json[QString("rejected_logs")]);
    m_rejected_logs_isSet = !json[QString("rejected_logs")].isNull() && m_rejected_logs_isValid;
}

QString OAIIntegrationLogsInvalidLogResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIIntegrationLogsInvalidLogResponse::asJsonObject() const {
    QJsonObject obj;
    if (rejected_logs.size() > 0) {
        obj.insert(QString("rejected_logs"), ::OpenAPI::toJsonValue(rejected_logs));
    }
    return obj;
}

QList<OAIIntegrationLogsInvalidLogResponse_rejected_logs_inner> OAIIntegrationLogsInvalidLogResponse::getRejectedLogs() const {
    return rejected_logs;
}
void OAIIntegrationLogsInvalidLogResponse::setRejectedLogs(const QList<OAIIntegrationLogsInvalidLogResponse_rejected_logs_inner> &rejected_logs) {
    this->rejected_logs = rejected_logs;
    this->m_rejected_logs_isSet = true;
}

bool OAIIntegrationLogsInvalidLogResponse::is_rejected_logs_Set() const{
    return m_rejected_logs_isSet;
}

bool OAIIntegrationLogsInvalidLogResponse::is_rejected_logs_Valid() const{
    return m_rejected_logs_isValid;
}

bool OAIIntegrationLogsInvalidLogResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (rejected_logs.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIIntegrationLogsInvalidLogResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
