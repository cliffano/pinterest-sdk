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

#include "OAIConversionApiResponse_events_inner.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIConversionApiResponse_events_inner::OAIConversionApiResponse_events_inner(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIConversionApiResponse_events_inner::OAIConversionApiResponse_events_inner() {
    this->initializeModel();
}

OAIConversionApiResponse_events_inner::~OAIConversionApiResponse_events_inner() {}

void OAIConversionApiResponse_events_inner::initializeModel() {

    m_status_isSet = false;
    m_status_isValid = false;

    m_error_message_isSet = false;
    m_error_message_isValid = false;

    m_warning_message_isSet = false;
    m_warning_message_isValid = false;
}

void OAIConversionApiResponse_events_inner::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIConversionApiResponse_events_inner::fromJsonObject(QJsonObject json) {

    m_status_isValid = ::OpenAPI::fromJsonValue(status, json[QString("status")]);
    m_status_isSet = !json[QString("status")].isNull() && m_status_isValid;

    m_error_message_isValid = ::OpenAPI::fromJsonValue(error_message, json[QString("error_message")]);
    m_error_message_isSet = !json[QString("error_message")].isNull() && m_error_message_isValid;

    m_warning_message_isValid = ::OpenAPI::fromJsonValue(warning_message, json[QString("warning_message")]);
    m_warning_message_isSet = !json[QString("warning_message")].isNull() && m_warning_message_isValid;
}

QString OAIConversionApiResponse_events_inner::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIConversionApiResponse_events_inner::asJsonObject() const {
    QJsonObject obj;
    if (m_status_isSet) {
        obj.insert(QString("status"), ::OpenAPI::toJsonValue(status));
    }
    if (m_error_message_isSet) {
        obj.insert(QString("error_message"), ::OpenAPI::toJsonValue(error_message));
    }
    if (m_warning_message_isSet) {
        obj.insert(QString("warning_message"), ::OpenAPI::toJsonValue(warning_message));
    }
    return obj;
}

QString OAIConversionApiResponse_events_inner::getStatus() const {
    return status;
}
void OAIConversionApiResponse_events_inner::setStatus(const QString &status) {
    this->status = status;
    this->m_status_isSet = true;
}

bool OAIConversionApiResponse_events_inner::is_status_Set() const{
    return m_status_isSet;
}

bool OAIConversionApiResponse_events_inner::is_status_Valid() const{
    return m_status_isValid;
}

QString OAIConversionApiResponse_events_inner::getErrorMessage() const {
    return error_message;
}
void OAIConversionApiResponse_events_inner::setErrorMessage(const QString &error_message) {
    this->error_message = error_message;
    this->m_error_message_isSet = true;
}

bool OAIConversionApiResponse_events_inner::is_error_message_Set() const{
    return m_error_message_isSet;
}

bool OAIConversionApiResponse_events_inner::is_error_message_Valid() const{
    return m_error_message_isValid;
}

QString OAIConversionApiResponse_events_inner::getWarningMessage() const {
    return warning_message;
}
void OAIConversionApiResponse_events_inner::setWarningMessage(const QString &warning_message) {
    this->warning_message = warning_message;
    this->m_warning_message_isSet = true;
}

bool OAIConversionApiResponse_events_inner::is_warning_message_Set() const{
    return m_warning_message_isSet;
}

bool OAIConversionApiResponse_events_inner::is_warning_message_Valid() const{
    return m_warning_message_isValid;
}

bool OAIConversionApiResponse_events_inner::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_status_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_error_message_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_warning_message_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIConversionApiResponse_events_inner::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_status_isValid && true;
}

} // namespace OpenAPI
