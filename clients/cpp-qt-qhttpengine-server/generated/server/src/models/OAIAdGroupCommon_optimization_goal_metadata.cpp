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

#include "OAIAdGroupCommon_optimization_goal_metadata.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIAdGroupCommon_optimization_goal_metadata::OAIAdGroupCommon_optimization_goal_metadata(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIAdGroupCommon_optimization_goal_metadata::OAIAdGroupCommon_optimization_goal_metadata() {
    this->initializeModel();
}

OAIAdGroupCommon_optimization_goal_metadata::~OAIAdGroupCommon_optimization_goal_metadata() {}

void OAIAdGroupCommon_optimization_goal_metadata::initializeModel() {

    m_conversion_tag_v3_goal_metadata_isSet = false;
    m_conversion_tag_v3_goal_metadata_isValid = false;

    m_frequency_goal_metadata_isSet = false;
    m_frequency_goal_metadata_isValid = false;

    m_scrollup_goal_metadata_isSet = false;
    m_scrollup_goal_metadata_isValid = false;
}

void OAIAdGroupCommon_optimization_goal_metadata::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIAdGroupCommon_optimization_goal_metadata::fromJsonObject(QJsonObject json) {

    m_conversion_tag_v3_goal_metadata_isValid = ::OpenAPI::fromJsonValue(conversion_tag_v3_goal_metadata, json[QString("conversion_tag_v3_goal_metadata")]);
    m_conversion_tag_v3_goal_metadata_isSet = !json[QString("conversion_tag_v3_goal_metadata")].isNull() && m_conversion_tag_v3_goal_metadata_isValid;

    m_frequency_goal_metadata_isValid = ::OpenAPI::fromJsonValue(frequency_goal_metadata, json[QString("frequency_goal_metadata")]);
    m_frequency_goal_metadata_isSet = !json[QString("frequency_goal_metadata")].isNull() && m_frequency_goal_metadata_isValid;

    m_scrollup_goal_metadata_isValid = ::OpenAPI::fromJsonValue(scrollup_goal_metadata, json[QString("scrollup_goal_metadata")]);
    m_scrollup_goal_metadata_isSet = !json[QString("scrollup_goal_metadata")].isNull() && m_scrollup_goal_metadata_isValid;
}

QString OAIAdGroupCommon_optimization_goal_metadata::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIAdGroupCommon_optimization_goal_metadata::asJsonObject() const {
    QJsonObject obj;
    if (conversion_tag_v3_goal_metadata.isSet()) {
        obj.insert(QString("conversion_tag_v3_goal_metadata"), ::OpenAPI::toJsonValue(conversion_tag_v3_goal_metadata));
    }
    if (frequency_goal_metadata.isSet()) {
        obj.insert(QString("frequency_goal_metadata"), ::OpenAPI::toJsonValue(frequency_goal_metadata));
    }
    if (scrollup_goal_metadata.isSet()) {
        obj.insert(QString("scrollup_goal_metadata"), ::OpenAPI::toJsonValue(scrollup_goal_metadata));
    }
    return obj;
}

OAIOptimizationGoalMetadata_conversion_tag_v3_goal_metadata OAIAdGroupCommon_optimization_goal_metadata::getConversionTagV3GoalMetadata() const {
    return conversion_tag_v3_goal_metadata;
}
void OAIAdGroupCommon_optimization_goal_metadata::setConversionTagV3GoalMetadata(const OAIOptimizationGoalMetadata_conversion_tag_v3_goal_metadata &conversion_tag_v3_goal_metadata) {
    this->conversion_tag_v3_goal_metadata = conversion_tag_v3_goal_metadata;
    this->m_conversion_tag_v3_goal_metadata_isSet = true;
}

bool OAIAdGroupCommon_optimization_goal_metadata::is_conversion_tag_v3_goal_metadata_Set() const{
    return m_conversion_tag_v3_goal_metadata_isSet;
}

bool OAIAdGroupCommon_optimization_goal_metadata::is_conversion_tag_v3_goal_metadata_Valid() const{
    return m_conversion_tag_v3_goal_metadata_isValid;
}

OAIOptimizationGoalMetadata_frequency_goal_metadata OAIAdGroupCommon_optimization_goal_metadata::getFrequencyGoalMetadata() const {
    return frequency_goal_metadata;
}
void OAIAdGroupCommon_optimization_goal_metadata::setFrequencyGoalMetadata(const OAIOptimizationGoalMetadata_frequency_goal_metadata &frequency_goal_metadata) {
    this->frequency_goal_metadata = frequency_goal_metadata;
    this->m_frequency_goal_metadata_isSet = true;
}

bool OAIAdGroupCommon_optimization_goal_metadata::is_frequency_goal_metadata_Set() const{
    return m_frequency_goal_metadata_isSet;
}

bool OAIAdGroupCommon_optimization_goal_metadata::is_frequency_goal_metadata_Valid() const{
    return m_frequency_goal_metadata_isValid;
}

OAIOptimizationGoalMetadata_scrollup_goal_metadata OAIAdGroupCommon_optimization_goal_metadata::getScrollupGoalMetadata() const {
    return scrollup_goal_metadata;
}
void OAIAdGroupCommon_optimization_goal_metadata::setScrollupGoalMetadata(const OAIOptimizationGoalMetadata_scrollup_goal_metadata &scrollup_goal_metadata) {
    this->scrollup_goal_metadata = scrollup_goal_metadata;
    this->m_scrollup_goal_metadata_isSet = true;
}

bool OAIAdGroupCommon_optimization_goal_metadata::is_scrollup_goal_metadata_Set() const{
    return m_scrollup_goal_metadata_isSet;
}

bool OAIAdGroupCommon_optimization_goal_metadata::is_scrollup_goal_metadata_Valid() const{
    return m_scrollup_goal_metadata_isValid;
}

bool OAIAdGroupCommon_optimization_goal_metadata::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (conversion_tag_v3_goal_metadata.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (frequency_goal_metadata.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (scrollup_goal_metadata.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIAdGroupCommon_optimization_goal_metadata::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
