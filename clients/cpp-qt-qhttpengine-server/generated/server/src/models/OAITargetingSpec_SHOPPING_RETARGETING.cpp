/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAITargetingSpec_SHOPPING_RETARGETING.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAITargetingSpec_SHOPPING_RETARGETING::OAITargetingSpec_SHOPPING_RETARGETING(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAITargetingSpec_SHOPPING_RETARGETING::OAITargetingSpec_SHOPPING_RETARGETING() {
    this->initializeModel();
}

OAITargetingSpec_SHOPPING_RETARGETING::~OAITargetingSpec_SHOPPING_RETARGETING() {}

void OAITargetingSpec_SHOPPING_RETARGETING::initializeModel() {

    m_lookback_window_isSet = false;
    m_lookback_window_isValid = false;

    m_tag_types_isSet = false;
    m_tag_types_isValid = false;

    m_exclusion_window_isSet = false;
    m_exclusion_window_isValid = false;
}

void OAITargetingSpec_SHOPPING_RETARGETING::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAITargetingSpec_SHOPPING_RETARGETING::fromJsonObject(QJsonObject json) {

    m_lookback_window_isValid = ::OpenAPI::fromJsonValue(lookback_window, json[QString("lookback_window")]);
    m_lookback_window_isSet = !json[QString("lookback_window")].isNull() && m_lookback_window_isValid;

    m_tag_types_isValid = ::OpenAPI::fromJsonValue(tag_types, json[QString("tag_types")]);
    m_tag_types_isSet = !json[QString("tag_types")].isNull() && m_tag_types_isValid;

    m_exclusion_window_isValid = ::OpenAPI::fromJsonValue(exclusion_window, json[QString("exclusion_window")]);
    m_exclusion_window_isSet = !json[QString("exclusion_window")].isNull() && m_exclusion_window_isValid;
}

QString OAITargetingSpec_SHOPPING_RETARGETING::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAITargetingSpec_SHOPPING_RETARGETING::asJsonObject() const {
    QJsonObject obj;
    if (m_lookback_window_isSet) {
        obj.insert(QString("lookback_window"), ::OpenAPI::toJsonValue(lookback_window));
    }
    if (tag_types.size() > 0) {
        obj.insert(QString("tag_types"), ::OpenAPI::toJsonValue(tag_types));
    }
    if (m_exclusion_window_isSet) {
        obj.insert(QString("exclusion_window"), ::OpenAPI::toJsonValue(exclusion_window));
    }
    return obj;
}

qint32 OAITargetingSpec_SHOPPING_RETARGETING::getLookbackWindow() const {
    return lookback_window;
}
void OAITargetingSpec_SHOPPING_RETARGETING::setLookbackWindow(const qint32 &lookback_window) {
    this->lookback_window = lookback_window;
    this->m_lookback_window_isSet = true;
}

bool OAITargetingSpec_SHOPPING_RETARGETING::is_lookback_window_Set() const{
    return m_lookback_window_isSet;
}

bool OAITargetingSpec_SHOPPING_RETARGETING::is_lookback_window_Valid() const{
    return m_lookback_window_isValid;
}

QList<qint32> OAITargetingSpec_SHOPPING_RETARGETING::getTagTypes() const {
    return tag_types;
}
void OAITargetingSpec_SHOPPING_RETARGETING::setTagTypes(const QList<qint32> &tag_types) {
    this->tag_types = tag_types;
    this->m_tag_types_isSet = true;
}

bool OAITargetingSpec_SHOPPING_RETARGETING::is_tag_types_Set() const{
    return m_tag_types_isSet;
}

bool OAITargetingSpec_SHOPPING_RETARGETING::is_tag_types_Valid() const{
    return m_tag_types_isValid;
}

qint32 OAITargetingSpec_SHOPPING_RETARGETING::getExclusionWindow() const {
    return exclusion_window;
}
void OAITargetingSpec_SHOPPING_RETARGETING::setExclusionWindow(const qint32 &exclusion_window) {
    this->exclusion_window = exclusion_window;
    this->m_exclusion_window_isSet = true;
}

bool OAITargetingSpec_SHOPPING_RETARGETING::is_exclusion_window_Set() const{
    return m_exclusion_window_isSet;
}

bool OAITargetingSpec_SHOPPING_RETARGETING::is_exclusion_window_Valid() const{
    return m_exclusion_window_isValid;
}

bool OAITargetingSpec_SHOPPING_RETARGETING::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_lookback_window_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (tag_types.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_exclusion_window_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAITargetingSpec_SHOPPING_RETARGETING::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
