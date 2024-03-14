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

#include "OAICatalogsFeedProcessingStatus.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICatalogsFeedProcessingStatus::OAICatalogsFeedProcessingStatus(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICatalogsFeedProcessingStatus::OAICatalogsFeedProcessingStatus() {
    this->initializeModel();
}

OAICatalogsFeedProcessingStatus::~OAICatalogsFeedProcessingStatus() {}

void OAICatalogsFeedProcessingStatus::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAICatalogsFeedProcessingStatus::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAICatalogsFeedProcessingStatus::fromJson(QString jsonString) {
    
    if ( jsonString.compare("COMPLETED", Qt::CaseInsensitive) == 0) {
        m_value = eOAICatalogsFeedProcessingStatus::COMPLETED;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("COMPLETED_EARLY", Qt::CaseInsensitive) == 0) {
        m_value = eOAICatalogsFeedProcessingStatus::COMPLETED_EARLY;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("DISAPPROVED", Qt::CaseInsensitive) == 0) {
        m_value = eOAICatalogsFeedProcessingStatus::DISAPPROVED;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("FAILED", Qt::CaseInsensitive) == 0) {
        m_value = eOAICatalogsFeedProcessingStatus::FAILED;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("PROCESSING", Qt::CaseInsensitive) == 0) {
        m_value = eOAICatalogsFeedProcessingStatus::PROCESSING;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("QUEUED_FOR_PROCESSING", Qt::CaseInsensitive) == 0) {
        m_value = eOAICatalogsFeedProcessingStatus::QUEUED_FOR_PROCESSING;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("UNDER_APPEAL", Qt::CaseInsensitive) == 0) {
        m_value = eOAICatalogsFeedProcessingStatus::UNDER_APPEAL;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("UNDER_REVIEW", Qt::CaseInsensitive) == 0) {
        m_value = eOAICatalogsFeedProcessingStatus::UNDER_REVIEW;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAICatalogsFeedProcessingStatus::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAICatalogsFeedProcessingStatus::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAICatalogsFeedProcessingStatus::COMPLETED:
            val = "COMPLETED";
            break;
        case eOAICatalogsFeedProcessingStatus::COMPLETED_EARLY:
            val = "COMPLETED_EARLY";
            break;
        case eOAICatalogsFeedProcessingStatus::DISAPPROVED:
            val = "DISAPPROVED";
            break;
        case eOAICatalogsFeedProcessingStatus::FAILED:
            val = "FAILED";
            break;
        case eOAICatalogsFeedProcessingStatus::PROCESSING:
            val = "PROCESSING";
            break;
        case eOAICatalogsFeedProcessingStatus::QUEUED_FOR_PROCESSING:
            val = "QUEUED_FOR_PROCESSING";
            break;
        case eOAICatalogsFeedProcessingStatus::UNDER_APPEAL:
            val = "UNDER_APPEAL";
            break;
        case eOAICatalogsFeedProcessingStatus::UNDER_REVIEW:
            val = "UNDER_REVIEW";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAICatalogsFeedProcessingStatus::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAICatalogsFeedProcessingStatus::eOAICatalogsFeedProcessingStatus OAICatalogsFeedProcessingStatus::getValue() const {
    return m_value;
}

void OAICatalogsFeedProcessingStatus::setValue(const OAICatalogsFeedProcessingStatus::eOAICatalogsFeedProcessingStatus& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAICatalogsFeedProcessingStatus::isSet() const {
    
    return m_value_isSet;
}

bool OAICatalogsFeedProcessingStatus::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
