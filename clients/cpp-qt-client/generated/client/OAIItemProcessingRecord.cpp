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

#include "OAIItemProcessingRecord.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIItemProcessingRecord::OAIItemProcessingRecord(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIItemProcessingRecord::OAIItemProcessingRecord() {
    this->initializeModel();
}

OAIItemProcessingRecord::~OAIItemProcessingRecord() {}

void OAIItemProcessingRecord::initializeModel() {

    m_item_id_isSet = false;
    m_item_id_isValid = false;

    m_errors_isSet = false;
    m_errors_isValid = false;

    m_warnings_isSet = false;
    m_warnings_isValid = false;

    m_status_isSet = false;
    m_status_isValid = false;
}

void OAIItemProcessingRecord::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIItemProcessingRecord::fromJsonObject(QJsonObject json) {

    m_item_id_isValid = ::OpenAPI::fromJsonValue(m_item_id, json[QString("item_id")]);
    m_item_id_isSet = !json[QString("item_id")].isNull() && m_item_id_isValid;

    m_errors_isValid = ::OpenAPI::fromJsonValue(m_errors, json[QString("errors")]);
    m_errors_isSet = !json[QString("errors")].isNull() && m_errors_isValid;

    m_warnings_isValid = ::OpenAPI::fromJsonValue(m_warnings, json[QString("warnings")]);
    m_warnings_isSet = !json[QString("warnings")].isNull() && m_warnings_isValid;

    m_status_isValid = ::OpenAPI::fromJsonValue(m_status, json[QString("status")]);
    m_status_isSet = !json[QString("status")].isNull() && m_status_isValid;
}

QString OAIItemProcessingRecord::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIItemProcessingRecord::asJsonObject() const {
    QJsonObject obj;
    if (m_item_id_isSet) {
        obj.insert(QString("item_id"), ::OpenAPI::toJsonValue(m_item_id));
    }
    if (m_errors.size() > 0) {
        obj.insert(QString("errors"), ::OpenAPI::toJsonValue(m_errors));
    }
    if (m_warnings.size() > 0) {
        obj.insert(QString("warnings"), ::OpenAPI::toJsonValue(m_warnings));
    }
    if (m_status.isSet()) {
        obj.insert(QString("status"), ::OpenAPI::toJsonValue(m_status));
    }
    return obj;
}

QString OAIItemProcessingRecord::getItemId() const {
    return m_item_id;
}
void OAIItemProcessingRecord::setItemId(const QString &item_id) {
    m_item_id = item_id;
    m_item_id_isSet = true;
}

bool OAIItemProcessingRecord::is_item_id_Set() const{
    return m_item_id_isSet;
}

bool OAIItemProcessingRecord::is_item_id_Valid() const{
    return m_item_id_isValid;
}

QList<OAIItemValidationEvent> OAIItemProcessingRecord::getErrors() const {
    return m_errors;
}
void OAIItemProcessingRecord::setErrors(const QList<OAIItemValidationEvent> &errors) {
    m_errors = errors;
    m_errors_isSet = true;
}

bool OAIItemProcessingRecord::is_errors_Set() const{
    return m_errors_isSet;
}

bool OAIItemProcessingRecord::is_errors_Valid() const{
    return m_errors_isValid;
}

QList<OAIItemValidationEvent> OAIItemProcessingRecord::getWarnings() const {
    return m_warnings;
}
void OAIItemProcessingRecord::setWarnings(const QList<OAIItemValidationEvent> &warnings) {
    m_warnings = warnings;
    m_warnings_isSet = true;
}

bool OAIItemProcessingRecord::is_warnings_Set() const{
    return m_warnings_isSet;
}

bool OAIItemProcessingRecord::is_warnings_Valid() const{
    return m_warnings_isValid;
}

OAIItemProcessingStatus OAIItemProcessingRecord::getStatus() const {
    return m_status;
}
void OAIItemProcessingRecord::setStatus(const OAIItemProcessingStatus &status) {
    m_status = status;
    m_status_isSet = true;
}

bool OAIItemProcessingRecord::is_status_Set() const{
    return m_status_isSet;
}

bool OAIItemProcessingRecord::is_status_Valid() const{
    return m_status_isValid;
}

bool OAIItemProcessingRecord::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_item_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_errors.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_warnings.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_status.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIItemProcessingRecord::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
