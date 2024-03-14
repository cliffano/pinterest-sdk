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

#include "OAISingleInterestTargetingOptionResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAISingleInterestTargetingOptionResponse::OAISingleInterestTargetingOptionResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAISingleInterestTargetingOptionResponse::OAISingleInterestTargetingOptionResponse() {
    this->initializeModel();
}

OAISingleInterestTargetingOptionResponse::~OAISingleInterestTargetingOptionResponse() {}

void OAISingleInterestTargetingOptionResponse::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_child_interests_isSet = false;
    m_child_interests_isValid = false;

    m_level_isSet = false;
    m_level_isValid = false;
}

void OAISingleInterestTargetingOptionResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAISingleInterestTargetingOptionResponse::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::OpenAPI::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_name_isValid = ::OpenAPI::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_child_interests_isValid = ::OpenAPI::fromJsonValue(m_child_interests, json[QString("child_interests")]);
    m_child_interests_isSet = !json[QString("child_interests")].isNull() && m_child_interests_isValid;

    m_level_isValid = ::OpenAPI::fromJsonValue(m_level, json[QString("level")]);
    m_level_isSet = !json[QString("level")].isNull() && m_level_isValid;
}

QString OAISingleInterestTargetingOptionResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAISingleInterestTargetingOptionResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(m_id));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(m_name));
    }
    if (m_child_interests.size() > 0) {
        obj.insert(QString("child_interests"), ::OpenAPI::toJsonValue(m_child_interests));
    }
    if (m_level_isSet) {
        obj.insert(QString("level"), ::OpenAPI::toJsonValue(m_level));
    }
    return obj;
}

QString OAISingleInterestTargetingOptionResponse::getId() const {
    return m_id;
}
void OAISingleInterestTargetingOptionResponse::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAISingleInterestTargetingOptionResponse::is_id_Set() const{
    return m_id_isSet;
}

bool OAISingleInterestTargetingOptionResponse::is_id_Valid() const{
    return m_id_isValid;
}

QString OAISingleInterestTargetingOptionResponse::getName() const {
    return m_name;
}
void OAISingleInterestTargetingOptionResponse::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool OAISingleInterestTargetingOptionResponse::is_name_Set() const{
    return m_name_isSet;
}

bool OAISingleInterestTargetingOptionResponse::is_name_Valid() const{
    return m_name_isValid;
}

QList<QString> OAISingleInterestTargetingOptionResponse::getChildInterests() const {
    return m_child_interests;
}
void OAISingleInterestTargetingOptionResponse::setChildInterests(const QList<QString> &child_interests) {
    m_child_interests = child_interests;
    m_child_interests_isSet = true;
}

bool OAISingleInterestTargetingOptionResponse::is_child_interests_Set() const{
    return m_child_interests_isSet;
}

bool OAISingleInterestTargetingOptionResponse::is_child_interests_Valid() const{
    return m_child_interests_isValid;
}

qint32 OAISingleInterestTargetingOptionResponse::getLevel() const {
    return m_level;
}
void OAISingleInterestTargetingOptionResponse::setLevel(const qint32 &level) {
    m_level = level;
    m_level_isSet = true;
}

bool OAISingleInterestTargetingOptionResponse::is_level_Set() const{
    return m_level_isSet;
}

bool OAISingleInterestTargetingOptionResponse::is_level_Valid() const{
    return m_level_isValid;
}

bool OAISingleInterestTargetingOptionResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_child_interests.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_level_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAISingleInterestTargetingOptionResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
