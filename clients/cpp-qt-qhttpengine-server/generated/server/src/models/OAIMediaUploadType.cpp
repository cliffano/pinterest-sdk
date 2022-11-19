/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIMediaUploadType.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIMediaUploadType::OAIMediaUploadType(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIMediaUploadType::OAIMediaUploadType() {
    this->initializeModel();
}

OAIMediaUploadType::~OAIMediaUploadType() {}

void OAIMediaUploadType::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIMediaUploadType::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIMediaUploadType::fromJson(QString jsonString) {
    
    if ( jsonString.compare("video", Qt::CaseInsensitive) == 0) {
        m_value = eOAIMediaUploadType::VIDEO;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIMediaUploadType::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIMediaUploadType::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIMediaUploadType::VIDEO:
            val = "video";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIMediaUploadType::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIMediaUploadType::eOAIMediaUploadType OAIMediaUploadType::getValue() const {
    return m_value;
}

void OAIMediaUploadType::setValue(const OAIMediaUploadType::eOAIMediaUploadType& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIMediaUploadType::isSet() const {
    
    return m_value_isSet;
}

bool OAIMediaUploadType::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
