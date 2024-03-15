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

#include "OAIOrderLineStatus.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIOrderLineStatus::OAIOrderLineStatus(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIOrderLineStatus::OAIOrderLineStatus() {
    this->initializeModel();
}

OAIOrderLineStatus::~OAIOrderLineStatus() {}

void OAIOrderLineStatus::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIOrderLineStatus::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIOrderLineStatus::fromJson(QString jsonString) {
    
    if ( jsonString.compare("ACTIVE", Qt::CaseInsensitive) == 0) {
        m_value = eOAIOrderLineStatus::ACTIVE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("PAUSED", Qt::CaseInsensitive) == 0) {
        m_value = eOAIOrderLineStatus::PAUSED;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("DELETED", Qt::CaseInsensitive) == 0) {
        m_value = eOAIOrderLineStatus::DELETED;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIOrderLineStatus::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIOrderLineStatus::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIOrderLineStatus::ACTIVE:
            val = "ACTIVE";
            break;
        case eOAIOrderLineStatus::PAUSED:
            val = "PAUSED";
            break;
        case eOAIOrderLineStatus::DELETED:
            val = "DELETED";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIOrderLineStatus::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIOrderLineStatus::eOAIOrderLineStatus OAIOrderLineStatus::getValue() const {
    return m_value;
}

void OAIOrderLineStatus::setValue(const OAIOrderLineStatus::eOAIOrderLineStatus& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIOrderLineStatus::isSet() const {
    
    return m_value_isSet;
}

bool OAIOrderLineStatus::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
