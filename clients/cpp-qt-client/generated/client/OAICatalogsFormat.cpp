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

#include "OAICatalogsFormat.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICatalogsFormat::OAICatalogsFormat(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICatalogsFormat::OAICatalogsFormat() {
    this->initializeModel();
}

OAICatalogsFormat::~OAICatalogsFormat() {}

void OAICatalogsFormat::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAICatalogsFormat::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAICatalogsFormat::fromJson(QString jsonString) {
    
    if ( jsonString.compare("TSV", Qt::CaseInsensitive) == 0) {
        m_value = eOAICatalogsFormat::TSV;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("CSV", Qt::CaseInsensitive) == 0) {
        m_value = eOAICatalogsFormat::CSV;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("XML", Qt::CaseInsensitive) == 0) {
        m_value = eOAICatalogsFormat::XML;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAICatalogsFormat::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAICatalogsFormat::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAICatalogsFormat::TSV:
            val = "TSV";
            break;
        case eOAICatalogsFormat::CSV:
            val = "CSV";
            break;
        case eOAICatalogsFormat::XML:
            val = "XML";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAICatalogsFormat::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAICatalogsFormat::eOAICatalogsFormat OAICatalogsFormat::getValue() const {
    return m_value;
}

void OAICatalogsFormat::setValue(const OAICatalogsFormat::eOAICatalogsFormat& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAICatalogsFormat::isSet() const {
    
    return m_value_isSet;
}

bool OAICatalogsFormat::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
