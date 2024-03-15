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

#include "OAITemplateResponse_date_range.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAITemplateResponse_date_range::OAITemplateResponse_date_range(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAITemplateResponse_date_range::OAITemplateResponse_date_range() {
    this->initializeModel();
}

OAITemplateResponse_date_range::~OAITemplateResponse_date_range() {}

void OAITemplateResponse_date_range::initializeModel() {

    m_dynamic_date_range_isSet = false;
    m_dynamic_date_range_isValid = false;

    m_relative_date_range_isSet = false;
    m_relative_date_range_isValid = false;

    m_absolute_date_range_isSet = false;
    m_absolute_date_range_isValid = false;
}

void OAITemplateResponse_date_range::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAITemplateResponse_date_range::fromJsonObject(QJsonObject json) {

    m_dynamic_date_range_isValid = ::OpenAPI::fromJsonValue(dynamic_date_range, json[QString("dynamic_date_range")]);
    m_dynamic_date_range_isSet = !json[QString("dynamic_date_range")].isNull() && m_dynamic_date_range_isValid;

    m_relative_date_range_isValid = ::OpenAPI::fromJsonValue(relative_date_range, json[QString("relative_date_range")]);
    m_relative_date_range_isSet = !json[QString("relative_date_range")].isNull() && m_relative_date_range_isValid;

    m_absolute_date_range_isValid = ::OpenAPI::fromJsonValue(absolute_date_range, json[QString("absolute_date_range")]);
    m_absolute_date_range_isSet = !json[QString("absolute_date_range")].isNull() && m_absolute_date_range_isValid;
}

QString OAITemplateResponse_date_range::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAITemplateResponse_date_range::asJsonObject() const {
    QJsonObject obj;
    if (dynamic_date_range.isSet()) {
        obj.insert(QString("dynamic_date_range"), ::OpenAPI::toJsonValue(dynamic_date_range));
    }
    if (relative_date_range.isSet()) {
        obj.insert(QString("relative_date_range"), ::OpenAPI::toJsonValue(relative_date_range));
    }
    if (absolute_date_range.isSet()) {
        obj.insert(QString("absolute_date_range"), ::OpenAPI::toJsonValue(absolute_date_range));
    }
    return obj;
}

OAITemplateResponse_date_range_dynamic_date_range OAITemplateResponse_date_range::getDynamicDateRange() const {
    return dynamic_date_range;
}
void OAITemplateResponse_date_range::setDynamicDateRange(const OAITemplateResponse_date_range_dynamic_date_range &dynamic_date_range) {
    this->dynamic_date_range = dynamic_date_range;
    this->m_dynamic_date_range_isSet = true;
}

bool OAITemplateResponse_date_range::is_dynamic_date_range_Set() const{
    return m_dynamic_date_range_isSet;
}

bool OAITemplateResponse_date_range::is_dynamic_date_range_Valid() const{
    return m_dynamic_date_range_isValid;
}

OAITemplateResponse_date_range_relative_date_range OAITemplateResponse_date_range::getRelativeDateRange() const {
    return relative_date_range;
}
void OAITemplateResponse_date_range::setRelativeDateRange(const OAITemplateResponse_date_range_relative_date_range &relative_date_range) {
    this->relative_date_range = relative_date_range;
    this->m_relative_date_range_isSet = true;
}

bool OAITemplateResponse_date_range::is_relative_date_range_Set() const{
    return m_relative_date_range_isSet;
}

bool OAITemplateResponse_date_range::is_relative_date_range_Valid() const{
    return m_relative_date_range_isValid;
}

OAITemplateResponse_date_range_absolute_date_range OAITemplateResponse_date_range::getAbsoluteDateRange() const {
    return absolute_date_range;
}
void OAITemplateResponse_date_range::setAbsoluteDateRange(const OAITemplateResponse_date_range_absolute_date_range &absolute_date_range) {
    this->absolute_date_range = absolute_date_range;
    this->m_absolute_date_range_isSet = true;
}

bool OAITemplateResponse_date_range::is_absolute_date_range_Set() const{
    return m_absolute_date_range_isSet;
}

bool OAITemplateResponse_date_range::is_absolute_date_range_Valid() const{
    return m_absolute_date_range_isValid;
}

bool OAITemplateResponse_date_range::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (dynamic_date_range.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (relative_date_range.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (absolute_date_range.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAITemplateResponse_date_range::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
