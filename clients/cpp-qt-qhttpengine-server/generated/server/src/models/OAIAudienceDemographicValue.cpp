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

#include "OAIAudienceDemographicValue.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIAudienceDemographicValue::OAIAudienceDemographicValue(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIAudienceDemographicValue::OAIAudienceDemographicValue() {
    this->initializeModel();
}

OAIAudienceDemographicValue::~OAIAudienceDemographicValue() {}

void OAIAudienceDemographicValue::initializeModel() {

    m_key_isSet = false;
    m_key_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_ratio_isSet = false;
    m_ratio_isValid = false;
}

void OAIAudienceDemographicValue::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIAudienceDemographicValue::fromJsonObject(QJsonObject json) {

    m_key_isValid = ::OpenAPI::fromJsonValue(key, json[QString("key")]);
    m_key_isSet = !json[QString("key")].isNull() && m_key_isValid;

    m_name_isValid = ::OpenAPI::fromJsonValue(name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_ratio_isValid = ::OpenAPI::fromJsonValue(ratio, json[QString("ratio")]);
    m_ratio_isSet = !json[QString("ratio")].isNull() && m_ratio_isValid;
}

QString OAIAudienceDemographicValue::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIAudienceDemographicValue::asJsonObject() const {
    QJsonObject obj;
    if (m_key_isSet) {
        obj.insert(QString("key"), ::OpenAPI::toJsonValue(key));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(name));
    }
    if (m_ratio_isSet) {
        obj.insert(QString("ratio"), ::OpenAPI::toJsonValue(ratio));
    }
    return obj;
}

QString OAIAudienceDemographicValue::getKey() const {
    return key;
}
void OAIAudienceDemographicValue::setKey(const QString &key) {
    this->key = key;
    this->m_key_isSet = true;
}

bool OAIAudienceDemographicValue::is_key_Set() const{
    return m_key_isSet;
}

bool OAIAudienceDemographicValue::is_key_Valid() const{
    return m_key_isValid;
}

QString OAIAudienceDemographicValue::getName() const {
    return name;
}
void OAIAudienceDemographicValue::setName(const QString &name) {
    this->name = name;
    this->m_name_isSet = true;
}

bool OAIAudienceDemographicValue::is_name_Set() const{
    return m_name_isSet;
}

bool OAIAudienceDemographicValue::is_name_Valid() const{
    return m_name_isValid;
}

double OAIAudienceDemographicValue::getRatio() const {
    return ratio;
}
void OAIAudienceDemographicValue::setRatio(const double &ratio) {
    this->ratio = ratio;
    this->m_ratio_isSet = true;
}

bool OAIAudienceDemographicValue::is_ratio_Set() const{
    return m_ratio_isSet;
}

bool OAIAudienceDemographicValue::is_ratio_Valid() const{
    return m_ratio_isValid;
}

bool OAIAudienceDemographicValue::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_key_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_ratio_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIAudienceDemographicValue::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
