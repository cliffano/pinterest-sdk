/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIActionType.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIActionType::OAIActionType(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIActionType::OAIActionType() {
    this->initializeModel();
}

OAIActionType::~OAIActionType() {}

void OAIActionType::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIActionType::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIActionType::fromJson(QString jsonString) {
    
    if ( jsonString.compare("CLICKTHROUGH", Qt::CaseInsensitive) == 0) {
        m_value = eOAIActionType::CLICKTHROUGH;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("IMPRESSION", Qt::CaseInsensitive) == 0) {
        m_value = eOAIActionType::IMPRESSION;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("VIDEO_V_50_MRC", Qt::CaseInsensitive) == 0) {
        m_value = eOAIActionType::VIDEO_V_50_MRC;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("BILLABLE_ENGAGEMENT", Qt::CaseInsensitive) == 0) {
        m_value = eOAIActionType::BILLABLE_ENGAGEMENT;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIActionType::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIActionType::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIActionType::CLICKTHROUGH:
            val = "CLICKTHROUGH";
            break;
        case eOAIActionType::IMPRESSION:
            val = "IMPRESSION";
            break;
        case eOAIActionType::VIDEO_V_50_MRC:
            val = "VIDEO_V_50_MRC";
            break;
        case eOAIActionType::BILLABLE_ENGAGEMENT:
            val = "BILLABLE_ENGAGEMENT";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIActionType::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIActionType::eOAIActionType OAIActionType::getValue() const {
    return m_value;
}

void OAIActionType::setValue(const OAIActionType::eOAIActionType& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIActionType::isSet() const {
    
    return m_value_isSet;
}

bool OAIActionType::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
