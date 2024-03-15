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

#include "OAIGridClickType.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIGridClickType::OAIGridClickType(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIGridClickType::OAIGridClickType() {
    this->initializeModel();
}

OAIGridClickType::~OAIGridClickType() {}

void OAIGridClickType::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIGridClickType::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIGridClickType::fromJson(QString jsonString) {
    
    if ( jsonString.compare("CLOSEUP", Qt::CaseInsensitive) == 0) {
        m_value = eOAIGridClickType::CLOSEUP;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("DIRECT_TO_DESTINATION", Qt::CaseInsensitive) == 0) {
        m_value = eOAIGridClickType::DIRECT_TO_DESTINATION;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIGridClickType::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIGridClickType::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIGridClickType::CLOSEUP:
            val = "CLOSEUP";
            break;
        case eOAIGridClickType::DIRECT_TO_DESTINATION:
            val = "DIRECT_TO_DESTINATION";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIGridClickType::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIGridClickType::eOAIGridClickType OAIGridClickType::getValue() const {
    return m_value;
}

void OAIGridClickType::setValue(const OAIGridClickType::eOAIGridClickType& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIGridClickType::isSet() const {
    
    return m_value_isSet;
}

bool OAIGridClickType::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
