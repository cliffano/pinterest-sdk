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

#include "OAITargetingAdvertiserCountry.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAITargetingAdvertiserCountry::OAITargetingAdvertiserCountry(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAITargetingAdvertiserCountry::OAITargetingAdvertiserCountry() {
    this->initializeModel();
}

OAITargetingAdvertiserCountry::~OAITargetingAdvertiserCountry() {}

void OAITargetingAdvertiserCountry::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAITargetingAdvertiserCountry::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAITargetingAdvertiserCountry::fromJson(QString jsonString) {
    
    if ( jsonString.compare("US", Qt::CaseInsensitive) == 0) {
        m_value = eOAITargetingAdvertiserCountry::US;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("GB", Qt::CaseInsensitive) == 0) {
        m_value = eOAITargetingAdvertiserCountry::GB;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("CA", Qt::CaseInsensitive) == 0) {
        m_value = eOAITargetingAdvertiserCountry::CA;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("IE", Qt::CaseInsensitive) == 0) {
        m_value = eOAITargetingAdvertiserCountry::IE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("AU", Qt::CaseInsensitive) == 0) {
        m_value = eOAITargetingAdvertiserCountry::AU;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("NZ", Qt::CaseInsensitive) == 0) {
        m_value = eOAITargetingAdvertiserCountry::NZ;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("FR", Qt::CaseInsensitive) == 0) {
        m_value = eOAITargetingAdvertiserCountry::FR;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("SE", Qt::CaseInsensitive) == 0) {
        m_value = eOAITargetingAdvertiserCountry::SE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("IL", Qt::CaseInsensitive) == 0) {
        m_value = eOAITargetingAdvertiserCountry::IL;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("DE", Qt::CaseInsensitive) == 0) {
        m_value = eOAITargetingAdvertiserCountry::DE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("AT", Qt::CaseInsensitive) == 0) {
        m_value = eOAITargetingAdvertiserCountry::AT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("IT", Qt::CaseInsensitive) == 0) {
        m_value = eOAITargetingAdvertiserCountry::IT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("ES", Qt::CaseInsensitive) == 0) {
        m_value = eOAITargetingAdvertiserCountry::ES;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("NL", Qt::CaseInsensitive) == 0) {
        m_value = eOAITargetingAdvertiserCountry::NL;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("BE", Qt::CaseInsensitive) == 0) {
        m_value = eOAITargetingAdvertiserCountry::BE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("PT", Qt::CaseInsensitive) == 0) {
        m_value = eOAITargetingAdvertiserCountry::PT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("CH", Qt::CaseInsensitive) == 0) {
        m_value = eOAITargetingAdvertiserCountry::CH;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("HK", Qt::CaseInsensitive) == 0) {
        m_value = eOAITargetingAdvertiserCountry::HK;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("JP", Qt::CaseInsensitive) == 0) {
        m_value = eOAITargetingAdvertiserCountry::JP;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("KR", Qt::CaseInsensitive) == 0) {
        m_value = eOAITargetingAdvertiserCountry::KR;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("SG", Qt::CaseInsensitive) == 0) {
        m_value = eOAITargetingAdvertiserCountry::SG;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("NO", Qt::CaseInsensitive) == 0) {
        m_value = eOAITargetingAdvertiserCountry::NO;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("DK", Qt::CaseInsensitive) == 0) {
        m_value = eOAITargetingAdvertiserCountry::DK;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("FI", Qt::CaseInsensitive) == 0) {
        m_value = eOAITargetingAdvertiserCountry::FI;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("CY", Qt::CaseInsensitive) == 0) {
        m_value = eOAITargetingAdvertiserCountry::CY;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("LU", Qt::CaseInsensitive) == 0) {
        m_value = eOAITargetingAdvertiserCountry::LU;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("MT", Qt::CaseInsensitive) == 0) {
        m_value = eOAITargetingAdvertiserCountry::MT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("PL", Qt::CaseInsensitive) == 0) {
        m_value = eOAITargetingAdvertiserCountry::PL;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("RO", Qt::CaseInsensitive) == 0) {
        m_value = eOAITargetingAdvertiserCountry::RO;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("HU", Qt::CaseInsensitive) == 0) {
        m_value = eOAITargetingAdvertiserCountry::HU;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("CZ", Qt::CaseInsensitive) == 0) {
        m_value = eOAITargetingAdvertiserCountry::CZ;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("GR", Qt::CaseInsensitive) == 0) {
        m_value = eOAITargetingAdvertiserCountry::GR;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("SK", Qt::CaseInsensitive) == 0) {
        m_value = eOAITargetingAdvertiserCountry::SK;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("BR", Qt::CaseInsensitive) == 0) {
        m_value = eOAITargetingAdvertiserCountry::BR;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("MX", Qt::CaseInsensitive) == 0) {
        m_value = eOAITargetingAdvertiserCountry::MX;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("AR", Qt::CaseInsensitive) == 0) {
        m_value = eOAITargetingAdvertiserCountry::AR;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("CL", Qt::CaseInsensitive) == 0) {
        m_value = eOAITargetingAdvertiserCountry::CL;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("CO", Qt::CaseInsensitive) == 0) {
        m_value = eOAITargetingAdvertiserCountry::CO;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAITargetingAdvertiserCountry::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAITargetingAdvertiserCountry::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAITargetingAdvertiserCountry::US:
            val = "US";
            break;
        case eOAITargetingAdvertiserCountry::GB:
            val = "GB";
            break;
        case eOAITargetingAdvertiserCountry::CA:
            val = "CA";
            break;
        case eOAITargetingAdvertiserCountry::IE:
            val = "IE";
            break;
        case eOAITargetingAdvertiserCountry::AU:
            val = "AU";
            break;
        case eOAITargetingAdvertiserCountry::NZ:
            val = "NZ";
            break;
        case eOAITargetingAdvertiserCountry::FR:
            val = "FR";
            break;
        case eOAITargetingAdvertiserCountry::SE:
            val = "SE";
            break;
        case eOAITargetingAdvertiserCountry::IL:
            val = "IL";
            break;
        case eOAITargetingAdvertiserCountry::DE:
            val = "DE";
            break;
        case eOAITargetingAdvertiserCountry::AT:
            val = "AT";
            break;
        case eOAITargetingAdvertiserCountry::IT:
            val = "IT";
            break;
        case eOAITargetingAdvertiserCountry::ES:
            val = "ES";
            break;
        case eOAITargetingAdvertiserCountry::NL:
            val = "NL";
            break;
        case eOAITargetingAdvertiserCountry::BE:
            val = "BE";
            break;
        case eOAITargetingAdvertiserCountry::PT:
            val = "PT";
            break;
        case eOAITargetingAdvertiserCountry::CH:
            val = "CH";
            break;
        case eOAITargetingAdvertiserCountry::HK:
            val = "HK";
            break;
        case eOAITargetingAdvertiserCountry::JP:
            val = "JP";
            break;
        case eOAITargetingAdvertiserCountry::KR:
            val = "KR";
            break;
        case eOAITargetingAdvertiserCountry::SG:
            val = "SG";
            break;
        case eOAITargetingAdvertiserCountry::NO:
            val = "NO";
            break;
        case eOAITargetingAdvertiserCountry::DK:
            val = "DK";
            break;
        case eOAITargetingAdvertiserCountry::FI:
            val = "FI";
            break;
        case eOAITargetingAdvertiserCountry::CY:
            val = "CY";
            break;
        case eOAITargetingAdvertiserCountry::LU:
            val = "LU";
            break;
        case eOAITargetingAdvertiserCountry::MT:
            val = "MT";
            break;
        case eOAITargetingAdvertiserCountry::PL:
            val = "PL";
            break;
        case eOAITargetingAdvertiserCountry::RO:
            val = "RO";
            break;
        case eOAITargetingAdvertiserCountry::HU:
            val = "HU";
            break;
        case eOAITargetingAdvertiserCountry::CZ:
            val = "CZ";
            break;
        case eOAITargetingAdvertiserCountry::GR:
            val = "GR";
            break;
        case eOAITargetingAdvertiserCountry::SK:
            val = "SK";
            break;
        case eOAITargetingAdvertiserCountry::BR:
            val = "BR";
            break;
        case eOAITargetingAdvertiserCountry::MX:
            val = "MX";
            break;
        case eOAITargetingAdvertiserCountry::AR:
            val = "AR";
            break;
        case eOAITargetingAdvertiserCountry::CL:
            val = "CL";
            break;
        case eOAITargetingAdvertiserCountry::CO:
            val = "CO";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAITargetingAdvertiserCountry::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAITargetingAdvertiserCountry::eOAITargetingAdvertiserCountry OAITargetingAdvertiserCountry::getValue() const {
    return m_value;
}

void OAITargetingAdvertiserCountry::setValue(const OAITargetingAdvertiserCountry::eOAITargetingAdvertiserCountry& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAITargetingAdvertiserCountry::isSet() const {
    
    return m_value_isSet;
}

bool OAITargetingAdvertiserCountry::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
