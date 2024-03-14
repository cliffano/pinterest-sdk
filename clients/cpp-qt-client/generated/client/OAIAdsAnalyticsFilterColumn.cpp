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

#include "OAIAdsAnalyticsFilterColumn.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIAdsAnalyticsFilterColumn::OAIAdsAnalyticsFilterColumn(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIAdsAnalyticsFilterColumn::OAIAdsAnalyticsFilterColumn() {
    this->initializeModel();
}

OAIAdsAnalyticsFilterColumn::~OAIAdsAnalyticsFilterColumn() {}

void OAIAdsAnalyticsFilterColumn::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIAdsAnalyticsFilterColumn::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIAdsAnalyticsFilterColumn::fromJson(QString jsonString) {
    
    if ( jsonString.compare("SPEND_IN_DOLLAR", Qt::CaseInsensitive) == 0) {
        m_value = eOAIAdsAnalyticsFilterColumn::SPEND_IN_DOLLAR;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("TOTAL_IMPRESSION", Qt::CaseInsensitive) == 0) {
        m_value = eOAIAdsAnalyticsFilterColumn::TOTAL_IMPRESSION;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIAdsAnalyticsFilterColumn::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIAdsAnalyticsFilterColumn::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIAdsAnalyticsFilterColumn::SPEND_IN_DOLLAR:
            val = "SPEND_IN_DOLLAR";
            break;
        case eOAIAdsAnalyticsFilterColumn::TOTAL_IMPRESSION:
            val = "TOTAL_IMPRESSION";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIAdsAnalyticsFilterColumn::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIAdsAnalyticsFilterColumn::eOAIAdsAnalyticsFilterColumn OAIAdsAnalyticsFilterColumn::getValue() const {
    return m_value;
}

void OAIAdsAnalyticsFilterColumn::setValue(const OAIAdsAnalyticsFilterColumn::eOAIAdsAnalyticsFilterColumn& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIAdsAnalyticsFilterColumn::isSet() const {
    
    return m_value_isSet;
}

bool OAIAdsAnalyticsFilterColumn::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
