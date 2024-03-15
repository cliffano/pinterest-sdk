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

#include "OAICampaignSummaryStatus.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICampaignSummaryStatus::OAICampaignSummaryStatus(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICampaignSummaryStatus::OAICampaignSummaryStatus() {
    this->initializeModel();
}

OAICampaignSummaryStatus::~OAICampaignSummaryStatus() {}

void OAICampaignSummaryStatus::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAICampaignSummaryStatus::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAICampaignSummaryStatus::fromJson(QString jsonString) {
    
    if ( jsonString.compare("RUNNING", Qt::CaseInsensitive) == 0) {
        m_value = eOAICampaignSummaryStatus::RUNNING;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("PAUSED", Qt::CaseInsensitive) == 0) {
        m_value = eOAICampaignSummaryStatus::PAUSED;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("NOT_STARTED", Qt::CaseInsensitive) == 0) {
        m_value = eOAICampaignSummaryStatus::NOT_STARTED;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("COMPLETED", Qt::CaseInsensitive) == 0) {
        m_value = eOAICampaignSummaryStatus::COMPLETED;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("ADVERTISER_DISABLED", Qt::CaseInsensitive) == 0) {
        m_value = eOAICampaignSummaryStatus::ADVERTISER_DISABLED;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("ARCHIVED", Qt::CaseInsensitive) == 0) {
        m_value = eOAICampaignSummaryStatus::ARCHIVED;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("DRAFT", Qt::CaseInsensitive) == 0) {
        m_value = eOAICampaignSummaryStatus::DRAFT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("DELETED_DRAFT", Qt::CaseInsensitive) == 0) {
        m_value = eOAICampaignSummaryStatus::DELETED_DRAFT;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAICampaignSummaryStatus::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAICampaignSummaryStatus::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAICampaignSummaryStatus::RUNNING:
            val = "RUNNING";
            break;
        case eOAICampaignSummaryStatus::PAUSED:
            val = "PAUSED";
            break;
        case eOAICampaignSummaryStatus::NOT_STARTED:
            val = "NOT_STARTED";
            break;
        case eOAICampaignSummaryStatus::COMPLETED:
            val = "COMPLETED";
            break;
        case eOAICampaignSummaryStatus::ADVERTISER_DISABLED:
            val = "ADVERTISER_DISABLED";
            break;
        case eOAICampaignSummaryStatus::ARCHIVED:
            val = "ARCHIVED";
            break;
        case eOAICampaignSummaryStatus::DRAFT:
            val = "DRAFT";
            break;
        case eOAICampaignSummaryStatus::DELETED_DRAFT:
            val = "DELETED_DRAFT";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAICampaignSummaryStatus::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAICampaignSummaryStatus::eOAICampaignSummaryStatus OAICampaignSummaryStatus::getValue() const {
    return m_value;
}

void OAICampaignSummaryStatus::setValue(const OAICampaignSummaryStatus::eOAICampaignSummaryStatus& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAICampaignSummaryStatus::isSet() const {
    
    return m_value_isSet;
}

bool OAICampaignSummaryStatus::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
