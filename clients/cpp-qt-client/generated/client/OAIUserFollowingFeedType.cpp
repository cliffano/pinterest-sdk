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

#include "OAIUserFollowingFeedType.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIUserFollowingFeedType::OAIUserFollowingFeedType(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIUserFollowingFeedType::OAIUserFollowingFeedType() {
    this->initializeModel();
}

OAIUserFollowingFeedType::~OAIUserFollowingFeedType() {}

void OAIUserFollowingFeedType::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIUserFollowingFeedType::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIUserFollowingFeedType::fromJson(QString jsonString) {
    
    if ( jsonString.compare("ALL", Qt::CaseInsensitive) == 0) {
        m_value = eOAIUserFollowingFeedType::ALL;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("RANKED", Qt::CaseInsensitive) == 0) {
        m_value = eOAIUserFollowingFeedType::RANKED;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("CREATOR_ONLY", Qt::CaseInsensitive) == 0) {
        m_value = eOAIUserFollowingFeedType::CREATOR_ONLY;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("RANKED_CREATOR_ONLY", Qt::CaseInsensitive) == 0) {
        m_value = eOAIUserFollowingFeedType::RANKED_CREATOR_ONLY;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIUserFollowingFeedType::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIUserFollowingFeedType::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIUserFollowingFeedType::ALL:
            val = "ALL";
            break;
        case eOAIUserFollowingFeedType::RANKED:
            val = "RANKED";
            break;
        case eOAIUserFollowingFeedType::CREATOR_ONLY:
            val = "CREATOR_ONLY";
            break;
        case eOAIUserFollowingFeedType::RANKED_CREATOR_ONLY:
            val = "RANKED_CREATOR_ONLY";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIUserFollowingFeedType::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIUserFollowingFeedType::eOAIUserFollowingFeedType OAIUserFollowingFeedType::getValue() const {
    return m_value;
}

void OAIUserFollowingFeedType::setValue(const OAIUserFollowingFeedType::eOAIUserFollowingFeedType& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIUserFollowingFeedType::isSet() const {
    
    return m_value_isSet;
}

bool OAIUserFollowingFeedType::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI