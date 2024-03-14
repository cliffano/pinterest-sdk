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

#include "OAITargetingTypeFilter.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAITargetingTypeFilter::OAITargetingTypeFilter(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAITargetingTypeFilter::OAITargetingTypeFilter() {
    this->initializeModel();
}

OAITargetingTypeFilter::~OAITargetingTypeFilter() {}

void OAITargetingTypeFilter::initializeModel() {

    m_targeting_types_isSet = false;
    m_targeting_types_isValid = false;
}

void OAITargetingTypeFilter::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAITargetingTypeFilter::fromJsonObject(QJsonObject json) {

    m_targeting_types_isValid = ::OpenAPI::fromJsonValue(targeting_types, json[QString("targeting_types")]);
    m_targeting_types_isSet = !json[QString("targeting_types")].isNull() && m_targeting_types_isValid;
}

QString OAITargetingTypeFilter::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAITargetingTypeFilter::asJsonObject() const {
    QJsonObject obj;
    if (targeting_types.size() > 0) {
        obj.insert(QString("targeting_types"), ::OpenAPI::toJsonValue(targeting_types));
    }
    return obj;
}

QList<OAIAdsAnalyticsTargetingType> OAITargetingTypeFilter::getTargetingTypes() const {
    return targeting_types;
}
void OAITargetingTypeFilter::setTargetingTypes(const QList<OAIAdsAnalyticsTargetingType> &targeting_types) {
    this->targeting_types = targeting_types;
    this->m_targeting_types_isSet = true;
}

bool OAITargetingTypeFilter::is_targeting_types_Set() const{
    return m_targeting_types_isSet;
}

bool OAITargetingTypeFilter::is_targeting_types_Valid() const{
    return m_targeting_types_isValid;
}

bool OAITargetingTypeFilter::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (targeting_types.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAITargetingTypeFilter::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI