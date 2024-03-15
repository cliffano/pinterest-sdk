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

#include "OAIEnhancedMatchStatusType.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEnhancedMatchStatusType::OAIEnhancedMatchStatusType(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEnhancedMatchStatusType::OAIEnhancedMatchStatusType() {
    this->initializeModel();
}

OAIEnhancedMatchStatusType::~OAIEnhancedMatchStatusType() {}

void OAIEnhancedMatchStatusType::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIEnhancedMatchStatusType::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIEnhancedMatchStatusType::fromJson(QString jsonString) {
    
    if ( jsonString.compare("UNKNOWN", Qt::CaseInsensitive) == 0) {
        m_value = eOAIEnhancedMatchStatusType::UNKNOWN;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("NOT_VALIDATED", Qt::CaseInsensitive) == 0) {
        m_value = eOAIEnhancedMatchStatusType::NOT_VALIDATED;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("VALIDATING_IN_PROGRESS", Qt::CaseInsensitive) == 0) {
        m_value = eOAIEnhancedMatchStatusType::VALIDATING_IN_PROGRESS;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("VALIDATION_COMPLETE", Qt::CaseInsensitive) == 0) {
        m_value = eOAIEnhancedMatchStatusType::VALIDATION_COMPLETE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("null", Qt::CaseInsensitive) == 0) {
        m_value = eOAIEnhancedMatchStatusType::r_NULL;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIEnhancedMatchStatusType::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIEnhancedMatchStatusType::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIEnhancedMatchStatusType::UNKNOWN:
            val = "UNKNOWN";
            break;
        case eOAIEnhancedMatchStatusType::NOT_VALIDATED:
            val = "NOT_VALIDATED";
            break;
        case eOAIEnhancedMatchStatusType::VALIDATING_IN_PROGRESS:
            val = "VALIDATING_IN_PROGRESS";
            break;
        case eOAIEnhancedMatchStatusType::VALIDATION_COMPLETE:
            val = "VALIDATION_COMPLETE";
            break;
        case eOAIEnhancedMatchStatusType::r_NULL:
            val = "null";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIEnhancedMatchStatusType::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIEnhancedMatchStatusType::eOAIEnhancedMatchStatusType OAIEnhancedMatchStatusType::getValue() const {
    return m_value;
}

void OAIEnhancedMatchStatusType::setValue(const OAIEnhancedMatchStatusType::eOAIEnhancedMatchStatusType& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIEnhancedMatchStatusType::isSet() const {
    
    return m_value_isSet;
}

bool OAIEnhancedMatchStatusType::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI