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

#include "OAIObjectiveType.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIObjectiveType::OAIObjectiveType(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIObjectiveType::OAIObjectiveType() {
    this->initializeModel();
}

OAIObjectiveType::~OAIObjectiveType() {}

void OAIObjectiveType::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIObjectiveType::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIObjectiveType::fromJson(QString jsonString) {
    
    if ( jsonString.compare("AWARENESS", Qt::CaseInsensitive) == 0) {
        m_value = eOAIObjectiveType::AWARENESS;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("CONSIDERATION", Qt::CaseInsensitive) == 0) {
        m_value = eOAIObjectiveType::CONSIDERATION;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("VIDEO_VIEW", Qt::CaseInsensitive) == 0) {
        m_value = eOAIObjectiveType::VIDEO_VIEW;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("WEB_CONVERSION", Qt::CaseInsensitive) == 0) {
        m_value = eOAIObjectiveType::WEB_CONVERSION;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("CATALOG_SALES", Qt::CaseInsensitive) == 0) {
        m_value = eOAIObjectiveType::CATALOG_SALES;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("WEB_SESSIONS", Qt::CaseInsensitive) == 0) {
        m_value = eOAIObjectiveType::WEB_SESSIONS;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIObjectiveType::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIObjectiveType::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIObjectiveType::AWARENESS:
            val = "AWARENESS";
            break;
        case eOAIObjectiveType::CONSIDERATION:
            val = "CONSIDERATION";
            break;
        case eOAIObjectiveType::VIDEO_VIEW:
            val = "VIDEO_VIEW";
            break;
        case eOAIObjectiveType::WEB_CONVERSION:
            val = "WEB_CONVERSION";
            break;
        case eOAIObjectiveType::CATALOG_SALES:
            val = "CATALOG_SALES";
            break;
        case eOAIObjectiveType::WEB_SESSIONS:
            val = "WEB_SESSIONS";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIObjectiveType::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIObjectiveType::eOAIObjectiveType OAIObjectiveType::getValue() const {
    return m_value;
}

void OAIObjectiveType::setValue(const OAIObjectiveType::eOAIObjectiveType& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIObjectiveType::isSet() const {
    
    return m_value_isSet;
}

bool OAIObjectiveType::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
