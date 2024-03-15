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

#include "OAIBulkEntityType.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIBulkEntityType::OAIBulkEntityType(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIBulkEntityType::OAIBulkEntityType() {
    this->initializeModel();
}

OAIBulkEntityType::~OAIBulkEntityType() {}

void OAIBulkEntityType::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIBulkEntityType::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIBulkEntityType::fromJson(QString jsonString) {
    
    if ( jsonString.compare("CAMPAIGN", Qt::CaseInsensitive) == 0) {
        m_value = eOAIBulkEntityType::CAMPAIGN;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("AD_GROUP", Qt::CaseInsensitive) == 0) {
        m_value = eOAIBulkEntityType::AD_GROUP;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("PRODUCT_GROUP", Qt::CaseInsensitive) == 0) {
        m_value = eOAIBulkEntityType::PRODUCT_GROUP;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("AD", Qt::CaseInsensitive) == 0) {
        m_value = eOAIBulkEntityType::AD;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("KEYWORD", Qt::CaseInsensitive) == 0) {
        m_value = eOAIBulkEntityType::KEYWORD;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIBulkEntityType::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIBulkEntityType::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIBulkEntityType::CAMPAIGN:
            val = "CAMPAIGN";
            break;
        case eOAIBulkEntityType::AD_GROUP:
            val = "AD_GROUP";
            break;
        case eOAIBulkEntityType::PRODUCT_GROUP:
            val = "PRODUCT_GROUP";
            break;
        case eOAIBulkEntityType::AD:
            val = "AD";
            break;
        case eOAIBulkEntityType::KEYWORD:
            val = "KEYWORD";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIBulkEntityType::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIBulkEntityType::eOAIBulkEntityType OAIBulkEntityType::getValue() const {
    return m_value;
}

void OAIBulkEntityType::setValue(const OAIBulkEntityType::eOAIBulkEntityType& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIBulkEntityType::isSet() const {
    
    return m_value_isSet;
}

bool OAIBulkEntityType::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
