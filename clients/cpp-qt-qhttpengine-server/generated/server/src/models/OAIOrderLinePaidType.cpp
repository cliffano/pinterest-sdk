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

#include "OAIOrderLinePaidType.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIOrderLinePaidType::OAIOrderLinePaidType(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIOrderLinePaidType::OAIOrderLinePaidType() {
    this->initializeModel();
}

OAIOrderLinePaidType::~OAIOrderLinePaidType() {}

void OAIOrderLinePaidType::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIOrderLinePaidType::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIOrderLinePaidType::fromJson(QString jsonString) {
    
    if ( jsonString.compare("PAID", Qt::CaseInsensitive) == 0) {
        m_value = eOAIOrderLinePaidType::PAID;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("BONUS", Qt::CaseInsensitive) == 0) {
        m_value = eOAIOrderLinePaidType::BONUS;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("MAKE_GOOD", Qt::CaseInsensitive) == 0) {
        m_value = eOAIOrderLinePaidType::MAKE_GOOD;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("TEST", Qt::CaseInsensitive) == 0) {
        m_value = eOAIOrderLinePaidType::TEST;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("null", Qt::CaseInsensitive) == 0) {
        m_value = eOAIOrderLinePaidType::r_NULL;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIOrderLinePaidType::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIOrderLinePaidType::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIOrderLinePaidType::PAID:
            val = "PAID";
            break;
        case eOAIOrderLinePaidType::BONUS:
            val = "BONUS";
            break;
        case eOAIOrderLinePaidType::MAKE_GOOD:
            val = "MAKE_GOOD";
            break;
        case eOAIOrderLinePaidType::TEST:
            val = "TEST";
            break;
        case eOAIOrderLinePaidType::r_NULL:
            val = "null";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIOrderLinePaidType::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIOrderLinePaidType::eOAIOrderLinePaidType OAIOrderLinePaidType::getValue() const {
    return m_value;
}

void OAIOrderLinePaidType::setValue(const OAIOrderLinePaidType::eOAIOrderLinePaidType& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIOrderLinePaidType::isSet() const {
    
    return m_value_isSet;
}

bool OAIOrderLinePaidType::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
