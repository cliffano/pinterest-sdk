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

#include "OAITrendType.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAITrendType::OAITrendType(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAITrendType::OAITrendType() {
    this->initializeModel();
}

OAITrendType::~OAITrendType() {}

void OAITrendType::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAITrendType::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAITrendType::fromJson(QString jsonString) {
    
    if ( jsonString.compare("growing", Qt::CaseInsensitive) == 0) {
        m_value = eOAITrendType::GROWING;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("monthly", Qt::CaseInsensitive) == 0) {
        m_value = eOAITrendType::MONTHLY;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("yearly", Qt::CaseInsensitive) == 0) {
        m_value = eOAITrendType::YEARLY;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("seasonal", Qt::CaseInsensitive) == 0) {
        m_value = eOAITrendType::SEASONAL;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAITrendType::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAITrendType::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAITrendType::GROWING:
            val = "growing";
            break;
        case eOAITrendType::MONTHLY:
            val = "monthly";
            break;
        case eOAITrendType::YEARLY:
            val = "yearly";
            break;
        case eOAITrendType::SEASONAL:
            val = "seasonal";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAITrendType::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAITrendType::eOAITrendType OAITrendType::getValue() const {
    return m_value;
}

void OAITrendType::setValue(const OAITrendType::eOAITrendType& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAITrendType::isSet() const {
    
    return m_value_isSet;
}

bool OAITrendType::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
