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

#include "OAITemplateResponse_date_range_relative_date_range.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAITemplateResponse_date_range_relative_date_range::OAITemplateResponse_date_range_relative_date_range(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAITemplateResponse_date_range_relative_date_range::OAITemplateResponse_date_range_relative_date_range() {
    this->initializeModel();
}

OAITemplateResponse_date_range_relative_date_range::~OAITemplateResponse_date_range_relative_date_range() {}

void OAITemplateResponse_date_range_relative_date_range::initializeModel() {

    m_type_isSet = false;
    m_type_isValid = false;

    m_start_days_in_past_isSet = false;
    m_start_days_in_past_isValid = false;

    m_end_days_in_past_isSet = false;
    m_end_days_in_past_isValid = false;
}

void OAITemplateResponse_date_range_relative_date_range::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAITemplateResponse_date_range_relative_date_range::fromJsonObject(QJsonObject json) {

    m_type_isValid = ::OpenAPI::fromJsonValue(type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_start_days_in_past_isValid = ::OpenAPI::fromJsonValue(start_days_in_past, json[QString("start_days_in_past")]);
    m_start_days_in_past_isSet = !json[QString("start_days_in_past")].isNull() && m_start_days_in_past_isValid;

    m_end_days_in_past_isValid = ::OpenAPI::fromJsonValue(end_days_in_past, json[QString("end_days_in_past")]);
    m_end_days_in_past_isSet = !json[QString("end_days_in_past")].isNull() && m_end_days_in_past_isValid;
}

QString OAITemplateResponse_date_range_relative_date_range::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAITemplateResponse_date_range_relative_date_range::asJsonObject() const {
    QJsonObject obj;
    if (m_type_isSet) {
        obj.insert(QString("type"), ::OpenAPI::toJsonValue(type));
    }
    if (m_start_days_in_past_isSet) {
        obj.insert(QString("start_days_in_past"), ::OpenAPI::toJsonValue(start_days_in_past));
    }
    if (m_end_days_in_past_isSet) {
        obj.insert(QString("end_days_in_past"), ::OpenAPI::toJsonValue(end_days_in_past));
    }
    return obj;
}

QString OAITemplateResponse_date_range_relative_date_range::getType() const {
    return type;
}
void OAITemplateResponse_date_range_relative_date_range::setType(const QString &type) {
    this->type = type;
    this->m_type_isSet = true;
}

bool OAITemplateResponse_date_range_relative_date_range::is_type_Set() const{
    return m_type_isSet;
}

bool OAITemplateResponse_date_range_relative_date_range::is_type_Valid() const{
    return m_type_isValid;
}

double OAITemplateResponse_date_range_relative_date_range::getStartDaysInPast() const {
    return start_days_in_past;
}
void OAITemplateResponse_date_range_relative_date_range::setStartDaysInPast(const double &start_days_in_past) {
    this->start_days_in_past = start_days_in_past;
    this->m_start_days_in_past_isSet = true;
}

bool OAITemplateResponse_date_range_relative_date_range::is_start_days_in_past_Set() const{
    return m_start_days_in_past_isSet;
}

bool OAITemplateResponse_date_range_relative_date_range::is_start_days_in_past_Valid() const{
    return m_start_days_in_past_isValid;
}

double OAITemplateResponse_date_range_relative_date_range::getEndDaysInPast() const {
    return end_days_in_past;
}
void OAITemplateResponse_date_range_relative_date_range::setEndDaysInPast(const double &end_days_in_past) {
    this->end_days_in_past = end_days_in_past;
    this->m_end_days_in_past_isSet = true;
}

bool OAITemplateResponse_date_range_relative_date_range::is_end_days_in_past_Set() const{
    return m_end_days_in_past_isSet;
}

bool OAITemplateResponse_date_range_relative_date_range::is_end_days_in_past_Valid() const{
    return m_end_days_in_past_isValid;
}

bool OAITemplateResponse_date_range_relative_date_range::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_start_days_in_past_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_end_days_in_past_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAITemplateResponse_date_range_relative_date_range::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
