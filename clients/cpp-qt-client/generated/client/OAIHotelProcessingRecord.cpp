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

#include "OAIHotelProcessingRecord.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIHotelProcessingRecord::OAIHotelProcessingRecord(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIHotelProcessingRecord::OAIHotelProcessingRecord() {
    this->initializeModel();
}

OAIHotelProcessingRecord::~OAIHotelProcessingRecord() {}

void OAIHotelProcessingRecord::initializeModel() {

    m_hotel_id_isSet = false;
    m_hotel_id_isValid = false;

    m_errors_isSet = false;
    m_errors_isValid = false;

    m_warnings_isSet = false;
    m_warnings_isValid = false;

    m_status_isSet = false;
    m_status_isValid = false;
}

void OAIHotelProcessingRecord::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIHotelProcessingRecord::fromJsonObject(QJsonObject json) {

    m_hotel_id_isValid = ::OpenAPI::fromJsonValue(m_hotel_id, json[QString("hotel_id")]);
    m_hotel_id_isSet = !json[QString("hotel_id")].isNull() && m_hotel_id_isValid;

    m_errors_isValid = ::OpenAPI::fromJsonValue(m_errors, json[QString("errors")]);
    m_errors_isSet = !json[QString("errors")].isNull() && m_errors_isValid;

    m_warnings_isValid = ::OpenAPI::fromJsonValue(m_warnings, json[QString("warnings")]);
    m_warnings_isSet = !json[QString("warnings")].isNull() && m_warnings_isValid;

    m_status_isValid = ::OpenAPI::fromJsonValue(m_status, json[QString("status")]);
    m_status_isSet = !json[QString("status")].isNull() && m_status_isValid;
}

QString OAIHotelProcessingRecord::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIHotelProcessingRecord::asJsonObject() const {
    QJsonObject obj;
    if (m_hotel_id_isSet) {
        obj.insert(QString("hotel_id"), ::OpenAPI::toJsonValue(m_hotel_id));
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

QString OAIHotelProcessingRecord::getHotelId() const {
    return m_hotel_id;
}
void OAIHotelProcessingRecord::setHotelId(const QString &hotel_id) {
    m_hotel_id = hotel_id;
    m_hotel_id_isSet = true;
}

bool OAIHotelProcessingRecord::is_hotel_id_Set() const{
    return m_hotel_id_isSet;
}

bool OAIHotelProcessingRecord::is_hotel_id_Valid() const{
    return m_hotel_id_isValid;
}

QList<OAIItemValidationEvent> OAIHotelProcessingRecord::getErrors() const {
    return m_errors;
}
void OAIHotelProcessingRecord::setErrors(const QList<OAIItemValidationEvent> &errors) {
    m_errors = errors;
    m_errors_isSet = true;
}

bool OAIHotelProcessingRecord::is_errors_Set() const{
    return m_errors_isSet;
}

bool OAIHotelProcessingRecord::is_errors_Valid() const{
    return m_errors_isValid;
}

QList<OAIItemValidationEvent> OAIHotelProcessingRecord::getWarnings() const {
    return m_warnings;
}
void OAIHotelProcessingRecord::setWarnings(const QList<OAIItemValidationEvent> &warnings) {
    m_warnings = warnings;
    m_warnings_isSet = true;
}

bool OAIHotelProcessingRecord::is_warnings_Set() const{
    return m_warnings_isSet;
}

bool OAIHotelProcessingRecord::is_warnings_Valid() const{
    return m_warnings_isValid;
}

OAIItemProcessingStatus OAIHotelProcessingRecord::getStatus() const {
    return m_status;
}
void OAIHotelProcessingRecord::setStatus(const OAIItemProcessingStatus &status) {
    m_status = status;
    m_status_isSet = true;
}

bool OAIHotelProcessingRecord::is_status_Set() const{
    return m_status_isSet;
}

bool OAIHotelProcessingRecord::is_status_Valid() const{
    return m_status_isValid;
}

bool OAIHotelProcessingRecord::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_hotel_id_isSet) {
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

bool OAIHotelProcessingRecord::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI