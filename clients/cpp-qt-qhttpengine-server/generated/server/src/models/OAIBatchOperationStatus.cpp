/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIBatchOperationStatus.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIBatchOperationStatus::OAIBatchOperationStatus(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIBatchOperationStatus::OAIBatchOperationStatus() {
    this->initializeModel();
}

OAIBatchOperationStatus::~OAIBatchOperationStatus() {}

void OAIBatchOperationStatus::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIBatchOperationStatus::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIBatchOperationStatus::fromJson(QString jsonString) {
    
    if ( jsonString.compare("PROCESSING", Qt::CaseInsensitive) == 0) {
        m_value = eOAIBatchOperationStatus::PROCESSING;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("COMPLETED", Qt::CaseInsensitive) == 0) {
        m_value = eOAIBatchOperationStatus::COMPLETED;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIBatchOperationStatus::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIBatchOperationStatus::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIBatchOperationStatus::PROCESSING:
            val = "PROCESSING";
            break;
        case eOAIBatchOperationStatus::COMPLETED:
            val = "COMPLETED";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIBatchOperationStatus::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIBatchOperationStatus::eOAIBatchOperationStatus OAIBatchOperationStatus::getValue() const {
    return m_value;
}

void OAIBatchOperationStatus::setValue(const OAIBatchOperationStatus::eOAIBatchOperationStatus& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIBatchOperationStatus::isSet() const {
    
    return m_value_isSet;
}

bool OAIBatchOperationStatus::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
