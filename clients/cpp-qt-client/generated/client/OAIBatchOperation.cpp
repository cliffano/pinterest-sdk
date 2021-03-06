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

#include "OAIBatchOperation.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIBatchOperation::OAIBatchOperation(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIBatchOperation::OAIBatchOperation() {
    this->initializeModel();
}

OAIBatchOperation::~OAIBatchOperation() {}

void OAIBatchOperation::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIBatchOperation::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIBatchOperation::fromJson(QString jsonString) {
    
    if ( jsonString.compare("UPDATE", Qt::CaseInsensitive) == 0) {
        m_value = eOAIBatchOperation::UPDATE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("CREATE", Qt::CaseInsensitive) == 0) {
        m_value = eOAIBatchOperation::CREATE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("UPSERT", Qt::CaseInsensitive) == 0) {
        m_value = eOAIBatchOperation::UPSERT;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIBatchOperation::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIBatchOperation::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIBatchOperation::UPDATE:
            val = "UPDATE";
            break;
        case eOAIBatchOperation::CREATE:
            val = "CREATE";
            break;
        case eOAIBatchOperation::UPSERT:
            val = "UPSERT";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIBatchOperation::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIBatchOperation::eOAIBatchOperation OAIBatchOperation::getValue() const {
    return m_value;
}

void OAIBatchOperation::setValue(const OAIBatchOperation::eOAIBatchOperation& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIBatchOperation::isSet() const {
    
    return m_value_isSet;
}

bool OAIBatchOperation::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
