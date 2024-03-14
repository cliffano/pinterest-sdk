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

#include "OAIAudienceUpdateOperationType.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIAudienceUpdateOperationType::OAIAudienceUpdateOperationType(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIAudienceUpdateOperationType::OAIAudienceUpdateOperationType() {
    this->initializeModel();
}

OAIAudienceUpdateOperationType::~OAIAudienceUpdateOperationType() {}

void OAIAudienceUpdateOperationType::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIAudienceUpdateOperationType::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIAudienceUpdateOperationType::fromJson(QString jsonString) {
    
    if ( jsonString.compare("UPDATE", Qt::CaseInsensitive) == 0) {
        m_value = eOAIAudienceUpdateOperationType::UPDATE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("REMOVE", Qt::CaseInsensitive) == 0) {
        m_value = eOAIAudienceUpdateOperationType::REMOVE;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIAudienceUpdateOperationType::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIAudienceUpdateOperationType::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIAudienceUpdateOperationType::UPDATE:
            val = "UPDATE";
            break;
        case eOAIAudienceUpdateOperationType::REMOVE:
            val = "REMOVE";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIAudienceUpdateOperationType::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIAudienceUpdateOperationType::eOAIAudienceUpdateOperationType OAIAudienceUpdateOperationType::getValue() const {
    return m_value;
}

void OAIAudienceUpdateOperationType::setValue(const OAIAudienceUpdateOperationType::eOAIAudienceUpdateOperationType& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIAudienceUpdateOperationType::isSet() const {
    
    return m_value_isSet;
}

bool OAIAudienceUpdateOperationType::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI