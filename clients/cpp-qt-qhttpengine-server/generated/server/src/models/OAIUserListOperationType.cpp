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

#include "OAIUserListOperationType.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIUserListOperationType::OAIUserListOperationType(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIUserListOperationType::OAIUserListOperationType() {
    this->initializeModel();
}

OAIUserListOperationType::~OAIUserListOperationType() {}

void OAIUserListOperationType::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIUserListOperationType::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIUserListOperationType::fromJson(QString jsonString) {
    
    if ( jsonString.compare("ADD", Qt::CaseInsensitive) == 0) {
        m_value = eOAIUserListOperationType::ADD;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("REMOVE", Qt::CaseInsensitive) == 0) {
        m_value = eOAIUserListOperationType::REMOVE;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIUserListOperationType::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIUserListOperationType::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIUserListOperationType::ADD:
            val = "ADD";
            break;
        case eOAIUserListOperationType::REMOVE:
            val = "REMOVE";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIUserListOperationType::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIUserListOperationType::eOAIUserListOperationType OAIUserListOperationType::getValue() const {
    return m_value;
}

void OAIUserListOperationType::setValue(const OAIUserListOperationType::eOAIUserListOperationType& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIUserListOperationType::isSet() const {
    
    return m_value_isSet;
}

bool OAIUserListOperationType::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
