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

#include "OAIPlacementGroupType.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIPlacementGroupType::OAIPlacementGroupType(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIPlacementGroupType::OAIPlacementGroupType() {
    this->initializeModel();
}

OAIPlacementGroupType::~OAIPlacementGroupType() {}

void OAIPlacementGroupType::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIPlacementGroupType::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIPlacementGroupType::fromJson(QString jsonString) {
    
    if ( jsonString.compare("ALL", Qt::CaseInsensitive) == 0) {
        m_value = eOAIPlacementGroupType::ALL;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("SEARCH", Qt::CaseInsensitive) == 0) {
        m_value = eOAIPlacementGroupType::SEARCH;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("BROWSE", Qt::CaseInsensitive) == 0) {
        m_value = eOAIPlacementGroupType::BROWSE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("OTHER", Qt::CaseInsensitive) == 0) {
        m_value = eOAIPlacementGroupType::OTHER;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIPlacementGroupType::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIPlacementGroupType::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIPlacementGroupType::ALL:
            val = "ALL";
            break;
        case eOAIPlacementGroupType::SEARCH:
            val = "SEARCH";
            break;
        case eOAIPlacementGroupType::BROWSE:
            val = "BROWSE";
            break;
        case eOAIPlacementGroupType::OTHER:
            val = "OTHER";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIPlacementGroupType::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIPlacementGroupType::eOAIPlacementGroupType OAIPlacementGroupType::getValue() const {
    return m_value;
}

void OAIPlacementGroupType::setValue(const OAIPlacementGroupType::eOAIPlacementGroupType& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIPlacementGroupType::isSet() const {
    
    return m_value_isSet;
}

bool OAIPlacementGroupType::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
