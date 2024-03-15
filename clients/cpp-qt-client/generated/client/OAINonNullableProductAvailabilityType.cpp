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

#include "OAINonNullableProductAvailabilityType.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAINonNullableProductAvailabilityType::OAINonNullableProductAvailabilityType(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAINonNullableProductAvailabilityType::OAINonNullableProductAvailabilityType() {
    this->initializeModel();
}

OAINonNullableProductAvailabilityType::~OAINonNullableProductAvailabilityType() {}

void OAINonNullableProductAvailabilityType::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAINonNullableProductAvailabilityType::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAINonNullableProductAvailabilityType::fromJson(QString jsonString) {
    
    if ( jsonString.compare("IN_STOCK", Qt::CaseInsensitive) == 0) {
        m_value = eOAINonNullableProductAvailabilityType::IN_STOCK;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("OUT_OF_STOCK", Qt::CaseInsensitive) == 0) {
        m_value = eOAINonNullableProductAvailabilityType::OUT_OF_STOCK;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("PREORDER", Qt::CaseInsensitive) == 0) {
        m_value = eOAINonNullableProductAvailabilityType::PREORDER;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAINonNullableProductAvailabilityType::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAINonNullableProductAvailabilityType::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAINonNullableProductAvailabilityType::IN_STOCK:
            val = "IN_STOCK";
            break;
        case eOAINonNullableProductAvailabilityType::OUT_OF_STOCK:
            val = "OUT_OF_STOCK";
            break;
        case eOAINonNullableProductAvailabilityType::PREORDER:
            val = "PREORDER";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAINonNullableProductAvailabilityType::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAINonNullableProductAvailabilityType::eOAINonNullableProductAvailabilityType OAINonNullableProductAvailabilityType::getValue() const {
    return m_value;
}

void OAINonNullableProductAvailabilityType::setValue(const OAINonNullableProductAvailabilityType::eOAINonNullableProductAvailabilityType& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAINonNullableProductAvailabilityType::isSet() const {
    
    return m_value_isSet;
}

bool OAINonNullableProductAvailabilityType::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
