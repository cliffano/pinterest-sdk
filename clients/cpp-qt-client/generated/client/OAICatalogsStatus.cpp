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

#include "OAICatalogsStatus.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICatalogsStatus::OAICatalogsStatus(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICatalogsStatus::OAICatalogsStatus() {
    this->initializeModel();
}

OAICatalogsStatus::~OAICatalogsStatus() {}

void OAICatalogsStatus::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAICatalogsStatus::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAICatalogsStatus::fromJson(QString jsonString) {
    
    if ( jsonString.compare("ACTIVE", Qt::CaseInsensitive) == 0) {
        m_value = eOAICatalogsStatus::ACTIVE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("INACTIVE", Qt::CaseInsensitive) == 0) {
        m_value = eOAICatalogsStatus::INACTIVE;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAICatalogsStatus::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAICatalogsStatus::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAICatalogsStatus::ACTIVE:
            val = "ACTIVE";
            break;
        case eOAICatalogsStatus::INACTIVE:
            val = "INACTIVE";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAICatalogsStatus::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAICatalogsStatus::eOAICatalogsStatus OAICatalogsStatus::getValue() const {
    return m_value;
}

void OAICatalogsStatus::setValue(const OAICatalogsStatus::eOAICatalogsStatus& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAICatalogsStatus::isSet() const {
    
    return m_value_isSet;
}

bool OAICatalogsStatus::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
