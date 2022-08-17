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

#include "OAIEntityStatus.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEntityStatus::OAIEntityStatus(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEntityStatus::OAIEntityStatus() {
    this->initializeModel();
}

OAIEntityStatus::~OAIEntityStatus() {}

void OAIEntityStatus::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIEntityStatus::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIEntityStatus::fromJson(QString jsonString) {
    
    if ( jsonString.compare("ACTIVE", Qt::CaseInsensitive) == 0) {
        m_value = eOAIEntityStatus::ACTIVE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("PAUSED", Qt::CaseInsensitive) == 0) {
        m_value = eOAIEntityStatus::PAUSED;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("ARCHIVED", Qt::CaseInsensitive) == 0) {
        m_value = eOAIEntityStatus::ARCHIVED;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIEntityStatus::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIEntityStatus::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIEntityStatus::ACTIVE:
            val = "ACTIVE";
            break;
        case eOAIEntityStatus::PAUSED:
            val = "PAUSED";
            break;
        case eOAIEntityStatus::ARCHIVED:
            val = "ARCHIVED";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIEntityStatus::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIEntityStatus::eOAIEntityStatus OAIEntityStatus::getValue() const {
    return m_value;
}

void OAIEntityStatus::setValue(const OAIEntityStatus::eOAIEntityStatus& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIEntityStatus::isSet() const {
    
    return m_value_isSet;
}

bool OAIEntityStatus::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
