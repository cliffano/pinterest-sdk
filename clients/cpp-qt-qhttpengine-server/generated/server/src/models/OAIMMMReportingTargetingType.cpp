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

#include "OAIMMMReportingTargetingType.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIMMMReportingTargetingType::OAIMMMReportingTargetingType(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIMMMReportingTargetingType::OAIMMMReportingTargetingType() {
    this->initializeModel();
}

OAIMMMReportingTargetingType::~OAIMMMReportingTargetingType() {}

void OAIMMMReportingTargetingType::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIMMMReportingTargetingType::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIMMMReportingTargetingType::fromJson(QString jsonString) {
    
    if ( jsonString.compare("APPTYPE", Qt::CaseInsensitive) == 0) {
        m_value = eOAIMMMReportingTargetingType::APPTYPE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("COUNTRY", Qt::CaseInsensitive) == 0) {
        m_value = eOAIMMMReportingTargetingType::COUNTRY;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("CREATIVE_TYPE", Qt::CaseInsensitive) == 0) {
        m_value = eOAIMMMReportingTargetingType::CREATIVE_TYPE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("GENDER", Qt::CaseInsensitive) == 0) {
        m_value = eOAIMMMReportingTargetingType::GENDER;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("LOCATION", Qt::CaseInsensitive) == 0) {
        m_value = eOAIMMMReportingTargetingType::LOCATION;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIMMMReportingTargetingType::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIMMMReportingTargetingType::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIMMMReportingTargetingType::APPTYPE:
            val = "APPTYPE";
            break;
        case eOAIMMMReportingTargetingType::COUNTRY:
            val = "COUNTRY";
            break;
        case eOAIMMMReportingTargetingType::CREATIVE_TYPE:
            val = "CREATIVE_TYPE";
            break;
        case eOAIMMMReportingTargetingType::GENDER:
            val = "GENDER";
            break;
        case eOAIMMMReportingTargetingType::LOCATION:
            val = "LOCATION";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIMMMReportingTargetingType::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIMMMReportingTargetingType::eOAIMMMReportingTargetingType OAIMMMReportingTargetingType::getValue() const {
    return m_value;
}

void OAIMMMReportingTargetingType::setValue(const OAIMMMReportingTargetingType::eOAIMMMReportingTargetingType& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIMMMReportingTargetingType::isSet() const {
    
    return m_value_isSet;
}

bool OAIMMMReportingTargetingType::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
