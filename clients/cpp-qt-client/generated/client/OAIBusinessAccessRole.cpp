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

#include "OAIBusinessAccessRole.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIBusinessAccessRole::OAIBusinessAccessRole(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIBusinessAccessRole::OAIBusinessAccessRole() {
    this->initializeModel();
}

OAIBusinessAccessRole::~OAIBusinessAccessRole() {}

void OAIBusinessAccessRole::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIBusinessAccessRole::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIBusinessAccessRole::fromJson(QString jsonString) {
    
    if ( jsonString.compare("OWNER", Qt::CaseInsensitive) == 0) {
        m_value = eOAIBusinessAccessRole::OWNER;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("ADMIN", Qt::CaseInsensitive) == 0) {
        m_value = eOAIBusinessAccessRole::ADMIN;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("ANALYST", Qt::CaseInsensitive) == 0) {
        m_value = eOAIBusinessAccessRole::ANALYST;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("SOS_READER", Qt::CaseInsensitive) == 0) {
        m_value = eOAIBusinessAccessRole::SOS_READER;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("FINANCE_MANAGER", Qt::CaseInsensitive) == 0) {
        m_value = eOAIBusinessAccessRole::FINANCE_MANAGER;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("AUDIENCE_MANAGER", Qt::CaseInsensitive) == 0) {
        m_value = eOAIBusinessAccessRole::AUDIENCE_MANAGER;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("CAMPAIGN_MANAGER", Qt::CaseInsensitive) == 0) {
        m_value = eOAIBusinessAccessRole::CAMPAIGN_MANAGER;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("CATALOGS_MANAGER", Qt::CaseInsensitive) == 0) {
        m_value = eOAIBusinessAccessRole::CATALOGS_MANAGER;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("RESTRICTED_OWNER", Qt::CaseInsensitive) == 0) {
        m_value = eOAIBusinessAccessRole::RESTRICTED_OWNER;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("PROFILE_MANAGER", Qt::CaseInsensitive) == 0) {
        m_value = eOAIBusinessAccessRole::PROFILE_MANAGER;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("PROFILE_PUBLISHER", Qt::CaseInsensitive) == 0) {
        m_value = eOAIBusinessAccessRole::PROFILE_PUBLISHER;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("RESOURCE_PINNER_LIST_OWNER", Qt::CaseInsensitive) == 0) {
        m_value = eOAIBusinessAccessRole::RESOURCE_PINNER_LIST_OWNER;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("RESOURCE_PINNER_LIST_READER", Qt::CaseInsensitive) == 0) {
        m_value = eOAIBusinessAccessRole::RESOURCE_PINNER_LIST_READER;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("BIZ_PINNER_LIST_SHARER", Qt::CaseInsensitive) == 0) {
        m_value = eOAIBusinessAccessRole::BIZ_PINNER_LIST_SHARER;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("RESOURCE_CONVERSION_TAGS_READER", Qt::CaseInsensitive) == 0) {
        m_value = eOAIBusinessAccessRole::RESOURCE_CONVERSION_TAGS_READER;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIBusinessAccessRole::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIBusinessAccessRole::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIBusinessAccessRole::OWNER:
            val = "OWNER";
            break;
        case eOAIBusinessAccessRole::ADMIN:
            val = "ADMIN";
            break;
        case eOAIBusinessAccessRole::ANALYST:
            val = "ANALYST";
            break;
        case eOAIBusinessAccessRole::SOS_READER:
            val = "SOS_READER";
            break;
        case eOAIBusinessAccessRole::FINANCE_MANAGER:
            val = "FINANCE_MANAGER";
            break;
        case eOAIBusinessAccessRole::AUDIENCE_MANAGER:
            val = "AUDIENCE_MANAGER";
            break;
        case eOAIBusinessAccessRole::CAMPAIGN_MANAGER:
            val = "CAMPAIGN_MANAGER";
            break;
        case eOAIBusinessAccessRole::CATALOGS_MANAGER:
            val = "CATALOGS_MANAGER";
            break;
        case eOAIBusinessAccessRole::RESTRICTED_OWNER:
            val = "RESTRICTED_OWNER";
            break;
        case eOAIBusinessAccessRole::PROFILE_MANAGER:
            val = "PROFILE_MANAGER";
            break;
        case eOAIBusinessAccessRole::PROFILE_PUBLISHER:
            val = "PROFILE_PUBLISHER";
            break;
        case eOAIBusinessAccessRole::RESOURCE_PINNER_LIST_OWNER:
            val = "RESOURCE_PINNER_LIST_OWNER";
            break;
        case eOAIBusinessAccessRole::RESOURCE_PINNER_LIST_READER:
            val = "RESOURCE_PINNER_LIST_READER";
            break;
        case eOAIBusinessAccessRole::BIZ_PINNER_LIST_SHARER:
            val = "BIZ_PINNER_LIST_SHARER";
            break;
        case eOAIBusinessAccessRole::RESOURCE_CONVERSION_TAGS_READER:
            val = "RESOURCE_CONVERSION_TAGS_READER";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIBusinessAccessRole::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIBusinessAccessRole::eOAIBusinessAccessRole OAIBusinessAccessRole::getValue() const {
    return m_value;
}

void OAIBusinessAccessRole::setValue(const OAIBusinessAccessRole::eOAIBusinessAccessRole& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIBusinessAccessRole::isSet() const {
    
    return m_value_isSet;
}

bool OAIBusinessAccessRole::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
